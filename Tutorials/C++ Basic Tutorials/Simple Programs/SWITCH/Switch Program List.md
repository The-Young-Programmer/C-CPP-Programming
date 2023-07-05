# Switch Program List in C++

**Note:**
 - Give a STAR if you like this 
 - FORK to get more update
 - Make a PULL REQUEST to countribute

<br>

*Put your phone on Desktop mode for easy access*

<br>


 <hr>

 <details><summary>INPUT ANY NUMBER AND PRINT DAY OF WEEK</summary>

    ```

    #include <iostream>
    using namespace std;
    int main()
        {
            int no;
            cout<<"Enter any number\n";
            cin>>no;
            switch(no)
            {
                case 1:
                 cout<<"Monday";
                 break;
                case 2:
                 cout<<"Tuesday";
                 break;
                case 3:
                 cout<<"Wednesday";
                 break;
                case 4:
                 cout<<"Thursday";
                 break;
                case 5:
                 cout<<"Friday";
                 break;
                case 6:
                 cout<<"Saturday";
                 break;
                case 7:
                 cout<<"Sunday";
                 break;
                default:
                 cout<<"Invalid Input";
            }
        }


        /*
        ### Output ###
        Enter any number
        2
        Tuesday
        */

    ```

<img>


 </details>



 <hr>

 <details><summary>INPUT ANY NUMBER AND PRINT MONTH, NAME AND NUMBER OF DAYS</summary>

    ```

   #include <iostream>
    using namespace std;
    int main()
        {
            int no;
            cout<<"Enter any number\n";
            cin>>no;
            switch(no)
            {
                case 1:
                 cout<<"January-31";
                 break;
                case 2:
                 cout<<"February-28/29";
                 break;
                case 3:
                 cout<<"March-31";
                 break;
                case 4:
                 cout<<"April-30";
                 break;
                case 5:
                 cout<<"May-31";
                 break;
                case 6:
                 cout<<"June-30";
                 break;
                case 7:
                 cout<<"July-31";
                 break;
                case 8:
                 cout<<"August-31";
                 break;
                case 9:
                 cout<<"September-30";
                 break;
                case 10:
                 cout<<"October-31";
                 break;
                case 11:
                 cout<<"November-30";
                 break;
                case 12:
                 cout<<"December-31";
                 break;
                default:
                 cout<<"Invalid Input";
            }
        }


        /*
        ### Output ###
        Enter any number
        3
        March-31
        */

    ```

<img>


 </details>



 <hr>

 <details><summary>CHECK ALPHABELT IS CONSONENT OR VOWEL METHOD 1</summary>

    ```

    #include <iostream>
    using namespace std;
    int main()
        {
            char ch;
            cout<<"Enter any alphabelt\n";
            cin>>ch;
            switch(ch)
            {
                case 'a':
                 cout<<"vowel";
                 break;
                case 'e':
                 cout<<"vowel";
                 break;
                case 'i':
                 cout<<"vowel";
                 break;
                case 'o':
                 cout<<"vowel";
                 break;
                case 'u':
                 cout<<"vowel";
                 break;
                default:
                 cout<<"Consonent";
            }
        }


        /*
        ### Output ###
        Enter any number
        m
        Consonent
        */

    ```

<img>


 </details>



 <hr>

 <details><summary>CHECK ALPHABELT IS CONSONENT OR VOWEL METHOD 2</summary>

    ```

    #include <iostream>
    using namespace std;
    int main()
        {
            char ch;
            cout<<"Enter any alphabelt\n";
            cin>>ch;
            switch(ch)
            {
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                 cout<<"vowel";
                 break;
                default:
                 cout<<"Consonent";
            }
        }


        /*
        ### Output ###
        Enter any number
        o
        vowel
        */

    ```

<img>


 </details>




 <hr>

 <details><summary>SIMPLE CALCULATOR PROGRAM</summary>

    ```

    #include <iostream>
    using namespace std;
    int main()
        {
            float x,y;
            cout<<"Enter first number\n";
            cin>>x;
            cout<<"Enter second number\n";
            cin>>y;
            cout<<"Enter\n+ for add\n- for sub\n* for multiply\n/ for div\n";
            cin>>ch;
            switch(ch)
            {
                case '+':
                 cout<<"Add="<<(x+y);
                 break;
                case '-':
                 cout<<"Sub="<<(x-y);
                 break;
                case '*':
                 cout<<"Multiply="<<(x*y);
                 break;
                case '/':
                 cout<<"Div="<<(x/y);
                 break;
                default:
                 cout<<"Invalid Input!!!";
            }
        }


        /*
        ### Output ###
        Enter first number
        45
        Enter second number
        5
        Enter
        + for add
        - for sub
        * for multiply
        / for div

        +
        Add=50.0
        
        */


    ```

<img>


 </details>



 <hr>

 <details><summary>SIMPLE ATM PROGRAM</summary>

    ```

    #include <iostream>
    using namespace std;
    int main()
        {
            float amt,creditamt,debitamt;
            char ch;
            cout<<"Enter initial amount\n";
            cin>>amt;
            cout<<"Enter\nc for credit\nd for debit\nb for balance\n";
            cin>>ch;
            switch(ch)
            {
                case 'c':
                 cout<<"Enter credit amount\n";
                 cin>>creditamt;
                 amt=amt+creditamt;
                 cout<<"New Amount="<<amt;
                 break;
                case 'd':
                 cout<<"Enter debit amount\n";
                 cin>>debitamt;
                 if(amt>=debitamt)
                 {
                    amt=amt+debitamt;
                    cout<<"New Amount="<<amt;
                 }
                 else
                 cout<<"Insufficient amount";
                 break;

                case 'b':
                 cout<<"Amount in your account="<<amt;
                 break;
                default:
                 cout<<"Invalid Input!!!";
            }
        }


        /*
        ### Output ###
        Enter initial amount
        5000
        Enter
        c for credit
        d for debit
        b for balance
        d 
        
        Enter debit amount
        2000
        New Amountt=3000.0
        
        
        */


    ```

<img>


 </details>






<br><br><br>

**Note:**
 - Give a STAR if you like this 
 - FORK to get more update
 - Make a PULL REQUEST to countribute






