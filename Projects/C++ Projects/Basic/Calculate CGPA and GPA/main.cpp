/*This C++ PROGRAM is developed by NemonET TYP and 
special right is given to TEAM TYP for educational purpose  */
//Don't copy source code without permission


#include <iostream>
#include <stdlib.h>
#include <vector>
#include <string>

using namespace std;

void calculateGPA();
void calculateCGPA();
void method();
void inputValidation(int& input, int lowerInputLeveler, int aboveInputLeveler, const string& labelMessage);

int main()
{
    system("cls");
    int input;
    int aboveLabel = 4;
    int lowerLabel = 1;
    cout<<"--------------------------------------------------------------------------"<<endl;
    cout<<"                    GPA & CGPA Calculator (Developed by Nemo)             "<<endl;
    cout<<"--------------------------------------------------------------------------\n"<<endl;
    cout<<"            MENU:"<<endl;
    cout<<"                   1. Calculate GPA (Grade Point Average)"<<endl;
    cout<<"                   2. Calculate CGPA (Cummulative Grade Point Average)"<<endl;
    cout<<"                   3. Method that is applied here for calclating GPA & CGPA"<<endl;
    cout<<"                   4. Exit Application"<<endl;
    cout<<"--------------------------------------------------------------------------"<<endl;
        cout << "Enter your choice: ";
        inputValidation(input, lowerLabel, aboveLabel, "Ente your choice");
        switch (input)
        {
        case 1:
            calculateGPA();
            break;

        case 2:
            calculateCGPA();
            break;
        case 3:
            method();
            break;
        case 4:
            exit(EXIT_SUCCESS);
            break;
        }
    }

void calculateGPA()
{
    int q;
    system("cls");
    //in this case the validation is not made to label rather the size of array,  we make the lower 1 because we cannot calculate anything for 0 subjects
    int lowerArraysizePossible = 1;
    int bigArraySizePossible = numeric_limits<int>::max();
    int lowerGrade = 0;
    int aboveGrade = 4;
    int lowerCredit = 0;
    int aboveCredit = 10;
    cout<<"-------------- GPA Calculating -----------------"<<endl;
    cout<<" How many subject's points do you want to calculate? : ";
    inputValidation(q, lowerArraysizePossible, bigArraySizePossible, "how many subject's points do you want to calculate");

    vector<int> credit(q);
    vector<int> point(q);

    cout<<endl;
    for(int i=0;i<q;i++)
    {
        cout<<"Enter the credit for the subject "<<i+1<<": ";
        inputValidation(credit[i], lowerGrade, aboveGrade, "Enter the credit for the subject");
        cout<<endl;
        cout<<"Enter the point of the subject "<<i+1<<": ";
        inputValidation(point[i], lowerGrade, aboveGrade, "Enter the point for the subject");
        cout<<"-----------------------------------\n\n"<<endl;
    }

    float sum=0;
    float tot;
    for(int j=0;j<q;j++)
    {
        tot=credit[j]*point[j];
        sum=sum+tot;
    }

    float totCr=0;
    for(int k=0;k<q;k++)
    {
        totCr=totCr+credit[k];
    }

    cout<<"\n\n\nTotal Points: "<<sum<<" . Total Credits: "<<totCr<<" .Total GPA: "<<sum/totCr<<" ."<<endl;
    //there are 3 labeles to be validated
    int lowerLabeler = 1;
    int higherLabeler = 4;
    int inmenu;
    cout<<"\n\n\n1. Calculate Again"<<endl;
    cout<<"2. Go Back to Main Menu"<<endl;
    cout<<"3. Exit This App \n\n"<<endl;
    cout<<"Your Input: "<<endl;
    inputValidation(inmenu, lowerLabeler, higherLabeler, "Your label input");

    switch(inmenu)
    {
        case 1:
                calculateGPA();
                break;
        case 2:
                main();
                break;
        case 3:
                exit(EXIT_SUCCESS);
    }
}
void calculateCGPA()
{
    system("cls");
    //the validation parameter for the semister size and the grade input 
    int lowerSemisterSizePossible = 2;
    int higherSemisterSizePossible = numeric_limits<int>::max();
    int lowerGradePossible = 0;//(f)
    int higherGradePossible = 4;//(A);
    int l;
    cout<<"-------------- CGPA Calculating -----------------\n\n"<<endl;
    cout<<"How many semester results do you want input? :";
    inputValidation(l, lowerSemisterSizePossible, higherSemisterSizePossible, "how many semseter results do you want input");
    cout<<"\n\n"<<endl;
    vector<int> semrs(l);
    int i;

    for(i=0;i<l;i++)
    {
        cout<<" Enter Semester "<<i+1<<" Result(GPA): ";
        inputValidation(semrs[i], lowerGradePossible, higherGradePossible, "Result CGPA");
        cout<<"\n"<<endl;
    }

    float semtot=0;
    for(int j=0;j<l;j++)
    {
        semtot=semtot+semrs[j];
    }

    //the validation paramater for the label
    int lowerLabel = 1;
    int aboveLabel = 3;

    cout << "******** Your CGPA is " << semtot / l << " **********" << endl;
    int inmenu;
    cout<<"\n\n\n1. Calculate Again"<<endl;
    cout<<"2. Go Back to Main Menu"<<endl;
    cout<<"3. Exit This App \n\n"<<endl;
    cout<<"Your Input: "<<endl;
    inputValidation(inmenu, lowerLabel, aboveLabel, "your label input");

    switch(inmenu)
    {
        case 1:
                calculateCGPA();
                break;
        case 2:
                main();
                break;
        case 3:
                exit(EXIT_SUCCESS);
    }

}

void method()
{
    //since there are only two leveles that are (go back to mainmenu and exit app)
    int lowerLabel = 1;
    int aboveLabel = 2;
    system("cls");
    cout<<"--------------- Method of Calculating GPA & CGPA ---------------\n\n"<<endl;
    cout<<" GPA= Sum of (Credit*Point) / total of credits \n"<<endl;
    cout<<" CGPA=  Sum of GPA / number of semesters "<<endl;
    cout<<"-----------------------------------------------------------------\n\n"<<endl;

    int inmenu;
    cout<<"1. Go Back to Main Menu"<<endl;
    cout<<"2. Exit This App \n\n"<<endl;
    cout<<"Your Input: "<<endl;
    inputValidation(inmenu, lowerLabel, aboveLabel, "your label input");

    switch(inmenu)
    {
        case 1:
                main();
                break;
        case 2:
                exit(EXIT_SUCCESS);
    }
};

void inputValidation(int& input, int lowerBound, int upperBound, const std::string& labelMessage) {
    while (true) {
        if (std::cin >> input) {
            if (input >= lowerBound && input <= upperBound) {
                break; 
            }
            else {
                std::cout << "Please enter a number between " << lowerBound << " and " << upperBound << " (" << labelMessage << ")" << std::endl;
            }
        }
        else {
            std::cout << "Invalid input. Please enter a valid number (" << labelMessage << ")" << std::endl;
            std::cin.clear(); 
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  
        }
    }
}
