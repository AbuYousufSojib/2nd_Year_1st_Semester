#include <iostream>
using namespace std;

class cpp
{
    int a[100],n,i,j,temp;
public:
    void getdata(void);
    void putdata(void);
};
void cpp::getdata()
{
    cout<<"Enter the array size:";
    cin>>n;
    cout<<"Enter the element: "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
}
void cpp::putdata()
{
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }
    cout<<"The descending order is: "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    cpp obj;
    obj.getdata();
    obj.putdata();
}
/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[50];
    int n, i;
    cout<<"Enter array size: "<<endl;
    cin>>n;
    cout<<endl<<"Enter array elements: "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr, arr+n);
     for(i=n-1;i>=0;i--)
    {
        cout<<arr[i]<<" ";
    }
    return 0;

}
*/
