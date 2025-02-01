#include <iostream>
#include <cctype>
using namespace std;
int main() {
system ("cls");
char grade;
cout <<"Enter Grade (A-C) : ";
cin >>grade;
grade = toupper(grade);
switch (grade)
{
case 'A':
    cout <<"Excellent"<<endl;
    break;
case 'B':
    cout <<"Well done"<<endl;
    break;
case 'C':
    cout <<"You Passed"<<endl;
    break;

default:
    cout<<"Invaild grade"<<endl;
    break;
}
cout <<"your grade is : "<<grade<<endl;
   return 0;
}