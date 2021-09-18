#include<iostream>
using namespace std;
int main()
{
    int n,sum;
    cout<<"\n enter size:";
    cin>>n;
    cout<<"\n enter sum:";
    cin>>sum;
    int a[n];
    int i,j; //i for outer travel and j for each element
    //array elements enter
    for(i=0;i<n;i++)
    {
        cout<<"\n enter "<<i+1<<" th element:";
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]+a[j]==sum)
            {
                cout<<a[i]<<" "<<a[j]<<endl;
            }
        }
    }
    return 0;
}