#include <bits/stdc++.h>

using namespace std;

int main(){
  vector <int> v;
  int n, bad, cont=0;

  cin >> n;

  while(n--){
    cin >> bad;
    while(find(v.begin(), v.end(), bad)!=v.end()){ //
      bad++;
      cont++;
    }
    v.push_back(bad++);
  }

  cout << cont << endl;

  return 0;
}
