#include<iostream>
using namespace std;

void display(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
void heapify(int arr[], int n, int i)
{
    int largest = i;
    int l = 2*i + 1;
    int r = 2*i + 2;
 
    //If left child is larger than root
    if (l < n && arr[l] > arr[largest])
        largest = l;
 
    //If right child largest 
    if (r < n && arr[r] > arr[largest])
        largest = r;
 
    //If root is nor largest
    if (largest != i)
    {
        swap(arr[i], arr[largest]);
 
        //Recursively heapifying the sub-tree
        heapify(arr, n, largest);
    }
}

void heapsort(int arr[], int n)
{
    
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);
 
    //One by one extract an element from heap-deleting the elements
    for (int i=n-1; i>=0; i--)
    {
        //Moving current root to end
        swap(arr[0], arr[i]);
 
        //Calling max heapify on the reduced heap
        heapify(arr, i, 0);
    }
}
int main()
{
    int a[]={12,34,3,5,-1,10};
    int size=sizeof(a)/sizeof(a[0]);
    cout<<"before sorting:"<<endl;
    display(a,size);
    heapsort(a,size);
    cout<<"after sorting:"<<endl;
    
    display(a,size);
    return 0;
}
