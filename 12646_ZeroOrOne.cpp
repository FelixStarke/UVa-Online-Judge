#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int a, b, c;

    while(true) {
        cin >> a;
        if (cin.eof())
            break;
        cin >> b >> c;

        if (a == b && a != c)
            cout << "C" << endl;
        else if (a == c && a != b)
            cout << "B" << endl;
        else if (b == c && b != a)
            cout << "A" << endl;
        else 
            cout << "*" << endl;
    }

    return 0;
}