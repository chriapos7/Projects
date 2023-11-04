// Created by admin on 4/11/2023.
#include <stdio.h>

int main() {

    // Θέτω τις μεταβλητές που θα χρειαστώ για να ολοκληρώσω το πρόγραμμα
    int num_1 = 112, AM_3 = 2;
    double num_2 = 12.32, AM_1 = 2.002, multi = AM_1 * AM_3;


    double sum[] = {num_1 + AM_3, num_2 - multi, num_2 - AM_1}; // Θέτω τα αποτελέσματα των πράξεων σε πίνακα
    int int_sum0 = (int)sum[0]; // Μετατρέπω τον πρώτο αριθμό που περιέχει ο πίνακας από δεκαδικό σε ακέραιο αριθμό

    printf(" The sum of the operation %d + %d is %d.\n ", num_1, AM_3, int_sum0);

    // Αλλάζω τον αριθμό των δεκαδικών ψηφίων που θα δείχνει στο terminal για τον κάθε αριθμό χρησιμοποιώντας τις εντολές: %.2f, %.3f
    printf("The difference between the act %.2f - %.3f is %.3f.\n ", num_2, multi, sum[1]);
    printf("The difference between the act %.2f - %.3f is %.3f. ", num_2, AM_1, sum[2]);

    return 0;
}
