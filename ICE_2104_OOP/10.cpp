#include <bits/stdc++.h>

using namespace std;

class abc
{
    char c;
    float n1, n2;
public:
    void display(void);
};

void abc :: display()
{
    cout<<"Enter any operator from('+','-','*','/'): "<<endl;
    cin>>c;

    cout<<"Enter two numbers: "<<endl;
    cin>>n1>>n2;

    switch(c)
    {
    case '+':
        cout<<n1<<"+"<<n2<<"="<<n1+n2;
        break;
    case '-':
        cout<<n1<<"-"<<n2<<"="<<n1-n2;
        break;
    case '*':
        cout<<n1<<"*"<<n2<<"="<<n1*n2;
        break;
    case '/':
        cout<<n1<<"/"<<n2<<"="<<n1/n2;
        break;
    default:
        cout<<"Error! Operator is not correct.";
        break;

    }
}
int main()
{
    abc obj;
    obj.display();
    return 0;
}
