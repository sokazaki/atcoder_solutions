#include <iostream>
using namespace std;
 
int main() {
    int year, month, day;
    char c1, c2;
    cin >> year >> c1 >> month >> c2 >> day;
 
    if (year >= 2019 && month >= 5) {
        cout << "TBD";
    } else {
        cout << "Heisei";
    }
}
