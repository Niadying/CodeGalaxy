#include <stdio.h>

int main(){


    int a = 4, b = -5, c = 12;
    float x = 2.5;
    unsigned char y = 255;

    int result;

    int step1 = (a * (int)(x+1) % 5);
    int step2 = (int)(y / (a + c)) + ((c % b) ? a : -b);

    printf("Correct Answer of Step 1 is: %d\n", step1);
    printf("Correct Answer of Step 2 is: %d\n", step2);

    result = step1 - step2 + ((b++ && c--) ? (int)(float)(a/c) * x : ((a & b) ^ y)) - ((y % c) << 2);

    printf("Final result: %d\n", result);



    //! ARRAY REVERSE

    int arr[100], n, i, temp;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter %d elements of the array:\n", n);
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n/2; i++){
        temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }

    printf("Modified array:\n");
    for(i = 0; i < n; i++){
        printf("%d", arr[i]);
    }

    printf("\n");

    return 0;

}