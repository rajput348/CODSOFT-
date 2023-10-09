#include<iostream>
#include<string.h>
using namespace std;
    int hello(){
    string task;
    int id;
    cout<<"---------------! TO-DO LIST !-----------------"<<endl<<endl;
    cout<<"1.VIEW TASK"<<endl<<"2.MARK AS COMPLETED"<<endl<<"3. DELETE TASK"<<endl<<endl;
    cout<<"ENTER YOUR TASK ID :"<<endl;
    cin>>id;
    cout<<"ENTER YOUR TASK:"<<endl;
    cin>>task;
    char ch;
    string m;
    cout<<" Do You Want To Add A New Task (y/n) ?"<<endl;
    cin>>ch;
    if(ch=='y'){
        cout<<"ENTER TASK ID:"<<endl;
        cin>>id;
    cout<<"ENTER  ANOTHER TASK :"<<endl;
    cin>>m;
    cout<<" YOUR TASK IS ADDED SUCCESFULLY"<<endl<<endl;
    }
    else{
    cout<<"PROCEED FURTHER "<<endl;
     }
    int x;
    cout<<" ------ ENTER YOUR  CHOICE ------ :"<<endl;
    cin>>x;
    switch (x)
    {
    
        case (1):
        system("cls");
        char b;
        cout<<" Do You Want To View Your Task (y/n) ?"<<endl;
        cin>>b;
        if(b=='y'){
            cout<<"          ENTER TASK ID WHICH YOU WANT TO SEE :      "<<endl;
            cin>>id;{
            if(id==1){
            cout<<" "<<task <<endl;}
            if(id==2)
        {
                cout<<" "<<m<<endl;
            }
        }
        }
        else{
            cout<<" PROCEED FURTHER "<<endl;
        }
        break;

        case (2):
        system("cls");
        char h;
        cout<<"    ENTER TASK ID WHICH YOU WANT TO MARK AS COMPLETED:  "<<endl;
        cin>>id;
        {
            if(id==1){
            cout<<" "<<task <<endl;
            cin>>h;
            cout<<"your task is marked as completed"<<endl;}
            if(id==2)
        {
                cout<<" "<<m<<endl;
                //cin>>h;
                cout<<"your task is marked as completed"<<endl;
            }
        }
        //cout<<"  Mark Your Entered Task As Completed "<<endl;
        //cin>>h;
        break;
        case (3):
        char c;
        cout<<"Do You Want To Delete Your Task (y/n) ?"<<endl;
        cin>>c;
        if(c=='y'){
            system("cls");
            cout<<"Your Task is  Deleted Succesfully"<<endl;
        }
        
    }
}
int main(){
    hello();
    cout<<endl;
    hello();
}