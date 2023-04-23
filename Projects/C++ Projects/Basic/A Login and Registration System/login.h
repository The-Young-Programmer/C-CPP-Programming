// Autor : Nemonet TYP
// Title: A Login and Registration System Programmed in C++
// PROJECT FOR C/C++ PROGRAMMING TUTORIAL


#pragma once
#include <string.h>
using namespace std;

class login
{
private:
    void DrunkGame();
    void DeleteLine(string username);

public:
    void Login();
    void Registration();
    void ForgotPassword();
};
