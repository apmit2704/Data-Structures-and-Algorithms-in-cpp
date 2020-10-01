#include<bits/stdc++.h>
using namespace std;

// Power funtion
long long binpow(long long a, long long b) {
    long long res = 1;          // Initialize result 
    while (b > 0) {
        if (b & 1)              // If b is odd, multiply a with result
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}
int main(){
   long long base,exp,res;
   cin>>base>>exp;
   res=binpow(base,exp);
   cout<<res;
return 0;
}
