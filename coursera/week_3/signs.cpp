#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int n, count = 0, max = 0; cin >> n; 
    vector<pair<int, int>> p(n); 
    vector<int> a; 
    for(auto &i : p){
        cin >> i.first >> i.second;
    }
//    cout << "pair output\n"; 
//    for(auto i : p){
//        cout << i.first << " " << i.second << "\n";
//    }
    while(n > 0){
        int count_max = 0, max_elem = 0; 
        for(int i = 0; i < n; i++){
            if(p[i].second > max) max = p[i].second;  
        }
//        cout << max << " max\n";
        for(int i = 0; i < max; i++){
            int count_num = 0; 
            for(auto j : p){
                if(j.first <= i and j.second >= i)  count_num++; 
            } 
            if(count_num > count_max ) {
                count_max = count_num; 
                max_elem = i; 
            }
        }
//        cout << max_elem << " max elem\n"; 
        a.push_back(max_elem); 
        for(int i = 0; i < n; i++){
            if(p[i].first <= max_elem and p[i].second >= max_elem) {
                cout << p[i].first << " " << p[i].second << " " << max_elem << "\n"; 
                p.erase(p.begin() + i);  
            }
        }
//        for(auto i : p){
//            cout << i.first << i.second << "\n";
//        }
        n = p.size(); 
//        cout << n << " n\n"; 
        count++; 
    }
    cout << count << "\n"; 
    for(auto i : a){
        cout << i << " ";
    }
    cout << "\n"; 
}
