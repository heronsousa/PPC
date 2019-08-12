#include <bits/stdc++.h>

using namespace std;

int main(){
  long long n, k, res;
  int v;

  cin >> n >> k;

  if(k<=(n+1)/2) cout << k*2-1 << endl;
  else cout << (k-(n+1)/2)*2 << endl;

  return 0;
}


// 1 3 5 7 2 4 6

// 10 3
// 1 3 5 7 9 2 4 6 8 10
// 10 6
// 1 3 5 7 9 2 4 6 8 10

// 13 5
// 1 3 5 7 9 11 13 2 4 6 8 10 12
