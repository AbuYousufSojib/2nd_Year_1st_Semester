#include<bits/stdc++.h>
using namespace std;

class student
{
    char name[50];
    float mark1,mark2,mark3,total,average;
public:
    void grade();
    void info();
    void input();
    void output();
};

void student  :: input()
{
    cout<<"Enter name: ";
    cin>>name;
    cout<<"Enter mark1:";
    cin>>mark1;
    cout<<"Enter mark2:";
    cin>>mark2;
    cout<<"Enter mark3:";
    cin>>mark3;
    cout<<endl;
}

void student :: info()
{
    total = mark1+mark2+mark3;
    cout<<fixed;
    cout<<setprecision(2);
    average = total/3;
}

void student :: grade()
{
    if(average>=80&&average<=100)
    {
        cout<<"4.00";
    }
    else if(average>=75&&average<80)
    {
        cout<<"3.75";
    }
    else if(average>=70&&average<75)
    {
        cout<<"3.50";
    }
    else if(average>=65&&average<70)
    {
        cout<<"3.25";
    }
    else if(average>=60&&average<65)
    {
        cout<<"3.00";
    }
    else if(average>=55&&average<60)
    {
        cout<<"2.75";
    }
    else if(average>=50&&average<55)
    {
        cout<<"2.50";
    }
    else if(average>=45&&average<50)
    {
        cout<<"2.00";
    }
    else if(average>=40&&average<45)
    {
        cout<<"1.00";
    }
    else
    {
        cout<<"F";
    }
}

void student :: output()
{
    cout<<"Name:"<<name<<"\tTotal:"<<total<<"\tAverage:"<<average<<"\tGPA:";
    grade();
    cout<<"\n";
}

int main()
{
    int n,i;
    cout<<"Enter the number of students: ";
    cin>>n;
    cout<<endl;
    student obj[n];
    for(i=1;i<=n;i++)
    {
        obj[i].input();
    }
    for(i=1;i<=n;i++)
    {
        obj[i].info();
    }
    cout<<"Output:\n";
    for(i=1;i<=n;i++)
    {
        obj[i].output();
    }
    return 0;

}
