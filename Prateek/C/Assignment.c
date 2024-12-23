//  factorial using for loop
#include<stdio.h>
int main(){

    int n; 
    printf("Enter the number : ");
    scanf("%d", &n);

    int j = 1;

    for (int i = 1; i<=n; i++){

    j = j*i;

    }

    printf("%d",j);

    
}