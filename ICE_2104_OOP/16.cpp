#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[100], n, i, position, element;
    cout<<"Enter the array size: ";
    cin>>n;

    cout<<"Enter the "<<n<<" elements: ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the position and element to insert: ";
    cin>>position>>element;

    for(i=n; i>position-1; i--)
    {
        a[i] = a[i-1];
    }
    a[position-1] = element;

    cout<<"The inserted array is: "<<endl;
    for(i=0; i<=n; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
