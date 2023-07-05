# String Program List in C++

**Note:**
 - Give a STAR if you like this 
 - FORK to get more update
 - Make a PULL REQUEST to countribute

<br><br>


 <hr>

 <details><summary>CHECK MOBILE NUMBER LENGTH IS CORRECT OR NOT </summary>

```

    #include <iostream>
    #include <string.h>
    using namespace std;
    int main()
        {
            char mn[200];
            cout<<"Enter mobile number\n";
            cin>>mn;
            if(strlen(mn)==10)
            cout<<"\nNumber is correct";
            else
            cout<<"\nIncorrect number";
        }


        /*
        ### Output ###
        Enter mobile number
        08156622466

        Number is correct
        */

```

<img>


 </details>



 <hr>

 <details><summary>LOGIN PROGRAM USING STRING</summary>

```

    #include <iostream>
    #include <string.h>
    using namespace std;
    int main()
        {
            char u[200]="nemo@net.com",p[200]="nemonet";
            char u1[200].p1[200];
            cout<<"Enter username:\n";
            cin>>u1;
            cout<<"Enter password:\n";
            cin>>p1;
            if(strcmp(u,u1)==0&&strcmp(p,p1)==0)
            cout<<"\nLogin Successfully";
            else
            cout<<"\nWrong Username and Password";
        }


        /*
        ### Output ###
        Enter username:
        nemo@net.com
        Enter password:
        nemonet

       Login Successfully
        */

```

<img>


 </details>



 <hr>

 <details><summary>CHECK GIVEN STRING IS PALINDROME OR NOT</summary>

 ```

    #include <iostream>
    #include <string.h>
    using namespace std;
    int main()
        {
            char s[200],cpy[200];
            cout<<"Enter any string:\n";
            gets(s);
            strcpy(cpy,s);
            strrev(s);
            if(strcmp(s,cpy)==0)
            cout<<s<<"is palindrome string";
            else
            cout<<s<<"is not palindrome string";
        }


        /*
        ### Output ###
        Enter any string:
        madam
        madam is palindrome string
        */


 ```

        

<img>


 </details>



 <hr>

 <details><summary>REVERSE STRING WITHOUT USING FUNCTION</summary>


```

    #include <iostream>
    #include <string.h>
    using namespace std;
    int main()
        {
            char s[200];
            int count=0;
            cout<<"Enter any string:\n";
            gets(s);
            for(int i=0;s[i]!='\0';i++)
            count++;
            cout<<"Reverse of "<<s<<" is given below:\n";
            for(int j=count-1;j>=0;j--)
            cout<<s[j];
        }


        /*
        ### Output ###
        Enter any string:
        Nemo
        Reverse of Nemo is given below:
        omeN
        */

```

<img>


 </details>



 <hr>

 <details><summary>FIND LENGTH OF STRING WITHOUT USING FUNCTION </summary>

```

    #include <iostream>
    #include <string.h>
    using namespace std;
    int main()
        {
            char s[200];
            int count=0;
            cout<<"Enter any string:\n";
            gets(s);
            for(int i=0;s[i]!='\0';i++)
            count++;
            cout<<"Lengt of string is:"<<count;
        }


        
        /*
        ### Output ###
        Enter any string:
        Nemo
        Lengt of string is: 4
        
        */

```

<img>


 </details>



 <hr>

 <details><summary>COUNT ONLY ALPHABELTS IN A STRING</summary>

```

    #include <iostream>
    #include <string.h>
    using namespace std;
    int main()
        {
            char s[200];
            int alpha=0;
            cout<<"Enter any string:\n";
            gets(s);
            for(int i=0;s[i]!='\0';i++)
            {
                if((s[i]>=65&&s[i]<=90) || (s[i]>=97&&s[i]<=122))
                alpha++;
            }
            cout<<"Total Alphabelt="<<alpha;

        }
        
        

        /*
        ### Output ###
        Enter any string:
        nemo@net.com
        Total Alphabelt=10

        */

```

<img>


 </details>




 <hr>

 <details><summary>COUNT ONLY DIGIT IN A STRING </summary>

```

    #include <iostream>
    #include <string.h>
    using namespace std;
    int main()
        {
            char s[200];
            int digit=0;
            cout<<"Enter any string:\n";
            gets(s);
            for(int i=0;s[i]!='\0';i++)
            {
                if(s[i]>=48&&s[i]<=57)
            }
            cout<<"Total Alphabelt="<<digit;

        }
        
        

        /*
        ### Output ###
        Enter any string:
        nemo@net.com
        Total Alphabelt=10

        */

```

<img>


 </details>





 <hr>

 <details><summary>COUNT ONLY SPECIAL SYMBOL IN A STRING </summary>

```

    #include <iostream>
    #include <string.h>
    using namespace std;
    int main()
        {
            char s[200];
            int ss=0;
            cout<<"Enter any string:\n";
            gets(s);
            for(int i=0;s[i]!='\0';i++)
            {
                if((s[i]>=65&&s[i]<=90) || (s[i]>=97&&s[i]<=122)) 
                {}
                else if(s[i]>=48&&s[i]<57)
                {}
                else
                ss++;
            }
                cout<<"Total Special Symbol ="<<ss;
        }
        

        /*
        ### Output ###
        Enter any string:
        nemo@net.com
        Total Special Symbol =2

        */

```

<img>


 </details>




 <hr>

 <details><summary> COUNT TOTAL NUMBER SPACE IN A SENTENCE </summary>

```

    #include <iostream>
    #include <string.h>
    using namespace std;
    int main()
        {
            char s[200];
            int space=0;
            cout<<"Enter any string:\n";
            gets(s);
            for(int i=0;s[i]!='\0';i++)
            {
                if(s[i]=='')
                space++;
            }
                cout<<"Total space in this sentence ="<<space;
        }
        

        /*
        ### Output ###
        Enter any string:
        my name is nemonet and i am a programmer
        Total space in this sentence =8

        */

```

<img>


 </details>



 <hr>

 <details><summary> COUNT NUMBER OF VOWEL AND CONSONENT IN A STRING </summary>

```

    #include <iostream>
    #include <string.h>
    using namespace std;
    int main()
        {
            char s[200];
            int vowel=0,constant=0;
            cout<<"Enter any string\n";
            gets(s);
            for(int i=0;s[i]!='\0';i++)
            {
                if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
                vowel++;
                else
                consonent++;
            }
            cout<<"\nTotal Vowel="<<vowel<<" and Consonent="<<consonent;
        }


        /*
        ### Output ###
        Enter any string
        NemonetTYP

        Total Vowel=3 and Consonent=7
        */

```

<img>


 </details>







<br><br><br>


**Note:**
 - Give a STAR if you like this 
 - FORK to get more update
 - Make a PULL REQUEST to countribute



