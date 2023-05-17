#include <iostream>
using namespace std;
class obj
{
    int arr[100],i,j,n,temp;
public:
    void getdata(void);
    void putdata(void);
};
void obj::getdata()
{
    cout<<"Enter array size:";
    cin>>n;
    cout<<"Enter elements:";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
}
void obj::putdata()
{
    cout<<"The ascending order is:";
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    obj p;
    p.getdata();
    p.putdata();
    return 0;
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
     for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;

}*/
