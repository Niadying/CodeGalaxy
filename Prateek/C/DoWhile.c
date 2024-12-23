// Write number form 1 to 100 and skip multiple of 3        

#include<stdio.h>

int main(){

for (int i = 1; i<=100; i++){

    if (i%3==0){

        continue;
    }
    printf("\n%d",i);
}

}