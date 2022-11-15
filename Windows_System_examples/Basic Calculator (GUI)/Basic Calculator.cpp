/*-------------------------------------------------------------------------

          GUI Calculator

Programmer           : Nemonet TYP


Software Details
====================
Developed in   : C++
Compiler used  : CodeBlocks
OS             : Windows OS


License   : Protected (Please give the credit of programming to author.)


-------------------------------------------------------------------------------------*/



#include <iostream.h>
#include <conio.h>
#include <graphics.h>
#include <stdlib.h>
#include <string.h>
#include <dos.h>

// Window
#define TITLEBARHEIGHT 21
#define BORDERWIDTH 1


#define ADD 1
#define SUBTRACT 2
#define MULTIPLY 3
#define DIVIDE 4

/*--------------------- Global Data ---------------------*/

int ButtonId;
enum bool{false,true};
enum BUTTON{MOUSE_NORMAL = 0,MOUSE_LBUTTON=1,MOUSE_RBUTTON=2,MOUSE_MBUTTON=4};
enum BUTTON_STATUS
{
   BUTTON_STATUS_NORMAL,
   BUTTON_STATUS_DOWN
};

/*------------------------------------------------------
       Mouse Class
------------------------------------------------------*/
class Mouse

{
  private:

   int MouseXpos, MouseYpos;
   BUTTON MouseBtn;
   union REGS in,out;

  public:

   int InstallMouse();
   int ShowMouse();
   int HideMouse();
   void GetMouseStatus();
   BUTTON GetButton();
   int GetPosX();
   int GetPosY();
   void SetMousePosi(int &xpos, int &ypos);
   int MouseInside(int x1, int y1, int x2, int y2);
   void RestrictMousePtr(int x1, int y1, int x2, int y2);

};


 int Mouse::InstallMouse()
 {

  in.x.ax = 0;
  int86(51,&in,&out);
  return out.x.ax;

 }
 int Mouse::ShowMouse()
 {

  in.x.ax = 1;
  int86(51,&in,&out);
  return 1;

 }
 int Mouse::HideMouse()
 {

  in.x.ax = 2;
  int86(51,&in,&out);
  return 1;

 }
 void Mouse::GetMouseStatus()
 {

  in.x.ax = 3;
  int86(51,&in,&out);
  MouseXpos = out.x.cx;
  MouseYpos = out.x.dx;
  MouseBtn = out.x.bx;

 }
 BUTTON Mouse::GetButton()
 {
  return MouseBtn;
 }

 int Mouse::GetPosX()
 {
  return MouseXpos;
 }

 int Mouse::GetPosY()
 {
  return MouseYpos;
 }

 void Mouse::SetMousePosi(int &xpos, int &ypos)
 {
  in.x.ax = 4;
  in.x.cx = xpos;
  in.x.dx = ypos;
  int86(51,&in,&out);
 }
 int Mouse::MouseInside(int x1, int y1, int x2, int y2)
 {
  int x_pos, y_pos;
  in.x.ax = 3;
  int86(51,&in,&out);
  x_pos = out.x.cx;
  y_pos = out.x.dx;

  if(x_pos >= x1 && y_pos >= y1 && x_pos <= x2 && y_pos <= y2)
   return 1;
  else
   return 0;

 }
 void Mouse::RestrictMousePtr(int x1, int y1, int x2, int y2)
 {

  in.x.ax = 7;
  in.x.cx = x1;
  in.x.dx = x2;
  int86(51,&in,&out);

  in.x.ax = 8;
  in.x.cx = y1;
  in.x.dx = y2;
  int86(51,&in,&out);

 }


/*------------------------------------------------------
       End of Mouse Class
------------------------------------------------------*/


/*------------------------------------------------------
       TextBox Class
------------------------------------------------------*/

class TextBox
{

 private:

 int Alignment;

 int Left,Top,Width,Height;
 char Caption[50];

 public:

 TextBox(int left, int top, int width, int height, char caption[],int Align);
 void Draw();
 void SetText(char text[]);
 char *GetText();
 void Clear();
};

 TextBox::TextBox(int left, int top, int width, int height, char caption[],int Align)
    {
  Left = left;
  Top = top;
  Width = width;
  Height = height;
  strcpy(Caption,caption);
  Alignment = Align;
    }


    void TextBox::Draw()
   {
  setfillstyle(SOLID_FILL,WHITE);
  bar(Left,Top,Left+Width,Top+Height);

  setcolor(DARKGRAY);
  rectangle(Left,Top,Left+Width,Top+Height);

  setcolor(BLACK);

  settextjustify(Alignment,TOP_TEXT);
  if(Alignment==LEFT_TEXT)
   outtextxy(Left+2,Top+1+((Height/2)-(textheight(Caption)/2)),Caption);
  else
   if(Alignment==RIGHT_TEXT)
    outtextxy(Left+Width-2,Top+1+((Height/2)-(textheight(Caption)/2)),Caption);
  else
   outtextxy(Left+(Width/2),Top+1+((Height/2)-(textheight(Caption)/2)),Caption);


   }


 void TextBox::SetText(char text[])
 {
  if (Left + textwidth(Caption) <= Left + Width - textwidth(" "))
  {
   strcat(Caption,text);
   Draw();
  }
 }

 char *TextBox::GetText()
 {
  return Caption;
 }

 void TextBox::Clear()
 {
  strcpy(Caption,"");
  Draw();
 }


/*------------------------------------------------------
       End of TextBox Class
------------------------------------------------------*/

/*-------------------Mouse Object---------------------*/

static Mouse mouse;

/*------------------------------------------------------
       Button Class
------------------------------------------------------*/

class Button
{

 private:

 int Left,Top,Width,Height,ID;
 char Caption[50];
 BUTTON_STATUS btnStatus;
 void MouseDown();
 void MouseUp();
 bool State;

 public:

 Button(int left, int top, int width, int height, char caption[], int Id);
 void Draw();
 void EnableClickHandler();

};

 Button::Button(int left, int top, int width, int height, char caption[], int Id)
    {
  Left = left;
  Top = top;
  Width = width;
  Height = height;
  strcpy(Caption,caption);
  ID = Id;
  btnStatus = BUTTON_STATUS_NORMAL;
  State = false;
    }


   void Button::Draw()
   {
  setfillstyle(SOLID_FILL,LIGHTGRAY);
  bar(Left,Top,Left+Width,Top+Height);

  setcolor(WHITE);
  line(Left,Top,Left+Width,Top);
  line(Left,Top,Left,Top+Height);

  setcolor(BLACK);
  line(Left+Width,Top,Left+Width,Top+Height);
  line(Left,Top+Height,Left+Width,Top+Height);

  settextjustify(LEFT_TEXT,TOP_TEXT);
  setcolor(BLACK);
  outtextxy(Left + (Width/2) - textwidth(Caption)/2 + 1,
  Top + (Height/2) - textheight(Caption)/2 + 1, Caption);

   }

   void Button::MouseDown()
   {




    mouse.HideMouse();

    setcolor(BLACK);
    line(Left,Top,Left+Width,Top);
    line(Left,Top,Left,Top+Height);

    setcolor(WHITE);
    line(Left+Width,Top,Left+Width,Top+Height);
    line(Left,Top+Height,Left+Width,Top+Height);

    mouse.ShowMouse();




   }

   void Button::MouseUp()
   {



     mouse.HideMouse();

     setcolor(WHITE);
     line(Left,Top,Left+Width,Top);
     line(Left,Top,Left,Top+Height);

     setcolor(BLACK);
     line(Left+Width,Top,Left+Width,Top+Height);
     line(Left,Top+Height,Left+Width,Top+Height);

     mouse.ShowMouse();

   }

   void Button::EnableClickHandler()
   {

  if(State)
  {
   ButtonId = 0;
   State = false;
   return;
  }

  if( mouse.MouseInside(Left,Top,Left+Width,Top+Height) == 1)
  {

   if( mouse.GetButton() == MOUSE_LBUTTON)
   {
    MouseDown();
    btnStatus = BUTTON_STATUS_DOWN;
   }

   else if(btnStatus == BUTTON_STATUS_DOWN &&  mouse.GetButton() == MOUSE_NORMAL)
   {
    MouseUp();
    ButtonId = ID;
    btnStatus = BUTTON_STATUS_NORMAL;
    State = true;

   }

  }

 }

/*------------------------------------------------------
                     End of Button Class
------------------------------------------------------*/

/*------------------------------------------------------
                     Window Class
------------------------------------------------------*/

class Window
{

 private:

 int Left,Top,Width,Height;
 char Caption[50];
 Button *CloseBtn;
 public:

 Window(int left, int top, int width, int height, char caption[]);
 void JCLogo();
 void Draw();
 void EnableClickHandler();
};


 Window::Window(int left, int top, int width, int height, char caption[])
 {
  Left = left;
  Top = top;
  Width = width;
  Height = height;
  strcpy(Caption,caption);
 }
 void Window::JCLogo()
 {
    /*********** Logo ************/

  setcolor(3);
  setfillstyle(SOLID_FILL,3);
  fillellipse(Left+(BORDERWIDTH)+TITLEBARHEIGHT/2,Top+TITLEBARHEIGHT/2,TITLEBARHEIGHT/2-1,TITLEBARHEIGHT/2-1);
  setcolor(15);
  setfillstyle(SOLID_FILL,15);
  circle(Left+(BORDERWIDTH)+TITLEBARHEIGHT/2,Top+TITLEBARHEIGHT/2,TITLEBARHEIGHT/2-3);
  settextstyle(SMALL_FONT,0,0);
  outtextxy(Left+6,Top+4,"JC");
  settextstyle(0,0,0);
 }
 void Window::Draw()
 {
  setfillstyle(SOLID_FILL,LIGHTGRAY);
  bar(Left,Top,Left+Width,Top+Height);

  setcolor(WHITE);
  line(Left,Top,Left+Width,Top);
  line(Left,Top,Left,Top+Height);

  setcolor(BLACK);
  line(Left,Top+Height,Left+Width,Top+Height);
  line(Left+Width,Top,Left+Width,Top+Height);

  setfillstyle(SOLID_FILL,BLUE);
  bar(Left+BORDERWIDTH,Top+BORDERWIDTH,
  Left+Width-(BORDERWIDTH*2),Top+TITLEBARHEIGHT);

  setcolor(WHITE);
  settextjustify(LEFT_TEXT,TOP_TEXT);
  outtextxy(Left+(BORDERWIDTH*2)+TITLEBARHEIGHT+2,Top+(BORDERWIDTH*2)+(TITLEBARHEIGHT/2)-(textheight(Caption)/2),Caption);
  CloseBtn = new Button(Left+Width-TITLEBARHEIGHT-1, Top+2,TITLEBARHEIGHT-2, TITLEBARHEIGHT-2, "X", 9809);
  CloseBtn->Draw();

  JCLogo();

 }
 void Window::EnableClickHandler()
 {
  CloseBtn->EnableClickHandler();
  if (ButtonId == 9809)
  exit(0);

 }


/*------------------------------------------------------
       End of Window Class
------------------------------------------------------*/


/*------------------------------------------------------
       Main Function
------------------------------------------------------*/

void main()
{
 int gd=DETECT,gm,ch,errorcode;
 double opr1 = 0,opr2 = 0,result = 0,d=0;
 int Operation=0;
 double temp;
 char *chr,str[30];
 int len;
 int x = 160,y = 130;
 int w = 50, h = 40;
 char deci[]={"."};

 char btn[][3]={"AC","/","X","<-","7","8","9","-",
 "4","5","6","+","1","2","3","=","0",".","+/-"};


  // initialize graphics and local variables
  initgraph(&gd,&gm,"c://turboc3//bgi");

  // read result of initialization
  errorcode = graphresult();

  if (errorcode != grOk)// an error occurred
  {
   cout<<"Graphics error :: "<<grapherrormsg(errorcode);
   cout <<"\n press any key to halt: ";
   getch();
   exit(1);// terminate with an error code
  }

 mouse.InstallMouse();

 /* Drawing a Calculator Window */

 Window *pWindow = new Window(150,50,265,340,"Calculator");
 pWindow->Draw();

 /* Drawing Textbox */

 TextBox *pTextBox = new TextBox(160,80,243,30,"",RIGHT_TEXT);
 pTextBox->Draw();

 /* Drawing Buttons */

 Button *pButton[19];
 for (int i = 0;i<19;i++)
 {
    if(i == 15)
  h = 90;
    else
  h=40;
    pButton[i] = new Button(x,y,w,h,btn[i],i+1);
    pButton[i]->Draw();
    x = x+65;
    if(i == 3 || i == 7 || i==11 || i== 15)
    {
      y = y+50;
      x = 160;
    }
 }

 while(1){

   mouse.ShowMouse(); // To show mouse
   mouse.GetMouseStatus(); // To get position of mouse

  // Enabling click event on close button in window
  pWindow->EnableClickHandler();
  // Enabling click event on buttons
  for(int k = 0;k<19;k++)
  pButton[k]->EnableClickHandler();


  switch(ButtonId)
  {
    case 1: //AC
      pTextBox->Clear();
      d = 0;
      opr1=0;
      opr2=0;
      result = 0;
      Operation = 0;

    break;
    case 2: //Divide
      opr1 = atof(pTextBox->GetText());
      pTextBox->Clear();
      Operation = DIVIDE;
      d = 0;

    break;
    case 3: //Multiply
      opr1 = atof(pTextBox->GetText());
      pTextBox->Clear();
      Operation = MULTIPLY;
      d=0;

    break;
    case 4: //Backspace
      strcpy(chr,pTextBox->GetText());
      len=strlen(chr);
      if(chr[len-2] == deci[0])
      {
         chr[len-1]=0;
         chr[len-2]=0;
      }
      else
         chr[len-1] = 0;
      pTextBox->Clear();
      pTextBox->SetText(chr);

    break;
    case 5: //7
      pTextBox->SetText("7");

    break;
    case 6: //8
      pTextBox->SetText("8");

    break;
    case 7: //9
      pTextBox->SetText("9");

    break;
    case 8: // Subtraction
      opr1 = atoi(pTextBox->GetText());
      pTextBox->Clear();
      Operation = SUBTRACT;
      d=0;

    break;
    case 9: //4
      pTextBox->SetText("4");

    break;
    case 10: //5
      pTextBox->SetText("5");

    break;
    case 11: //6
      pTextBox->SetText("6");

    break;
    case 12: //Addition
      opr1 = atof(pTextBox->GetText());
      pTextBox->Clear();
      Operation = ADD;
      d=0;

    break;
    case 13: //1
      pTextBox->SetText("1");

    break;
    case 14: //2
      pTextBox->SetText("2");

    break;
    case 15: //3
      pTextBox->SetText("3");

    break;
    case 16: // Equal(=)
      opr2 = atof(pTextBox->GetText());

      switch(Operation)
      {
   case ADD:
   result = opr1+opr2;
   break;
   case SUBTRACT:
   result = opr1-opr2;
   break;
   case MULTIPLY:
   result = opr1*opr2;
   break;
   case DIVIDE:
   result = opr1/opr2;
   break;
      }

      pTextBox->Clear();
      pTextBox->SetText(gcvt(result,10,str));
      opr1=0;
      opr2=0;
      result = 0;
      Operation=0;

    break;
    case 17: //0
      pTextBox->SetText("0");

    break;
    case 18: // Decimal(.)
      if(d == 0)
      {
       d = 1;
       pTextBox->SetText(".");
      }

    break;
    case 19: //Plus & Minus (+/-)



   temp = atof(pTextBox->GetText());
   temp = temp* -1;
   pTextBox->Clear();
   pTextBox->SetText(gcvt(temp,10,str));


    break;
  }


       while(kbhit()){
  ch = getch();
  if (ch == 27)  //ESC key pressed
  exit(0);
    } }

}


