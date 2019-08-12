#include <bits/stdc++.h>

using namespace std;

int main(){
  int n, m, sum=0, price;
  vector<int> tv;

  cin >> n >> m;

  while(n--){
    cin >> price;
    tv.push_back(price);
  }

  sort(tv.begin(), tv.end());

  for(int i=0; i<m; i++){
    if(tv[i]<1) sum += tv[i];
  }

  cout << sum*-1 << endl;

  return 0;
}
