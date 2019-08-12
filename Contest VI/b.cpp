#include <bits/stdc++.h>

using namespace std;

int main(){
  int n, m;
  string s;
  vector<int> v1, v2;

  cin >> n >> m;

  for(int i=0; i<n; i++){
    cin >> s;
    for(int j=0; j<s.size(); j++){
      if(s[j]=='*'){
        v1.push_back(i+1);
        v2.push_back(j+1);
      }
    }
  }

  sort(v1.begin(), v1.end());
  sort(v2.begin(), v2.end());

  int l,c;
  v1[0]==v1[1] ? l=v1[2] : l=v1[0];
  v2[0]==v2[1] ? c=v2[2] : c=v2[0];

  cout << l << " " << c << endl;

  return 0;
}
