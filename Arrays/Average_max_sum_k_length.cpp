#include <iostream>
using namespace std;
int main()
{
    int t;
    cout << "\n enter no.of test cases:";
    cin >> t;
    while (t > 0)
    {
        int k;
        cout << "\n enter length of subarray:";
        cin >> k;
        int size;
        cout << "\n enter size:";
        cin >> size;
        int a[size];
        int i,sum,max_sum,index;
        for(i=0;i<size;i++)
        {
            cout<<"\n enter "<<i+1<<" th element:";
            cin>>a[i];
        }
        if(k<size)
        {
           sum=a[0];
        }
        for(i=1;i<k;i++)
        {
           sum+=a[i];
        }
     max_sum=sum;
        index=k-1;
        for(i=k;i<size;i++)
        {
            sum=sum+a[i]-a[i-k];
            if(sum<max_sum)
            {
                max_sum=sum;
                index=i;
            }
        }
        for(i=index-k+1;i<=index;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
        
        t--;
    }
    return 0;
}