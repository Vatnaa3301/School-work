#include <iostream>
using namespace std;
int main(){
system ("cls");
int id;
string name;
float price;
string made_in;
int qty;
long payment,totalpayment,discount,khr,exchangerate = 4100;
cout <<"===============>>>>Product<<<<=============="<<endl;  
cout <<"\tProduct ID :";
cin >>id;
cout <<"\tProduct Name :";
cin >>name;
cout <<"\tPrice :";
cin >>price;
cout <<"\tMade In :";
cin >>made_in;
cout <<"\tProduct Quntity :";
cin >>qty;


payment = price * qty;
if (payment >=1000){
    discount = payment*0.20;
    totalpayment = payment-discount;
    khr = totalpayment*exchangerate; 
    cout<<"\t Total Payment USD : "<<totalpayment<<endl;
    cout <<"\t Total Payment KHR : "<<khr;
}
else if (payment >=900){
    discount = payment*0.15;
    totalpayment = payment-discount;
    khr = totalpayment*exchangerate;
    cout<<"\t Total Payment USD : "<<totalpayment<<endl;
    cout <<"\t Total Payment KHR : "<<khr;
}
else if (payment >=700){
    discount = payment*0.10;
    totalpayment = payment-discount;
    khr = totalpayment*exchangerate;
    cout<<"\t Total Payment USD : "<<totalpayment<<endl;
    cout <<"\t Total Payment KHR : "<<khr;
}
else if (payment >=500){
    discount = payment*0.05;
    totalpayment = payment-discount;
    khr = totalpayment*exchangerate;
    cout<<"\t Total Payment USD : "<<totalpayment<<endl;
    cout <<"\t Total Payment KHR : "<<khr;
}
else if (payment < 500){
    discount = payment*0;
    totalpayment = payment-discount;
    khr = totalpayment*exchangerate;
    cout<<"\t Total Payment USD : "<<totalpayment<<endl;
    cout <<"\t Total Payment KHR : "<<khr;
}


 return 0;
}