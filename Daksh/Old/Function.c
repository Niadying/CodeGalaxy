#include <stdio.h>

int add(int a, int b){
    int result = a + b;
    return result;
}

int main(){

    printf("Hello World!\n");
    printf("Lmao!\n");

    int output = add(12, 24);

    printf("Output: %d\n", output);


    return 0;


}