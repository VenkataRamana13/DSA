#include <bits/stdc++.h>
using namespace std;

void fibonacci(long long *, long long); 

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    long long n; cin >> n; 
    long long arr[n]; 
    for(long long i = 0; i < n; i++){
        fibonacci(arr, i);
    }
    cout << arr[n - 1] << "\n"; 
}

void fibonacci(long long *a, long long n){
    if(n == 0) a[n] = 1; 
    else if(n == 1) a[n] = 1; 
    else a[n] = a[n - 1] + a[n - 2]; 
}
