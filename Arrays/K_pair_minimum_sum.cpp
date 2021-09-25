#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n1,n2;
    cin>>n1;
    int a1[n1],a2[n2];
    int i,k; //k for no.of pairs from array
    for(i=0;i<n1;i++)
    {
        cin>>a1[i];
    }
    for(i=0;i<n2;i++)
    {
        cin>>a2[i];
    }

    //initialising index array with 0
    int index[n2]; //same as size of arrays declared previously.
    memset(index,0,sizeof(index));// converts all values to either 0 or -1.
    while(k--)
    {
        int min=INT_MAX;
        int in=0;
        for(i=0;i<n2;i++)
        {
            if(a2[i]+a1[index[i]]< min)  //smallest pair*
            {
               in=i;
               min=a2[i]+a1[index[i]];
            }
        }
        cout<<"("<<a1[index[in]]<<","<<a2[in]<<")";
        index[in]++;
    }
    return 0;
}