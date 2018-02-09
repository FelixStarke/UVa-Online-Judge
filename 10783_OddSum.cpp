#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    int i0, i1;
    for (int i = 1; i <= n; i++) {
        std::cin >> i0;
        std::cin >> i1;

        if (i0 % 2 == 0)
            i0++;
        if (i1 % 2 != 0)
            i1++;

        int no_of_odd_digits = (i1 - i0 + 1) / 2;
        int total_range = .5*i1*(i1+1) - .5*i0*(i0-1);

        std::cout << "Case " << i << ": " <<  (total_range - no_of_odd_digits) / 2 << std::endl;
    }

    return 0;
}