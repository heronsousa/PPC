#include <bits/stdc++.h>

using namespace std;

int main(){
  string carta;
  vector<int> deck;
  int sum=0, n=52;

  while(n--){
    cin >> carta;
    char c = carta[0];
    deck.push_back(c);
  }

  for(int i=0; i<deck.size(); i++){
    int aux=0;

    if(deck[i] == 'A') aux = 1;
    else if(isalpha(deck[i]) && deck[i]!='A') aux = 10;
    else aux = deck[i]-'0';

    if(sum+aux<22) sum+=aux;
    else break;
  }

  cout << sum << endl;

  return 0;
}
