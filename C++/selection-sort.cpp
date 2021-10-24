//C++ code for selection sort
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;//size of array
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    for(int i=0;i<n-1;i++)
    {
        int min_i=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[min_i])
            min_i=j;
        }
        int t=a[min_i];
        a[min_i]=a[i];
        a[i]=t;
    }
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";//printing sorted array
    return 0;
}


//INPUT
//5
//7 6 1 2 10
//OUTPUT
//1 2 6 7 10 

//Complexity of the Program- O(n^2)
