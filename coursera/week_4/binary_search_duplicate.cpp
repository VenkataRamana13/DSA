#include <bits/stdc++.h>
using namespace std;

int search(vector<int> a, int x, int p, int q); 

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
   
    int n; cin >> n; 
    int a[n] ; vector<int> c;  
    for (int i = 0; i < n; ++i) {
        cin >> a[i]; 
        if((i > 0 and a[i] != a[i - 1]) or i == 0) {
            c.push_back(a[i]);
        }
    }
    int keys; cin >> keys; 
    int b[keys]; 
    for(auto &i : b){
        cin >> i;  
    }
    for(int i = 0; i < keys; i++){
        int n = search(c, b[i], 0, c.size() - 1);  
        if(n == -1) cout << "-1 "; 
        else{
            int j = 0; 
            while(a[j] < n){
                j++; 
            }
            cout << j << " "; 
        }
    }
    cout << "\n"; 
}

int search(vector<int> a, int x, int p, int q){
    if(x < a[p] or x > a[q])return -1;
    int b = (p + q) / 2;
    if(a[b] == x){
        return a[b];
    }
    else if(p != q){
        if(x > a[b]) return search(a, x, b + 1, q);
        else return search(a, x, p, b - 1);
    }
    else return -1;
}
