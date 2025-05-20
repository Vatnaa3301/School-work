//input,dispay,search by name or id,update,delete,exit
#include<iostream>
#include<string>
using namespace std;
int n,i;//n = amount of student 
int id[20];
string name[20];
int age[20];
char gender[20];
string contact[20];
int searchid;
string searchname;
int searchOption;

    void inputStu(){
        cout<<"\t==========>>Input Student info<<=======\n";
        cout<<"\tHow many student do you want to input:";
        cin>>n;

            for(i = 0;i < n;i++){
                cout<<"\tNo = "<<i+1<<endl;
                cout<<"\tStudent ID :";
                cin>>id[i];
                cout<<"\tStudent Name:";
                cin>>name[i];
                cout<<"\tStudent Gender:";
                cin>>gender[i];
                cout<<"\tStudent Age:";
                cin>>age[i];
                cout<<"\tStudent Contact:";
                cin>>contact[i];

            }
    }

    void display(){
        cout<<"\t=========>>Display Student<<=========\n";

        for(i = 0;i < n ;i++){
            cout<<"\tNo = "<<i+1<<endl;
            cout<<"\tStuent ID = "<<id[i]<<endl;
            cout<<"\tStudent Name="<<name[i]<<endl;
            cout<<"\tStudent Gender="<<gender[i]<<endl;
            cout<<"\tStudent Age="<<age[i]<<endl;
            cout<<"\tStudent Contact="<<contact[i]<<endl<<endl;
        }

    }
    void searchstu(){
        cout<<"\t==========>>Search Student<<=========\n";
        cout<<"\t1.Search by ID\n";
        cout<<"\t2.Search by Name\n";
        cin>> searchOption;
        
        switch (searchOption)
        {
        case 1:
            cout<<"\tEnter Student ID:";
            cin>>searchid;
            for(i = 0;i < n;i++){
                if(id[i] == searchid){
                    cout<<"\tNo = "<<i+1<<endl;
                    cout<<"\tStuent ID = "<<id[i]<<endl;
                    cout<<"\tStudent Name = "<<name[i]<<endl;
                    cout<<"\tStudent gender = "<<gender[i]<<endl;
                    cout<<"\tStudent Age = "<<age[i]<<endl;
                    cout<<"\tStudent Contact = "<<contact[i]<<endl<<endl;
            
                /* code */
                    break;
                }
            }
            break;
        case 2:
            cout<<"\tEnter Student Name:";
            cin>>searchname;
            for(i = 0;i < n;i++){
                if(name[i] == searchname){
                    cout<<"\tNo = "<<i+1<<endl;
                    cout<<"\tStuent ID = "<<id[i]<<endl;
                    cout<<"\tStudent Name = "<<name[i]<<endl;
                    cout<<"\tStudent age = "<<age[i]<<endl;
                    cout<<"\tStudent Gender = "<<gender[i]<<endl;
                    cout<<"\tStudent Contact = "<<contact[i]<<endl<<endl;
                    break;
                }
            }
            break;
        default:
            cout<<"\tWrong option!!\n";
            cout<<"\tStudent not found!!\n";
            break;
        }
    }
    void updateStu(){
        cout <<"\t==========>>Update Student<<=========\n";
            cout<<"\tEnter Student ID:";
            cin>>searchid;
            for(i = 0;i < n;i++){
                if(id[i] == searchid){
                    cout<<"\tNo = "<<i+1<<endl;
                    cout<<"\tStuent ID = "<<id[i]<<endl;
                    cout<<"\tStudent Name = "<<name[i]<<endl;
                    cout<<"\tStudent gender = "<<gender[i]<<endl;
                    cout<<"\tStudent Age = "<<age[i]<<endl;
                    cout<<"\tStudent Contact = "<<contact[i]<<endl<<endl;
                    cout<<"\t==========>>Update Options<<=========\n";
                    cout<<"\t1.Update ID\n";
                    cout<<"\t2.Update Name\n";
                    cout<<"\t3.Update Gender\n";
                    cout<<"\t4.Update Age\n";
                    cout<<"\t5.Update Contact\n";
                    cout<<"\t6.Update All in formation\n";
                    cout<<"\tChoose the option:";
                    cin>>searchOption;
                    switch(searchOption){
                        case 1:
                            cout<<"\tEnter new ID:";
                            cin>>id[i];
                            cout<<"\tID updated!!\n";
                            break;
                        case 2:
                            cout<<"\tEnter new Name:";
                            cin>>name[i];
                            cout<<"\tName updated!!\n";
                            break;
                        case 3:
                            cout<<"\tEnter new Gender:";
                            cin>>gender[i];
                            cout<<"\tGender updated!!\n";
                            break;
                        case 4:
                            cout<<"\tEnter new Age:";
                            cin>>age[i];
                            cout<<"\tAge updated!!\n";
                            break;
                        case 5:
                            cout<<"\tEnter new Contact:";
                            cin>>contact[i];
                            cout<<"\tContact updated!!\n";
                            break;
                        case 6:
                            cout<<"\tEnter new ID:";
                            cin>>id[i];
                            cout<<"\tEnter new name:";
                            cin>>name[i];
                            cout<<"\tEnter new gender:";
                            cin>>gender[i];
                            cout<<"\tEnter new age:";
                            cin>>age[i];
                            cout<<"\tEnter new contact:";
                            cin>>contact[i];
                            cout<<"\tAll information updated!!\n";
                            break;
                        default:
                            cout<<"\tWrong option!!\n";
                            cout<<"\tStudent not found!!\n";
                            break;
                    }
                //when the student ID is not found tell back that the student is not found

            
                /* code */
                    break;
                }
            }
        }
        
    void deleteStu(){
    void option(){
    system("color 9");
    cout<<"\t  ===========>>Option<<==========\n\n";
    cout<<"\t1.Input Student";
    cout<<"\t\t2.Display Student\n\n";
    cout<<"\t3.Search Student";
    cout<<"\t4.Update Student\n\n";
    cout<<"\t5.Delete Student";
    cout<<"\t6.Exit Program\n\n";

    }

int main(){
    int option1;
    system("cls");
    do{
    option();
    
    cout<<"\tChoose the option:";
    cin>>option1;
    switch(option1){

        case 1:
            inputStu();
            break;
        case 2:
            display();
            break;
        case 3:
            searchstu();
            break;
        case 4:
            updateStu();
            break;
            default:
            cout<<"\tWrong option!!\n";

    }
}while(option1 != 2);
    
    return 0;
}