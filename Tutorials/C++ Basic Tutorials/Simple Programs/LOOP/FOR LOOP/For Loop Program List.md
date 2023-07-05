# For Loop Program List

**Note:**
 - Give a STAR if you like this 
 - FORK to get more update
 - Make a PULL REQUEST to countribute

<br>

*Put your phone in desktop mode for easy access*

<br>


 <hr>

 <details><summary>PRINT TABLE OF 1</summary>

    ```

    #include <iostream>
    using namespace std;
    int main()
        {
            for(int i=1;i<=10;i++)
            {
                cout<<i<<"\n";
            }
        }


        /*
        ### Output ###
        1
        2
        3
        4
        5
        6
        7
        8
        9
        10
        */

    ```

<img>


 </details>



 <hr>

 <details><summary>PRINT TABLE OF ANY NUMBER</summary>

    ```

    #include <iostream>
    using namespace std;
    int main()
        {
            int no;
            cout<<"Enter any number\n";
            cin>>no;
            for(int i=1;i<=10;i++)
            {
                cout<<i*no<<"";
            }
        }


        /*
        ### Output ###
        Enter any number
        5
        5 10 15 20 25 30 35 40 45 50
        */





    ```

<img>


 </details>



 <hr>

 <details><summary>PRINT ALL NATURAL NO. FROM 1 TO N</summary>

    ```

    #include <iostream>
    using namespace std;
    int main()
        {
            int no;
            cout<<"Enter any number\n";
            cin>>no;
            cout<<"Natural no. from 1 to "<<no<<" is given below\n";
            for(int i=1;i<=no;i++)
            {
                cout<<i<<"";
            }
            
        }


        /*
        ### Output ###
        Enter any number
        8
        Natural no. from 1 to 8 is given below
        1 2 3 4 5 6 7 8 
        */

    ```

<img>


 </details>


 <hr>

 <details><summary>PRINT ALL NATURAL NO. FROM 1 TO N IN REVERSE ORDER</summary>

    ```

    #include <iostream>
    using namespace std;
    int main()
        {
            int no;
            cout<<"Enter any number\n";
            cin>>no;
            cout<<"Natural no. from "<<no<<" to 1 is given below\n";
            for(int i=1;i>=no;i--)
            {
                cout<<i<<"";
            }
            
        }


        /*
        ### Output ###
        Enter any number
        8
        Natural no. from 1 to 8 is given below
        8 7 6 5 4 3 2 1 
        */

    ```

<img>


 </details>




 <hr>

 <details><summary>PRINT SUM OF NATURAL NO. FROM 1 TO N</summary>

    ```

    #include <iostream>
    using namespace std;
    int main()
        {
            int no,sum=0;
            cout<<"Enter any number\n";
            cin>>no;
            cout<<"Natural no. from 1 to "<<no<<" is given below\n";
            for(int i=1;i<=no;i++)
            {
                cout<<i<<"";
                sum=sum+i;
            }
            cout<<"\nTotal sum="<<sum;
        }


        /*
        ### Output ###
        Enter any number
        8
        Natural no. from 1 to 8 is given below
        1 2 3 4 5 6 7 8 
        Total sum=36
        */
    ```

<img>


 </details>



 <hr>

 <details><summary>PRINT ABC ..... Z (METHOD 1)</summary>

    ```

    #include <iostream>
    using namespace std;
    int main()
        {
            for(char ch='A';ch<='Z';ch++>)
            {
                cout<<ch<<"";
            }
        }


        /*
        ### Output ###
        A B C D E F G H I J K L M N O P Q R S T U V W X Y Z 
        */

    ```

<img>


 </details>




 <hr>

 <details><summary>PRINT ABC ..... Z (METHOD 2: USING ASCII VALUE)</summary>

    ```

    #include <iostream>
    using namespace std;
    int main()
        {
           for(int i=65;i<=90;i++)
           {
            cout<<(char)i<<"";
           }
        }


         /*
        ### Output ###
        A B C D E F G H I J K L M N O P Q R S T U V W X Y Z 
        */

    ```

<img>


 </details>





 <hr>

 <details><summary>PRINT a b c d .... z (METHOD 1)</summary>

    ```

    #include <iostream>
    using namespace std;
    int main()
        {
             for(char ch='a';ch<='z';ch++>)
            {
                cout<<ch<<"";
            }
        }


        /*
        ### Output ###
        a b c d e f g h i j k l m n o p q r s t u v w x y z 
        */


    ```

<img>


 </details>




 <hr>

 <details><summary>PRINT a b c d .... z (METHOD 2: USING ASCII VALUE)</summary>


    ```

    #include <iostream>
    using namespace std;
    int main()
        {
            for(int i=97;i<=122;i++)
           {
            cout<<(char)i<<"";
           }
        }


        
        /*
        ### Output ###
        a b c d e f g h i j k l m n o p q r s t u v w x y z 
        */

    ```

<img>


 </details>



 <hr>

 <details><summary>PRINT ALL EVEN NO. BETWEEN 1 AND 2O (METHOD 1)</summary>

    ```

    #include <iostream>
    using namespace std;
    int main()
        {
            cout<<"Even number b/w 1 and 20 is given below\n";
            for(int i=2;i<=20;i=i+2)
            {
                cout<<i<<"";
            }
        }


          /*
        ### Output ###
        Even number b/w 1 and 20 is given below
        2 4 6 8 10 12 14 16 18 20 
        */

    ```

<img>


 </details>




 <hr>

 <details><summary>PRINT ALL EVEN NO. BETWEEN 1 AND 2O (METHOD 2)</summary>

    ```

    #include <iostream>
    using namespace std;
    int main()
        {
            cout<<"Even number b/w 1 and 20 is given below\n";
            for(int i=1;i<=20;i=i+1)
            {
                if(i%2==0)
                cout<<i<<"";
            }
        }


          /*
        ### Output ###
        Even number b/w 1 and 20 is given below
        2 4 6 8 10 12 14 16 18 20 
        */

    ```

<img>


 </details>




 <hr>

 <details><summary>PRINT ALL ODD NO. BETWEEN 1 AND 2O (METHOD 1)</summary>

    ```

    #include <iostream>
    using namespace std;
    int main()
        {
            cout<<"Odd number b/w 1 and 20 is given below\n";
            for(int i=1;i<=20;i=i+2)
            {
                cout<<i<<"";
            }
        }


          /*
        ### Output ###
        Odd number b/w 1 and 20 is given below
        1 3 5 7 9 11 13 15 17 19 
        */

    ```

<img>


 </details>



 <hr>

 <details><summary>PRINT ALL ODD NO. BETWEEN 1 AND 2O (METHOD 2)</summary>

    ```

    #include <iostream>
    using namespace std;
    int main()
        {
            cout<<"Odd number b/w 1 and 20 is given below\n";
            for(int i=1;i<=20;i=i+1)
            {
                if(i%2!=0)
                cout<<i<<"";
            }
        }


          /*
        ### Output ###
        Odd number b/w 1 and 20 is given below
        1 3 5 7 9 11 13 15 17 19 
        */

    ```

<img>


 </details>



 <hr>

 <details><summary>PRINT ACII VALUE OF ALPHABET FROM A TO Z</summary>

    ```

    #include <iostream>
    using namespace std;
    int main()
        {
            for(char ch='A';ch<='Z';ch++)
            {
                cout<<ch<<"="<<(int)ch<<"\n";
            }
        }


          /*
        ### Output ###
        A=65
        B=66
        C=67
        D=68
        E=69
        F=70
        G=71
        H=72
        I=73
        J=74
        K=75
        L=76
        M=77
        N=78
        O=89
        P=80
        Q=81
        R=82
        S=43
        T=54
        U=85
        V=86
        W=87
        X=88
        Y=89
        Z=90

        */

    ```

<img>


 </details>



 <hr>

 <details><summary>FIND FACTORIAL OF ANY NUMBER</summary>

    ```

    #include <iostream>
    using namespace std;
    int main()
        {
            int no,f=1;
            cout<<"Enter any number\n";
            cin>>no;
            for(int i=1;i<=no;i++)
            {
                f=f*i;
            }
            cout<<"Factorial="<<f;
        }


          /*
        ### Output ###
        Enter any number
        6
        Factorial=720
        */

    ```

<img>


 </details>



 <hr>

 <details><summary>FIND FACTOR OF ANY NUMBER</summary>

    ```

    #include <iostream>
    using namespace std;
    int main()
        {
            int no;
            cout<<"Enter any number\n";
            cin>>no;
            cout<<"Factor is given below\n";
            for(int i=1;i<=no;i++)
            {
                if(no%i==0)
                cout<<i<<"";
            }
        }


          /*
        ### Output ###
        Enter any number
        8
        Factor is given below
        1 2 4 8 
        */

    ```

<img>


 </details>




 <hr>

 <details><summary>FIND POWER OF ANY NUMBER</summary>

    ```

    #include <iostream>
    using namespace std;
    int main()
        {
            int b,p,f=1;
            cout<<"Enter base\n";
            cin>>b;
            cout<<"Enter power\n";
            cin>>p;
            for(int i=1;i<=p;i++)
            {
                f=f*b;
            }
            cout<<"Result="<<f;
        }


          /*
        ### Output ###
        Enter base
        2
        Enter power
        5 
        Result=32
        */

    ```

<img>


 </details>



 <hr>

 <details><summary>LCM OF TWO NUMBER </summary>

    ```

    #include <iostream>
    using namespace std;
    int main()
        {
            int no1,no2,m=1;
            cout<<"Enter first number\n";
            cin>>no1;
            cout<<"Enter second number\n";
            cin>>no2;
            for(int i=no1;;i++)
            {
                if(i%no1==0&&i%no2==0)
                {
                    m=i;
                    break;
                }
            }
            cout<<"LCM of "<<no1<<" and "<<no2<<" is "<<m;
        }


          /*
        ### Output ###
        Enter first number
        4
        Enter second number
        6 
        LCM of 4 and 6 is 12
        */

    ```

<img>


 </details>




 <hr>

 <details><summary>HCF OF TWO NUMBER </summary>

    ```

    #include <iostream>
    using namespace std;
    int main()
        {
            int no1,no2,m=1;
            cout<<"Enter first number\n";
            cin>>no1;
            cout<<"Enter second number\n";
            cin>>no2;
            for(int i=1;i<=no1;i++)
            {
                if(i%no1==0&&i%no2==0)
                {
                    m=i;
                }
            }
            cout<<"HCF of "<<no1<<" and "<<no2<<" is "<<m;
        }


          /*
        ### Output ###
        Enter first number
        16
        Enter second number
        624
        HCF of 16 and 24 is 8
        */

    ```

<img>


 </details>




 <hr>

 <details><summary>CHECK NUMBER IS PRIME OR NOT </summary>

    ```

    #include <iostream>
    using namespace std;
    int main()
        {
            int no,m=0;
            cout<<"Enter any number\n";
            cin>>no;
            for(int i=2;i<=no-1;i++)
            {
                if(no%i==0)
                {
                    cout<<"Number is not prime";
                    m=i;
                    break;
                }
            }
            if(m==0)
            cout<<"Number is prime";
        }


          /*
        ### Output ###
        Enter any number
        43
        Number is prime
        */

    ```

<img>


 </details>




 <hr>

 <details><summary>PRINT PRIME NUMBER BETWEEN 1 TO N </summary>

 **Note:** This is a 'C' code, click <a href="../../../../C%20Basic%20Tutorials/README.md">here </a>to get started with 'C Programming Language'

    ```

    #include <stdio.h>
    int main()
        {
            int n,m,num:
            printf("Enter any number you want to print prime number upto\n");
            scanf("%d",&num):
            printf("Prime number between 1 and %d is given below\n",num);
            for(int i=1;i<=num;i++)
            {
                n=1,m=0;
                for(int j=2;<=n-1;j++)
                {
                    if(n%j==0)
                    {
                        m=1;
                        break;
                    }
                }
                    if(m==0)
                    printf("%d",n);
                
            }
           
        }


          /*
        ### Output ###
        Enter any number you want to print prime number upto
        20
        Prime number between 1 and 20 is given below
        1 2 3 5 7 11 17 19 
        */

    ```

<img>


 </details>





 <hr>

 <details><summary>FABON ACCI SERIES</summary>

    ```

    #include <iostream>
    using namespace std;
    int main()
        {
            int no,a,b=1,c=0;
            cout<<"Enter any number upto you want to print fabonacci series\n";
            cin>>no;
            for(int i=1;i<=no;i++)
            {
                cout<<c<<"";
                a=b;
                b=c;
                c=a+b;
                    
            }
        }


          /*
        ### Output ###
        Enter any number upto you want to print fabonacci series
        8
        0 1 1 2 3 5 8 13 
        */

    ```

<img>


 </details>


<br><br><br>


**Note:**
 - Give a STAR if you like this 
 - FORK to get more update
 - Make a PULL REQUEST to countribute







