#include <iostream>

using namespace std;

int main()
{
    int n;
    
    while(true) 
    {
        cin >> n;
        if (!n) return 0;

        bool success = true;
        int cars[n] = {0};
        for (int i = 0; i < n; i++)
        {
            int c, p;
            cin >> c >> p;

            int s = i + p;
            if (s < 0 || s >= n || cars[s] != 0)
                success = false;
            else
                cars[s] = c;
        }

        if (success)
        {
            for (int i = 0; i < n; i++)
            {
                cout << cars[i];
                if (i < n - 1)
                    cout << " ";
            }
            cout << endl;
        }
        else 
            cout << -1 << endl;
    }

    return 0;
}