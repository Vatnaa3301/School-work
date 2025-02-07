#include <iostream>
using namespace std;

int main() {
    system("cls");
    int student;
    int id;
    string name;
    string contact;
    int age;

    cout <<"\t\t>>>>>Welcome to the Programming<<<<<"<<endl<<endl;
    cout <<"\t\tHow many students do you want to input : ";
    cin >> student;
    for (int i = 1;i<=student;i++){
         cout <<"\n\t\tEnter student id :";
         cin >> id;
         cout <<"\n\t\tEnter student name :";
         cin>>name;
         cout <<"\n\t\tEnter student contact :";
         cin >> contact;
         cout <<"\n\t\tEnter student age :";
         cin >> age;
         cout <<endl;
         cout <<"\t\tThe student No : "<<i+1<<endl;
         cout <<"\t\tThe student ID : "<<id<<endl;
         cout <<"\t\tThe sudent Name : "<<name<<endl;
         cout <<"\t\tThe student Age : "<<age <<endl;
         cout <<"\t\tThe student Contace : "<<contact<<endl;

    }
    return 0;
}