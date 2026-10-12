
#include <stdio.h>

int main() {
    int limit, num, original, digit;
    int sum, digits, i, power;

    printf("Enter the limit: ");
    scanf("%d", &limit);

    printf("Armstrong numbers between 1 and %d are:\n", limit);

    for (num = 1; num <= limit; num++) {
        original = num;
        digits = 0;
        sum = 0;

        // Count the digits
        int temp = num;
        do {
            digits++;
            temp = temp / 10;
        } while (temp > 0);

        temp = num;

        // Calculate the sum of digit powers
        while (temp > 0) {
            digit = temp % 10;
            power = 1;

            for (i = 1; i <= digits; i++) {
                power = power * digit;
            }

            sum = sum + power;
            temp = temp / 10;
        }

        // Check Armstrong number
        if (sum == original) {
            printf("%d ", original);
        }
    }

    printf("\n");

    return 0;
}
