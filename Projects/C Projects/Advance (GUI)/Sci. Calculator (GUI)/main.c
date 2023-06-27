/*-------------------------------------------------------------------------

          GUI Scientific Calculator 

Programmer     : Nemonet
                 The Young Programmer 💻


Software Details
====================
Developed in   : C
Compiler used  : Turbo C++ 3.0
Date           : 20/05/2022 -- 31/05/2022

Licence   : MIT Licence
(Please give the credit of programming to author.)


NOTE:


---------------------------------------------------------------------------*/






//Please change BGI directory accouding to your TC Directory
//By default it is "E:\tc\bgi"

#include <stdio.h>
#include <conio.h>
#include <process.h>
#include <dos.h>
#include <stdlib.h>
#include <iostream.h>
#include <graphics.h>
#include <math.h>
#include <string.h>

float * mem;
int X = 0, Y = 0;
int row = 17, col = 5;
char dummy;
char flag = 'd', flagp = '0';
char bflag = 'u', bflagp = 'u';
int mflag = 0;
char ch, ch1, ch2;
int sflag = 0;
int midx, midy;
#define UNCLICKED 0
#define CLICKED 1
#define PI 3.14159

char str1[] = {
  "Nemo TYP Roll# CIS 34"
};
char str2[] = {
  "Nemonet TYP Roll# CIS 50"
};

void typeit(int x, int y, int spacing, char string[]) {
  char temp[2];
  for (int i = 0; i < strlen(string); i++) {
    delay(100);
    temp[0] = string[i];
    temp[1] = '\0';
    outtextxy(x + (i + 1) * spacing, y, temp);
  } //endfor

}
void front() {
  int x, y, h;
  for (x = 0; x <= 100; x++) {
    settextjustify(CENTER_TEXT, CENTER_TEXT);
    setcolor(1);
    settextstyle(1, 0, 4);
    setusercharsize(x, 6, x, 3);
    setcolor(14);
    moveto(310, 135);
    outtext("..");
    setcolor(6);
    moveto(310, 130);
    outtext("I I");
    if (x < 50)
      delay(30);
    else
      delay(20);
  }
  for (y = 0; y <= 100; y++) {
    setcolor(0);
    settextstyle(1, 0, 4);
    setusercharsize(y, 6, y, 3);
    moveto(310, 135);
    outtext("..");
    moveto(310, 130);
    outtext("I I");
    if (y > 20) {
      settextstyle(7, 0, 3);
      setusercharsize(y - 20, 35, y - 20, 30);
      setcolor(9);
      outtext("CALCULATOR");
      setcolor(2);
      outtext("___________");
      delay(15);
      if (y < 100) {
        settextstyle(7, 0, 3);
        setusercharsize(y - 20, 35, y - 20, 30);
        setcolor(0);
        outtext("CALCULATOR");
      }
    }
  }
  //delay(1000);
  settextstyle(3, 0, 2);
  delay(50);
  outtextxy(midx - 200, midy, "Group Members:-");
  //x=10,y=10;
  setcolor(6);
  settextstyle(4, 0, 4);
  typeit(midx - 200, midy + 50, 15, str1);
  typeit(midx - 200, midy + 75, 15, str2);
  getch();
  //closegraph();

}

char input();
double add(double, double, char);
double angle_conv(double);
void basecng(double, double);

//***********************************************************
// *
// THIS FUNCTION DRAWS THE BUTTONS OF THE CALCULATOR *
// *
//***********************************************************

void button_3d(int x1, int y1, int x2, int y2, int check, char * text, int color) {
  int up, low;
  setfillstyle(1, 7);
  bar(x1, y1, x2, y2);
  if (check == 0) //Unclicked
    up = 15, low = 8;
  else
    up = 8, low = 15; //Clicked
  setcolor(low);
  line(x2, y1, x2, y2);
  line(x2 - 1, y1, x2 - 1, y2);
  line(x1, y2, x2, y2);
  line(x1 + 1, y2 - 1, x2, y2 - 1);

  setcolor(up);
  line(x1, y1, x2, y1);
  line(x1 + 1, y1 + 1, x2 - 1, y1 + 1);
  line(x1, y1, x1, y2);
  line(x1 + 1, y1 + 1, x1 + 1, y2 - 1);
  setcolor(color);

  settextjustify(CENTER_TEXT, CENTER_TEXT);
  outtextxy(x1 + (x2 - x1) / 2, (y1 + (y2 - y1) / 2) - 2, text);

}
//********************************************************************
// *
// This function makes the opening screen *
// *
//********************************************************************

void frontpage(void) {
  int mx, my;

  mx = (getmaxx() / 2);
  my = (getmaxy() / 2);

  //SET baqckground color
  setfillstyle(9, 1);
  bar(0, 0, getmaxx(), getmaxy());

  //DRAW a bar, and make it look like a 3d bar
  setfillstyle(1, 7);
  bar(50, 20, 600, 400);

  //DRAW lines for the top and left side
  setcolor(15);
  line(50, 20, 600, 20);
  line(51, 21, 599, 21);
  line(50, 20, 50, 400);
  line(51, 21, 51, 399);

  //DRAW lines for the bottom and right side
  setcolor(8);
  line(600, 20, 600, 400);
  line(599, 21, 599, 400);
  line(50, 400, 600, 400);
  line(51, 399, 600, 399);

  //DRAW two 3D bars for the left and right side

  setfillstyle(9, 8);
  bar(70, 40, 100, 380);
  //getch();
  bar(545, 40, 575, 380);
  setcolor(8);
  rectangle(70, 40, 100, 380);
  rectangle(545, 40, 575, 380);
  setcolor(15);
  line(100, 40, 100, 380);
  line(70, 380, 100, 380);
  line(575, 40, 575, 380);
  line(545, 380, 575, 380);

  //DRAW two 3D divider lines on both sides
  setcolor(8);
  line(110, 40, 110, 380);
  line(535, 40, 535, 380);
  setcolor(15);
  line(111, 40, 111, 380);
  line(536, 40, 536, 380);

  //PRINT 3D text CALENDAR 
  settextstyle(1, 0, 4);
  settextjustify(1, 1);
  setcolor(15);
  outtextxy(mx + 2, my - 46, "MY CALCULATOR");
  setcolor(7);
  outtextxy(mx + 1, my - 45, "MY CALCULATOR");
  setcolor(8);
  outtextxy(mx + 2, my - 44, "MY CALCULATOR");

  //PRINT 3D text 
  setcolor(15);
  outtextxy(mx, my + 10, "2022");
  setcolor(7);
  outtextxy(mx + 1, my + 11, "2022");
  setcolor(8);
  outtextxy(mx + 2, my + 12, "2022");

  //PRINT copyright notice
  settextstyle(2, 0, 5);
  setcolor(1);
  outtextxy(mx + 1, my + 85, "@ 2022 by TYP 💻");

  getch(); //PAUSE for a while
}

//********************************************************************
// *
// This function makes the claculating screen *
// *
//********************************************************************

void screen(int x1, int y1, int x2, int y2) {
  setlinestyle(0, 0, 1);
  setfillstyle(SOLID_FILL, 8);
  bar(x1, y1, x2, y2);
  setfillstyle(SOLID_FILL, BLACK);
  bar(x1 + 1, y1 + 1, x2 - 1, y2 - 1);

  settextjustify(CENTER_TEXT, CENTER_TEXT);
  setcolor(15);
  line(x1 + 1, y1 + 1, x1 + 1, y2 - 1);
  line(x1 + 1, y1 + 1, x2 - 1, y1 + 1);
  line(x1 + 2, y1 + 2, x1 + 2, y2 - 2);
  line(x1 + 2, y1 + 2, x2 - 2, y1 + 2);
  setcolor(8);
  line(x1 + 1, y2 - 1, x2 - 1, y2 - 1);
  line(x2 - 1, y1 + 1, x2 - 1, y2 - 1);
  line(x1 + 2, y2 - 2, x2 - 2, y2 - 2);
  line(x2 - 2, y1 + 2, x2 - 2, y2 - 2);

}

//***********************************************************************
// *
// Mouse Related Functions *
// *
//***********************************************************************

void init_mouse() {
  union REGS iregs, oregs;

  iregs.x.ax = 0;
  int86(0x33, & iregs, & oregs);

  if (oregs.x.ax == 0) {
    cleardevice();
    printf("mouse not installed\n");
    getch();
    exit(1);
  }
  iregs.x.ax = 1;
  int86(0x33, & iregs, & oregs);
}
//*************************************************************

void mouse() {
  int button, x1, y1;
  union REGS iregs, oregs;

  iregs.x.ax = 3;
  int86(0x33, & iregs, & oregs);

  button = oregs.x.bx & 3;
  x1 = oregs.x.cx;
  y1 = oregs.x.dx;

  if (oregs.x.bx & 1) {
    X = x1;
    Y = y1;
  }

  if (button == 3)
    exit(0);
}

//*************************************************************

void hide_mouse() {
  union REGS ioRegs;
  ioRegs.x.ax = 2;
  int86(0x33, & ioRegs, & ioRegs);
}

//*************************************************************
void show_mouse() {
  union REGS ioRegs;
  ioRegs.x.ax = 1;
  int86(0x33, & ioRegs, & ioRegs);
}

/*************************************************************/void remove_mouse() {
  union REGS ioRegs;
  ioRegs.x.ax = 0;
  int86(0x33, & ioRegs, & ioRegs);
}

//************************************************************************
// *
// THIS FUNCTION DRAWS THE CALCULATOR ON THE SCREEN *
// *
//************************************************************************
void structure() {
  init_mouse();
  setbkcolor(0);
  cleardevice();
  hide_mouse();
  //**********************************************************
  // Buttons Making

  front();
  frontpage();
  settextstyle(2, 0, 4);
  button_3d(50, 20, 600, 400, UNCLICKED, "", 1); // main box
  screen(100, 50, 545, 120); // screen

  setfillstyle(1, 8);
  bar(52, 22, 598, 42);
  button_3d(575, 23, 595, 40, UNCLICKED, "x", 0);
  setcolor(0);
  outtextxy(120, 30, "CALCULATOR v1.0");
  button_3d(108, 140, 208, 160, UNCLICKED, "DEC", 15); // box of decimal
  button_3d(218, 140, 318, 160, UNCLICKED, "OCT", 0); // box of octal
  button_3d(328, 140, 428, 160, UNCLICKED, "HEX", 0); // box of hexal
  button_3d(438, 140, 538, 160, UNCLICKED, "BIN", 0); // box of binary

  button_3d(350, 205, 380, 225, UNCLICKED, "7", 0); // Box Of 7
  button_3d(390, 205, 420, 225, UNCLICKED, "8", 0); // Box Of 8
  button_3d(430, 205, 460, 225, UNCLICKED, "9", 0); // Box Of 9

  button_3d(350, 230, 380, 250, UNCLICKED, "4", 0); // Box Of 4
  button_3d(390, 230, 420, 250, UNCLICKED, "5", 0); // Box Of 5
  button_3d(430, 230, 460, 250, UNCLICKED, "6", 0); // Box Of 6

  button_3d(480, 230, 510, 250, UNCLICKED, "*", 0); // Box Of *
  button_3d(515, 230, 545, 250, UNCLICKED, "/", 0); // Box Of \
  button_3d(480, 205, 510, 225, UNCLICKED, "AC", 4); //Box Of AllClear (AC)
  button_3d(515, 205, 545, 225, UNCLICKED, "CE", 4); //Box Of Clear (C)

  button_3d(350, 255, 380, 275, UNCLICKED, "1", 0); // Box Of 1
  button_3d(390, 255, 420, 275, UNCLICKED, "2", 0); // Box Of 2
  button_3d(430, 255, 460, 275, UNCLICKED, "3", 0); // Box Of 3

  button_3d(350, 280, 380, 300, UNCLICKED, "0", 0); // Box Of Zero (0)
  button_3d(390, 280, 420, 300, UNCLICKED, ".", 0); // Box Of Period (.)
  button_3d(430, 280, 460, 300, UNCLICKED, "pi", 0); // Box Of PhiFunction

  button_3d(480, 255, 510, 275, UNCLICKED, "-", 0); // Box Of -
  button_3d(515, 255, 545, 275, UNCLICKED, "+", 0); // Box Of +
  button_3d(350, 305, 460, 325, UNCLICKED, "=", 0); // Box Of Equality
  button_3d(480, 305, 545, 325, UNCLICKED, "shift", BLUE); // Box Of shift

  button_3d(480, 280, 510, 300, UNCLICKED, "sqrt", 0); //Box of x^n
  button_3d(515, 280, 545, 300, UNCLICKED, "inv", 0); //box of 1/x

  button_3d(100, 205, 150, 230, UNCLICKED, "Sin", 0); // Box OfSin Function
  button_3d(160, 205, 210, 230, UNCLICKED, "Cos", 0); // Box Of CosFunction
  button_3d(220, 205, 270, 230, UNCLICKED, "Tan", 0); // Box Of Tan Function

  button_3d(100, 250, 150, 275, UNCLICKED, "sin^-1", 0); // Box Of sin^-1
  button_3d(160, 250, 210, 275, UNCLICKED, "cos^-1", 0); // Box Of cos^-1
  button_3d(220, 250, 270, 275, UNCLICKED, "tan^-1", 0); // Box Of tan^-1

  button_3d(100, 300, 150, 325, UNCLICKED, "ln", 0); // Box Of ln
  settextjustify(CENTER_TEXT, CENTER_TEXT);
  setcolor(BLUE);
  settextstyle(2, 0, 4);
  outtextxy(125, 290, "e");
  outtextxy(185, 290, "10^x");
  outtextxy(245, 290, "x^3");
  button_3d(160, 300, 210, 325, UNCLICKED, "log", 0); // Box Of log
  button_3d(220, 300, 270, 325, UNCLICKED, "x^2", 0); // Box Of x^2

  button_3d(100, 350, 150, 370, UNCLICKED, "deg", 15);
  button_3d(160, 350, 210, 370, UNCLICKED, "rad", 0);
  button_3d(220, 350, 270, 370, UNCLICKED, "gra", 0);
  button_3d(480, 350, 545, 370, UNCLICKED, "Off", 4);

  button_3d(350, 350, 380, 370, UNCLICKED, "M+", 0);
  button_3d(390, 350, 420, 370, UNCLICKED, "M-", 0);
  button_3d(430, 350, 460, 370, UNCLICKED, "MR", 0);

}
//********************************************************
// *
// Main starts *
// *
//********************************************************
void main() {
  clrscr();

  double y = 0, z = 0, pnt, pnt1 = 0, x = 0, r = 0;

  int gdriver = DETECT, gmode, errorcode;
  int i;
  initgraph( & gdriver, & gmode, "C:\\TURBOC3\\BGI");
  midx = getmaxx() / 2;
  midy = getmaxy() / 2;
  structure();
  gotoxy(row, col);
  printf("\t\t\t\t\t");
  gotoxy(row, col);
  printf("0");
  mem = (float * ) malloc(y * sizeof(float));
  while (ch != 27 && ch1 != 27) //While Escape is not pressed
  { //and if base is not 10
    pnt1 = 0; //no doubleing point entered Yet
    ch2 = '0';
    // for(int a=0;ch!=27;a++)//a indicates whether a no. has been entered or not
    while (ch2 != 27)
    //a=0 means that no no. has been entered yet
    {
      if (bflagp != 'u') {
        //gotoxy(row,col);
        dummy = input();
 if (dummy != 'o') {
          gotoxy(row, col);
          printf("The trail version does not support this feature");
          input();
          gotoxy(row, col);
          printf("\t\t\t\t\t\t");
          // ch='0';
        }
        y = 0;
        z = 0;
        ch = '0';
        gotoxy(row, col);
        printf("\t\t\t\t\t\t");
        gotoxy(row, col);
        printf("0");

        // bflagp='u';
      }

      ch = input();
      if (ch == '>' || ch == '<' || ch == '?') {
        sflag = 0;
        if (ch == '>') //M+
          *
          mem += y;
        if (ch == '<') //M-
          *
          mem -= y;
        if (ch == '?') //MR
        {
          y = * mem;
          gotoxy(row, col);
          printf("\t\t\t\t\t\t");
          gotoxy(row, col);
          printf("%g", y);
        }
        if ( * mem == 0)
          mflag = 0;
        if ( * mem != 0)
          mflag = 1;
      }
      if (mflag == 0) {
        gotoxy(row, 7);

        printf(" ");

      }
      if (mflag != 0) {
        gotoxy(row, 7);

        printf("M");
      }
      gotoxy(row, col);

      if (ch == 'a') {
        sflag = 0;
        y = 0;
        gotoxy(row, col);
        printf("\t\t\t\t\t");
        gotoxy(row, col);
 printf("0");
      }

      if (ch == 'o')
      //for clearing the screen of the CALCULATOR
      {
        sflag = 0;
        y = 0;
        z = 0;
        gotoxy(row, col);
        printf("\t\t\t\t ");
        gotoxy(row, col);
        printf("0");
        gotoxy(row, col);
        break;
      }

      if (ch == 'q') {
        sflag = 0;
        y = sqrt(y);
 gotoxy(row, col);
        printf("\t\t\t\t ");
        gotoxy(row, col);
        printf("%g", y);
      }
      if (ch == 'm') {
        sflag = 0;
        y = 1 / y;
        gotoxy(row, col);
        printf("\t\t\t\t ");
        gotoxy(row, col);
        printf("%g", y);
      }
      if (ch == '+' || ch == '-' || ch == '/' || ch == '\\' || ch == '=' || ch == '*') {
        sflag = 0;
        break;
      }
      if (ch == '.') //case for a decimal point
      {
        sflag = 0;
 if (pnt1 == 0) //ie no decimal has been entered yet
        {
          gotoxy(row, col);
          printf("\t\t\t\t "); // double
          gotoxy(row, col);
          printf("%g.", y);
          pnt1 = .1; //ie one decimal point no has been entered
          continue; //go back to the begining and get the next number
        } else //decimal point has alredy been entered and thus no change in the screen
        {
          sflag = 0;
          continue; //go back to the begining
        }
      } //out of the '.' condition

      if (pnt1 != 0) //ie we have a doubleing point
      {
        sflag = 0;
        if (ch <= '9' && ch >= '0') //input integer
        {
   // printf("%c",ch);
          x = (double) ch; //type cast the character into double to perforn further operations
          x -= 48; //since character digit indoubleing -48 gives the corresponding ASCII
          x = x * pnt1; //make it a decimal
          y = x + y; //add it in result
          pnt1 *= .1; //shift to the second doubleing point
          gotoxy(row, col);
          printf("%g", y);
          gotoxy(row, col);
          continue; //back to the top
        }
      }
      //if no decimal point number then proceed

      if (ch <= '9' && ch >= '0') {
        sflag = 0;
        x = (double) ch; //typecast to double
        x -= 48; //get corresponding ASCII
        y = (y * 10) + x; //add to right of result
        gotoxy(row, col); //go back to start of the calc screen
 printf("\t\t\t\t "); //clear the screen
        gotoxy(row, col);
        printf("%g", y); //print the number
      }
      if (ch == 'u' || ch == 'v' || ch == 'w' || ch == 'x') {
        sflag = 0;
        if (bflagp == bflag && bflag == 'u')
          continue;
        else
          basecng(y, pnt1);
      }
      if (ch == 'd' || ch == 'r' || ch == 'g') {
        sflag = 0;
        y = angle_conv(y);
        gotoxy(row, col);
        printf("\t\t\t\t ");
        gotoxy(row, col);
        printf("%g", y);
        // gotoxy(row,col);
        // printf("%g",y);
 // continue;
      }
      if (ch == 's' || ch == 'c' || ch == 't' || ch == 'i' || ch == 'j' || ch == 'k' || ch == 'n' || ch == 'l' || ch == 'p' || ch == 'h')
      //ie the user opted for a function
      {
        if (ch == 's' || ch == 'c' || ch == 't') //sin /cos/tan
        {
          sflag = 0;
          if (flag != 'r') {
            flagp = flag;
            flag = 'r';
            y = angle_conv(y);
            flag = flagp;
          }
          // gotoxy(row,col);
          // printf("%g",y);getch();
          switch (ch) {

          case 's':
            y = sin(y);
     break;
          case 'c':
            y = cos(y);
            break;
          case 't':
            y = tan(y);
            break;
          }
        }
        if (ch == 'i' || ch == 'j' || ch == 'k') {
          sflag = 0;
          if (flag != 'r') {
            // flagp=flag;
            flagp = 'r';
            //y=angle_conv(y);
          }
          switch (ch) {
          case 'i':
            y = asin(y);
            break;
   case 'j':
            y = acos(y);
            break;
          case 'k':
            y = atan(y);
            break;
          }
          if (flag != 'r')
            y = angle_conv(y);
        } else if (ch == 'n') {
          if (sflag == 1) {
            y = exp(y);
            sflag = 0;
          } else
            y = log(y); //ln
        } else if (ch == 'l') {
          if (sflag == 1) {
            y = pow(10, y);
            sflag = 0;
          } else
     y = log10(y); //log
        } else if (ch == 'p') {
          if (sflag == 1) {
            y = pow(y, 3);
            sflag = 0;
          } else
            y = pow(y, 2); //square
        } else if (ch == 'h') {
          sflag = 0;
          y = PI; //pi
        }

        gotoxy(row, col);
        printf("\t\t\t\t "); //Clear the screen
        gotoxy(row, col);
        printf("%g", y);
      } //else condition

    } //out of second condition ie we now have the first no. or function or operater

    for (; ch != 27 && ch1 != '=' && ch != '=';) //ie the characters input are not ESCAPE or Equal to

    {
      pnt1 = 0;
      z = 0;
      if (ch == 'o' || ch1 == 'o') // For Clear The Screen
      {

        sflag = 0;
        y = 0;
        z = 0;
        gotoxy(row, col);
        printf("\t\t\t\t ");
        // gotoxy(col,row);
        gotoxy(row, col);
        printf("0");
        gotoxy(row, col);
        break;
      }
      for (; ch1 != 27;) {
 gotoxy(row, col);
        // printf("%g",z);
        // z=0;
        ch1 = input();

        if (ch1 == '>' || ch1 == '<' || ch1 == '?') {
          if (ch1 == '>') //M+
            *
            mem += z;
          if (ch1 == '<') //M-
            *
            mem -= z;
          if (ch1 == '?') //MR
          {
            z = * mem;
            gotoxy(row, col);
            printf("\t\t\t\t ");
            gotoxy(row, col);
            printf("%g", z);
          }
   if ( * mem == 0)
            mflag = 0;
          if ( * mem != 0)
            mflag = 1;
        }
        if (mflag == 0) {
          gotoxy(row, 7);
          printf(" ");
        }
        if (mflag != 0) {
          gotoxy(row, 7);
          printf("M");
        }
        gotoxy(row, col);

        if (ch1 == 'a') {
          z = 0;
          gotoxy(row, col);
          printf("\t\t\t\t ");
          gotoxy(row, col);
          printf("0");
        }

        if (ch == 'o' || ch1 == 'o') // For Clear The Screen
        {
          y = 0;
          z = 0;
          gotoxy(row, col);
          //cout<<" ";
          printf("\t\t\t\t ");
          gotoxy(row, col);
          printf("0");
          gotoxy(row, col);
          break;
        }
        if (ch1 == 'q') {
          z = sqrt(z);
          gotoxy(row, col);
          printf("\t\t\t\t ");
          gotoxy(row, col);
          printf("%g", z);
        }
        if (ch1 == 'm') {
          z = 1 / z;
          gotoxy(row, col);
          printf("\t\t\t\t ");
          gotoxy(row, col);
          printf("%g", z);
        }

        if (ch1 == '.') {
          if (pnt1 == 0) {
            gotoxy(row, col);
            printf("\t\t\t\t ");
            gotoxy(row, col);
            //cout<<z<<".";
            printf("%g.", z);
            pnt1 = .1;
            continue;
          } else {
            continue;
          }
        }
        if (pnt1 != 0) {
          if (ch1 <= '9' && ch1 >= '0') {
            // printf("%c",ch1);
            x = (double) ch1;
            x -= 48;
            x = x * pnt1;
            z = x + z;
            pnt1 = pnt1 * .1;
            gotoxy(row, col);
            printf("\t\t\t\t ");
            gotoxy(row, col);
            printf("%g", z);
            continue;
          }
        }

        if (ch1 == '+' || ch1 == '-' || ch1 == '*' || ch1 == '/' || ch1 == '=')
          break;
        if (ch1 >= '0' && ch1 <= '9') {
          x = (double) ch1;
          x = x - 48;
          gotoxy(row, col);
          printf("\t\t\t\t ");
          gotoxy(row, col);
          z = (z * 10) + x;
          printf("%g", z);
        }
        if (ch == 'u')
          if (ch == 'd' || ch == 'r' || ch == 'g') {
            z = angle_conv(z);
            gotoxy(row, col);
            printf("\t\t\t\t ");
            gotoxy(row, col);
            printf("%g", z);
            // continue;
          }
        if (ch1 == 's' || ch1 == 'c' || ch1 == 't' || ch1 == 'i' || ch1 == 'j' || ch1 == 'k' || ch1 == 'n' || ch1 == 'l' || ch1 == 'p' || ch1 == 'h')
        //ie the user opted for a function
        {
          if (ch1 == 's' || ch1 == 'c' || ch1 == 't') //sin
          {
            if (flag != 'r') {
              flagp = flag;
              flag = 'r';
              angle_conv(z);
              flag = flagp;
            }
            switch (ch1) {
            case 's':
              z = sin(z);
              break;
            case 'c':
              z = cos(z);
              break;
            case 't':
              z = tan(z);
              break;
            }
          }
          if (ch1 == 'i' || ch1 == 'j' || ch1 == 'k') {
            if (flag != 'r') {
              flagp = 'r';
            }
            switch (ch1) {
            case 'i':
              z = asin(z);
              break;
            case 'j':
              z = acos(z);
              break;
            case 'k':
              z = atan(z);
              break;
            }
            z = angle_conv(z);
          } else if (ch1 == 'l') {
            z = log10(z); //log
          } else if (ch1 == 'p') {
            z = pow(z, 2); //square
          } else if (ch1 == 'h') {
            z = PI; //pi
          }

          gotoxy(row, col);
          printf("\t\t\t\t ");
          gotoxy(row, col);
          printf("%g", z);
          gotoxy(row, col);
        }
      }

      if (ch1 == '+' || ch1 == '-' || ch1 == '=') {
        y = add(y, z, ch);
        if (ch2 != '0') {
          y = add(r, y, ch2);
          ch2 = '0';
        }
      } else {
        if (ch == '*' || ch == '/')
          y = add(y, z, ch);
        else {
          ch2 = ch;
          r = y;
          y = z;
        }
      }
      gotoxy(row, col);
      printf("\t\t\t\t ");
      gotoxy(row, col);
      printf("%g", y);
      ch = ch1;
      ch1 = '0';
      if (ch == '=' || ch1 == '=')
        break;
    }
    if (ch == 'o' || ch1 == 'o') // For Clear The Screen
    {
      y = 0;
      z = 0;
      gotoxy(row, col);
      printf("\t\t\t\t ");
      gotoxy(row, col);
      printf("0");
      gotoxy(row, col);
      continue;
    }
    gotoxy(row, col);
    printf("\t\t\t\t ");
    gotoxy(row, col);
    printf("%g", y);
    z = 0;
  }

  // getch();
  closegraph();
  remove_mouse();
  exit(0);

}

//************************************************************
// *
// This function gets the user's Input *
// *
//************************************************************

char input() {
  X = 0;
  Y = 0;
  char ch;
  show_mouse();
  if (bflag != 'u') {
    button_3d(108, 140, 208, 160, UNCLICKED, "DEC", 15);
    button_3d(218, 140, 318, 160, UNCLICKED, "OCT", 0);
    button_3d(328, 140, 428, 160, UNCLICKED, "HEX", 0);
    button_3d(438, 140, 538, 160, UNCLICKED, "BIN", 0);
    bflag = 'u';
  }
  do {
    mouse();
    if (X >= 350 && X <= 380 && Y >= 205 && Y <= 225) // Condition For 7
    {
      hide_mouse();
      button_3d(350, 205, 380, 225, CLICKED, "7", 0);
      show_mouse();
      delay(250);
      hide_mouse();
      button_3d(350, 205, 380, 225, UNCLICKED, "7", 0);
      show_mouse();
      ch = '7';
      return ch;
    }

    //**********************************************

    if (X >= 390 && X <= 420 && Y >= 205 && Y <= 225) // Condition For 8
    {

      hide_mouse();
      button_3d(390, 205, 420, 225, CLICKED, "8", 0);
      show_mouse();
      delay(250);
      hide_mouse();
      button_3d(390, 205, 420, 225, UNCLICKED, "8", 0);
      show_mouse();
      ch = '8';
      return ch;
    }

    //*****************************************

    if (X >= 430 && X <= 460 && Y >= 205 && Y <= 225) // Condition For 9
    {
      hide_mouse();
      button_3d(430, 205, 460, 225, CLICKED, "9", 0);
      show_mouse();
      delay(250);
      hide_mouse();
      button_3d(430, 205, 460, 225, UNCLICKED, "9", 0);
      show_mouse();
      ch = '9';
      return ch;
    }

    //***********************************

    if (X >= 350 && X <= 380 && Y >= 230 && Y <= 250) // Condition For 4
    {
      hide_mouse();
      button_3d(350, 230, 380, 250, CLICKED, "4", 0);
      show_mouse();
      delay(250);
      hide_mouse();
      button_3d(350, 230, 380, 250, UNCLICKED, "4", 0);
      show_mouse();
      ch = '4';
      return ch;
    }

    //***********************************

    if (X >= 390 && X <= 420 && Y >= 230 && Y <= 250) // Condition For 5
    {
      hide_mouse();
      button_3d(390, 230, 420, 250, CLICKED, "5", 0);
      show_mouse();
      delay(250);
      hide_mouse();
      button_3d(390, 230, 420, 250, UNCLICKED, "5", 0);
      show_mouse();
      ch = '5';
      return ch;
    }

    //***********************************

    if (X >= 430 && X <= 460 && Y >= 230 && Y <= 250) // Condition For 6
    {
      hide_mouse();
      button_3d(430, 230, 460, 250, CLICKED, "6", 0);
      show_mouse();
      delay(250);
      hide_mouse();
      button_3d(430, 230, 460, 250, UNCLICKED, "6", 0);
      show_mouse();
      ch = '6';
      return ch;
    }

    //***********************************

    if (X >= 480 && X <= 510 && Y >= 230 && Y <= 250) // Condition For *
    {
      hide_mouse();
      button_3d(480, 230, 510, 250, CLICKED, "*", 0);
      show_mouse();
      delay(250);
      hide_mouse();
      button_3d(480, 230, 510, 250, UNCLICKED, "*", 0);
      show_mouse();
      ch = '*';
      return ch;
    }
    //***********************************

    if (X >= 515 && X <= 545 && Y >= 230 && Y <= 250) // Condition For /
    {
      hide_mouse();
      button_3d(515, 230, 545, 250, CLICKED, "/", 0);
      show_mouse();
      delay(250);
      hide_mouse();
      button_3d(515, 230, 545, 250, UNCLICKED, "/", 0);
      show_mouse();
      ch = '/';
      return ch;
    }

    //***********************************
    int a, b;
    if (X >= 350 && X <= 380 && Y >= 255 && Y <= 275) // Condition For 1
    {
      hide_mouse();
      button_3d(350, 255, 380, 275, CLICKED, "1", 0);
      show_mouse();
      delay(250);
      hide_mouse();
      button_3d(350, 255, 380, 275, UNCLICKED, "1", 0);
      show_mouse();
      ch = '1';
      return ch;
    }

    // *************************************

    if (X >= 390 && X <= 420 && Y >= 255 && Y <= 275) // Condition For 2
    {
      hide_mouse();
      button_3d(390, 255, 420, 275, CLICKED, "2", 0);
      show_mouse();
      delay(250);
      hide_mouse();
      button_3d(390, 255, 420, 275, UNCLICKED, "2", 0);
      show_mouse();
      ch = '2';
      return ch;
    }

    // *************************************

    if (X >= 430 && X <= 460 && Y >= 255 && Y <= 275) // Condition For 3
    {
      hide_mouse();
      button_3d(430, 255, 460, 275, CLICKED, "3", 0);
      show_mouse();
      delay(250);
      hide_mouse();
      button_3d(430, 255, 460, 275, UNCLICKED, "3", 0);
      show_mouse();
      ch = '3';
      return ch;
    }

    // *************************************

    if (X >= 350 && X <= 380 && Y >= 280 && Y <= 300) // Condition For 0
    {
      hide_mouse();
      button_3d(350, 280, 380, 300, CLICKED, "0", 0);
      show_mouse();
      delay(250);
      hide_mouse();
      button_3d(350, 280, 380, 300, UNCLICKED, "0", 0);
      show_mouse();
      ch = '0';
      return ch;
    }

    // *************************************

    if (X >= 390 && X <= 420 && Y >= 280 && Y <= 300) // Condition For .
    {
      hide_mouse();
      button_3d(390, 280, 420, 300, CLICKED, ".", 0);
      show_mouse();
      delay(250);
      hide_mouse();
      button_3d(390, 280, 420, 300, UNCLICKED, ".", 0);
      show_mouse();
      ch = '.';
      return ch;
    }

    //**********************************************

    if (X >= 430 && X <= 460 && Y >= 280 && Y <= 300) // Condition For pi
    {
      hide_mouse();
      button_3d(430, 280, 460, 300, CLICKED, "pi", 0);
      show_mouse();
      delay(250);
      hide_mouse();
      button_3d(430, 280, 460, 300, UNCLICKED, "pi", 0);
      show_mouse();
      ch = 'h';
      return ch;
    }

    //***********************************************

    if (X >= 480 && X <= 510 && Y >= 255 && Y <= 275) // Condition For -
    {
      hide_mouse();
      button_3d(480, 255, 510, 275, CLICKED, "-", 0);
      show_mouse();
      delay(250);
      hide_mouse();
      button_3d(480, 255, 510, 275, UNCLICKED, "-", 0);
      show_mouse();
      ch = '-';
      return ch;
    }

    //**************************************************

    if (X >= 515 && X <= 545 && Y >= 255 && Y <= 275) // Condition For +
    {
      hide_mouse();
      button_3d(515, 255, 545, 275, CLICKED, "+", 0);
      show_mouse();
      delay(250);
      hide_mouse();
      button_3d(515, 255, 545, 275, UNCLICKED, "+", 0);
      show_mouse();
      ch = '+';
      return ch;
    }

    //*****************************************************

    if (X >= 350 && X <= 460 && Y >= 305 && Y <= 325) // Condition For =
    {
      hide_mouse();
      button_3d(350, 305, 460, 325, CLICKED, "=", 0);
      show_mouse();
      delay(250);
      hide_mouse();
      button_3d(350, 305, 460, 325, UNCLICKED, "=", 0);
      show_mouse();
      ch = '=';
      return ch;
    }

    //*****************************************************

    if (X >= 480 && X <= 545 && Y >= 305 && Y <= 325) // Condition For shift
    {
      hide_mouse();
      button_3d(480, 305, 545, 325, CLICKED, "shift", BLUE);
      show_mouse();
      delay(250);
      hide_mouse();
      button_3d(480, 305, 545, 325, UNCLICKED, "shift", BLUE);
      show_mouse();
      ch = '~';
      sflag = 1;
      return ch;
    }

    //*************************************

    if (X >= 480 && X <= 510 && Y >= 205 && Y <= 225) // Condition For AC
    {
      hide_mouse();
      button_3d(480, 205, 510, 225, CLICKED, "AC", 4);
      show_mouse();
      delay(250);
      hide_mouse();
      button_3d(480, 205, 510, 225, UNCLICKED, "AC", 4);
      show_mouse();
      ch = 'o';
      return ch;
    }
    /********************C*/    if (X >= 515 && X <= 545 && Y >= 205 && Y <= 225) // Condition For C
    {
      hide_mouse();
      button_3d(515, 205, 545, 225, CLICKED, "CE", 4);
      show_mouse();
      delay(250);
      hide_mouse();
      button_3d(515, 205, 545, 225, UNCLICKED, "CE", 4);
      show_mouse();
      ch = 'a';
      return ch;
    }

    // ****************************************

    if (X >= 100 && X <= 150 && Y >= 205 && Y <= 230) // Condition For Sin
    {
      hide_mouse();
      button_3d(100, 205, 150, 230, CLICKED, "Sin", 0);
      show_mouse();
      delay(250);
      hide_mouse();
      button_3d(100, 205, 150, 230, UNCLICKED, "Sin", 0);
      show_mouse();
      ch = 's';
      return ch;
    }

    //***********************************

    if (X >= 160 && X <= 210 && Y >= 205 && Y <= 230) // Condition For Cos
    {
      hide_mouse();
      button_3d(160, 205, 210, 230, CLICKED, "Cos", 0);
      show_mouse();
      delay(250);
      hide_mouse();
      button_3d(160, 205, 210, 230, UNCLICKED, "Cos", 0);
      show_mouse();
      ch = 'c';
      return ch;
    }

    //***********************************

    if (X >= 515 && X <= 545 && Y >= 280 && Y <= 300) //inverse
    {
      hide_mouse();
      button_3d(515, 280, 545, 300, CLICKED, "inv", 0);
      show_mouse();
      delay(250);
      hide_mouse();
      button_3d(515, 280, 545, 300, UNCLICKED, "inv", 0);
      show_mouse();
      ch = 'm';
      return ch;
    }

    if (X >= 220 && X <= 270 && Y >= 205 && Y <= 230) // Condition For Tan
    {
      hide_mouse();
      button_3d(220, 205, 270, 230, CLICKED, "Tan", 0);
      show_mouse();
      delay(250);
      hide_mouse();
      button_3d(220, 205, 270, 230, UNCLICKED, "Tan", 0);
      show_mouse();
      ch = 't';
      return ch;
    }

    //*********************************** */
    if (X >= 100 && X <= 150 && Y >= 250 && Y <= 275) // Condition For sin^-1
    {
      hide_mouse();
      button_3d(100, 250, 150, 275, CLICKED, "sin^-1", 0);
      show_mouse();
      delay(150);
      hide_mouse();
      button_3d(100, 250, 150, 275, UNCLICKED, "sin^-1", 0);
      show_mouse();
      ch = 'i';
      return ch;
    }
    //**************************

    if (X >= 160 && X <= 210 && Y >= 250 && Y <= 275) // Condition For cos^-1
    {
      hide_mouse();
      button_3d(160, 250, 210, 275, CLICKED, "cos^-1", 0);
      show_mouse();
      delay(250);
      hide_mouse();
      button_3d(160, 250, 210, 275, UNCLICKED, "cos^-1", 0);
      show_mouse();
      ch = 'j';
      return ch;
    }
    //**************************

    if (X >= 430 && X <= 460 && Y >= 350 && Y <= 370) // Condition For MR
    {
      hide_mouse();
      button_3d(430, 350, 460, 370, CLICKED, "MR", 0);
      show_mouse();
      delay(250);
      hide_mouse();
      button_3d(430, 350, 460, 370, UNCLICKED, "MR", 0);
      show_mouse();
      ch = '?';
      return ch;
    }
    if (X >= 390 && X <= 420 && Y >= 350 && Y <= 370) // Condition For M-
    {
      hide_mouse();
      button_3d(390, 350, 420, 370, CLICKED, "M-", 0);
      show_mouse();
      delay(250);
      hide_mouse();
      button_3d(390, 350, 420, 370, UNCLICKED, "M-", 0);
      show_mouse();
      ch = '<';
      return ch;
    }
    if (X >= 350 && X <= 380 && Y >= 350 && Y <= 370) // Condition For M+
    {
      hide_mouse();
      button_3d(350, 350, 380, 370, CLICKED, "M+", 0);
      show_mouse();
      delay(250);
      hide_mouse();
      button_3d(350, 350, 380, 370, UNCLICKED, "M+", 0);
      show_mouse();
      ch = '>';
      return ch;
    }

    if (X >= 220 && X <= 270 && Y >= 250 && Y <= 275) // Condition For tan^-1
    {
      hide_mouse();
      button_3d(220, 250, 270, 275, CLICKED, "tan^-1", 0);
      show_mouse();
      delay(250);
      hide_mouse();
      button_3d(220, 250, 270, 275, UNCLICKED, "tan^-1", 0);
      show_mouse();
      ch = 'k';
      return ch;
    }
    //**************************

    if (X >= 100 && X <= 150 && Y >= 300 && Y <= 325) // Condition For ln
    {
      hide_mouse();
      button_3d(100, 300, 150, 325, CLICKED, "ln", 0);
      show_mouse();
      delay(250);
      hide_mouse();
      button_3d(100, 300, 150, 325, UNCLICKED, "ln", 0);
      show_mouse();
      ch = 'n';
      return ch;
    }
    //**************************

    if (X >= 160 && X <= 210 && Y >= 300 && Y <= 325) // Condition For log
    {
      hide_mouse();
      button_3d(160, 300, 210, 325, CLICKED, "log", 0);
      show_mouse();
      delay(150);
      hide_mouse();
      button_3d(160, 300, 210, 325, UNCLICKED, "log", 0);
      show_mouse();
      ch = 'l';
      return ch;
    }
    //**************************

    if (X >= 220 && X <= 270 && Y >= 300 && Y <= 325) // Condition For X^2
    {
      hide_mouse();
      button_3d(220, 300, 270, 325, CLICKED, "x^2", 0);
      show_mouse();
      delay(250);
      hide_mouse();
      button_3d(220, 300, 270, 325, UNCLICKED, "x^2", 0);
      show_mouse();
      ch = 'p';
      return ch;
    }
    if (X >= 100 && X <= 150 && Y >= 350 && Y <= 370) // Condition For deg
    {
      hide_mouse();
      button_3d(100, 350, 150, 370, CLICKED, "deg", 15);
      button_3d(160, 350, 210, 370, UNCLICKED, "rad", 0);
      button_3d(220, 350, 270, 370, UNCLICKED, "gra", 0);
      show_mouse();
      delay(250);
      hide_mouse();
      button_3d(100, 350, 150, 370, UNCLICKED, "deg", 15);
      show_mouse();
      ch = 'd';
      flagp = flag;
      flag = ch;
      return ch;
    } 
//**************************
    if (X >= 160 && X <= 210 && Y >= 350 && Y <= 370) // Condition For rad
    {
      hide_mouse();
      button_3d(100, 350, 150, 370, UNCLICKED, "deg", 0);
      button_3d(160, 350, 210, 370, CLICKED, "rad", 15);
      button_3d(220, 350, 270, 370, UNCLICKED, "gra", 0);
      show_mouse();
      delay(250);
      hide_mouse();
      button_3d(160, 350, 210, 370, UNCLICKED, "rad", 15);
      show_mouse();
      ch = 'r';
      flagp = flag;
      flag = ch;

      return ch;
    }
    if (X >= 220 && X <= 270 && Y >= 350 && Y <= 370) // Condition For gra
    {
      hide_mouse();
      button_3d(100, 350, 150, 370, UNCLICKED, "deg", 0);
      button_3d(160, 350, 210, 370, UNCLICKED, "rad", 0);
      button_3d(220, 350, 270, 370, CLICKED, "gra", 15);
      show_mouse();
      delay(250);
      hide_mouse();
      button_3d(220, 350, 270, 370, UNCLICKED, "gra", 15);
      show_mouse();
      ch = 'g';
      flagp = flag;
      flag = ch;
      return ch;

    }
    if ((X >= 480 && X <= 545 && Y >= 350 && Y <= 370) || (X >= 575 && X <= 595 && Y >= 23 && Y <= 40)) //OFF
    {
      free(mem);
      exit(0);
    }
    if (X >= 108 && X <= 208 && Y >= 140 && Y <= 160) // Condition For dec
    {
      hide_mouse();
      button_3d(108, 140, 208, 160, CLICKED, "DEC", 15);
      button_3d(218, 140, 318, 160, UNCLICKED, "OCT", 0);
      button_3d(328, 140, 428, 160, UNCLICKED, "HEX", 0);
      button_3d(438, 140, 538, 160, UNCLICKED, "BIN", 0);
      show_mouse();
      delay(250);
      hide_mouse();
      button_3d(108, 140, 208, 160, UNCLICKED, "DEC", 15);
      show_mouse();
      ch = 'u';
      bflagp = bflag;
      bflag = ch;
      return ch;
    }
    if (X >= 218 && X <= 318 && Y >= 140 && Y <= 160) // Condition For oct
    {
      hide_mouse();
      button_3d(108, 140, 208, 160, UNCLICKED, "DEC", 0);
      button_3d(218, 140, 318, 160, CLICKED, "OCT", 15);
      button_3d(328, 140, 428, 160, UNCLICKED, "HEX", 0);
      button_3d(438, 140, 538, 160, UNCLICKED, "BIN", 0);
      show_mouse();
      delay(250);
      hide_mouse();
      button_3d(218, 140, 318, 160, UNCLICKED, "OCT", 15);
      show_mouse();
      ch = 'v';
      bflagp = bflag;
      bflag = ch;
      return ch;
    }
    if (X >= 328 && X <= 428 && Y >= 140 && Y <= 160) // Condition For hex
    {
      hide_mouse();
      button_3d(108, 140, 208, 160, UNCLICKED, "DEC", 0);
      button_3d(218, 140, 318, 160, UNCLICKED, "OCT", 0);
      button_3d(328, 140, 428, 160, CLICKED, "HEX", 15);
      button_3d(438, 140, 538, 160, UNCLICKED, "BIN", 0);
      show_mouse();
      delay(250);
      hide_mouse();
      button_3d(328, 140, 428, 160, UNCLICKED, "HEX", 15);
      show_mouse();
      ch = 'w';
      bflagp = bflag;
      bflag = ch;
      return ch;
    }
    if (X >= 438 && X <= 538 && Y >= 140 && Y <= 160) // Condition For dec
    {
      hide_mouse();
      button_3d(108, 140, 208, 160, UNCLICKED, "DEC", 0);
      button_3d(218, 140, 318, 160, UNCLICKED, "OCT", 0);
      button_3d(328, 140, 428, 160, UNCLICKED, "HEX", 0);
      button_3d(438, 140, 538, 160, CLICKED, "BIN", 15);
      show_mouse();
      delay(250);
      hide_mouse();
      button_3d(438, 140, 538, 160, UNCLICKED, "BIN", 15);
      show_mouse();
      ch = 'x';
      bflagp = bflag;
      bflag = ch;
      return ch;
    }
    if (X >= 480 && X <= 510 && Y >= 280 && Y <= 300) {
      hide_mouse();
      button_3d(480, 280, 510, 300, CLICKED, "sqrt", 0);
      show_mouse();
      delay(250);
      hide_mouse();
      button_3d(480, 280, 510, 300, UNCLICKED, "sqrt", 0);
      show_mouse();
      ch = 'q';
      return ch;
    }

  } while (kbhit() == 0);
  ch = getch();
  return ch;
}

//***********************************************
// *
// This function performs the Calculations *
// *
//***********************************************
double add(double x, double y, char ch) {
  switch (ch) {
  case '+':
    y = x + y;
    break;
  case '-':
    y = x - y;
    break;
  case '*':
    y = x * y;
    break;
  case '/':
    y = x / y;
  }
  return y;
}

double angle_conv(double no) {
  if (flagp == 'd') {
    if (flag == 'r') {
      no = no * PI / 180;
    }
    if (flag == 'g') {
      no = no * 1.1111111;
    }
  } else if (flagp == 'r') {
    if (flag == 'd') {
      no = no * 180 / PI;
    }
    if (flag == 'g') {
      no = no * 180 / PI * 1.1111111;
    }
  } else if (flagp == 'g') {
    if (flag == 'r') {
      no = no / (180 * 1.1111111) * PI;
    }
    if (flag == 'd') {
      no = no / 1.1111111;
    }
  }
  return (no);
}

void basecng(double y, double pnt1) {
  char str[17];
  if (pnt1 != 0) {
    gotoxy(row, col);
    printf("The trial version does not support this feature");
    getch();
    bflag = 'u';
    bflagp = '0';
    main();
  }
  if (bflagp != 'u') {
    gotoxy(row, col);
    printf("The trial version does not support this feature ");
    getch();
    bflagp = '0';
    bflag = 'u';
    main();
  }
  switch (bflag) {
  case 'v':
    itoa(y, str, 8);
    gotoxy(row, col);
    printf("\t\t\t\t ");
    gotoxy(row, col);
    printf("%s", str);
    bflagp = '0';
    break;

  case 'w':
    itoa(y, str, 16);
    gotoxy(row, col);
    printf("\t\t\t\t ");
    gotoxy(row, col);
    printf("%s", str);
    bflagp = '0';
    // getch();
    break;

  case 'x':
    itoa(y, str, 2);
    gotoxy(row, col);
    printf("\t\t\t\t ");
    gotoxy(row, col);
    printf("%s", str);
    // getch();
    bflagp = '0';
    break;
  }
  bflag = 'u';
}
 
