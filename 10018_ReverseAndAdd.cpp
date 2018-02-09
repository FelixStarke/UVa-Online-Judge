#include <iostream>
using namespace std;

unsigned int reverse(unsigned int in);

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        unsigned int p;
        cin >> p;

        unsigned int rp = reverse(p);
        unsigned int sum = p + rp;
        unsigned int rsum;

        int count = 1;
        while (sum != (rsum = reverse(sum)))
        {
            sum += rsum;
            count++;
        }

        cout << count << " " << sum << endl;
    }

    return 0;
}

unsigned int reverse(unsigned int in)
{
    unsigned int out = 0;
    while (in != 0)
    {
        out *= 10;
        out += in % 10;
        in /= 10;
    }

    return out;
}