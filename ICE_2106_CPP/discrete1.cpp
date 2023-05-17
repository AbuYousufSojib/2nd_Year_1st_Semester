#include<bits/stdc++.h>
using namespace std;
int main()
{
    int nA,i,j,arr1[10], count1=0, count2=0;
    cout<<"How many elements of set A:\n";
    cin>>nA;
    cout<<"Enter the element of nA: \n";
    for(i=0;i<nA;i++)
    {
        cin>>arr1[i];
    }
    cout<<"A set = ";
    cout<<"{";
    for(j=0;j<nA;j++)
    {
        cout<<arr1[j];
        cout<<",";
    }
    cout<<"\b";
    cout<<"}";
    cout<<"\n\nn(AxA) = ";
    cout<<"{";
    for(i=0;i<nA;i++)
    {
        for(j=0;j<nA;j++)
        {
            cout<<"("<<arr1[i]<<","<<arr1[j]<<")"<<",";
        }
    }
    cout<<"\b";
    cout<<"}";
    cout<<"\n\nR1 = ";
    cout<<"{";
    {
        for(i=0;i<nA;i++)
        {
            for(j=0;j<nA;j++)
            {
                if((arr1[j]>=arr1[i])&&(arr1[j]%arr1[i]==0))
                {
                    cout<<"("<<arr1[i]<<","<<arr1[j]<<")"<<",";
                    count1++;
                }
            }
        }
    }
    cout<<"\b";
    cout<<"}";
    cout<<"\nCount = "<<count1;
    cout<<"\n\nR2 = ";
    cout<<"{";
    for(i=0;i<nA; i++)
    {
        for(j = 0;j<nA;j++)
        {
            if(arr1[j]>=arr1[i])
            {
                cout<<"("<<arr1[i]<<","<<arr1[j]<<")"<<",";
                count2++;
            }
        }
    }
    cout<<"\b";
    cout<<"}";
    cout<<"\nCount  = "<<count2;
    return 0;
}
