#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cin.tie(0);
    cout.tie(0);

    int m, i = 1;
    double u, v, t, s, a;
    while (true)
    {
        cin >> m;
        if (!m)
            break;

        cout << "Case " << i++ << ": ";

        switch (m)
        {
        case 1:
            cin >> u >> v >> t;
            a = (v - u) / t;
            s = u * t + 0.5 * a * pow(t, 2);
            printf("%.3f %.3f\n", s, a);
            break;
        case 2:
            cin >> u >> v >> a;
            t = (v - u) / a;
            s = u * t + 0.5 * a * pow(t, 2);
            printf("%.3f %.3f\n", s, t);
            break;
        case 3:
            cin >> u >> a >> s;
            v = sqrt(pow(u, 2) + 2* a * s);
            t = (v - u) / a;
            printf("%.3f %.3f\n", v, t);
            break;
        case 4:
            cin >> v >> a >> s;
            u = sqrt(pow(v, 2) - 2* a * s);
            t = (v - u) / a;
            printf("%.3f %.3f\n", u, t);
            break;
        default:
            break;
        }
    }

    return 0;
}