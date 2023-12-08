#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int i;
    long l;
    char c;
    float f;
    double d;

    // Reading values
    cin >> i >> l >> c >> f >> d;

    // Printing values
    cout << i << endl;
    cout << l << endl;
    cout << c << endl;
    cout << fixed << setprecision(3) << f << endl; // Printing float with 3 decimal places
    cout << fixed << setprecision(9) << d << endl; // Printing double with 9 decimal places

    return 0;
}
