# While Loop Program List

**Note:**
 - Give a STAR if you like this 
 - FORK to get more update
 - Make a PULL REQUEST to countribute

<br>

*Put your phone in desktop mode for easy access*

<br>


 <hr>

 <details><summary>TABLE OF ONE</summary>

    ```

    #include <iostream>
    using namespace std;
    int main()
        {
            int i=1;
            while(i<=10)
            {
                cout<<i<<"\n";
                i++;
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

 <details><summary>PRINT DIGITS OF INTEGER VALUE IN REVERSE ORDER</summary>

    ```

    #include <iostream>
    using namespace std;
    int main()
        {
            int no,b;
            cout<<"Enter any number\n";
            cin>>no;
            cout<<"Revere is given below\n";
            while(no!=0)
            {
                b=no%10;
                cout<<b;
                no=no/10;
            }
        }


        /*
        ### Output ###
        Enter any number
        589
        Revere is given below
        985
        */

    ```

<img>


 </details>



 <hr>

 <details><summary>CHECK NUMBER IS PALINDROME OR NOT</summary>

    ```

    #include <iostream>
    using namespace std;
    int main()
        {
            int no,b,rev=0,cpy;
            cout<<"Enter any number\n";
            cin>>no;
            cpy=no;
            while(no!=0)
            {
                b=no%10;
                rev=rev*10+b;
                no=no/10;
            }
            if(rev==cpy)
            cout<<"Palindrome";
            else
            cout<<"Not Palindrome";
        }


        /*
        ### Output ###
        Enter any number
        5885
        Palindrome
        */

    ```

<img>


 </details>


 <hr>

 <details><summary>FIND SUM OF DIGITS OF INTEGER VALUE</summary>

    ```

    #include <iostream>
    using namespace std;
    int main()
        {
            int no,b,sum=0;
            cout<<"Enter any number\n";
            cin>>no;
           while(no!=0)
            {
                b=no%10;
                sum=sum+b;
                no=no/10;
            }
            cout<<"Total sum of digits="<<sum;
        }


          /*
        ### Output ###
        Enter any number
        785
        Total sum of digits=20
        */

    ```

<img>


 </details>



 <hr>

 <details><summary>MULTIPLY OF DIGITS OF INTEGER NUMBER</summary>

    ```

    #include <iostream>
    using namespace std;
    int main()
        {
            int no,b,m=1;
            cout<<"Enter any number\n";
            cin>>no;
            while(no!=0)
            {
                b=no%10;
                m=m*b;
                no=no/10;
            }
            cout<<"Total multiply of digits="<<m;
        }


          /*
        ### Output ###
        Enter any number
        325
        Total multiply of digits=30
        */

    ```

<img>


 </details>




 <hr>

 <details><summary>PRINT FIRST AND LAST DIGIT OF INTEGER NUMBER</summary>

    ```

    #include <iostream>
    using namespace std;
    int main()
        {
            int no,b,last;
            cout<<"Enter any number\n";
            cin>>no;
           last=no%10;
           while(no!=0)
            {
                b=no%10;
                no=no/10;
            }
            cout<<"First digit="<<b<<" and last digit="<<last;
        }


          /*
        ### Output ###
        Enter any number
        4859
        First digit=4 anda last digit=9
        */

    ```

<img>


 </details>




 <hr>

 <details><summary>CHECK GIVEN NUMBER IS ARMSTRONG NUMBER OR NOT</summary>

    ```

    #include <iostream>
    using namespace std;
    int main()
        {
            int no,b,sum=0,copy;
            cout<<"Enter any number\n";
            cin>>no;
            copy=no;
            while(no!=0)
            {
                b=no%10;
                sum=sum+(b*b*b);
                no=no/10;
            }
            if(copy==sum)
            cout<<"Number is Armstrong";
            else
            cout<<"Number is not Armstrong";
        }


          /*
        ### Output ###
        Enter any number 
        153
        Number is Armstrong
        */

    ```

<img>


 </details>


<br><br><br>


**Note:**
 - Give a STAR if you like this 
 - FORK to get more update
 - Make a PULL REQUEST to countribute







