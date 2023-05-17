#include<bits/stdc++.h>
using namespace std;
int i,j;
float u_fact(float u,float n)
{
    float fx=u;
    for(i=1; i<n; i++)
        fx=fx*(u-i);
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
    cout<<"how many recorded data : "<<endl;
    cin>>n;
    int fdt[n][n],x[n];
    for(i=0; i<n; i++)
    {
        cout<<"\nEnter the value of x["<<i<<"] and y["<<i<<"] = \n";
        cin>>x[i]>>fdt[i][0];
    }
    //Construction of forward difference table
    for(i=1; i<n; i++)
    {
        for(j=0; j<n-i; j++)
        {
            fdt[j][i]= fdt[j+1][i-1]-fdt[j][i-1];
        }
    }
    // Display the forward difference table
    cout<<"\n_____________________________________________________\n";
    cout<<"x\t y\ty(1)\ty(2)\ty(3)\ty(4)\ty(5) \n";
    cout<<"\n_____________________________________________________\n";
    for (i = 0; i < n; i++)
    {
        cout << setw(4) << x[i]<< "\t";
        for (j = 0; j < n - i; j++)
            cout<<setw(4)<< fdt[i][j]<< "\t";
        cout << endl;
    }
    float u,fx=fdt[0][0],p;
    cout<<"Enter finding value :\n";
    cin>>p;
    u=( (p-x[0])/(x[1]-x[0]) );
    for(i=1; i<n; i++)
    {
        fx= fx+(u_fact(u,i)*fdt[0][i])/fact(i);
    }
    cout<<"the value of find u is :\t"<<u<<"\t"<<"\n"<<"find value for p is : "<<fx<<endl;
    cout<<endl;
}

