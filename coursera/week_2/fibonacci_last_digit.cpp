#include <bits/stdc++.h>
using namespace std;

void last_digit(long long*, long long); 

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    long long n; cin >> n; 
    long long a[n]; 
    for(long long i = 0; i < n; i++){
        last_digit(a, i); 
    }
    cout << a[n - 1] << "\n";  
}

void last_digit(long long *a, long long n){
    if(n == 0 or n == 1) a[n] = 1; 
    else a[n] = (a[n - 1] + a[n - 2]) % 10; 
}
