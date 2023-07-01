# Structured Program List C++

**Note:**
 - Give a STAR if you like this 
 - FORK to get more update
 - Make a PULL REQUEST to countribute

<br>

### Put your phone in Desktop mode for easy access

<br>


 <hr>

 <details><summary>INPUT NAME ROLLNO AND MARKS OF STUDENT AND PRINT USING STRUCTURE</summary>

```

        #include <iostream>
        #include <string.h>
        using namespace std;
        struct Student
           {
                char name[200];
                int rollno;
                float marks;
            };
            int main()
            {
                struct Student obj;
                strcpy(obj.name,"Nemonet TYP");
                obj.rollno=205;
                obj.marks=85.4;
                cout<<"Name="<<obj.name<<"\n";
                cout<<"Rollno="<<obj.rollno<<"\n";
                cout<<"Marks="<<obj.marks<<"\n";
            }


            ### output ###
            Name=Nemonet TYP
            Rollno=205
            Marks=85.4


```

<img>


 </details>



 <hr>

 <details><summary>ADDITION PROGRAM USING STRUCTURE</summary>

 ```

    #include <iostream>
    #include <string.h>
    using namespace std;
    struct Arithmetic
    {
        int x;
        int y;
        int z;
    };
    int main()
    {
        struct Arithmetic obj;
        obj.y=20;
        obj.z=50;
        obj.x=obj.y+obj.z;
        cout<<"Add="<<obj.x;
    }
        


    ### output ###
    Add=70


```

<img>


 </details>



 <hr>

 <details><summary>USER INPUT IN STRUCTURE</summary>

```

    #include <iostream>
    #include <string.h>
    using namespace std;
    struct Arithmetic
    {
        int x;
        int y;
        int z;
    };
    int main()
    {
        struct Arithmetic obj;
        cout<<"Enter first number\n";
        cin>>obj.y;
        cout<<"Enter second number\n";
        cin>>obj.z;
        obj.x=obj.y+obj.z;
        cout<<"Add="<<obj.x;
    }



    ### output ###
    Enter first number
    45
    Enter second number
    55
        Add=100



```

<img>


 </details>



 <hr>

 <details><summary>SUBTRACTION PROGRAM USING STRUCTURE</summary>

```

    #include <iostream>
    #include <string.h>
    using namespace std;
    struct Arithmetic
    {
        int x;
        int y;
        int z;
    };
    int main()
    {
        struct Arithmetic obj;
        cout<<"Enter first number\n";
        cin>>obj.y;
        cout<<"Enter second number\n";
        cin>>obj.z;
        obj.x=obj.y-obj.z;
        cout<<"Sub="<<obj.x;
    }
        


    ### output ###
    Enter first number
    65
    Enter second number
    45
        Sub=20


```

<img>


 </details>



 <hr>

 <details><summary>MULTIPLICATION PROGRAM USING STRUCTURE</summary>

```

    #include <iostream>
    #include <string.h>
    using namespace std;
    struct Arithmetic
    {
        int x;
        int y;
        int z;
    };
    int main()
    {
        struct Arithmetic obj;
        cout<<"Enter first number\n";
        cin>>obj.y;
        cout<<"Enter second number\n";
        cin>>obj.z;
        obj.x=obj.y*obj.z;
        cout<<"Multiply="<<obj.x;
    }
        


    ### output ###
    Enter first number
    6
    Enter second number
    5
        Multiply=30


 ```

<img>


 </details>




 <hr>

 <details><summary>DIVISION PROGRAM USING STRUCTURE</summary>

```

    #include <iostream>
    #include <string.h>
    using namespace std;
    struct Arithmetic
    {
        float x;
        float y;
        float z;
    };
    int main()
    {
        struct Arithmetic obj;
        cout<<"Enter first number\n";
        cin>>obj.y;
        cout<<"Enter second number\n";
        cin>>obj.z;
        obj.x=obj.y/obj.z;
        cout<<"Div="<<obj.x;
    }
        


    ### output ###
    Enter first number
    60
    Enter second number
    5
        Div=12


```

<img>


 </details>




 <hr>

 <details><summary>POINTERS TO STRUCTURE PRROGRAM</summary>

```

    #include <iostream>
    #include <string.h>
    using namespace std;
    struct Student
        {
            int rollno;
        };
        int main()

        {
            struct Student obj_roll;
            obj_roll.rollno=205;
            struct Student*r;
            r=&obj_roll;
            cout<<"Roll number="<<*r;

        }


        ### output ###

        Roll number=205


```

<img>


 </details>





 <hr>

 <details><summary>ARRAY TO STRUCTURE PROGRAM</summary>

```

    #include <iostream>
    #include <string.h>
    using namespace std;
    struct ArrayToStruct
        {
            int x;
        };
        int main()
        {
            struct ArrayToStruct obj_array[5];
            cout<<"Enter 5 value one by one\n";
            for(int i=0;i<5;i++)
            cin>>obj_array[i].x;
            cout<<"Element is given below\n";
            for(int j=0;j<5;j++)
            cout<<obj_array[j].x<<"";
        }


        ### output ###
        Enter 5 value one by one
        10
        40
        50
        70
        90
        Element is given below
        10 40 50 70 90

        

```

<img>


 </details>



<br><br><br>



**Note:** 
 - This Tutorial is mainly Practical.
 - Give a STAR if you like this 
 - FORK to get more update
 - Make a PULL REQUEST to countribute










