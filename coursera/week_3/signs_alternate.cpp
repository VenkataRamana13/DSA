#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int n; cin >> n; 
    vector<pair<int, int>> p(n); 
    for(int i = 0; i < n; i++){
        cin >> p[i].first >> p[i].second; 
    }
    bool t[n] = {false}; 
    for(auto i : p){
        cout << i.first << " "<< i.second << "\n";      //testing
    }
    int max_num = 0, count = 0; 
    for(auto i : p){
        if(i.second > max_num) max_num = i.second;      //getting max elem
    }
    bool t_1[max_num + 1] = {false}; 
    while(n > 0){                       //deleting intervals for optimal lines
        int max_elem = 0, count_max = 0; 
        for(int i = 0; i <= max_num; i++){       //finding optimal line
            int count_elem = 0; 
            if(t_1[i] == 1) continue; 
            for(int j = 0; j < n; j++){
                if(t[j] == 0 and p[j].first <= i and p[j].second >= i)    count_elem++; 
            }
            if(count_elem > count_max){
                max_elem = i; count_max = count_elem;
            }}
        t_1[max_elem] = true;       //marking it as true
        for(int j = 0; j < n; j++){
            if(t[j] == 0 and p[j].first <= max_elem and p[j].second >= max_elem){
                t[j] = true; 
                n--; 
            }
        }
        count++; 
    }
    cout << count << "\n"; 
    for(int i = 0; i < max_num; i++){
        if(t_1[i] == true)  cout << i << " ";  
    }
    cout << "\n"; 
}
