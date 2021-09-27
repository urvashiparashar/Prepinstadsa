#include<iostream>
using namespace std;
void display(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\n";
}
void swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
void selection_sort(int a[],int n)
{
    int i,j,min_idx;
    for(i=0;i<n-1;i++)
    {
        min_idx=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[min_idx])
              min_idx=j;  //finding min element
        }
        if(min_idx!=i)
        {
            swap(a[min_idx],a[i]);
        }
    }
}
int main()
{
    int size;
    cout<<"\n enter size of array:";
    cin>>size;
    int a[size];
    for(int i=0;i<size;i++)
    {
        cout<<"\n enter "<<i+1<<" th element:";
        cin>>a[i];
    }
    selection_sort(a,size);
    display(a,size);
    return 0;
}