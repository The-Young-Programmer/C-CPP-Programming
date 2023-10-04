# C++ If Program List

**Note:**
 - Give a STAR if you like this 
 - FORK to get more update
 - Make a PULL REQUEST to countribute

<br><br>


 <hr>

 <details><summary>GREATER VALUE IN 2 NUMBER</summary>

    ```

    #include <iostream>
    using namespace std;
    int main()
        {
            int f,s;
            cout<<"Enter first number\n";
            cin>>f;
            cout<<"Enter second number\n";
            cin>>s;
            if(f>s)
            cout<<"First number is greater";
            if(f<s)
            cout<<"Second number is greater";
            if(f==s)
            cout<<"Both are equal";
        }

    ```

<img> ### Output Img ###


 </details>




 <hr>

 <details><summary>GREATER VALUE IN 3 NUMBER</summary>

    ```

    #include <iostream>
    using namespace std;
    int main()
        {
            int a,b,c;
            cout<<"Enter first number\n";
            cin>>a;
            cout<<"Enter second number\n";
            cin>>b;
            cout<<"Enter third number\n";
            cin>>c;
            if(a>b&&a>c)
            cout<<a<<" is greater";
            if(b>a&&b>c)
            cout<<b<< is greater";
            if(c>a&&c>b)
            cout<<c<< is greater";
        }

    ```

<img> ### Output Img ###


 </details>





 <hr>

 <details><summary>CHECK IF A NUMBER IS +ve or -ve or 0</summary>

    ```

    #include <iostream>
    using namespace std;
    int main()
        {
            int no;
            cout<<"Enter any number\n";
            cin>>no;
            if(no>0)
            cout<<no<<" is +ve";
            if(no<0)
            cout<<no<< is -ve";
            if(n0==0)
            cout<<no<< is zero";
        }

    ```

<img> ### Output Img ###


</details>




 <hr>

 <details><summary>SHOW RESULT ACCORDING TO PEERCENT</summary>

    ```

    #include <iostream>
    using namespace std;
    int main()
        {
            float p;
            cout<<"Enter your percent\n";
            cin>>p;
            if(p<=100&&p>=80)
            cout<<"First class";
            if(p<80&&p>=65)
            cout<<"Second class upper";
            if(p<65&&p>=55)
            cout<<"Second class lower";
            if(p<55&&p>=45)
            cout<<"Pass";
            if(p<45)
            cout<<"Fail";
        }

    ```

<img>  ### Output Img ###


 </details>



 <hr>

 <details><summary>EVEN ODD PROGRAM</summary>

    ```

    #include <iostream>
    using namespace std;
    int main()
        {
            int no;
            cout<<"Enter any number\n";
            cin>>no;
            if(no%2==0)
            {
                cout<<"Even";
            }
            else
            {
                cout<<"Odd";
            }
        }

    ```

<img> ### Output Img ###


 </details>



 <hr>

 <details><summary>VOTING PROGRAM</summary>

    ```

    #include <iostream>
    using namespace std;
    int main()
        {
            int age;
            cout<<"Enter your age\n";
            cin>>age;
            if(age>18)
            {
                cout<<"You're eligible for voting";
            }
            else
            {
                cout<<"You're not eligible for voting";
            }
        }

    ```

<img> ### Output Img ###


 </details>




 <hr>

 <details><summary>CONSTANT OR VOWEL PROGRAM</summary>

    ```

    #include <iostream>
    using namespace std;
    int main()
        {
            char ch;
            cout<<"Enter any alphabet\n";
            cin>>ch;
            if(ch=='a'||ch=='e'|ch=='i'|ch=='o'|ch=='u')
            {
                cout<<"Vowel";
            }
            else
            {
                cout<<"Constant";
            }
        }

    ```

<img> ### Output Img ###


 </details>




 <hr>

 <details><summary>AREA OF SQUARE</summary>

    ```

    #include <iostream>
    using namespace std;
    int main()
        {
            char u[200]="nemo@net.com",p[200]="nemonet";
            char u1[200],p1=[200];
            cout<<"Enter username\n";
            cin>>u1;
            cout<<"Enter password\n";
            cin>>p1;
            if(strcmp(u,u1)==0&&strcmp(p,p1)==0)
            {
                cout<<"Login Successful";
            }
            else
            {
                cout<<"Wrong username or password";
            }
        }

    ```

<img> ### Output Img ###


 </details>




 <hr>

 <details><summary>CHECK ALPHABET IS UPPERCASE OR LOWEWRCASE</summary>

    ```

    #include <iostream>
    using namespace std;
    int main()
        {
            char ch;
            cout<<"Enter any alphabet\n";
            cin>>ch;
            if(ch>=65&&ch<=90)
            {
                cout<<"Uppercase";
            }
            else
            {
                cout<<"Lowercase";
            }
        }

    ```

<img> ### Output Img ###


 </details>





 <hr>

 <details><summary>CHECK IF A TRIANGLE IS VALID OR NOT</summary>

    ```

    #include <iostream>
    using namespace std;
    int main()
        {
            float a1,a2,a3;
            cout<<"Enter first angle\n";
            cin>>a1;
            cout<<"Enter second angle\n";
            cin>>a2;
            cout<<"Enter third angle\n";
            cin>>a3;
            if((a1+a2+a3)==180)
            {
                cout<<"Triangle is valid";
            }
            else
            {
                cout<<"Triangle is not valid";
            }
        }

    ```

<img> ### Output Img ###


 </details>




 <hr>

 <details><summary>CALCULATE PROFIT AND LOSS</summary>

    ```

    #include <iostream>
    using namespace std;
    int main()
        {
            float sp,cp,profit,loss;
            cout<<"Enter cost price\n";
            cin>>cp;
            cout<<"Enter selling price\n";
            cin>>sp;
            if(sp>cp)
            {
                profit=sp-cp;
                cout<<"Profit of "<<profit<<" $";
            }
            else
            {
                loss=cp-sp;
                cout<<"Loss of "<<loss<<" $";
            }
            
        }

    ```

<img> ### Output Img ###


 </details>



 <hr>

 <details><summary>SHOW RESULT ACCORDING TO PERCENT USING IF ELSE</summary>

    ```

    #include <iostream>
    using namespace std;
    int main()
        {
            float p;
            cout<<"Enter your percent\n";
            cin>>p;
            if(p>=60)
            cout<<"First division";
            else if(p>=45)
            cout<<"Second division";
            else if(p>=33)
            cout<<"Third division";
            else
            cout<<"Fail";
        }

    ```

<img> ### Output Img ###


 </details>




 <hr>

 <details><summary>GREATER VALUE IN 3 NUMBER USING IF ELSE STATEMENT</summary>

    ```

    #include <iostream>
    using namespace std;
    int main()
        {
            int a,b,c;
            cout<<"Enter first number\n";
            cin>>a;
            cout<<"Enter second number\n";
            cin>>b;
            cout<<"Enter third number\n";
            cin>>c;
            if(a>b&&a>c)
            cout<<a<<" is greater";
            else if(b>a&&b>c)
            cout<<b<< is greater";
            else
            cout<<c<< is greater";
        }

    ```

<img> ### Output Img ###


 </details>





 <hr>

 <details><summary>CHECK IF CHARACTER IS ALPHABET OR DIGIT OR SPECIAL SYMBOL</summary>

    ```

    #include <iostream>
    using namespace std;
    int main()
        {
            char ch;
            cout<<"Enter any chracter\n";
            cin>>ch;
            if(ch>=65&&ch<=90||ch>=97&&ch<=122)
            cout<<"It is Alphabet";
            else if(ch>=48&&ch<=57)
            cout<<"It is Digit";
            else
            cout<<"It is Special symbol";
        }

    ```

<img> ### Output Img ###


 </details>





 <hr>

 <details><summary>CONVERT UPPERCASE INTO LOWERCASE AND LOWERCASE INTO UPPERCASE</summary>

    ```

    #include <iostream>
    using namespace std;
    int main()
        {
            char ch;
            cout<<"Enter any alphabet\n";
            cin>>ch;
            if(ch>=65&&ch<=97)
            cout<<(char)(ch+32);
            else
            cout<<(char)(ch-32);
        }

    ```

<img> ### Output Img ###


 </details>
<hr>




<br><br>

**NoteNote:**
 - Give a STAR if you like this 
 - FORK to get more update
 - Make a PULL REQUEST to countribute













