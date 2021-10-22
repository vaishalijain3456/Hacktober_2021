//Q. Given a base-10 integer,n , convert it to binary (base-2). Then find and print the base-10 integer denoting the maximum number of consecutive 1's in n's binary
representation. When working with different bases, it is common to show the base as a subscript.
#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

string binarycon(int n){
    string r;
        while(n>0){
        r=(n%2==0 ?"0":"1")+r;
        n = n/2;
    }
    return r;
}

int conOnes(string r, int size){
    int max = 0, p=0;
    for(int i = 0;i<size;i++){
        if(r.substr(i,1)=="1"){
            p++;
            if(p>max)
            max = p;
        }
        else{
            p=0;
        }
    }
    return max;
}
int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));
    string r = binarycon(n);
    cout << conOnes(r,r.length());

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
