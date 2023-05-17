#include <bits/stdc++.h>
using namespace std;
class Base
{
public:
    virtual void func() = 0;
};
class Derive : public Base
{
public:
    void func()
    {
        cout<<"Virtual function in derive class\n";
    }
};
int main()
{
    Base *ptr;
    Derive obj;
    ptr = &obj;
    ptr->func();
    return 0;
}
