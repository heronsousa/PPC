#include <bits/stdc++.h>

using namespace std;

int main(){

  vector<int> v;
  int shoe, cont=0;

  for(int i=0; i<4; i++){
    cin >> shoe;
    v.push_back(shoe);
  }

  sort(v.begin(), v.end());

  for(int i=0; i<3; i++){
    if(v[i]==v[i+1]) cont++;
  }

  cout << cont << endl;

  return 0;
}
