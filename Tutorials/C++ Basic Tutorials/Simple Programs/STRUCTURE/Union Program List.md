# Union Program List C++

**Note:**
 - Give a STAR if you like this 
 - FORK to get more update
 - Make a PULL REQUEST to countribute

<br><br>


 <hr>

 **NOTE**
 - Union is approximately same as structure but it does not support multiple value simultaneously
 - It supports only one value at a time
 - It always support last value
 - In given example only marks will be true because marks is the last value assigned to it




```

        #include <iostream>
        #include <string.h>
        using namespace std;
        union Student
           {
                char name[200];
                int rollno;
                float marks;
            };
            int main()
            {
                union Student obj;
                strcpy(obj.name,"Nemonet TYP");
                obj.rollno=205;
                obj.marks=85.4;
                cout<<"Name="<<obj.name<<"\n";
                cout<<"Rollno="<<obj.rollno<<"\n";
                cout<<"Marks="<<obj.marks<<"\n";
            }


            ### output ###
            Name=garbage
            Rollno=garbage
            Marks=85.4


```

<img>

<br><br><br>



**Note:** 
 - This Tutorial is mainly Practical.
 - Give a STAR if you like this 
 - FORK to get more update
 - Make a PULL REQUEST to countribute










