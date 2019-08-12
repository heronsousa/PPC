#include <bits/stdc++.h>

using namespace std;

int main(){
  int h, w;
  string s;
  vector<string> v;

  cin >> h >> w;

  while(h--){
    cin >> s;
    v.push_back(s);
  }

  int j, aux, sla;

  for(j=0; j<v.size(); j++){
    aux=0;
    for(int i=0; i<w; i++){
      if(v[j][i]=='*'){
        sla=i;
        aux++;
      }
    }
    if(aux==1) break;
  }

  if(aux>1){
    cout << "NO" << endl;
    return 0;
  }
  else{
    if(v[j+1][sla]=='*' && v[j+2][sla]=='*' && v[j+1][sla-1]=='*' && v[j+1][sla+1]=='*')

    list<pair <int, int> > *adj = new list<pair <int, int> >[1];

    for(int i=sla; ;i++){
      if(v[j][i])
        adj[0].push_back(make_pair(j, i));
    }

  }

  // cout << "YES" << endl;
  // else
  // cout << "NO" << endl;

  return 0;
}
