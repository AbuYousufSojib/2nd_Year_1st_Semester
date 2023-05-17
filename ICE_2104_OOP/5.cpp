#include<bits/stdc++.h>
using namespace std;
int main()
{
    string name;
    int roll;

    //writing file
    ofstream file;
    file.open("Test.txt");
    cout<<"Enter your name : ";
    getline(cin,name);
    file<<name<<endl;
    cout<<"Enter your roll : ";
    cin>>roll;
    file<<roll<<endl;
    cin.ignore();
    file.close();

    //reading file
    ifstream file1;
    file1.open("Test.txt");
    while (getline (file1,name))
    {
    cout<<name<<endl;
    }
    file1.close();
    return 0;
}
