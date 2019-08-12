#include <bits/stdc++.h>

using namespace std;

int main(){
  int n, m, massa;
  vector<int> v;

  cin >> n >> m >> massa;
  v.push_back(massa);

  int aux=n-1;

  while(aux--){
    cin >> massa;

    if(massa<=v[v.size()-1] && v.size()<m)
      v.push_back(massa);
  }

  cout << accumulate(v.begin(), v.end(), 0) << endl;

  return 0;
}
