#include <iostream>
using namespace std;
 
int main() {
    char b, c[128];
    cin >> b;
  
    c['A'] = 'T';
    c['G'] = 'C';
    c['C'] = 'G';
    c['T'] = 'A';
 
    cout << c[b] << endl;
 
    return 0;
}
