#include <bits/stdc++.h>
using namespace std;
 
long long gcd(long long, long long); 

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    long long a, b; 
    cin >> a >> b; 
    cout << gcd(a, b) << "\n"; 
}
 
long long gcd(long long a, long long b){
    if(b == 0)
        return a; 
    else 
        return gcd(b, a%b); 
}
