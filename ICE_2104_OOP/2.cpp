#include<iostream>
using namespace std;
class triangle
{
    int n,i,j,r,c;
public:
      void get_input();
      void put_output();
};
void triangle::get_input()
{
    cout<<"Enter N=";
    cin>>n;
}
void triangle::put_output()
{
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    triangle p;
    p.get_input();
    p.put_output();
    return 0;
}

