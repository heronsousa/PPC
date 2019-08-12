#include <bits/stdc++.h>

using namespace std;

bool contr(int i, int j){ return(i>j);}

int main(){
  int k, cm, m=12, sum=0, count=0;
  std::vector<int> flower;

  cin >> k;

  while(m--){
    cin >> cm;
    flower.push_back(cm);
  }

  sort(flower.begin(), flower.end(), contr);

  if(k!=0){
    for(int i=0; i<flower.size(); i++){
      if(sum < k) {
        sum+=flower[i];
        count++;
      }
    }
  }

  sum>=k ? cout << count << endl : cout << -1 << endl;

  return 0;
}
