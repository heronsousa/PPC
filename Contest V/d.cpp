#include<bits/stdc++.h>

using namespace std;

int main(){
  int n, max=0;
  string win, team;
  map<string, int> score;

  cin >> n;

  while(n--){
    cin >> team;
    score[team]++;
  }

  for(auto c : score){
    if(c.second>max){
      max = c.second;
      win = c.first;
    }
  }

  cout << win << endl;

  return 0;
}
