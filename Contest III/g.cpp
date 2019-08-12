#include <bits/stdc++.h>

using namespace std;

int main(){
  int a, n, m;
  map<int, int> line;

  cin >> n >> m;

  for(int i=1; i<=n; i++){
    cin >> a;
    line[i]=a;
  }

  int asd=1, child=0;
  while(asd){
    for(int i=1; i<=n; i++){
      if(line.size()==1 && line[i]>0){
        child=i;
        asd=0;
      }
      line[i]-=m;
      if(line[i]<1) line.erase(i);
    }
  }

  cout << child << endl;

  return 0;
}
