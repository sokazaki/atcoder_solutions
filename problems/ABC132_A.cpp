#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
 
int main(){
  string S;
  cin >> S;
  
  sort(S.begin(), S.end());
  
  if (S[0]==S[1] && S[1]!=S[2] && S[2]==S[3]) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}
