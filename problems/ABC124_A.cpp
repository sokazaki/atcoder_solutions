#include <iostream>
using namespace std;
 
int main() {
    int A, B;
    cin >> A >> B;
 
    if (A > B) {
      cout << A+A-1 << endl;
    } else if (A==B) {
      cout << A+B << endl;
    } else {
      cout << B+B-1 << endl;
    }
 
    return 0;
}
