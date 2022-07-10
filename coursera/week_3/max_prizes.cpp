#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int n, i = 1; cin >> n; 
    vector<int> a;
    for(;;){
        if(((i * (i+1)) / 2) > n) break; 
        i++; 
    }
    i--; 
    for(int j = 0; j < i; j++){
        a.push_back(j + 1);  
    } 
    a[i - 1] = n - ((i * (i + 1))/2) + i; 
    cout << a.size() << "\n"; 
    for(auto i : a){
        cout << i << " ";
    }
    cout << "\n"; 
}

