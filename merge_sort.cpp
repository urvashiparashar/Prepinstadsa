#include<iostream>
using namespace std;

//making functions
// void mergesort(int[],int,int);
// void merge(int[],int,int,int);
void display(int a[],int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\n";
}
void merge(int a[],int lb,int mid,int ub)
{
    int i=lb; //from 0
    int j=mid+1; //from mid+1
    int k=lb; //from 0
    int b[10];
    while (i<=mid && j<=ub)
    {
       if(a[i]<a[j])
       {
           b[k]=a[i];
           i++; k++;
       }
       else
       {
           b[k]=a[j];
           j++;
           k++;
       }
    }
    if(i>mid)
    {
        while(j<=ub)
        {
            b[k]=a[j];
            j++; k++;
        }
    }
    else
    {
        while (i<=mid)
        {
            b[k]=a[i];
            i++;k++;
        }
        
    }
    //for transfering to the array 
    int q;
    for(q=lb;q<=ub;q++)
    {
        a[q]=b[q];
    }
    
}
void mergesort(int a[],int lb,int ub)
{
    int mid;
    if(lb<ub)
    {
       mid=(lb+ub)/2;
       mergesort(a,lb,mid);
       mergesort(a,mid+1,ub);
       merge(a,lb,mid,ub);
    }
}


int main()
{
    int a[10]={8, 4, 5, 1, 3, 9, 0, 2, 7, 6}; 
    int size;
    size=sizeof(a)/sizeof(a[0]);
    cout<<"before sorting:"<<endl;
    display(a,size);
   
    mergesort(a,0,size-1);
    cout<<"after sorting:"<<endl;
    display(a,size);
    return 0;
}
