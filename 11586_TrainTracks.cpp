#include <iostream>
#include <string>

using namespace std;

int main()
{
    string n_string;
    getline(cin, n_string);
    int n = atoi(n_string.c_str());

    string line;
    for (int i = 0; i < n; i++)
    {
        getline(cin, line);

        int m = 0, f = 0;
        for (int j = 0; j < line.length(); j++)
        {
            if (line.at(j) == 'M')
                m++;
            else if (line.at(j) == 'F')
                f++;
        }

        if (m == f && m + f >= 4)
            cout << "LOOP" << endl;
        else
            cout << "NO LOOP" << endl;
    }
    return 0;
}