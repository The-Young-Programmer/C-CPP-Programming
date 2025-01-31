# Pointer Program List

**Note:**
 - Give a STAR if you like this 
 - FORK to get more update
 - Make a PULL REQUEST to countribute
  

<br>

*Put your phone in desktop mode for easy access*

<br>


 <hr>

 <details><summary>ADDITION OF TWO NUMBER</summary>

    ```

    #include <iostream>
    using namespace std;
    int main()
        {
            int a,b=20,c=30;
            int *p,*q,*r;
            p=&a;
            q=&b;
            r=&c;
            *p=*q+*r;
            cout<<"Add="<<*p;
        }


        /*
        ### Output ###
        Add=50
        */

    ```

<img>


 </details>



 <hr>

 <details><summary>USER INPUT IN POINTER</summary>

    ```

    #include <iostream>
    using namespace std;
    int main()
        {
            float a,b,c;
            float *p,*q,*r;
            p=&a;
            q=&b;
            r=&c;
            cout<<"Enter first number\n";
            cin>>*q;
            cout<<"Enter second number\n";
            cin>>*r;
            *p=*q+*r;
            cout<<"Add="<<*p;
        }


        /*
        ### Output ###
        Enter first number
        65
        Enter second number
        45
        Add=110

        */

    ```

<img>


 </details>



 <hr>

 <details><summary>SUBTRACTION OF TWO NUMBER</summary>

    ```

    #include <iostream>
    using namespace std;
    int main()
        {
            int a,b=50,c=30;
            int *p,*q,*r;
            p=&a;
            q=&b;
            r=&c;
            *p=*q-*r;
            cout<<"Sub="<<*p;
        }


        /*
        ### Output ###
        Sub=20

        */

    ```

<img>


 </details>


 <hr>

 <details><summary>MULTIPLICATION OF TWO NUMBER</summary>

    ```

    #include <iostream>
    using namespace std;
    int main()
        {
            int a,b=20,c=30;
            int *p,*q,*r;
            p=&a;
            q=&b;
            r=&c;
            *p=*q**r;
            cout<<"Multiply="<<*p;
        }


        /*
        ### Output ###
        Multiply=600

        */

    ```

<img>


 </details>




 <hr>

 <details><summary>DIVISION OF TWO NUMBER</summary>

    ```

    #include <iostream>
    using namespace std;
    int main()
        {
            float a,b=210,c=30;
            float *p,*q,*r;
            p=&a;
            q=&b;
            r=&c;
            *p=*q/*r;
            cout<<"Div="<<*p;
        }


        /*
        ### Output ###
        Div=7

        */

    ```

<img>


 </details>



 <hr>

 <details><summary>TABLE OF ONE</summary>

    ```

    #include <iostream>
    using namespace std;
    int main()
        {
            int i=1;
            int *p;
            p=&i;
            while(*p<=10)
            {
                cout<<*p<<"\n";
                (*p)++;
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

 <details><summary>POINTER TO ARRAY</summary>

    ```

    #include <iostream>
    using namespace std;
    int main()
        {
            int ar[10]={10,20,50,40,60,80,70,25,45,65};
            for(int i=0;i<=9;i++)
            {
                cout<<*(ar+i)<<"\n";
            }
        }


        /*
        ### Output ###
        10
        20
        50
        40
        60
        80
        70
        25
        45
        65

        */

    ```

<img>


 </details>





 <hr>

 <details><summary>POINTER TO FUNCTION</summary>

    ```

    #include <iostream>
    using namespace std;
    void area(int *h,int *w)
        {
            int ar=*h* *w;
            cout<<"Area of rectangle="<<ar;
        }
        int main()
        {
            int x,y;
            cout<<"Enter height\n";
            cin>>x;
            cout<<"Enter width\n";
            cin>>y;
            area(&x,&y);
        }

        /*
        ### Output ###
        Enter height
        12
        Enter width
        13
        Area of rectangle=156

        */

    ```

<img>


 </details>




 <hr>

 <details><summary>POINTER TO STRUCTURE</summary>


    ```

    #include <iostream>
    using namespace std;
    struct Student
        {
            int rollno;
        };
        int main()
        {
            struct Student obj_roll;
            obj_roll.rollno=205;
            struct Student *r;
            r=&obj_roll;
            cout<<"Roll number="<<*r;
        }

        /*
        ### Output ###
        Roll number=205
        
        */

    ```

<img>


 </details>


<br><br><br>

**Note:**
 - Give a STAR if you like this 
 - FORK to get more update
 - Make a PULL REQUEST to countribute
