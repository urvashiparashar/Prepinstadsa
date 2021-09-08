#include<iostream>
using namespace std;

//defining functions
int partition(int[],int,int);
void quick_sort(int[],int,int);

void swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}

int partition(int a[],int lb,int ub)
{
    int start,end,pivot;
    pivot=a[lb]; //taking pivot as lower bound- ELEMENT of array
    start=lb; //start and end are locations in array
    end=ub;
    while(start<end)
    {
        while(a[start]<=pivot)
        {
            start++;
        }
        while(a[end]>pivot)
        {
            end--;
        }
        if(start<end)
        {
            swap(a[start],a[end]);
        }
    }
    //if end cross over start i.e end>start
    swap(a[lb],a[end]);
    return end; //returns position of pivot
}
void quick_sort(int a[],int lb,int ub)
{
    if(lb<ub)
    {
        int loc;
        loc=partition(a,lb,ub); //position of pivot element to be stored in int value loc
        quick_sort(a,lb,loc-1); //recursively called for right and left arrays of pivot
        quick_sort(a,loc+1,ub);

    }
}
void display(int a[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<" ";

    }
    cout<<"\n";
}
int main()
{
    int arr[]={12,6,7,1,0,122,9};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"\n before sorting:"<<endl;
    display(arr,size);
    quick_sort(arr,0,size-1);
    cout<<"\n after sorting:"<<endl;
    display(arr,size);
    return 0;
    
}