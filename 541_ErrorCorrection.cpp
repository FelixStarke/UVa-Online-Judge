#include <iostream>

using namespace std;

int main()
{
    int n;
    while (true)
    {
        cin >> n;
        if (n == 0)
            break;

        int m[n][n];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> m[i][j];
            }
        }
        fflush(stdin);

        bool corrupt = false;
        int corruptRow = -1;
        for (int i = 0; i < n; i++)
        {
            int sum = 0;
            for (int j = 0; j < n; j++)
            {
                sum += m[i][j];
            }
            if (sum % 2 != 0)
            {
                if (corruptRow == -1)
                    corruptRow = i;
                else
                {
                    corrupt = true;
                    break;
                }
            }
        }

        int corruptCol = -1;
        if (!corrupt)
        {
            for (int i = 0; i < n; i++)
            {
                int sum = 0;
                for (int j = 0; j < n; j++)
                {
                    sum += m[j][i];
                }
                if (sum % 2 != 0)
                {
                    if (corruptCol == -1)
                        corruptCol = i;
                    else
                    {
                        corrupt = true;
                        break;
                    }
                }
            }
        }

        if (corrupt || corruptRow == -1 && corruptCol != -1 || corruptRow != -1 && corruptCol == -1)
            cout << "Corrupt" << endl;
        else if (corruptRow != -1 && corruptCol != -1)
            cout << "Change bit (" << corruptRow + 1 << "," << corruptCol + 1 << ")" << endl;
        else
            cout << "OK" << endl;
    }

    return 0;
}