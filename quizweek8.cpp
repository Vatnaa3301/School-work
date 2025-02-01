#include <iostream>
#include <iomanip>
using namespace std;
int main(){
system("cls");
int id;
string name;
int age;
char gender;
string contact;
float score1,score2,score3,score4,totalscore,average;
 cout<<"==========>>input student<<===========";
 cout <<"\tEnter Student ID : ";
 cin >>id;
 cout <<"\tEnter Name : ";
 cin >>name;
 cout <<"\tGender : ";
 cin >>gender;
 cout <<"\tEnter Contact : ";
 cin >>contact;
 cout <<"\t Score 1 : ";
 cin >>score1;
 cout <<"\t Score 2 : ";
 cin >>score2;
 cout <<"\t score 3 : ";
 cin >>score3;
 cout <<"\t Score 4 : ";
 cin >>score4;

totalscore = score1 + score2 + score3 + score4;
average = totalscore/4;
if (average > 100){
    cout <<"\tError"<<endl;
    return 0;
}
else if (average >=90){
    cout <<"\t Grade : A ";
}
else if (average >=80){
    cout <<"\tGrade : B ";
}
else if (average >=70){
    cout <<"\tGrade : C ";
}
else if (average >=60){
    cout <<"\tGrade : D ";
}
else if (average >=50){
    cout <<"\tGrade : E ";
}
else if (average <50){
    cout <<"\tGrade : F "<<endl;
}
 cout <<"\tTotal = "<<totalscore<<endl;
 cout <<"\tAverage = "<<average;

return 0;
}