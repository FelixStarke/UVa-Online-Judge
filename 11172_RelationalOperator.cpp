#include <iostream>

int main()
{
    int t;
    std::cin >> t;
    
    int i0, i1;
    for (int i = 0; i < t; i++) {
        std::cin >> i0 >> i1;
        if (i0 < i1)
            std::cout << "<" << std::endl;
        else if (i0 > i1)
            std::cout << ">" << std::endl;
        else
            std::cout << "=" << std::endl;
    }

    return 0;
}