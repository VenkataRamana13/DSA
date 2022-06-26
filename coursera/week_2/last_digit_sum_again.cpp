#include <bits/stdc++.h>
using namespace std;

void last_digit(long long *a, long long n); 

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    long long n, m; cin >> m >> n; 
    long long a[n], sum = 0; 
    for(int i = 0; i <= n; i++){
    last_digit(a, i); 
    }
    for(long long i = m; i <= n; i++){
        sum += (a[i] % 10); 
    }
    cout << sum % 10 << endl; 
}

void last_digit(long long *a, long long n){
    if(n == 0) a[n] = 0; 
    else if(n == 1) a[n] = 1; 
    else a[n] = (a[n - 1] + a[n - 2]) % 10;
}
