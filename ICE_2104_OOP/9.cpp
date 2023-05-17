#include<bits/stdc++.h>
using namespace std;
class integer
{
public:
    void display(int a, int b)
    {
        cout<<"a = "<<a<<endl;
    }
};
class overriding : public integer
{
public:
    void display(int a, int b)
    {
        cout<<"a = "<<a<<endl<<"b = "<<b<<endl;
    }
};
int main()
{
    int m, n;
    cout<<"Enter two integer numbers: "<<endl;
    cin>>m>>n;
    overriding obj= overriding();
    obj.display(m,n);
    return 0;
}

