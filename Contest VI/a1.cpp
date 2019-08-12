#include <bits/stdc++.h>

using namespace std;

int main(){
  long long n;

  cin >> n;

  n%2==0 ? cout << (long)pow(2, n/2) << endl : cout << 0 << endl;

  return 0;
}
