#include <stdio.h>

int main(){
    int i = 12345;
    int thousands, units, result;
    thousands = (i / 1000) % 10;
    units = i % 10;
    result = i;
    result -= thousands * 1000;
    result -= units;
    result += thousands;
    result += units * 1000;
    printf("%d",result);

    return 0;
}
