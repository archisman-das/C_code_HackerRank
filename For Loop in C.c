#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
  	char *num_strings[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    for (int n = a; n <= b; n++) {
        if (n >= 1 && n <= 9) {
            printf("%s\n", num_strings[n - 1]);
        } else if (n > 9 && n % 2 == 0) {
            printf("even\n");
        } else if (n > 9 && n % 2 != 0) {
            printf("odd\n");
        }
    }

    return 0;
}
// Complete the code.


