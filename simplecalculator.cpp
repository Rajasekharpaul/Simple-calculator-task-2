#include<iostream>
using namespace std;
float fnum,snum;
char op;
int main()
{
    cout<<"Enter yout first number :";
    cin>>fnum;
    cout<<"Enter your second number :";
    cin>>snum;
    cout<<"Enter your oprator (+ - * /) :";
    cin>>op;
    switch (op)
    {
    case '+':
        cout<<fnum+snum;
        break;
    case '-':
        cout<<fnum-snum;
        break;
    case '*':
        cout<<fnum*snum;
        break;
    case '/' :
        if (fnum==0)
        {
            cout<<" Zero cant be divided";
        }
        else if (snum==0)
        {
            cout<<"Infinite";
        }
        
        else
        {
            cout<<fnum/snum;
        }
        break;  
    default:
        cout<<"Invalid operator";
        break;
    }
    return 0;
}
