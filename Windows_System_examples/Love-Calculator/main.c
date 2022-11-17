#include <stdio.h> 
#include <stdlib.h> 


void enter_string(char* message, char* s, size_t s_size) {
  printf("%s", message);
  fgets(s, s_size, stdin);   
}

int get_score(char* s) 
{
  char *end;
  for (end = s; *end != '\0'; ++end);
  --end;

  if (end == s) 
  {
      printf("wrong Input\n");
      return -1;
  }

  int score = 0;
  char c;
  for(char* p = s; p != end; ++p)
  {
    c = *p ^ 0x20;

    if(c == ' ')
    {
      continue;
    }
    else if(c >= 'A' && c <= 'Z')
    {
      score += c - '@';
    }  
    else
    {
      printf("wrong Input\n");
      return -1;
    }
  }
  return score * 5 / (end - s);
}

int main()
{
  int p,s1,s2;
  char name[1000];

  while(1)
  {
    do 
    {
      enter_string("Enter The First Name: ", name, sizeof(name));
      s1 = get_score(name);
    } while (s1 == -1);

    do 
    {
      enter_string("Enter The Second Name: ", name, sizeof(name));
      s2 = get_score(name);
    } while (s2 == -1);

    if(s2 > s1)
    {
      p = (s1 * 100) / s2;
    }
    else
    {
      p = (s2 * 100) / s1;
    }

    printf("The love Percentage is : %d %% \n",p);
    printf("\n pls Follow me  🌟 if you like this code 😊\n");
  } 
  return 0;
}


/* created by NemoNet aka The Young Programmer 🏅
pls kindly follow me on github OR
give me a star 🌟  */
