#include<iostream>
#include<stdlib.h>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

void simpleseive(int num,vector<int>prime)
{
    bool mark[num+1];
    int i;
    for(i=0;i<num;i++)
    {
      mark[i]=true; //marking each element as true
    }
    for(int p=2;p*p<num;p++)
    {
        if(mark[p]==true)
        {
            for(int j=p*p;j<num;j=j+p)
            {
                mark[j]=false;
            }
        }
    }
    for(i=2;i<num;i++)
    {
        if(mark[i]==true)
        {
            prime.push_back(i);
            cout<<i<<" ";
        }
    }
    cout<<endl;
    
}

void segmentedseive(int num)
{
    int limit=floor(sqrt(num))+1;
    vector<int>prime;
    prime.reserve(num);  //defines maximum size of vector
    simpleseive(num,prime);

    //dividing in segments
    int low=num;
    int high=2*num;

    while(low<limit)
    {
        if(high>=num)
        {
            high=num;

        }
        bool mark[limit+1];
        memset(mark,true,sizeof(mark));
        for(int i=0;i<prime.size();i++)
        {
            int lolim=floor(low/prime[i])*prime[i];
            if(lolim<low)
            {
                lolim=lolim+prime[i];

            }
            for(int i=lolim;i<high;i+=prime[i])
            {
                mark[i-low]=false;
            }
        }
        for(int i=low;i<high;i++)
        {
            if(mark[i-low]==true)
            {
                cout<<i<<" ";
            }
        }
        low=low+limit;
        high=high+limit;
    }


}
int main()
{
    int num;
    cout<<"\n enter number:";
    cin>>num;
    segmentedseive(num);
    return 0;
}