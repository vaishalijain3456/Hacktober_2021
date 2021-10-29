#include <iostream>
#include <string>
using namespace std;

int main() {
	

    string a,b ; 
    cin>>a>>b ; 
    
    cout<<a.size()<<" "<<b.size()<<endl ;
    cout<<a+b<<endl ; 
    
    char t1 = a[0] ; 
    char t2 = b[0] ; 
    a[0] = t2 ; 
    b[0] = t1 ; 
    
    cout<<a<<" "<<b ; 
    return 0;
}

// The Question Link Here https://www.hackerrank.com/challenges/c-tutorial-strings/problem
// All Test Cases Passed
