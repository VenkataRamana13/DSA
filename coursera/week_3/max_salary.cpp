#include <algorithm>
#include <sstream>
#include <iostream>
#include <vector>
#include <string>

using namespace std;
bool greaterThanOrEqualTo(string, string);

string largest_number(vector<string> a) {
  vector<string> b;
  while(a.size() != 0){
    int max = -10000000;int delete_element = 0;
    for(size_t i = 0; i < a.size(); i++){
        if(greaterThanOrEqualTo(a[i], to_string(max))){
        delete_element = i;
        max = stoi(a[i]); }
    }
    b.push_back(to_string(max));
    a.erase(a.begin() + delete_element);
  }
  stringstream ret;
  for (size_t i = 0; i < b.size(); i++) {
    ret << b[i];
  }
  string result;
  ret >> result;
  return result;
}

int main() {
  int n;
  cin >> n;
  vector<string> a(n);
  for (size_t i = 0; i < a.size(); i++) {
    cin >> a[i];
  }
  cout << largest_number(a);
}

bool greaterThanOrEqualTo(string a, string b){
    if(stoi(a) == stoi(b)) return true;
    int a_num = a.size(), b_num = b.size();
    int min_digits = min(a_num, b_num), i = 0;
    for(i = 0; i < min_digits; i++){
        if((int)a[i] < (int)b[i]) return false;
        else if((int)a[i] > (int)b[i])return true;
    }
    if(a_num > b_num){
        if(a[a_num - 1] > b[0]) return true;
        else if(a[a_num] < b[0]) return false;
        else return false;
    }
    else{
        if(b[b_num - 1] > a[0]) return false;
        else if(b[b_num] < a[0])return true;
        else return true;
    }
}
