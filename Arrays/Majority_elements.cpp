#include<iostream>
using namespace std;
int main()
{
    int c=0;
    int index=-1;
    int n;
    
    cout<<"\n enter size for array:";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cout<<"\n enter "<<i+1<<" th element:";
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        int count=0;
        for(int j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                count++;
            }

        }
        if(count>c)
        {
            c=count;
            index=i;
        }
    }
    if(c>=n/2)
    {
        cout<<"\n majority element is: "<<a[index];
    }
    else
    {
        cout<<"\n no majority element present";
    }
    return 0;
    
}
