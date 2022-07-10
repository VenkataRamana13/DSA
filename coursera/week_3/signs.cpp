//GREEDY
//taking the line which covers most of the intervals first and so on
//not sure if this approach is correct - not proved
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int n, n_temp; cin >> n; n_temp = n; 
    vector<pair<int, int>> p(n); 
    for(int i = 0; i < n; i++){
        cin >> p[i].first >> p[i].second; 
    }
    bool t[n] = {false}; 
    int max_num = 0, count = 0; 
    for(auto i : p){
        if(i.second > max_num) max_num = i.second;      //getting max elem
    }
    bool t_1[max_num + 1] = {false}; 
    while(n_temp > 0){                       //deleting intervals for optimal lines
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
        int skip = 0; 
        for(int j = 0; j < n; j++){
            if(t[j] == 0 and max_elem >= p[j].first and max_elem <= p[j].second){
                t[j] = true; 
                skip++; 
            }
        }
        n_temp -= skip; 
        count++; 
    }
    cout << count << "\n"; 
    for(int i = 0; i < max_num; i++){
        if(t_1[i] == true)  cout << i << " ";  
    }
    cout << "\n"; 
}
