// C++ program to play Tic-Tac-Toe game...
#include <iostream>
using namespace std;
 
    
char space[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
int row;
int column;
char token='X';
bool ti;
string n1="";
string n2="";


void func1(){


cout<< "      |      |    \n";
cout<<" "<<space[0][0]<<"    |   "<<space[0][1]<<"  |   "<<space[0][2]<<"  \n";
cout<< "______|______|______\n";
cout<< "      |      |    \n";
cout<<" "<<space[1][0]<<"    |   "<<space[1][1]<<"  |   "<<space[1][2]<<"  \n";
cout<< "______|______|______\n";
cout<< "      |      |    \n";
cout<<" "<<space[2][0]<<"    |   "<<space[2][1]<<"  |   "<<space[2][2]<<"  \n";
cout<< "      |      |    \n";

}

void func2(){
    int digit;

    if(token=='X')
    {
        cout<<n1<<" plzz enter: ";
        cin>>digit;
    }
    if(token=='0')
    {
        cout<<n2<<" plzz enter: ";
        cin>>digit;
    }
    if(digit==1){
        row=0;
        column=0;
    }
    if(digit==2){
        row=0;
        column=1;
    }
    if(digit==3){
        row=0;
        column=2;
    }
    if(digit==4){
        row=1;
        column=0;
    }
    if(digit==5){
        row=1;
        column=1;
    }
    if(digit==6){
        row=1;
        column=2;
    }
    if(digit==7){
        row=2;
        column=0;
    }
    if(digit==8){
        row=2;
        column=1;
    }
    if(digit==9){
        row=2;
        column=2;
    }
    else if(digit<1 || digit>9){
        cout<<"Invalid !!!"<<endl;
    }

    if(token=='X' && space[row][column] !='X' && space[row][column] !='0')
    {
        space[row][column]='X';
        token='0';
    }
    else if(token=='0' && space[row][column] !='X' && space[row][column] !='0')
    {
        space[row][column]='0';
        token='X';
    }
    else{
        cout<<"There is no empty space"<<endl;
        func2();
    }
    //func1();

}    
bool func3(){
    for(int i=0;i<3;i++)
    {
        if(space[i][0]==space[i][1] && space[i][0]==space[i][2] || space[0][i]==space[1][i] && space[0][i]==space[2][i])    
        return true;                                                              //horizontally
    }
    if(space[0][0]==space[1][1] && space[1][1]==space[2][2] || space[0][2]==space[1][1] && space[1][1]==space[2][0])         
    {                                                                             //diagonally
        return true;
    }

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(space[i][j] != 'X' && space[i][j] != '0')
            {
                return false;
            }
        }
    }
    ti=true;
    return false;
}

int main()
{
    cout<<"Enter the name of the first player:\n";
    getline(cin, n1);
    cout<<"Enter the name of the second player:\n";
    getline(cin, n2);
    cout<<n1<< " will play first \n ";
    cout<<n2<< " will play second \n ";

    while(!func3())
    {
        func1();
        func2();
        func3();
    }

    if(token =='X' && ti == false)
    {
        cout<<n2<<"Wins!!"<<endl;
    }
    else if(token =='0' && ti == false)
    {
        cout<<n1<<"Wins!!"<<endl;
    }
    else
    {
        cout<<"It is draw!!"<<endl;
    }


}