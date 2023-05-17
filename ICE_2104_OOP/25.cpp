#include <bits/stdc++.h>
using namespace std;
class A
{
public:
    void print()
    {
        cout<<"Super class\n";
    }
};
class B: public A
{
public:
    void print()
    {
        cout<<"Sub class\n";
    }
};
int main()
{
    A obj1;
    B obj2;
    obj1.print();
    obj2.print();
    return 0;
}

/*
#include <iostream>
using namespace std;
class Animal {                                          //  base class declaration.
    public:
    string color = "Black";
};
class Dog: public Animal                       // inheriting Animal class.
{
 public:
    string color = "Grey";
};
int main(void) {
     Animal d= Dog();
    cout<<d.color;
}   */
