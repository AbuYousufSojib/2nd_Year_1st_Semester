#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[100], i, n, position;

    cout<<"Enter the size of array: ";
    cin>>n;

    cout<<"Enter the "<<n<<" elements: ";
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }

    cout<<"Enter the position to delete array: ";
    cin>>position;

    if (position > n)
      cout<<"Deletion not possible.";

    else
    {
        for(i = position - 1; i<n-1; i++)
        {
            a[i] = a[i+1];
        }

        cout<<"Resultant array is: ";
        for(i=0; i<n-1; i++)
        {
            cout<<a[i]<<" ";
        }
    }
    return 0;

}
