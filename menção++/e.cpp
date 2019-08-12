#include <bits/stdc++.h>

using namespace std;

int main(){
  int n;
  char c;
  vector<string> v;
  vector<char> vogais = {'a', 'e', 'i', 'o', 'u'};

  cin >> n >> c;

  while(n--){
    string s;
    getline(cin, s);
    v.push_back(s);
  }

  reverse(v[0].begin(), v[0].end());
  v[0].push_back(c);
  reverse(v[0].begin(), v[0].end());

  for(int i=0; i<v.size(); i++){
    int x=0;
    for(int j=0; j<v[i].size(); j++){
      if(x==5) x=0;
      if(v[i][j]!=' '){
        cout << v[i][j] << vogais[x];
        x++;
      }
      else cout << v[i][j];
    }
    cout << endl;
  }

  return 0;
}
