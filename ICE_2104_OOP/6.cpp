#include <bits/stdc++.h>
using namespace std;

class person
{
public:
    string name;
    int roll;
    float mark;
    void getdata();
    void putdata();
};

class student:public person
{
public:
    void getdata()
    {
        cout<<"Enter Name: "<<endl;
        getline(cin,name);
        cout<<"Enter roll: "<<endl;
        cin>>roll;
        cout<<"Enter mark: "<<endl;
        cin>>mark;
    }
    void putdata()
    {
        cout<<endl<<"Output information is: "<<endl;
        cout<<"Name: "<<name<<endl<<"Roll: "<<roll<<endl;
        if(mark>=80&&mark<=100)
        {
            cout<<"Grade: A+";
        }
        else if(mark>=75&&mark<80)
        {
            cout<<"Grade: A";
        }
        else
        {
            cout<<"Grade: F";
        }
    }
};

int main()
{
    student abc;
    abc.getdata();
    abc.putdata();
    return 0;
}
