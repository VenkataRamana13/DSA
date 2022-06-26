//fractional knapsack problem
#include <bits/stdc++.h>
using namespace std;

double get_optimal_value(int capacity, vector<int> weights, vector<int> values) {
  double value = 0.0;
  int n = weights.size();
  vector<pair<int, int>> v(n);
  for(int i = 0; i < n; i++){
    v.push_back(make_pair(values[i], weights[i]));
  }
  sort(v.begin(), v.end());
  for(auto i = v.rbegin(); i != v.rend(); i++){
    if((*i).second <= capacity){    value += (*i).first; capacity -= (*i).second;}
  }
  return value;
}

int main() {
      ios::sync_with_stdio(0);
    cin.tie(0);
  int n;
  int capacity;
  std::cin >> n >> capacity;
  vector<int> values(n);
  vector<int> weights(n);
  for (int i = 0; i < n; i++) {
    std::cin >> values[i] >> weights[i];
  }

  double optimal_value = get_optimal_value(capacity, weights, values);

  std::cout.precision(10);
  std::cout << optimal_value << std::endl;
  return 0;
}
