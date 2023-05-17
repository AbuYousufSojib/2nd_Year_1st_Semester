#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[100], n, i, j, temp;
    cout<<"Enter the array size: ";
    cin>>n;

    cout<<"Enter the "<<n<<" elements: ";
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(i = 0; i<n; i++)
    {
        for(j = i+1; j<n; j++)
        {
            if(a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    cout<<"Printing Sorted Element List ...\n";
    for(i = n-1; i>=0; i--)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
