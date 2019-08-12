#include <bits/stdc++.h>

using namespace std;

int main(){
  vector<int> v;
  int n=3, sum=0, sla;

  while(n--){ cin >> sla; v.push_back(sla);}
  sort(v.begin(), v.end());

  v[0]+v[1]>v[2] ? sum=0 : sum=v[2]-v[1]-v[0]+1;

  cout << sum << endl;

  return 0;
}
