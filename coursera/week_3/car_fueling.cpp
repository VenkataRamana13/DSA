#include <bits/stdc++.h>
using namespace std;

int stops(int *, int, int, int); 

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int final, capacity, num_stops; 
    cin >> final >> capacity >> num_stops; 
    int a[num_stops]; 
    for(auto &i : a){
        cin >> i; 
    }
//    for(auto i : a){
//        cout << i << "\n";
//    }
     cout << stops(a, final, capacity, num_stops);  
}

int stops(int *a, int final, int capacity, int num_stops){
    int count = 0, start = 0, i = 0;
    if(capacity < a[0] or capacity + a[num_stops-1] < final)return -1; 
    while(1){
        if(i < num_stops and a[i] > start + capacity) return -1; 
        if(start + capacity >= final) {
            return count;
        }
        while(a[i] <= start + capacity and i < num_stops){
            i++;  
        }
        start = a[i - 1];
        count++; 
    }
}
