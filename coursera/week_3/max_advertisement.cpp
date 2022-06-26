#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int n; cin >> n; 
    long long a[n], b[n], c[n], sum = 0; 
    for(int i = 0; i < n; i++){
        cin >> a[i];  
    }
    for(int i = 0; i < n; i++){
        cin >> b[i];  
    }
    sort(a, a+n); sort(b, b+n); 
    for(int i = 0; i < n; i++){
        c[i] = a[i]*b[i];  
        sum += c[i]; 
    }
    cout << sum << "\n"; 
}
