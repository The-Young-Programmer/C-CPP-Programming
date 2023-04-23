// Autor : Nemonet TYP
// Title: Encryption and Decryption project in C++
// PROJECT FOR C/C++ PROGRAMMING TUTORIAL


#include <iostream>  
 using namespace std;  

  int main()  
  {  
    int i, x;  
    char str[100];  
    
    cout << "Please enter a string\t";  
    cin >> str;  
    
    cout << "nPlease choose following options\n";  
    cout << "1 = Encrypt the string\n";  
    cout << "2 = Decrypt the string\n";  
    cin >> x;  
    
    //using switch case statements  
    switch(x)  
    {  
     //first case for encrypting a string  
     case 1:  
       for(i = 0; (i < 100 && str[i] != ' '); i++)  
        str[i] = str[i] + 2; //the key for encryption is 3 that is added to ASCII value  
    
       cout << "\nEncrypted string: " << str << endl;  
       break;  
    
     //second case for decrypting a string  
     case 2:  
       for(i = 0; (i < 100 && str[i] != ' '); i++)  
       str[i] = str[i] - 2; //the key for encryption is 3 that is subtracted to ASCII value  
    
     cout << "\nDecrypted string: " << str << endl;  
     break;  
    
     default:  
       cout << "n\Invalid Input !!!\n";  
    }  
    return 0;  
  }  
