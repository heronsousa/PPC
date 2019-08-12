#include <bits/stdc++.h>

using namespace std;

int main(){
  int n, m;
  string s;
  vector<string> v;

  cin >> n >> m;

  while(n--){
    cin >> s;
    v.push_back(s);
  }

  for(int i=0; i<v.size(); i++){
    for(int j=0; j<m; j++){
      if(v[i][j]=='.'){
        if((j+i)%2==0) v[i][j]='B';
        else v[i][j]='W';
      }
    }
  }

  for(int i=0; i<v.size(); i++) cout << v[i] << endl;

  return 0;
}
