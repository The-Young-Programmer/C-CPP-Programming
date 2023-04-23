#include <iostream>
#include <fstream>
#include <string.h>
#include <vector>
#include <functional>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include "login.h"
using namespace std;

void login::Login()
{
    string count;
    string username, password, id, recordPass, recordSecurity;
    system("cls");
    cout << "\n\t\t\t Please enter the username and password: " << endl;
    cout << "\t\t\t USERNAME: ";
    cin >> username;
    cout << "\t\t\t PASSWORD: ";
    cin >> password;

    string loginHash = password;
    hash<string> mystdhash;
    int loginHashPassword = mystdhash(loginHash);

    ifstream input("data.txt");

    while (input >> id >> recordPass >> recordSecurity)
    {
        if (id == username && stoi(recordPass) == loginHashPassword)
        {
            count = "1";
            system("cls");
        }
    }
    input.close();
    if (count == "1")
    {
        cout << username << "\nLogin successful!\n";
        string choice = "1";
        while (choice != "2")
        {
            cout << "\t\t\t_____________________________________________\n\n\n";
            cout << "\t\t\t         Welcome to the CS 1021 Login!         \n\n";
            cout << "\t\t\t_______ Currently Logged In: " << username << " ________\n\n";
            cout << "\t\t\t_________           Menu           __________\n\n";
            cout << "\t | Press 1 to PLAY GAME                              |" << endl;
            cout << "\t | Press 2 to LOGOUT                                 |" << endl;
            cout << "\n\t\t\t Please Enter your choice: ";
            cin >> choice;
            cout << endl;

            if (choice == "1")
            {
                system("cls");
                DrunkGame();
            }
            else if (choice == "2")
            {
                system("cls");
                cout << "Logging out" << endl;
            }
            else
            {
                system("cls");
                cout << "Choice invalid, try again";
            }
        }
    }
    else
    {
        system("cls");
        cout << "\n Username or password is incorrect, please try again or register\n";
    }
}

void login::Registration()
{
    string regUser, regPassword, regId, regPass, securityQuestion, regSecure, regCount;
    system("cls");
    cout << "\n\t\t\t Enter Username: ";
    cin >> regUser;
    cout << "\t\t\t Enter Password: ";
    cin >> regPassword;
    cout << "\t\t\t Security Question: What was your favorite childhood movie?: ";
    cin.ignore();
    getline(cin, securityQuestion);

    string hashing = regPassword;
    hash<string> mystdhash;
    int hashPassword = mystdhash(hashing);

    string secureHashing = securityQuestion;
    hash<string> mystdhash2;
    int securityHash = mystdhash2(secureHashing);

    ifstream input("data.txt");
    input.seekg(0, ios::end);

    if (input.tellg() == 0)
    {
        ofstream f1("data.txt", ios::app);
        f1 << regUser << ' ' << hashPassword << ' ' << securityHash << endl;
        system("cls");
        cout << "\n\t\t\t Registration successful!\n";
        return;
    }
    else
    {
        ifstream input("data.txt");
        while (input >> regId >> regPass >> regSecure)
        {
            if (regUser == regId)
            {
                string decision;
                cout << "\n\t\tUsername already taken.\n";
                cout << "\t\tEnter 1 to enter a new one\n";
                cout << "\t\tEnter 2 to go back to the menu\n";
                cout << "\n\t\tEnter choice: ";
                cin >> decision;

                if (decision == "1")
                {
                    Registration();
                }
                else if (decision == "2")
                {
                    system("cls");
                    cout << "\tReturning to menu\n";
                    return;
                }
                else
                {
                    system("cls");
                    cout << "\tInvalid Entry, returning to menu." << endl;
                    return;
                }
            }
            else
            {
                regCount = "1";
            }
        }
        if (regCount == "1")
        {
            ofstream f1("data.txt", ios::app);
            f1 << regUser << ' ' << hashPassword << ' ' << securityHash << endl;
            system("cls");
            cout << "\n\t\t\t Registration successful!\n";
            return;
        }
    }
}

void login::DrunkGame()
{
    srand(time(0));
    const int size = 60;
    cout << "Enter a letter to begin \n ";
    char x;
    cin >> x;
    int position = size / 2;
    while (true)
    {
        cout << "|START|";
        for (int i = 0; i < size; i++)
        {
            if (i == position)
                cout << x;
            else
                cout << " ";
        }
        cout << "|END|" << endl;
        int move = rand() % 3 - 1;
        position = position + move;
        if (position < 1)
        {
            cout << "Guess you were too drunk to make it to the end..." << endl;
            break;
        }
        if (position > size - 1)
        {
            cout << "You might be drunk, but you made it to the end!" << endl;
            break;
        }
        for (int sleep = 0; sleep < 1000000; ++sleep)
            ;
    }
    system("pause");
    system("cls");
}

void login::ForgotPassword()
{
    string forgotChoice, count, secondCount;
    system("cls");
    cout << "\n\t\t\tPress 1 to enter USERNAME\n";
    cout << "\t\t\tPress 2 to go back to MENU\n";
    cout << "\n\t\t\tEnter choice: ";
    cin >> forgotChoice;

    if (forgotChoice == "1")
    {
        string user, userSecurity, forgotId, forgotPass, forgotSecurity;
        int newHashPassword, forgotSecHash;
        system("cls");
        cout << "\n\t\tEnter USERNAME: ";
        cin >> user;
        cout << endl;

        ifstream input("data.txt");
        while (input >> forgotId >> forgotPass >> forgotSecurity)
        {
            if (user == forgotId)
            {
                cout << "\n\t\tUser found\n\t\tSecurity Question: What was your favorite childhood movie?: ";
                cin.ignore();
                getline(cin, userSecurity);
                cout << endl;

                string hashing = userSecurity;
                hash<string> mystdhash;
                forgotSecHash = mystdhash(hashing);

                if (stoi(forgotSecurity) == forgotSecHash)
                {
                    system("cls");
                    string newPass;
                    cout << "\t\tSecurity Question correct\n";
                    cout << "\n\t\tEnter new PASSWORD: ";
                    cin >> newPass;

                    string newPassHash = newPass;
                    hash<string> mystdhash2;
                    newHashPassword = mystdhash2(newPassHash);

                    count = "1";
                    break;
                }
                else
                {
                    string incorrectChoice;
                    system("cls");
                    cout << "\t\tSecurity Question incorrect\n";
                    cout << "\t\tPress 1 to Re-Enter\n\t\tPress 2 to return to MENU\n";
                    cout << "\n\t\tEnter choice: ";
                    cin >> incorrectChoice;

                    if (incorrectChoice == "1")
                    {
                        ForgotPassword();
                    }
                    if (incorrectChoice == "2")
                    {
                        system("cls");
                        cout << "\tReturning to MENU\n";
                        return;
                    }
                    else
                    {
                        system("cls");
                        cout << "\tInvalid answer... Returning to menu\n";
                        return;
                    }
                }
            }
            else
            {
                string newChoice;
                system("cls");
                cout << "\t\tUser not found\n";
                cout << "\t\tPress 1 to Re-Enter USERNAME\n\t\tPress 2 to return to MENU\n";
                cout << "\n\t\tEnter choice: ";
                cin >> newChoice;
                if (newChoice == "1")
                {
                    ForgotPassword();
                }
                else if (newChoice == "2")
                {
                    system("cls");
                    cout << "\tReturning to MENU\n";
                    return;
                }
                else
                {
                    system("cls");
                    cout << "\tChoice invalid... Returning to MENU\n";
                    return;
                }
            }
        }
        input.close();
        if (count == "1")
        {
            DeleteLine(user);
            secondCount = "1";
        }
        if (secondCount == "1")
        {
            ofstream f1("data.txt", ios::app);
            f1 << user << ' ' << newHashPassword << ' ' << forgotSecHash << endl;
            system("cls");
            cout << "\t\t\t Your password has been updated!\n";
            return;
        }
    }
    else if (forgotChoice == "2")
    {
        system("cls");
        cout << "\tReturning to MENU\n";
        return;
    }
    else
    {
        system("cls");
        cout << "\tChoice invalid... Try again\n";
        ForgotPassword();
    }
}

void login::DeleteLine(string userDelete)
{
    string line;
    ifstream myFile;
    myFile.open("data.txt");
    ofstream temp;
    temp.open("temp.txt");
    while (getline(myFile, line))
    {
        if (line.substr(0, userDelete.size()) != userDelete)
        {
            temp << line << endl;
        }
    }
    myFile.close();
    temp.close();
    remove("data.txt");
    rename("temp.txt", "data.txt");
}
