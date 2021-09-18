#include<iostream>
using namespace std;
//rotating array by d steps
int main()
{
    int size,i,d;
    cout<<"\n enter size of array:";
    cin>>size;
    int a[size],b[size];
    //inputing array elements;
    for(i=0;i<size;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<size;i++)
    {
        // if(i+d>=size)
        // {
        //     b[i+d-size]=a[i];
        // }
        // else
        // {
        //     b[i+d]=a[i];
        // }
        int temp=a[0];
        
    }
    //printing arrays
    for(i=0;i<size;i++)
    {
        cout<<b[i]<<" ";
    }
    cout<<endl;
   
    return 0;
}