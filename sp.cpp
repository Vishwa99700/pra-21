#include <iostream>
#include<cmath>
using namespace std;
int main()
{

    int a,b,AD,SUB,DIV,MUL,MOD;
    cout<<"Enter the number 1:"<<endl;
    cin>>a;
    cout<<"Enter the number 2:"<<endl;
    cin>>b;
    cout<<"Enter the operator:"<<endl;
    char op;
    cin>>op;
    if(op=='+')
    {
        AD=(a+b);
        cout<<"Addition is ="<<AD;
    }

    else if(op=='-')
    {
        SUB=(a-b);
        cout<<"Subtraction is="<<SUB<<endl;
    }

    else if(op=='/')
    {
        DIV=(a/b);
        cout<<"Division is ="<<DIV<<endl;
    }

    else if(op=='*')
    {
        MUL=(a*b);
        cout<<"Multiplication is="<<MUL<<endl;
    }

    if (op=='%')
    {
        MOD=(a%b);
        cout<<"Modulus is="<<MOD<<endl;
    }

     return 0;
}


