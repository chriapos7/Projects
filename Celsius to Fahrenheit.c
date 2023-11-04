#include <stdio.h>

int main() {
    printf("\t\tCelsius Fahrenheit\n");
    for (int i=0; i < 4; i++) {
        char * cities[] = {"Xanthi", "Thessaloniki", "Athens", "Kavala"};
        int celsius[] = {22, 35, 17, 31};
        int fahr = 9 * celsius[i] / 5 + 32;
        if (i==1) {
            printf("%3s%7d%9d\n", cities[i], celsius[i], fahr);
        } else {
            printf("%3s%13d%9d\n", cities[i], celsius[i], fahr);
        }
    }
    return 0;
}
