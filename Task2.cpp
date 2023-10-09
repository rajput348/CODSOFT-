//program for the calculator...
#include<iostream>
using namespace std;
int calc(){

    int add,sub,mult,div,sq;
    int a,b;
    char ch;
        cout<<"enter two values : ";
        cin>>a>>b;
        cout<<"enter the operator among(+,-,*,/,^)  ";
        cin>>ch;

        switch(ch){
            case '+':
            add=a+b;
            cout<<"the addition of two numbers : "<<add;
            break;
            case '-':
            sub=a-b;
            cout<<"the subtraction of two numbers : "<<sub;
            break;
            case '*':
            mult=a*b;
            cout<<"the multiplication of two numbers : "<<mult;
            break;
            case '/':
            div=a/b;
            cout<<"the division of two numbers : "<<div;
            break;
            case '^':
            sq=a*a;
            cout<<"the square of given numbers : "<<sq;
            break;
    
        }
}

int main(){
    calc();
    cout<<endl;
}