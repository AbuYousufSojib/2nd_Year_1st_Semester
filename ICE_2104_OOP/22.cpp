#include <bits/stdc++.h>
using namespace std;

class student
{
    string name;
    int roll;
    float cgpa;
public:
    void input()
    {
        cout<<"Name:";
        cin>>name;
        cout<<"Roll:";
        cin>>roll;
        cout<<"CGPA:";
        cin>>cgpa;
    }
    void output()
    {
        cout<<"Name:"<<name<<"\t"<<"Roll:"<<roll<<"\t"<<"CGPA:"<<cgpa<<endl;
    }
};
int main()
{
    int i,n;
    cout<<"Enter n value:";
    cin>>n;
    student object[n];
    for(i=0;i<n;i++)
    {
        object[i].input();
    }
    for(i=0;i<n;i++)
    {
        object[i].output();
    }
    return 0;
}
