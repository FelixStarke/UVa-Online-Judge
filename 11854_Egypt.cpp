#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    while(true)
    {
        cin >> a >> b >> c;
        if (a + b + c == 0)
            break;

        if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a)
            cout << "right" << endl;
        else 
            cout << "wrong" << endl;
    }

    return 0;
}