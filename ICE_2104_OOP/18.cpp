#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[100], n, i, new_num, cnt=0, position;
    cout<<"Enter the array size: ";
    cin>>n;

    cout<<"Enter the "<<n<<" elements: ";
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }

    cout<<"Enter the number to search: ";
    cin>>new_num;
    for(i=0; i<n; i++)
    {
        if(a[i]==new_num)
        {
            cnt = 1;
            position = i+1;
            break;
        }
    }
    if(cnt==0)
    {
        cout<<"Number is not found.";
    }
    else
    {
        cout<<"The number "<<new_num<<" is found at position "<<position<<endl;
    }
    return 0;
}
