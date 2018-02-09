#include <stdio.h>
#include <math.h>

void print(double d);

int main()
{
    int n;
    scanf("%d", &n);

    int i = 0;
    for(i = 0; i < n; i++)
    {
        int l;
        scanf("%d", &l);

        double h = (l * 6.0) / 10.0;
        double r = l / 5.0;

        double inner = acos(-1) * r * r;
        double outer = (l * h) - inner;

        printf("%.2f %.2f\n", inner, outer);
    }

    return 0;
}