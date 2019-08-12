#include <bits/stdc++.h>

using namespace std;

int main(){
  int n;
  map<int, pair<int, int> > v;

  cin >> n;

  v[1].first = 1;
  v[1].second = 1;
  for(int z=2; z<=n; z++){
    for(int i=v[z-1].first, j=v[z-1].second+1; ; i++, j++){
      if( abs(v[z-1].first-(i)) + abs(v[z-1].second-j) >= (z-1)-z){
        v[z].first = i;
        v[z].second = j;
        break;
      }
    }
  }

  for(int z=1; z<=n; z++){
    cout << v[z].first << " " << v[z].second << endl;
  }

  return 0;
}
