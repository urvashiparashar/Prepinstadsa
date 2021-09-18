#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"\n enter size :";
    cin>>n;
    int a[n];
    int i;
    for(i=0;i<n;i++)
    {
        cout<<"enter "<<i+1<<" th element:";
        cin>>a[i];
    }
    int temp;
    for(i=0;i<n/2;i++)
    {
        temp=a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=temp;

    }
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}
