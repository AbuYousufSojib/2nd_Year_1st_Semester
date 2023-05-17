
#include<bits/stdc++.h>
using namespace std;
ifstream out;
class student
{
public:
    string name;
    int roll;
    int mark;
    void input();
    void output();
};
void student::input()
{
    out>>name;
    out>>roll;
    out>>mark;
}
void student::output()
{
    cout<<name<<setw(20)<<roll<<setw(20)<<mark<<setw(5)<<endl;
}

int main()
{
    int n;
    out.open("n.txt");
    out>>n;
    int i,j;
    student item[n];
    student temp;
    for(i=0; i<n; i++)
    {
        item[i].input();
    }
    cout<<endl<<"Inputted data from file:"<<endl;
    for(i = 0; i<n; i++)
    {
        item[i].output();
    }
    for(i=n-1; i>=0; i--)
    {
        for(j=0; j<i; j++)
        {
            if(item[j].mark < item[j+1].mark)
            {
                temp = item[j];
                item[j] = item[j+1];
                item[j+1] = temp;
            }
        }
    }
    cout<<endl<<"List of students by marks in descending order:"<<endl;
    for(i=0; i<n; i++)
    {
        item[i].output();
    }
    out.close();
    return 0;
}
