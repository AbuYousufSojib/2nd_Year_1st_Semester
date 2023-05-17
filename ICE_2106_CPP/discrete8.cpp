#include <bits/stdc++.h>
using namespace std;
int i, j;
float ufact(float u, float n)
{
    float fx = u;
    for(i = 1; i<n; i++)
    {
        fx = fx*(u-i);
    }
    return fx;
}
int fact(int n)
{
    if(1>=n)
        return 1;
    return n*fact(n-1);
}
int main()
{
    int n;
    cout<<"Enter the recorded data: \n";
    cin>>n;
    int bdt[n][n],x[n];
    for(i=0; i<n; i++)
    {
        cout<<"Enter the value of x["<<i<<"] and y["<<i<<"] : \n";
        cin>>x[i]>>bdt[i][0];
    }
    for(i=1; i<n; i++)
    {
        for(j=n-1; j>=i; j--)
        {
            bdt[j][i] = bdt[j][i-1] - bdt[j-1][i-1];
        }
    }
    cout<<"\n";
    cout<<"________________________________________________________________________\n";
    cout<<"x \ty \ty1 \ty2 \ty3 \ty4 \ty5 \ty6 \ty7 \n";
    cout<<"________________________________________________________________________\n";

    for(i=0; i<n; i++)
    {
        cout<<x[i]<<"\t";
        for(j = 0; j<=i; j++)
        {
            cout<<bdt[i][j]<<"\t";
        }
        cout<<endl;
    }
    float u,p,fx = bdt[n-1][0];
    cout<<"Enter the finding value: \n";
    cin>>p;

    u = (p-x[n-1])/(x[1]-x[0]);

    for(i=1; i<n; i++)
    {
        fx = fx+(ufact(u,i)*bdt[n-1][i])/fact(i);
    }
    cout<<"u = "<<u<<endl;
    cout<<"fx = "<<fx<<endl;
    return 0;
}

