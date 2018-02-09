#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m;

    while (true)
    {
        cin >> n >> m;

        if (!n && !m)
            break;

        int cds[n];
        for (int i = 0; i < n; i++)
        {
            cin >> cds[i];
        }

        int count = 0;
        int start_index = 0;
        int next;
        for (int i = 0; i < m; i++)
        {
            cin >> next;

            for (int j = start_index; j < n; j++)
            {
                if (cds[j] == next)
                {
                    count++;
                    start_index = j + 1;
                    break;
                }
                else if (cds[j] > next)
                {
                    start_index = j;
                    break;
                }
            }
        }

        cout << count << endl;
    }

    return 0;
}