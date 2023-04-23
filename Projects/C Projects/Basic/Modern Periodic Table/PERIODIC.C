#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
struct element{
		char name[20];
		char sb[5];
		int atm;
		float atms;
		char block;
		char atc[20];
		char prop[250];
	       }p,q;
int rw,cl;
FILE*fp;
void add();
void explor();
void print();
void mainscreen();
void main()
{
	int a,i,n,y;
	char c,d;
	char date1[15],date2[15],string1[20];
	unsigned int tsz;

	clrscr();
	mainscreen();
	label1:


	textcolor(15);
	gotoxy(22,15);textcolor(14);
	cprintf("Enter the corresponding no");gotoxy(22,19);textcolor(10);
	cprintf("1.Add new Element Information");gotoxy(22,21);
	cprintf("2.Explore");gotoxy(22,23);
	cprintf("3.Quit");gotoxy(22,25);
       //	cprintf("4.Delete the records");gotoxy(22,27);
       //	cprintf("5.Exit from the program");gotoxy(25,30);
	fflush(stdin);
	d=getch();
	switch(d)
	{
		case '1':
		      {
			add();
		       //	getch();
		       //	print();
		       //	getch();
			break;
		      }
		case '2':
		      {
			explor();
			break;

			}
		case '3':
		      {
			clrscr();
			mainscreen();
			textcolor(14); gotoxy(30,24);
			cprintf("THANK U");gotoxy(30,26);
		       //	cprintf("SAVING UR SETTINGS"); gotoxy(30,28);
			cprintf("BYE...........");
			getch();
			exit(1);
			break;
			}







		default:
		       {
			clrscr();
			mainscreen();
			textcolor(12+128);gotoxy(22,11);
			cprintf("Wrong choice");gotoxy(22,13);textcolor(15);
			 cprintf("Retype choice");
			goto label1;
			}

	}
	clrscr();
	mainscreen();
	goto label1;
}
void mainscreen()
{
	int i,j;
	clrscr();
	for(i=2,j=2;i<rw;j++)
	{
		if(j>15)
		j=2;

		textcolor(j);
		gotoxy(i,2);
		cprintf("%c",'*');
		gotoxy(i,cl-1);
		cprintf("%c",'*');
		i++;

	}
	for(i=2,j=2;i<cl;i++,j++)
	{
		if(j>15)
		j=2;
		textcolor(j);
		gotoxy(2,i);
		cprintf("%c",'*');
		gotoxy(rw-1,i);
		cprintf("%c",'*');

	}
	gotoxy(30,4);textcolor(3);
	cprintf("Modern Periodic Table");
	gotoxy(37,6);textcolor(6);
	cprintf("Digital");
	gotoxy(35,7); textcolor(15);
	cprintf("-----------");
}
void add()
{
	char ch;
	label1:
	clrscr();
	mainscreen();
		gotoxy(15,14);textcolor(10);
	cprintf("Enter the Information of Elements:");
       //	printf(" %d",l);
	gotoxy(15,16);
	cprintf("Name:");

	gotoxy(15,18);
	cprintf("Symbol:");

	gotoxy(15,20);
	cprintf("Atomic No: ");

	gotoxy(15,22);
	cprintf("Atomic Wt: ");

	gotoxy(15,24);
	cprintf("Atomic Config:");

	gotoxy(15,26);
	cprintf("Block:");

	gotoxy(15,28);
	cprintf("Properties:");


	textcolor(15);
	fflush(stdin);
	gotoxy(20,16);
	scanf("%[^\n]",p.name);
	p.name[0]=toupper(p.name[0]);

	fflush(stdin);
	gotoxy(23,18);
	scanf("%[^\n]",p.sb);
	p.sb[0]=toupper(p.sb[0]);

	fflush(stdin);
	gotoxy(25,20);
	scanf("%d",&p.atm);

	fflush(stdin);
	gotoxy(25,22);
	scanf("%f",&p.atms);

	fflush(stdin);
	gotoxy(29,24);
	scanf("%[^\n]",p.atc);

	fflush(stdin);
	gotoxy(21,26);
	scanf("%c",&p.block);
	p.block=toupper(p.block);
	if(p.block!='S'&&p.block!='P'&&p.block!='D'&&p.block!='F')
	p.block=' ';
	fflush(stdin);

	gotoxy(26,28);
	scanf("%[^\n]",p.prop);
	p.prop[0]=toupper(p.prop[0]);



	 /*	gotoxy(9,30);
	cprintf("(In Short)");

	gotoxy(5,33);
	cprintf("Reff. Specialist no:");      */
	if((fp=fopen("data","ab+"))==NULL)
	{
		printf("Cannot open the file f1");
		getch();
		exit(1);
	}
	fwrite(&p,sizeof(p),1,fp);
	fclose(fp);
	printf("\n\n\n\t\tEnter 'y' for next record(y/n):");
	ch=getch();
	if(ch=='y')
	{
		goto label1;
	}

       //	getch();
}
void explor()
{
	char d,c;
	FILE *f;
	int given_atmic_no,a,i,tsz,n;
	float given_atmic_mass;
	int flag;
	char string[20];
	startofexplore:
	clrscr();
	mainscreen();
	label6:
	gotoxy(22,15);textcolor(12);
	cprintf("Enter the corresponding no");gotoxy(22,19);textcolor(3);
	cprintf("1.Search by 'NAME'");gotoxy(22,21);
	cprintf("2.Search by SYMBOL");gotoxy(22,23);
	cprintf("3.Search by ATOMIC NUMBER");gotoxy(22,25);
	cprintf("4.Search by ATOMIC WEIGHT");gotoxy(22,27);
	cprintf("5.Elements of Diff. Blocks");gotoxy(22,29);
	cprintf("6.Return to main menu");
	gotoxy(25,32);
	fflush(stdin);
	d=getch();
	switch(d)
       {
		case '1':
		{
			clrscr();
			mainscreen();
			gotoxy(15,25);
			textcolor(12);
			cprintf("Enter the Name of Element:");
			textcolor(3);
			fflush(stdin);
			scanf("%[^\n]",string);
			printf("%s",string);
			string[0]=toupper(string[0]);
			if((fp=fopen("data","rb+"))==NULL)
			{
			clrscr();

			printf("\n cannot open the record file 1");
			getch();
			exit(1);
			}
			flag=1;
			while(fread(&p,sizeof(p),1,fp))
			{
				 if(strcmp(p.name,string)==0)
				{
					print();

					flag=0;

					break;
				 }

			}
			if(flag==1)
			{
				clrscr();
				mainscreen();
				gotoxy(25,25);
				textcolor(12);
				cprintf("::No Element Available::");

			}

			fclose(fp);
			getch();
			break;
		}
		case '2':
		{
			clrscr();
			mainscreen();
			gotoxy(22,15);
			textcolor(12);
			cprintf("Enter the symbol:");
			textcolor(3);
			fflush(stdin);
			scanf("%[^\n]",string);
			printf("%s",string);
			string[0]=toupper(string[0]);
			if((fp=fopen("data","rb+"))==NULL)
			{
			clrscr();

			printf("\n cannot open the record file 1");
			getch();
			exit(1);
			}
			flag=1;
			while(fread(&p,sizeof(p),1,fp))
			{
				 if(strcmp(p.sb,string)==0)
				{
					print();
					flag=0;


					break;
				 }

			}
			if(flag==1)
			{
				clrscr();
				mainscreen();
				gotoxy(25,25);
				textcolor(12);
				cprintf("::No Element Available::");

			}

			fclose(fp);
			getch();
			break;
		}
		case '6':
		{
			return;
		}
		case '3':
		{
			clrscr();
			mainscreen();
			gotoxy(15,25);
			textcolor(12);
			cprintf("Enter the Atomic No. Element:");
			textcolor(3);
			fflush(stdin);
			scanf("%d",&given_atmic_no);
			if((fp=fopen("data","rb+"))==NULL)
			{
			clrscr();

			printf("\n cannot open the record file 1");
			getch();
			exit(1);
			}
			flag=1;
			while(fread(&p,sizeof(p),1,fp))
			{
				 if(p.atm==given_atmic_no)
				{
					print();
					flag=0;

					break;
				 }

			}
			if(flag==1)
			{
				clrscr();
				mainscreen();
				gotoxy(25,25);
				textcolor(12);
				cprintf("::No Element Available::");

			}

			fclose(fp);
			getch();
			break;
		}
		case '4':
		{
			clrscr();
			mainscreen();
			gotoxy(15,22);
			textcolor(12);
			cprintf("Enter the Atomic mass of Element:");
			textcolor(3);
			fflush(stdin);
			scanf("%f",&given_atmic_mass);
			if((fp=fopen("data","rb+"))==NULL)
			{
			clrscr();

			printf("\n cannot open the record file 1");
			getch();
			exit(1);
			}
			flag=1;
			while(fread(&p,sizeof(p),1,fp))
			{
				 if(p.atms==given_atmic_mass)
				{
					print();
					flag=0;

					break;
				 }

			}
			if(flag==1)
			{
				clrscr();
				mainscreen();
				gotoxy(25,25);
				textcolor(12);
				cprintf("::No Element Available::");

			}

			fclose(fp);
			getch();
			break;
		}
		case '5':
		{

			clrscr();
			mainscreen();
			gotoxy(15,25);
			textcolor(12);
			cprintf("Enter the Block:");
			textcolor(3);
			fflush(stdin);
			scanf("%c",&c);
			c=toupper(c);
			if((f=fopen("temp","wb+"))==NULL)
			{
			clrscr();

			printf("\n cannot open the temp file 1");
			getch();
			exit(1);
			}


			if((fp=fopen("data","rb+"))==NULL)
			{
			clrscr();

			printf("\n cannot open the record file 1");
			getch();
			exit(1);
			}
			flag=1;
			while(fread(&p,sizeof(p),1,fp))
			{
				 if(p.block==c)
				{
					fwrite(&p,sizeof(p),1,f);
				 }

			}
			fclose(f);
			fclose(fp);

					 if((f=fopen("temp","rb+"))==NULL)
					      {
						printf("Cannot open the file");
						getch();
						exit(1);
					      }
					 fseek(f,0,SEEK_END);
					 tsz=ftell(f);
					 n=(int)(tsz/sizeof(p));
					 for(i=0;i<(n-1);i++)
					 {
						for(a=i+1;a<n;a++)
						{
						fseek(f,i*sizeof(p),SEEK_SET);
						fread(&p,sizeof(p),1,f);
						fseek(f,a*sizeof(p),SEEK_SET);
						fread(&q,sizeof(p),1,f);
						if((p.atm-q.atm)>0)
							{
							fseek(f,i*sizeof(p),SEEK_SET);
							fwrite(&q,sizeof(p),1,f);
							fseek(f,a*sizeof(p),SEEK_SET); fflush(stdin);
							fwrite(&p,sizeof(p),1,fp);
							}
						}
					}
					rewind(f);
			while(fread(&p,sizeof(p),1,f))
			{

					print();
					getch();


			}


				clrscr();
				mainscreen();
				gotoxy(25,25);
				textcolor(12);
				cprintf("::No Element Available::");



			fclose(f);
			getch();
			break;
		}


		default:
		{
				clrscr();
				mainscreen();
				textcolor(12+128);gotoxy(22,11);
				cprintf("Wrong choice");gotoxy(22,13);textcolor(15);
				 cprintf("Retype choice");
				goto label6;
		}
	}
	goto startofexplore;

}
void print()
{
	clrscr();
	mainscreen();
	gotoxy(15,16);
	cprintf("Name:");

	gotoxy(15,18);
	cprintf("Symbol:");

	gotoxy(15,20);
	cprintf("Atomic No: ");

	gotoxy(15,22);
	cprintf("Atomic Wt: ");

	gotoxy(15,24);
	cprintf("Atomic Config:");
	fflush(stdin);
	gotoxy(15,26);
	cprintf("Block:");

	gotoxy(15,28);
	cprintf("Properties:");


	textcolor(6);

	gotoxy(20,16);
	cprintf("%s",p.name);

	gotoxy(23,18);
	cprintf("%s",p.sb);

	fflush(stdin);
	gotoxy(25,20);
	cprintf("%d",p.atm);

	fflush(stdin);
	gotoxy(25,22);
	cprintf("%f",p.atms);

	fflush(stdin);
	gotoxy(29,24);
	cprintf("%s",p.atc);

	gotoxy(21,26);
	cprintf("%c",p.block);

	gotoxy(26,28);
	cprintf("%s",p.prop);
}
