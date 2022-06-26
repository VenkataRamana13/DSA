#include <bits/stdc++.h>
using namespace std;

long long period(long long *, long long); 

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    long long n, m, k; 
    cin >> n >> m;     
    long long *a = new long long[1000000]; 
    k = n % period(a, m); 
    if(k < 0) k = k + m; 
    if(a[k] % m < 0) cout << a[k] % m + m << endl; 
    else  
    cout << a[k] % m << "\n"; 
}

long long period(long long *a, long long m){
    long long n = 0; 
    while(1){
    
    if(n == 0)  a[n] = 0; 
    else if(n == 1)  a[n] = 1; 
    else 
        a[n] = (a[n - 1] % m + a[n - 2] % m) % m; 
    if(n > 1 and (a[n] % m) == 1 and (a[n - 1] % m) == 0) {return n-1; break;}
    n++; 
    }
}
