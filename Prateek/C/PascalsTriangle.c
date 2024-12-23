#include <stdio.h>

void PascalsTriangle(int n) {
    for (int i = 0; i < n; i++) {
        
        for (int j = 0; j < n - i - 1; j++) {
            printf(" ");
        }

        int value = 1;
        
        for (int j = 0; j <= i; j++) {
            printf("%d ", value);

            value = value * (i - j) / (j + 1);

        }

        printf("\n");
    }
}

int main() {
    int n;
    printf("Number of rows for Pascal's Triangle : ");
    scanf("%d", &n);
    PascalsTriangle(n); 
    return 0;
}
