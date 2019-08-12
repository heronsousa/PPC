#include <bits/stdc++.h>

using namespace std;

int main(){
  string s1, s2;

  cin >> s1 >> s2;

  if(s1 == s2) cout << "De novo!" << endl;
  else if(s1 == "tesoura" && s2 == "papel" || s1 == "papel" && s2 == "pedra" || s1 == "pedra" && s2 == "lagarto" || s1 == "lagarto" && s2 == "Spock" || s1 == "Spock" && s2 == "tesoura" || s1 == "tesoura" && s2 == "lagarto" || s1 == "lagarto" && s2 == "papel" || s1 == "papel" && s2 == "Spock" || s1 == "Spock" && s2 == "pedra" || s1 == "pedra" && s2 == "tesoura")
    cout << "Bazinga!" << endl;
  else cout << "Raj trapaceou!" << endl;

  return 0;
}
