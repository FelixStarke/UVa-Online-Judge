#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    string text[16] = {"Happy", "birthday", "to", "you", "Happy", "birthday", "to", "you", "Happy", "birthday", "to", "Rujia", "Happy", "birthday", "to", "you"};
    string names[n];
    for (int i = 0; i < n; i++)
    {
        cin >> names[i];
    }

    int c = 0;
    bool done = false;

    while (!done)
    {
        for (int i = 0; i < 16; i++)
        {
            cout << names[c] << ": " << text[i] << endl;
            c++;
            if (c >= n)
            {
                c = 0;
                done = true;
            }
        }
    }

    return 0;
}