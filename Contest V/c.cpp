#include <bits/stdc++.h>

using namespace std;

int main(){
  string n, m;
  int sla=0;

  cin >> n >> m;

  for(int i=0, j=n.size()-1; i<n.size(); i++, j--){
    if(n[i]!=m[j]) sla = 1;
  }

  sla ? cout << "NO" << endl : cout << "YES" << endl;

  return 0;
}
