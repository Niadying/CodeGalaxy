// #include<stdio.h>
// int square(int a){

//     int k = a*a;
//     return k;
// }

// int main(){

//    int a;
//     printf("Enter the number : ");
//    scanf("%d",&a);
//   int ans = square(a);
//     printf("%d", ans);
// }

// #include<stdio.h>
// void main(){

//     int a = 1;
//     printf("%d%d%d", a, ++a,a++);
// }

// #include<stdio.h>

// int main(){

//     int i = 3;
//     printf("\nAddress of i = %u", &i);
//     printf("\nValue of i = %d", i);
//     printf("\nValue of i = %d", *(6422300));
// }



// #include<stdio.h>

// int main(){

//     int i = 3;
//     int *j ;
//     j = &i;
//     printf("\nAddress of i = %u", &i);
//     printf("\nAddress of i = %u", j);
//     printf("\nAddress of j = %u", &j);
//     printf("\nValue of j = %u", *j);
//     printf("\nValue of i = %d", i);
//     printf("\nValue of i = %d", *(&i));
//     printf("\nValue of i = %d", *j);
    
// }



#include<stdio.h>

void pascal(int n){

    for(int i = 1; i<=n; i++){

        for(int j = 0; j<n-i-1; i++){

            printf(" ");
        }

        int m = 1;

        for(int j = 0; j<=i; j++){

            printf("%d",m );
            m = m*(i-j)/j+1;
        }
        printf("\n");

    }

}

int main(){

    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    pascal(n);

}

// #include<stdio.h>

// int main(){

//     int a = 10, b = 20;
//     swapr(&a, &b );
//     printf("\na=%d b=%d",a,b);
// }

// swapr(int *x, int *y){

//     int t; 
//     t=*x; 
//     *x=*y;
//    * y = t;
//     printf("\n");
// }

// #include<stdio.h>

// int main(){

//     int radius ;
//     float area, perimeter;
//     printf("\nEnter radius of a circle ");
//     scanf("%d", &radius);
//     areaperi(radius , &area, &perimeter);
//     printf("Area = %f", area);
//     printf("\nPerimeter = %f", perimeter);
// }
// areaperi(int r, float *a, float *p){
//     *a = 3.14 * r *r;
//     *p = 2*3.14 *r;

// }
