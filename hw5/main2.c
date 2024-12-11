#include <stdio.h>
#include <math.h>

int main()
{
    double pi = 0.0;
    double term;
    int sign = 1;
    int x = 0;
    for (int i = 1; ; i += 2){
        term = 4.0 / i * sign;
        pi += term;
        sign = -sign;
        x++;
        if (fabs(pi - 3.14159) < 0.000005){
            break;
        }
    }
    printf("%.5f\n",pi);

    return 0;
}
