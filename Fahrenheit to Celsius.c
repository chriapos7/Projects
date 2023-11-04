#include <stdio.h>

int main ()
{
    printf("\tFahrenheit Celsius\n");
    int fahr[] = {32, 10, 74};
    int cels;

    for (int i=0; i < 3; i++){
        cels = (fahr[i] -32) * 5 / 9;
        printf("%11d%11d\n", fahr[i], cels);
    }
    return 0;
}
