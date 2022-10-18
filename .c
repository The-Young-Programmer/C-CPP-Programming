#include <stdio.h> 
#include <stdlib.h> 
#include<conio.h> 
int main()
{
  int i,a2,g=0,p,a1,s2=0,b,s1=0;
  char s[1000],st[1000];
   printf("Enter The First Name: ");
    fgets(s, sizeof(s), stdin);   
    for ( i = 0; s[i] != '\0'; i++);
    a1=i-1;
    printf("Enter The Second Name: ");
    fgets(st, sizeof(st), stdin);   
    for ( i = 0; st[i] != '\0'; i++);
    a2=i-1;
      for(int j=0;j<a1;j++)
    {
      b=(int) s[j];
  
  if(s[j]==' ')
  {
    continue;
  }
  else if(s[j]>='A'&&s[j]<='Z')
  {
    s1=s1+(b-64)*5;
  }  
  else if(s[j]>='a'&&s[j]<='z')
  {
      s1=s1+(b-96)*5;
  }
    else
    {
      printf("wrong Input\n");
      g=12;
      break;
      }
        
}
s1=s1/a1;


  for(int j=0;j<a2;j++)
    {
      b=(int) st[j];
  
  if(st[j]==' ')
  {
    continue;
  }

  else if(st[j]>='A'&&st[j]<='Z')
  {
    s2=s2+(b-64)*5;
  }  
  else if(st[j]>='a'&&st[j]<='z')
  {
      s2=s2+(b-96)*5;
  }
    else
    {
      printf("wrong Input\n");
      g=12;
      break;
      }
        
}
s2=s2/a2;

if(g!=12)
{
if(s2>s1)
{
  p=(s1*100)/s2;
}
else
{
  p=(s2*100)/s1;
}
char ch='%';
printf("The love Percentage is : %d %c\n",p,ch);
}
else
{
  printf("Input Error\n");
}
printf("\n pls Follow me  🌟 if you like this code 😊\n");
    return main();
}


/* created by NemoNet aka The Young Programmer 🏅
pls kindly follow me on github OR
give me a star 🌟  */
