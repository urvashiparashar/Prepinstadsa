#include<iostream>
using namespace std;
void count_sort(int a[],int size)
{
    int output[10];
    int count[10];
    int max=a[0]; //making a[0] as max
    int i;

    for(i=1;i<size;i++)
    {
        if(a[i]>max)   //finding max element
          max=a[i];
    }

    //initialising count array with 0
    for(i=0;i<=max;i++)
    {
        count[i]=0;
    }

    //storing count of each element
    for(i=0;i<size;i++)
    {
        count[a[i]]++;
    }

    //sum of array of previous elements
    for(i=1;i<=max;i++)
    {
        count[i]+=count[i-1];
    }

    //sorting array
    for(i=size-1;i>=0;i--)
    {
        output[count[a[i]]-1]=a[i];
        count[a[i]]--;

    }

    //transfering to main array
    for(i=0;i<size;i++)
    {
        a[i]=output[i];
    }

}

void display(int a[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int a[]={2,3,1,4,4,7,8};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<"\n given array is:";
    display(a,n);
    count_sort(a,n);
    cout<<"\n after sorting:";
    display(a,n);
    return 0;
}