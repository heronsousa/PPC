#include <bits/stdc++.h>

using namespace std;

int main(){

  // Palíndromo
  // string s;
  //
  // cin >> s;
  //
  // int n = s.size();
  // bool a = true;
  //
  // for(int i=0; i<n/2; i++){
  //   if(s[i] == s[n-1-i]) a=false;
  // }
  //
  // !a ? cout << "Palin, meu parsa!" << endl : cout << "Não é palin :(" << endl;
  // ----------------------------------------------------------------------------------

  // Histograma
  // map<char, int> h;
  // set<char> st;
  // string s;
  //
  // cin >> s;
  //
  // for(auto c : s){
  //   h[c]++;
  //   st.insert(c);
  // }
  //
  // for(auto c : st){
  //   cout << "Charactere: " << c << " se repete " << h[c]  << " vezes"<< endl;
  // }
  // ----------------------------------------------------------------------------------

  // Anagrama
  // string s, d;
  //
  // cin >> s >> d;
  //
  // sort(s.begin(), s.end());
  // sort(d.begin(), d.end());
  //
  // cout << s << endl << d << endl;
  //
  // if(s == d) cout << "É anagrama, meu conterrâneo!" << endl;

  string s;
  int num=0;

  cin >> s;

  string d = s;

  sort(s.begin(), s.end());

  do{
    cout << ++num << " " << s.c_str() << endl;
  }while(next_permutation(s.begin(), s.end()));

  cout << d << " tem " << num << " anagramas" << endl;

  return 0;
}
