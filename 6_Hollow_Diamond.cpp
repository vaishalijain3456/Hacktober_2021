#include<iostream>
using namespace std;
int main()
{
  int n,space;
  cin>>n;
  space=(2*n-1)/2;
  for(int i=1;i<=n;i++)
  {for(int j=1;j<=space;j++)
    {cout<<"*";
    }
    for(int j=1;j<=(2*i-1);j++)
    {
        if(j==1||j==2*i-1)
            {cout<<"*";
            }
        else
        {
            cout<<" ";
        }
    }

    for ( int j = 1 ; j <= space ; j ++)
    {
     cout<<"*";
    }
    cout<<endl;
    space--;
  }

  space=0;
  for(int i=n;i>=1;i--)
  {for(int j=1;j<=space;j++)
    {cout<<"*";
    }
    for(int j=1;j<=(2*i-1);j++)
    {
        if(j==1||j==2*i-1)
            {cout<<"*";
            }
        else{
             cout<<" ";
             }
    }
     for ( int j = 1 ; j <= space ; j ++)
    {
     cout<<"*";
    }
    cout<<endl;
    space++;

  }
  return 0;
 }
