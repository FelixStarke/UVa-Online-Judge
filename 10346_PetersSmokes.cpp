#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, k, t, a;
    while(true) {
        cin >> n;
        if (cin.eof())
            break;
        cin >> k;

        t = n;
        a = n;
        do {
            t += a / k;
            a = (a / k) + (a % k);
        } while(a / k > 0);

        cout << t << endl;
    }

    return 0;
}