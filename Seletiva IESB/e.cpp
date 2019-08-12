#include <bits/stdc++.h>

using namespace std;

int main(){
  int t, m, massa, total=0, i;
  vector<int> v;

  cin >> t >> m;

  while(t--){
    cin >> massa;
    v.push_back(massa);
  }

  sort(v.begin(), v.end(), greater<int>());

  for(i=0; i<v.size(); i++)
    if(total<m) total+=v[i];
    else break;

  m>total ? cout << -1 << endl : cout << i << endl;

  return 0;
}
