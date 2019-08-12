#include <bits/stdc++.h>

using namespace std;

int fat(int p){
  if(p<=1) return 1;
  return p*fat(p-1);
}

int main(){
  int n, m, s;
  multiset<int> data;
  map<int, int> x;

  int a=3;

  while(a--){
    scanf("%d/", &n);
    m = n%10;
    s = n/10;
    x[m]++;
    x[s]++;
  }

  int val = 720;
  for(auto c : x){
    val /= fat(c.second);
  }

  cout << val << endl;

  return 0;
}
