<h1 align="center">
 
 [![cpplogo](https://user-images.githubusercontent.com/79866006/201166543-0b1e6f30-ccd3-4273-b34c-5f3e553d04d3.png)](https://c-cpp-programming.netlify.app/)
 [![clogo](https://user-images.githubusercontent.com/79866006/201166594-6ee56de7-caea-4a5a-9289-71c109791ef2.png)](https://c-cpp-programming.netlify.app/)

 Introduction to C/C++ Programming for Beginners
</h1>

<p align="center">
<img src="https://img.shields.io/badge/C%2B%2B-00599C?style=flat&logo=c%2B%2B&logoColor=white">
<img src="https://img.shields.io/badge/C-00599C?style=flat&logo=c&logoColor=white"><br><br>
<a href="#">
<img src="https://travis-ci.org/github/github.svg" alt="Build Status">
</a>
  <img src="https://img.shields.io/github/license/The-Young-Programmer/C-CPP-Programming-Project?logo=gnu">
<img src="https://img.shields.io/github/stars/The-Young-Programmer/C-CPP-Programming-Project?logo=github">
<img src="https://img.shields.io/github/issues/The-Young-Programmer/C-CPP-Programming-Project?logo=github">
<img src="https://komarev.com/ghpvc/?username=C-CPP-Programming-Project&label=Visitors&color=0e75b6&style=flat"/> 
<a href="https://github.com/The-Young-Programmer/C-CPP-Programming-Project/issues">
<img src="https://img.shields.io/badge/contributions-welcome-brightgreen.svg?style=flat">
</a>
</p>

<p align="center">
 <a href="#"><img src="https://img.shields.io/badge/Udemy-EC5252?style=flat&logo=Udemy&logoColor=white"></a>
 <a href="#"><img src="https://img.shields.io/badge/W3school-brightgreen?style=flat&logo=W3school&logoColor=brightgreen"></a>
 <a href="#"><img src="https://img.shields.io/badge/Tutorials-Point-blue?style=flat&logo=tutorials-point&logoColor=blue"></a>


 ## Contents : 
 
Visit <a href="https://c-cpp-programming.netlify.app/" target="_blank"> here </a> for full course

`> Click the drop-down to view the outline`

<details><summary>Introduction</summary>
 
  - [Introduction to C++](#introduction-to-c++)
 
  - [Introduction to C](#introducion-to-c)
 
  - [Differences](#differences) 
 
  - [Compiler](#compiler)
 
</details>

<details><summary>C++ Basics</summary>
 
  - [Syntax](#syntax)
 
  - [Comments](#comments)
 
  - [Variables](#variables) 
 
  - [Data Types](#data-types)
 
  - [Operators](#operators)
 
  - [IF Statement](#if-statement) 
 
  - [Switch](#switch)
 
  - [Loop Type](#loop-type)
 
  - [Pointer](#pointer)
 
  - [Arrays](#arrays)
 
  - [Functons](#functions)
 
  - [Structure](#structure)
 
  - [File Handling](#file-handling)
 
</details>

<details><summary>C++ Advance</summary>
  Visit <a href="https://c-cpp-programming.netlify.app/" target="_blank"> here </a> for full course
</details>

<details><summary>C Basics</summary>
 
 - [Syntax](#syntax)
 
  - [Comments](#comments)
 
  - [Variables](#variables) 
 
  - [Data Types](#data-types)
 
  - [Operators](#operators)
 
  - [IF Statement](#if-statement) 
 
  - [Switch](#switch)
 
  - [Loop Type](#loop-type)
 
  - [Pointer](#pointer)
 
  - [Arrays](#arrays)
 
  - [Functons](#functions)
 
  - [Structure](#structure)
 
  - [File Handling](#file-handling)
 
</details>

<details><summary>C Advance</summary>
  Visit <a href="https://c-cpp-programming.netlify.app/" target="_blank"> here </a> for full course
</details>
 
 
<details><summary>Simple C/C++ Projects</summary>
 
  - [Bank Management system ](https://github.com/The-Young-Programmer/C-CPP-Programming-Project/tree/main/Bank%20Management%20System)
 
  - [Basic Calculator (GUI)](https://github.com/The-Young-Programmer/C-CPP-Programming-Project/tree/main/Basic%20Calculator%20(GUI))
 
  - [Hotel Management System](https://github.com/The-Young-Programmer/C-CPP-Programming-Project/tree/main/Hotel%20Management%20System) 
 
  - [Sci. Calculator (GUI)](https://github.com/The-Young-Programmer/C-CPP-Programming-Project/tree/main/Sci.%20Calculator%20(GUI))
 
  - [Tic-Tac-Toe game](https://github.com/The-Young-Programmer/C-CPP-Programming-Project/tree/main/Tic-Tac-Toe%20game)
 
</details>


   - [How To Contribute](#how-to-contribute)
   - [Contributors](#contributors)
   - [Info](#info)



<a id="introduction-to-c++"></a>
<br><br><br><br>
 <img src="https://img.shields.io/badge/C%2B%2B-00599C?style=flat&logo=c%2B%2B&logoColor=white">
 
## Introduction to C++

<p><b>What is C++ Programming Language ?</b>

* C++ is a cross-platform language that can be used to create high-performance applications.

* C++ was developed by Bjarne Stroustrup, as an extension to the C language.

* The language was updated 4 major times in 2011, 2014, 2017, and 2020 to C++11, C++14, C++17, C++20.

* C++ is fun and easy to learn!

* As C++ is close to C# and Java, it makes it easy for programmers to switch to C++ or vice versa.
 </p>

### C++ compiler /IDE 

<p>
 To start using C++, you need two things:

- A text editor, like Notepad, to write C++ code
- A compiler, like GCC, to translate the C++ code into a language that the computer will understand

An IDE (Integrated Development Environment) is used to edit AND compile the code.

Popular IDE's include:
 `Code::Blocks`, `Eclipse`, and `Visual Studio`.
 These are all free, and they can be used to both edit and debug C++ code.

I will be using `Code::Blocks` in this Project, which I believe is a good place to start.

You can find the latest version of Codeblocks at http://www.codeblocks.org/. 

Download the `mingw-setup.exe file`, which will install the text editor with a compiler.
</p>

### Quick Start :

<p>

- Let's create our first C++ file.
- Open **Codeblocks** and go to File > New > Empty File.
- Write the following C++ code and save the file as **myfirstprogram.cpp** (File > Save File as):


```
// myfirstprogram.cpp

#include <iostream>
using namespace std;

int main() {
  cout << "Hello World!";
  return 0;
}
```


- In Codeblocks, it should look like this:

<img src="https://www.w3schools.com/cpp/codeblocks2.png">


- Then, go to Build > Build and Run to run (execute) the program. 
- **Congratulations!** You have now written and executed your first C++ program.

</p>

<a id="introducion-to-c"></a>
<hr><br><br>

<img src="https://img.shields.io/badge/C-00599C?style=flat&logo=c&logoColor=white">

## Introduction to C

<p><b>What is C Programming Language ?</b>


* C is a general-purpose programming language created by Dennis Ritchie at the Bell Laboratories in 1972.

* It is a very popular language, despite being old.

* C is strongly associated with UNIX, as it was developed to write the UNIX operating system.

**NOTE**
C and C++ uses the same compiler and IDE
</p>

### Quick Start :

<p>

- Let's create our first C file.
- Open **Codeblocks** and go to File > New > Empty File.
- Write the following C code and save the file as **myfirstprogram.c** (File > Save File as):

```
// myfirstprogram.c


#include <stdio.h>

int main() {
  printf("Hello World!");
  return 0;
}
```
 
<a id="differences"></a>
 <hr><br><br>
 
## Differences between <img src="https://img.shields.io/badge/C-00599C?style=flat&logo=c&logoColor=white"> and <img src="https://img.shields.io/badge/C%2B%2B-00599C?style=flat&logo=c%2B%2B&logoColor=white"> 

* C++ was developed as an extension of C, and both languages have almost the same syntax.

* The main difference between C and C++ is that C++ support classes and objects, while C does not.


 <a id="compiler"></a>
 <hr><br><br>
 
 ## C++/C Compiler on different OS
 
 
 <p><b>For Windodws, Linux and MacOS</b><br>

* Install `code::blocks` by going to there oficial website, <a href="www.codeblocks.org/downloads/">Code Blocks</a>
 </p>
 <p>
  <b>For Andriod OS</b><br>

* Install `C4Droid` on playstore, <a href="https://play.google.com/store/apps/details?id=com.n0n3m4.droidc">C4Droid</a>
  </p>
 <p>
  <b>For IOS</b><br>

* Visit Appstore and download <a href="https://apps.apple.com/us/app/c-c-program-compiler/id1160868782">C/C++ Program Compiler</a>
 </p>
 
 <!--
  <hr><br><br>
  <a id="syntax"></a>
 <h2 align="center">C++ Basic <img src="https://img.shields.io/badge/C%2B%2B-00599C?style=flat&logo=c%2B%2B&logoColor=white"></h2>
 
 

### C++ Syntax
 
1. Let's break up the following code to understand it better:
 
 ```
 #include <iostream>
using namespace std;

// main() is where program execution begins.
int main() {
   cout << "Hello World"; // prints Hello World
   return 0;
}
 ```
 
 <b>Example Explained:</b>
  
**Line 1:**  `#include <iostream>` is a header file library that lets us work with input and output objects, such as cout (used in line 5). Header files add functionality to C++ programs.

 **Line 2:**  `using namespace std` means that we can use names for objects and variables from the standard library.
  
 **Line 3:**  A blank line. C++ ignores white space. But we use it to make the code more readable.

 **Line 4:**  Another thing that always appear in a C++ program, is `int main()`. This is called a function. Any code inside its curly brackets {} will be executed.

 **Line 5:**  `cout` (pronounced "see-out") is an object used together with the insertion operator (<<) to output/print text. In our example it will output "Hello World".

 **Note:**  Every C++ statement ends with a semicolon ;.

 **Note:**  The body of `int main()` could also been written as:
``` int main () { cout << "Hello World! "; return 0; } ```

 **Remember:**  The compiler ignores white spaces. However, multiple lines makes the code more readable.

 **Line 6:**  `return 0` ends the main function.

 **Line 7:**  Do not forget to add the closing curly bracket `}` to actually end the main function.
 
 <br>

#### Escape Sequence in C++
 
| Escape Sequence            |                    Description                |
| -------------------------- | :-------------------------------------------: |
| \n   or  endl              |    To insert a new line or to break lines     |
| \n\n                       |         create a blank line                   |
|      \t                    |         Creates a horizontal tab              |
|       \\                   |   Inserts a backslash character (\)           |
|         \"                 |         Inserts a double quote character      | 

 
  <a id="comment"></a>
 <hr><br><br>
 
 ## Comment in C++
 
 * Comments can be used to explain C++ code, and to make it more readable. 
 * It can also be used to prevent execution when testing alternative code.
 * Comments can be singled-lined or multi-lined.
 
 1. Single-line comments start with two forward slashes (//).
 
 ```
 // This is a comment
cout << "Hello World!";
 ```
 
 2. Multi-line comments start with /* and ends with */.
 
 ```
 /* The code below will print the words Hello World!
to the screen, and it is amazing */
cout << "Hello World!";
 ```
 
  <a id="variables"></a>
 <hr><br><br>
 
## Variables in C++
 
1. **Variables are containers for storing data values.**

In C++, there are different types of variables (defined with different keywords), for example:

* `int` - stores integers (whole numbers), without decimals, such as 123 or -123
* `double` - stores floating point numbers, with decimals, such as 19.99 or -19.99
* `char` - stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes
* `string` - stores text, such as "Hello World". String values are surrounded by double quotes
* `bool` - stores values with two states: true or false
 
2. **To create a variable, specify the type and assign it a value:**

 `type variableName = value;`
 
 **Note:** Where `type` is one of C++ types (such as `int`), and `variableName` is the name of the variable (such as x or myName). The equal sign is used to assign values to the variable.
 
 **Example 1**

Create a variable called x of type int and assign it the value 15:
```
#include <iostream>
using namespace std;

int main() {
  int myNum = 15;
  cout << myNum;
  return 0;
}

```

**Example 2**

To add a variable to another variable, you can use the + operator:
```
#include <iostream>
using namespace std;

int main() {
  int x = 5;
  int y = 6;
  int sum = x + y;
  cout << sum;
  return 0;
}
```
 
3. **Variable Declaration: Rules to declare a variable**

 * The first letter of a variable should be alphabet or underscore (_)
 * The first letter of a variable should not be digit
 * Names are case sensitive (`myVar` and `myvar` are different variables)
 * After first character it may be a combination of alphabets and digits
 * Blank sapces are not allowed in varaibles name
 * Variable name should not be a keyword
 
 
4. **To declare more than one variable of the same type, use a comma-separated list:**
 
```
#include <iostream>
using namespace std;

int main() {
  int x = 5, y = 6, z = 50;  
  cout << x + y + z;
  return 0;
}

```
 
 5. **Constants in C++:**
 
* When you do not want others (or yourself) to override existing variable values, use the `const` keyword (this will declare the variable as **"constant"**, which means unchangeable and read-only)
* You should always declare the variable as constant when you have values that are unlikely to change
 
 ```
 const int minutesPerHour = 60;
const float PI = 3.14;
 ```
 
  <a id="data-types"></a>
 <hr><br><br>
 
 ## Data Types
 
 * As explained in the <a id="variables">Variables</a> chapter, a variable in C++ must be a specified data type
 * The data type specifies the size and type of information the variable will store
 
 ```
 #include <iostream>
#include <string>
using namespace std;
 
int main () {
  // Creating variables
  int myNum = 5;               // Integer (whole number)
  float myFloatNum = 5.99;     // Floating point number
  double myDoubleNum = 9.98;   // Floating point number
  char myLetter = 'D';         // Character
  bool myBoolean = true;       // Boolean
  string myString = "Hello";   // String
   
  // Print variable values
  cout << "int: " << myNum << "\n";
  cout << "float: " << myFloatNum << "\n";
  cout << "double: " << myDoubleNum << "\n";
  cout << "char: " << myLetter << "\n";
  cout << "bool: " << myBoolean << "\n";
  cout << "string: " << myString << "\n";
 
  return 0;
}

 ```
 
 
#### Basic Data Types in C++
 
| Data Type        |   Size        |             Description                                                                                        |
| ---------------- | :------------:|:-------------------------------------------------------------------------------------------------------------: |
| `boolean`        |     1 byte    |                         Stores true or false values                                                            |
| `char`           | 1 byte        |                         Stores a single character/number                                                       |
|  `int`           | 2 or 4 bytes  |                   Stores whole numbers, without decimals                                                       |
| `float`          | 4 bytes       |  Stores fractional numbers, containing one or more decimals. Sufficient for storing 7 decimal digits           |
| `double`         | 8 bytes       |       Stores fractional numbers, containing one or more decimals. Sufficient for storing 15 decimal digits     | 
 
 
 <a id="operators"></a>
 <hr><br><br>
 
 ## Operators in C++
 
 * **Operator:** Its a special symbol use to perform logical or mathematical operation on data or variables.
 * **Operand:** Its a data type or variable on which the operation is to be performed.
 * **Types of Operator:**
   - [Arithmetic Operators](#operators1)
   - [Relational Operators](#operators2)
   - [Logiacl Operators](#opeartors3)
   - [Assignment Operators](#operators4)
   - [Bitwise Operators](#operators5)
   - [Increment/Decrement Operators](#operators6)
   - [Conditinal Operators](#operators7)
   - [Special Operators](#operators8)
 
 #### <a id="operators1">Arithmetic Operators</a>
 
 | Symbol        |   Operations       |  Example        |
| -------------- | :-----------------:|:--------------: |
|      +         |      Addition      |    x+y          |
|       -        |     Subtraction    |     x-y         |
|      *         |   Multiplication   |       x*y       |
|       /        |      Division      |     x/y         |
|        %       |      Modulus       |      x%y        | 
 
 ```
 #include <iostream>
using namespace std;
int main() {
  int x = 5,y = 3;
  cout<<(x+y)<<"\n";
  cout<<(x-y)<<"\n";
  cout<<(x*y)<<"\n";
  cout<<(x/y)<<"\n";
  cout<<(x%y)<<"\n";//%(modulus) holds remainder
  return 0;
}
 
 ```
 
 #### <a id="operators2">Relational Operators</a> 
 
 
 | Symbol        |   Operations       |  Example        |
| -------------- | :-----------------:|:--------------: |
|      ==        |      Equal to      | 2==3 returns 0  |
|      !=        |     Not equal to   | 2!=3 returns 1  |
|      >         |   Greater than     | 2>3 returns 0   |
|       <        |      Less than     |  2<3 returns 1  |
|       >=       |  Greater than or equal to | 2>=3 returns 0 | 
|       <=       |  Less than or equal to    | 2<=3 returns 1 |
 
 
 #### <a id="operators3">Logiacl Operators</a>
 
  | Symbol        |   Operations       |  Example        |
| --------------- | :-----------------:|:---------------:|
|     `&&`        |      Logical AND   |  if(x>y&&x>z)   |
|      `II`       |      Logical OR    |    if(x>y||x>z) |
|      `!`        |      Logical NOT   |    if(!(x>y))   |
 
  
|                 |                                                                                                                                  |
| --------------- |:-------------------------------------------------------------------------------------------------------------------------------: |
| (x>y)&&(x>z)    |                  Here this espression returns `true` if both conditions are `true`                                               |
| (x>y)II(x>z)    |                         Here this esppression returns `true` if any one or both conditions are `true`                            |
|  !(x>y)         |  Not operator reversse the state, means if the condition is `true` it reurns `false` and if the condition is `false` it returns `true`|

 ```
 #include <iostream>
using namespace std;
int main() {
  int x=10,y50,z=30;
  if(x>y&&x>z)
  cout<<" x is greatest";
  if(y>x&&y>z)
  cout<<" y is greatest";
  if(z>x&&z>y)
  cout<<" z is greatest";
 }
 ```
 
 #### <a id="operators4">Assignment Operators</a>
 
 
 
 
 #### <a id="operators5">Bitwise Operators</a>
 
 #### <a id="operators6">Increment/Decrement Operators</a>
 
 
 #### <a id="operators7">Conditinal Operators</a>
 
 #### <a id="operators8">Special Operators</a>
 
 
 
 <a id="if-statement"></a>
 <hr><br><br>
 
 ## IF Statement 
 -->
 
 
  <a id="how-to-countribute"></a>
  <hr><br>
 
 ## How to Countribute:
 
 - Just fork the project and clone it into your machine
 - Then make your countribution and upload it to your fork repository
 - Then click on pull request
 
 
 
  <a id="countributors"></a>
 <br>
 
 ## Countributors
 
 - <a href="https://github.com/The-Young-Programmer/" target="_blank"> The Young Programmer </a>
 - <a href="https://github.com/Samuel-de-Oliveira" target="_blank"> Samuel de Oliveira </a>
 
 
  <a id="info"></a>
 <br>
 
 ## Info
 
 <p align="center">Join our <a href="https://github.com/TYP-Coding-Class/community/issues/new?assignees=&labels=github-invitation&template=invitation.yml&title=Please+invite+me+to+the+community">GitHub Organization :octocat:</a> and continue to contribute to our Open Source Software ✨</p>
<img src="https://user-images.githubusercontent.com/73097560/115834477-dbab4500-a447-11eb-908a-139a6edaec5c.gif">

<p align="center"><strong>Connect With Us</strong></p>
<p align="center"> 
<!--<a href="#"><img src="https://img.icons8.com/color/48/000000/telegram-app--v1.png"/></a>-->
&nbsp;
<!--<a href="#"><img alt="discord_logo" 
src="https://discord.com/assets/3437c10597c1526c3dbd98c737c2bcae.svg" width="40" height="50"/></a>-->
&nbsp;
<a href="https://twitter.com/TNemonet"><img src="https://img.icons8.com/color/48/000000/twitter--v1.png"/></a>
&nbsp;
<a href="https://github.com/The-Young-Programmer"><img src="https://img.icons8.com/fluency/48/000000/github.png"/></a>
&nbsp;
<a href="https://www.linkedin.com/in/typ-nemonet"><img src="https://img.icons8.com/fluency/48/000000/linkedin.png"/></a>
&nbsp;
<!--<a href="#"><img src="https://img.icons8.com/color/48/000000/youtube-play.png"/></a>-->
&nbsp;
<a href="https://www.instagram.com/invites/contact/?i=tpssan2t0kkn&utm_content=3zo4x47""><img src="https://img.icons8.com/color/48/000000/instagram-new.png"/></a>
</p>
 
 
 
 
