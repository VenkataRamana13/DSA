#include <bits/stdc++.h>
using namespace std;

int recursive_number(int); 

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int n; cin >> n; 
    recursive_number(n); 
}
 
int recursive_number(int n){
    if(n == 1){ 
        cout << n << "\n"; 
        return 0;} 
    else if(n % 3 == 0){
        cout << n << "\n"; 
        return (1 + recursive_number(n / 3)); }
    else if(n % 3 == 1){
        cout << n << "\n"; 
        return (1 + recursive_number(n - 1)); }
    else if(n % 2 == 0){
        cout << n << "\n"; 
        return (1 + recursive_number(n / 2)); }
    else{ 
        cout << n << "\n"; 
        return (1 + recursive_number(n - 1)); 
}}
