#include<bits/stdc++.h>
using namespace std;
string addStrings(string num1, string num2) {
        string res="";
        int n=num1.size();
        int m=num2.size();
        int carry=0;
        int j;
        for(int i=n-1,j=m-1;i>=0 || j>=0;i--,
            j--){
            int a;
            if(i>=0){
                a=((int)(num1[i])-48);
            }
            else {
                a=0;
            }
            int b; 
            if(j>=0){
                b=((int)(num2[j])-48);
            }
            else{
                b=0;
            }
            cout<<num1[i]<<" "<<num2[i]<<endl;
            cout<<a<<" "<<b<<endl;
            int sum=carry+a+b;
  
            int u=sum%10;
            res+=u;
            carry=sum/10;
        }
        res+=carry;
        cout<<res<<endl;
        reverse(res.begin(),res.end());
        return res;

}
int main(){
    string n1,n2;
    cout<<"\n\t enter the string two number to find the sum of it";
    cin>>n1>>n2;
    string addStrings(n1,n2);
    return 0;

}

