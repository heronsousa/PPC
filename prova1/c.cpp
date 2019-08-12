#include <bits/stdc++.h>

using namespace std;

int main(){
  set<int> s;
  int n, v;

  cin >> n;

  while(n--){
    cin >> v;
    s.insert(v);
  }

  cout << s.size() << endl;

  return 0;
}
