#include <iostream>
#include <iomanip>
using namespace std;
int main(){
system ("cls");
int phoneCode;
string phoneBrand;
string phoneModel;
int phoneCapacity;
int phoneSerialNumber;
float phonePrice;
int phoneQuantity;
string Warranty;
float tax = 15, percent = 100 ,taxinpercent,discount = 5,discountinpercent,totalpayment,totalcost,totaltax,totalcost2,totaldiscount;
cout <<"\tEnter phoneCode  :";
cin >>phoneCode;
cout <<"\tEnter phoneBrand :";
cin >>phoneBrand;
cout <<"\tEnter phoneModel :";
cin >>phoneModel;
cout <<"\tCapacity         :";
cin >>phoneCapacity;
cout <<"\t  Serialnumber   :";
cin >>phoneSerialNumber;
cout <<"\tPhone price      :";
cin >>phonePrice;
cout <<"\tPhone Quntity    :";
cin >>phoneQuantity;
cout<< "\tWEarranty        :";
cin >>Warranty;


taxinpercent = tax/percent;
discountinpercent = discount/percent;
totalcost = phonePrice*phoneQuantity;
totaltax = totalcost*taxinpercent;
totalcost2 = totalcost+totaltax;
totaldiscount =totalcost2*discountinpercent;
totalpayment = totalcost+totaltax-totaldiscount;
 system("cls");


cout<<"===============>>>>Phone Shop<<<<===============";
cout<<fixed<<showpoint<<setprecision(2) ; 
cout <<"\tPhone Code         :"<<phoneCode<<endl;
cout <<"\tPhone Brand        :"<<phoneBrand<<endl;
cout <<"\tPhone Model        :"<<phoneModel<<endl;
cout <<"\tPhone Capacity     :"<<phoneCapacity<<endl;
cout <<"\tPhone serielnumber :"<<phoneSerialNumber<<endl;
cout <<"\tPhone Price        :"<<phonePrice<<endl;
cout <<"\tPhone Quntity      :"<<phoneQuantity<<endl;
cout <<"\tWarranty           :"<<Warranty<<endl;
 
cout <<"\tTotal Payment      :"<<totalpayment<<"  (include 15% in Tax and 5% Discount)";
















}