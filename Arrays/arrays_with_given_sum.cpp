#include<iostream>
using namespace std;

void print_array(int a[],int i,int j)
{
    int k;
    for(k=i;k<=j;k++)
    {
        cout<<a[k]<<" ";
    }
    cout<<"\n";//for pairs
}

void given_sum(int arr[],int n,int sum)
{
    int i,j;
    int sum_so_far;
    for(i=0;i<n;i++)
    {
        sum_so_far=0;
        for(j=i;j<n;j++)
        {
            sum_so_far+=arr[j];
            if(sum_so_far==sum)
            {
               print_array(arr,i,j);
            }
        }
    }
}
int main()
{
    int n,sum;
    cout<<"\n enter size of array:";
    cin>>n;int a[n];
    cout<<"\n enter sum";
    cin>>sum;
    int i;
    for(i=0;i<n;i++)
    {
        cout<<"\n enter"<<i+1<<" th element:";
        cin>>a[i];
    }
    given_sum(a,n,sum);
    return 0;
}