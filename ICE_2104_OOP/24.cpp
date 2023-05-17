#include <bits/stdc++.h>
using namespace std;
class base
{
public:
    virtual void print()
    {
       cout<<"Base"<<endl;
    }
};
class derive : public base
{
public:
    void print()
    {
        cout<<"Derive"<<endl;
    }
};
int main()
{
    base object1;
    derive object2;
    base *ptr;
    ptr = &object2;
    ptr->print();

    return 0;
}
