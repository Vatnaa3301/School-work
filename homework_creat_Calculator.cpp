#include <iostream>
using namespace std;
int main(){
system ("cls");
cout <<"\t==========>>>Welcome to Calculator<<<=========="<<endl;
start:
double num1,num2;
int Option;
double Answer;
cout <<"\tEnter the First Number : ";
cin >>num1;
cout <<"\tEnter the Second Number : ";
cin >>num2;
cout <<"\tNOTE : chose (1-4)"<<endl<<endl;
cout <<"\t1.Addition (+)"<<endl;
cout <<"\t2.Subtraction (-)"<<endl;
cout <<"\t3.Moltiplication (*)"<<endl;
cout <<"\t4.Division (/)"<<endl<<endl;
cout <<"\tOption : ";
cin >>Option;

switch (Option)
{
case 1: 
    Answer = num1 + num2;
    break;
case 2:
    Answer = num1 - num2;
    break;
case 3:
    Answer = num1 * num2;
    break;
case 4:
    Answer = num1 / num2;
    break;

default:
    cout <<"NO RESULT!"<<endl;
    cout <<"Did you enter (1-4)??";
    
    break;
}
    cout <<"\tResult : "<< Answer << endl<<endl;

goto start;
    return 0;
}