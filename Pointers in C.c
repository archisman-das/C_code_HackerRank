#include <stdio.h>
#include <stdlib.h>

void update(int *a,int *b) {
    int sum = *a + *b;
    int diff = abs(*a - *b); // Use abs() for absolute difference
    *a = sum;
    *b = diff;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    update(&a, &b);
    printf("%d\n%d\n", a, b);

    return 0;
}