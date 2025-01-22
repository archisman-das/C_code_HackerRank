#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char str[1001]; // Increased size for safety
    scanf("%s", str);

    int counts[10] = {0}; // Initialize counts to 0

    for (int i = 0; str[i] != '\0'; i++) {
        if (isdigit(str[i])) {
            int digit = str[i] - '0';
            counts[digit]++;
        }
    }

    for (int i = 0; i < 10; i++) {
        printf("%d ", counts[i]);
    }
    printf("\n"); // Add newline for proper formatting/* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
