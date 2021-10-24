// Insertion sort algorithm

#include<bits/stdc++.h>
using namespace std;

int Partition(int a[],int s,int e)
{
    int pivot=a[e];
    int pindex=s;
    for(int i=s;i<e;++i)
    {
        if(a[i]<=pivot){
            swap(a[i],a[pindex]);
            ++pindex;
        }
    }
    swap(a[pindex],a[e]);
    return pindex;
}
void Quicksort(int a[],int s,int e)
{
    if(s<e)
    {
        int pi=Partition(a,s,e);
        Quicksort(a,s,pi-1);
        Quicksort(a,pi+1,e);
    }
}

int main()
{
    int n,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;++i)
        cin>>a[i];
    Quicksort(a,0,n-1);
      for(i=0;i<n;++i)
        cout<<a[i]<<" ";
    return 0;
}
