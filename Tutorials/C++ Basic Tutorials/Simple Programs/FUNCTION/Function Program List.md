# Function Program List in C++

**Note:**
 - Give a STAR if you like this 
 - FORK to get more update
 - Make a PULL REQUEST to countribute

<br><br>


 <hr>

 <details><summary>ADDITION PROGRAM USING FUNCTION </summary>

```

    #include <iostream>
    using namespace std;
    void add()
        {
            int x,y=70,z=50;
            x=y+z;
            cout<<"Add="<<x;
        }
        int main()
        {
            add();
        }


        /*
        ### Output ###
        Add=120
        */

```

<img>


 </details>



 <hr>

 <details><summary>SUBTRACTION PROGRAM USING FUNCTION</summary>

```

    #include <iostream>
    using namespace std;
    void main()
        {
            int x,y=70,z=50;
            x=y-z;
            cout<<"Sub="<<x;
        }
        int main()
        {
            add();
        }


        /*
        ### Output ###
        Sub=20
        */

```

<img>


 </details>



 <hr>

 <details><summary>MULTIPLICATION PROGRAM USING FUNCTION</summary>

```

    #include <iostream>
    using namespace std;
    void ()
        {
            int x,y=70,z=50;
            x=y*z;
            cout<<"Multiply="<<x;
        }
        int main()
        {
            add();
        }


        /*
        ### Output ###
        Multiply=3500
        */

```

<img>


 </details>



 <hr>

 <details><summary>DIVISION PROGRAM USING FUNCTION</summary>

```

    #include <iostream>
    using namespace std;
    int main()
        {
            int x,y=40,z=5;
            x=y/z;
            cout<<"Div="<<x;
        }
        int main()
        {
            add();
        }


        /*
        ### Output ###
        Div=8
        */

```

<img>


 </details>



 <hr>

 <details><summary>RECTANGLE AREA USING FUNCTION</summary>

```

    #include <iostream>
    using namespace std;
    void area(int height,int width)
        {
            int ar=height*width;
            cout<<"Area of rectangle="<<ar;
        }
        int main()
        {
            int h,w;
            cout<<"Enter height\n";
            cin>>h;
            cout<<"Enter width\n";
            cin>>w;
            area(h,w);
        }


        
        /*
        ### Output ###
        Enter height=20
        Enter width=30

        Area of rectangle=600
        */

```

<img>


 </details>



 <hr>

 <details><summary>CIRCLE AREA USING FUNCTION</summary>

```

    #include <iostream>
    using namespace std;
    void area(float radius)
        {
            float ar=3.14*radius*radius;
            cout<<"Area of circle="<<ar;
        }
        int main()
        {
            float r;
            cout<<"Enter radius of circle\n";
            cin>>r;
            area(r);
        }


        /*
        ### Output ###
        Enter radius of circle=2.2
        Area of circle=15.197
        */

```

<img>


 </details>




 <hr>

 <details><summary>FUNCTION WITH NO RETURN TYPE AND NO PRAMETER</summary>

```

    #include <iostream>
    using namespace std;
    void add()
        {
            int x,y=70,z=50;
            x=y+z;
            cout<<"Add="<<x;
        }
        int main()
        {
            add();
        }


        /*
        ### Output ###
        Add=120
        */

```

<img>


 </details>





 <hr>

 <details><summary>FUNCTION WITH NO RETURN TYPE AND WITH PRAMETER</summary>

```

    #include <iostream>
    using namespace std;
    void add(int y,int z)
        {
            int x;
            x=y+z;
            cout<<"Add="<<x;
        }
        int main()
        {
            add(10,20);
        }


        /*
        ### Output ###
        Add=30
        */

```

<img>


 </details>




 <hr>

 <details><summary>FUNCTION WITH RETURN TYPE AND NO PRAMETER</summary>

```

    #include <iostream>
    using namespace std;
    void add()
        {
            int x,y=70,z=50;
            x=y+z;
            return x;
        }
        int main()
        {
            int rs=add();
            cout<<"Add="<<rs;
        }


        /*
        ### Output ###
        Add=120
        */

```

<img>


 </details>



 <hr>

 <details><summary>FUNCTION WITH RETURN TYPE AND PRAMETER</summary>

```

    #include <iostream>
    using namespace std;
    void add(int y,int z)
        {
            int x;
            x=y+z;
            return x;
        }
        int main()
        {
            int rs=add(10,20);
            cout<<"Add="<<rs;
        }


        /*
        ### Output ###
        Add=30
        */

```

<img>


 </details>



 <hr>

 <details><summary>CALL BY VALUE</summary>

```

    #include <iostream>
    using namespace std;
    void add(int y,int z)
        {
            int x;
            x=y+z;
            cout<<"Add="<<x;
        }
        int main()
        {
            add(10,20);
        }


        /*
        ### Output ###
        Add=30
        */

```

<img>


 </details>




 <hr>

 <details><summary>CALL BY REFERENCE</summary>

```

    #include <iostream>
    using namespace std;
    void add(int *y,int *z)
        {
            int x;
            x=*y+*z;
            cout<<"Add="<<x;
        }
        int main()
        {
            int a=20,b=50;
            add(&a,&b);
        }


        /*
        ### Output ###
        Add=70
        */

```

<img>


 </details>



 <hr>

 <details><summary>FUNCTION WITH DEFAULT PARAMETER</summary>

```

    #include <iostream>
    using namespace std;
    void add(int y=10,int z=20)
        {
            int x;
            x=y+z;
            cout<<"Add="<<x<<"\n";
        }
        int main()
        {
            cout<<"Without parameter\n";
            add();
            cout<<"With parameter\n";
            add(40,60);
        }


        /*
        ### Output ###
        Without parameter
        Add=30
        With parameter
        Add=100
        */

```

<img>


 </details>



 
 <hr>

 <details><summary>PASSING ARRAY TO FUNCTION</summary>

```

    #include <iostream>
    using namespace std;
    void array(int arr[5])
        {
            int sum-0;
            cout<<"Element is given below\n";
            for(int i=0;i<=4;i++)
        {
            cout<<arr[i]<<" ";
            sum=sum+arr[i];
        }
            cout<<"\nTotal sum="<<sum;
        }
            int main()
        {
            int b[5];
            cout<<"Enter 5 integer value one by one\n";
            for(int i=0;i<=4;i++)
            cin>>b[i];
            array(b);
        }


        /*
        ### Output ###
        Enter 5 integer value one by one
        10
        50
        60
        70
        90
        Element is given below
        10 50 60 70 90
        Total sum=280
        */

```

<img>


 </details>




 <hr>

 <details><summary>RECURSSION PROGRAM IN FUNCTION</summary>

```

    #include <iostream>
    using namespace std;
    void table(int no)
        {
            if(no!=11)
            {
                cout<<no<<"\n";
                no++;
                table(no);
            }
        }
        int main()
        {
            table(1);
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















<br><br><br>


**Note:**
 - Give a STAR if you like this 
 - FORK to get more update
 - Make a PULL REQUEST to countribute



