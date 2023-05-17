#include <bits/stdc++.h>

using namespace std;
int main()
{
    string name;
    int roll;
    ofstream file;

    file.open("test.txt",ios::out|ios::app);
    cout<<"Enter your name : ";
    getline(cin,name);
    file<<name<<endl;

    cout<<"Enter your roll : ";
    cin>>roll;
    file<<roll<<endl;

    cin.ignore();
    file.close();

    return 0;
}
