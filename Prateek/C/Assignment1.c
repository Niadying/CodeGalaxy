// ASSIGNMENT 1

// #include<stdio.h>

// int main(){

//     printf("My name is Prateek Sahu. \n");
//     printf("My scholar number is 24U022001. \n");
//     printf("My branch is CSE_CPS.");
//     return 0;
// }

// #include<stdio.h>
// int main(){


//     int a = 5, b=10;
//     printf("a*b = %d",a*b);
//     printf("\na+b = %d", a+b);
//     printf("\na-b = %d", a-b);
//     printf("\na/b = %d", a/b);

//     return 0;
// }

// #include<stdio.h>
// int main(){

//     int radius;
//     printf("Enter the radius : ");
//     scanf("%d", &radius);
//     int area = 3.14*radius*radius;
//     int perimeter = 6.28*radius;

//     printf("Perimeter of circle is : %d", perimeter);
//     printf("\nArea of circle is : %d", area);
//     return 0;
// }

// #include<stdio.h>
// int main(){

//     int l , b;
//     printf("Enter the length of rectangle : ");
//     scanf("%d", &l);
//     printf("Enter the breadth of rectangle : ");
//     scanf("%d", &b);

//     int area = l*b;
//     int perimeter = (l+b)*2;

//     printf("Area = %d", area);
//     printf("\nPerimeter : %d", perimeter);
//     return 0;
// }

// #include<stdio.h>
// int main(){

//     int dollar ;
//     printf("Enter the amount in dollar : ");
//     scanf("%d",&dollar);

//     int rupees = dollar*84;
//     printf("Rupees = %d", rupees);
// }

// #include<stdio.h>

// int main(){

//     int temp ;
//     printf("Enter temp. in fahreheit : ");
//     scanf("%d",&temp);

//     float centigrade = ((temp-32)*5)/9;
//     printf("%f", centigrade);
// }

// ASSIGNMENT 2**********

// #include<stdio.h>
// int main(){

//     int p,r,t;
//     printf("Enter p : ");
//     scanf("%d",&p);
//     printf("Enter r : ");
//     scanf("%d",&r);
//     printf("Enter t : ");
//     scanf("%d",&t);

//     float SI = (p*r*t)/100;
//     printf("%f", SI);
// }

// #include<stdio.h>

// int main(){

//     int basic ;
//     printf("Enter the basic salary : ");
//     scanf("%d", &basic);

//     int a = 0.2*basic;
//     int b = 0.4*basic;

//     int gross = basic +a+b;

//     printf("Gross Salary is : %d", gross);


// }

// #include <stdio.h>

// int main() {
//     float distance;
    
//     printf("Enter the distance between two cities (in km): ");
//     scanf("%f", &distance);
    
//     float distance_m = distance * 1000;         
//     float distance_ft = distance * 3280.84;     
//     float distance_in = distance * 39370.1;     
//     float distance_cm = distance * 100000;      

//     printf("\nDistance in meters: %f m", distance_m);
//     printf("\nDistance in feet: %f ft", distance_ft);
//     printf("\nDistance in inches: %f in", distance_in);
//     printf("\nDistance in centimeters: %f cm", distance_cm);
    
//     return 0;
// }



// #include<stdio.h>
// int main(){

//     int marks[5];
//     int total = 0;
//     for(int i = 0; i<5; i++){
//     scanf("%d", &marks[i]);
//     total  = total + marks[i];
//     }
//     float percent = total / 5;
//     printf("Total marks obtained : %d", total);
//     printf("\nPercentage : %f",  percent);
// }




// #include<stdio.h>

// int change(int *C, int *D){
  
//   int temp = *C;
//   *C = *D;
//   *D = temp;
  
// }
// int main(){
//     int C,D;
//     printf("Enter the value of C : ");
//     scanf(" %d",&C);
//     printf("Enter the value of D : ");
//     scanf(" %d",&D);
//     change(&C, &D);
//     printf("%d %d", C,D);
// }



// #include<stdio.h>
// int main(){
//     int sp [15];
//     int profit [15];

//     printf("Enter the selling price ");
//     for(int i = 0; i<15 ; i++){
//         scanf("%d",&sp[i]);
//     }
//     printf("Enter the profit ");
//     for(int j = 0; j<15 ; j++){
//         scanf("%d",&profit[j]);
//     }
//     printf("Cost price respectively is : ");
//     int k =0;
//         int l = 0;
//     while(k<15){
//         int cp = sp[l]-profit[l];
//         l++;
//         printf("%d ",cp);
//         k++;
//     }

// }

// ASSIGNMENT 3*******


// #include<stdio.h>
// int main(){
//     int n ;
//     printf("Enter 5 digit number : ");
//     scanf("%d", &n);
//     int sum = 0;

//     for(int i = 0; n!=0; i++){

//         int digit = n%10;
//         sum = sum + digit;
//         n = n/10;
//     }

//     printf("Sum of digits are : %d",sum);
// }



// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter 5 digit number : ");
//     scanf("%d",&n);
//     int reverse   = 0;

//     for(int i = 1; n!=0; i= i *10){
//         int y = 10000/i;
//         int digit = n%10;
//        reverse = y*digit +reverse ;
//        n = n/10;
//     }
//     printf("Reverse order : %d", reverse);
// }


// #include<stdio.h>
// int main(){

//     int n;
//     printf("Enter the money need to be withderawn : ");
//     scanf("%d",&n);
    

//     if(n/100 !=0){
//         printf("Number of 100 rupees notes : %d",n/100);
//         n = n%100;
//     }
//     if(n/50 !=0){
//          printf("\nNumber of 50 rupees notes : %d",n/50);
//          n = n%50;
//     }
//     if(n/10 != 0){
//          printf("\nNumber of 10 rupees notes : %d",n/10);
//     }
// }



// #include <stdio.h>

// int main() {
//     int total_population = 80000;
//     float men_percent = 52;
//     float total_literacy_percent = 48;
//     float literate_men_percent= 35;

//     int men_population = (men_percent/ 100) * total_population;
//     int women_population = total_population - men_population;

//     int literate_men_population = (literate_men_percent / 100) * total_population;
//     int total_literate_population = (total_literacy_percent / 100) * total_population;

//     int literate_women_population = total_literate_population - literate_men_population;

//     int illiterate_men = men_population - literate_men_population;
//     int illiterate_women = women_population - literate_women_population;

//     printf("Illiterate men: %d\n", illiterate_men);
//     printf("Illiterate women: %d\n", illiterate_women);

//     return 0;
// }


// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter 5 digit number : ");
//     scanf("%d",&n);
//     int sum = 0;

//     for(int i = 1; n!=0; i=i*10){
//         int digit = n%10;
//         n = n/10;

//         if(digit == 9){
//             digit = 0;
//         }
//         else{
//             digit = digit + 1;
//     }
//         sum = sum + (digit*i);
//     }
//     printf ("%d", sum);
// }


// ASSIGNMENT 4 ************



// #include<stdio.h>
// int main(){
//     int n,m;
//     printf("Enter the value of n and m : ");
//     scanf("%d %d", &m,&n);

//     if(m>n){
//         printf("%d",m);
//     }
//     if(m<n){
//         printf("%d",n);
//     }
//     else{
//         printf("M and N are equal.");
//     }
// }




// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the value of n : ");
//     scanf("%d",&n);
//     if(n >=0){
//         printf("n is positive number.");
//     }
//     else {
//         printf("n is negative number.");
//     }
// }



// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the value of n : ");
//     scanf("%d",&n);
//     if(n %2==0){
//         printf("n is even number.");
//     }
//     else {
//         printf("n is odd number.");
//     }
// }




// #include<stdio.h>
// int main(){
//     int age;
//     printf("Enter your age : ");
//     scanf("%d",&age);
//     if(age>=18){
//         printf("Person is eligible for voting.");
//     }
//     else {
//         printf("Person isn't eligible for voting,");
//     }
// }




// #include <stdio.h>

// int main() {
//     int x, y;
    
//     printf("Enter value of x and y : ");
//     scanf("%d %d", &x, &y);

//     int result = (x < y) ? (x % y) : (x * y);

//     printf("The result is: %d\n", result);

//     return 0;
// }




// #include<stdio.h>
// int main(){
//     int l,m,n;
//     printf("Enter the value of l m and n : ");
//     scanf("%d%d%d",&l,&m,&n);

//     if((l>m)&&(l>n)){
//         printf("%d",l);
//     }
//     if((m>l)&&(m>n)){
//         printf("%d",m);
//     }
//     if((n>m)&&(n>l)){
//         printf("%d",n);
//     }
// }



// #include<stdio.h>
// int main(){
//     int year;
//     scanf("%d",&year);

//     if(year%400==0){
//         printf("Year is leap.");
//     }
//     else if(year % 4 == 0){
//         if(year % 100 == 0){
//             printf("Year isn't a leap year.");
//         }
//         else{
//             printf("Year is a leap year.");
//         }
//     }
// }

//ASSIGNMENT 5 ***


// #include<stdio.h>
// int main(){
//     int year;
//     printf("Enter year : ");
//     scanf("%d",&year);

//     if((year%4==0)&&(year%100!=0)||(year%400==0)){
//         printf("Given year is a leap year.");
//     }
//     else{
//         printf("Given year isn't a leap year.");
//     }
// }


// #include<stdio.h>
// int main(){
//     int l,m,n;
//     printf("Enter the values of angles : ");
//     scanf("%d%d%d",&l,&m,&n);
//     if(l+m+n == 180){
//         printf("Triangle is valid.\n");

//         if(l==90||m==90||n==0){
//             printf("Right angled triangle.\n");
//         }
//         if(l<90&&m<90&&n<90){
//             printf("Acute triangle.\n");
//         }
//         else{
//             printf("Triangle is oblique.");
//         }

//     }
//     else{
//         printf("Triangle is invalid.");
//     }
// }


// #include<stdio.h>
// int main(){
//     int x,y,z;
//     printf("Enter the value of sides : ");
//     scanf("%d%d%d",&x,&y,&z);
//     if(x+y>z&&x+z>y&&z+y>x){
//         printf("Valid triangle.\n");
//         if(x==y&&y==z){
//             printf("Equilateral triangle.");
//         }
//         if(x==y||y==z||y==z){
//             printf("Isocoles triangle.");
//         }
//         else{
//             printf("Scalene triangle.");
//         }
//     }
//      else{
//         printf("Triangle is invalid.");
//     }
// }



// #include<stdio.h>
// #include<math.h>
// int main(){
//     int a,b,c;
//     printf("aX^2+bX=c\nEnter the value of a,b and c: ");
//     scanf("%d%d%d", &a,&b,&c);
//     int D = (b*b)-(4*a*c);

//     if(D==0){
//         printf("Two equal roots are : ");
//         int root = (-b)/(2*a);
//         printf("%d %d",root,root );
//     }
//     if(D>0){
//       int  root1 = (-b + sqrt(D)) / (2*a);
//       int  root2 = (-b - sqrt(D)) / (2*a);
//       printf("Two roots are : ");
//       printf("%d %d",root1,root2 );
//     }
//     else{
//         printf("Roots are imaginary.");
//     }
// }



// #include<stdio.h>
// int main(){
//     float unit ;
//     printf("Enter the unit of electricity : ");
//     scanf("%f",&unit);
//     float bill = 0;
//     if(unit>=200){

//         bill = (40*0.65)+(80*0.85)+(80*1.35)+((unit-200)*1.95);

//     }
//     else if(unit <= 40){
//         bill = unit * 0.65;
//     }
//     else if(unit <= 120 ){
//         bill = (40 * 0.65)+((unit - 40 )* 0.85);
//     }
//     else if (unit <200){
//         bill = (40*0.65)+(80*0.85)+((unit - 120)*1.35);

//     }
//     bill = bill + 0.25*bill;
//     printf("%f", bill);
// }


// #include<stdio.h>
// int main(){
//    float basic,HRA,DA ;
//     float gross = basic + HRA + DA;
//     printf("Enter the basic salary : ");
//     scanf("%f",&basic);

//     if(basic<=12000){
//         HRA = 0.18*basic;
//         DA = 0.75*basic;

//     }
//     else if (basic <= 25000){
//         HRA = 0.28*basic;
//         DA = 0.85*basic;
//     }
//     else{
//         HRA = 0.35*basic;
//         DA = 0.93*basic;
//     }
//     printf("%f", gross);
// }


// ASSIGNMENT 6*************


// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the number : ");
//     scanf("%d",&n);
//     int digit = 0;

//     for(int i = 0; n!=0; i++){
//         digit = n%10;
//         n = n/10;
//     }   
//     printf("%d",digit);        
// }


// #include<stdio.h>
// int main(){
//     int n; 
//     printf("Enter the value of n : ");
//     scanf("%d",&n);
//     int sum = 0;
//     for(int i  = 0 ; n!=0; i++){
//         int digit = n%10;
//         n = n/10;
//         sum = sum + digit;
//     }
//     printf("%d",sum);
// }


// #include<stdio.h>
// #include<math.h>
// int main(){
//   int n; 
//   printf("Enter the value of n : ");
//   scanf("%d",&n);  
//   int reverse = 0;
//   while(n!=0){
//     int digit = n%10;
//     reverse = reverse*10 + digit;
//     n = n/10;
//   }
//   printf("%d",reverse);
// }


// #include<stdio.h>
// int main(){
//   int n;
//   pritnf("Enter the value of n :");
//   scanf("%d",&n);
//   int fact = 1;
//   for(int i = 1; i<=n ; i++){
//     fact = fact*i;
//   }
//   printf("%d",fact);
// }


// #include<stdio.h>
// int main(){
//   int n;
//   int temp = 0;
//   printf("Enter the value of n : ");
//   scanf("%d",&n);
//   int a = 0; 
//   int b = 1;
//   printf("0 ");
//   for(int i = 1; i<n; i++){
//     printf("%d ",b);
//     temp = a;
//     a = b; 
//     b = temp + b;  
//       }
// }


// #include<stdio.h>
// #include<math.h>
// int main(){
//   int n;
// double sum = 0;
//   printf("Enter the value of n : ");
//   scanf("%d",&n);
//   int num = 0,y = n,z=n;

//   for(int i = 0; n!=0 ;i++){
//     n = n/10;
//     num++;
//   }

//   for(int j = 0; y!=0; j++){
//     int digit = y%10;
//     y = y/10;
//   sum = sum +  pow(digit,num);;
//   }
//   if(sum==z){
//     printf("Given number is a armstrong number.");
// }
//   else{
//     printf("Given number is not a armstrong number.");

// }}


// #include <stdio.h>
// int swap(int num) {
//     int firstDigit, lastDigit, divisor = 1, temp = num;
//     lastDigit = num % 10;
//     while (temp >= 10) {
//         temp /= 10;
//         divisor *= 10;
//     }
//     firstDigit = temp;
//     num = num % divisor;        
//     num = num / 10;              
//     num = lastDigit * divisor + num * 10 + firstDigit; 

//     return num;
// }
// int main() {
//     int num;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     int result = swap(num);
//     printf("Number after swapping first and last digits: %d\n", result);
//     return 0;
// }



//   ASSIGNMENT 7******


// #include <stdio.h>
// #include <math.h>
// double factorial(int n) {
//     double fact = 1;
//     for (int i = 1; i <= n; i++) {
//         fact *= i;
//     }
//     return fact;
// }
// double sinSeries(double x, int terms) {
//     double sum = 0.0;
//     int sign = 1; 
//     for (int i = 1; i <= terms; i++) {
//         int exponent = 2 * i - 1;
//         double term = pow(x, exponent) / factorial(exponent);
//         sum += sign * term;
//         sign *= -1;
//     }
//     return sum;
// }
// int main() {
//     double x;
//     int terms;
//     printf("Enter the value of x (in radians): ");
//     scanf("%lf", &x);
//     printf("Enter the number of terms: ");
//     scanf("%d", &terms);
//     double result = sinSeries(x, terms);
//     printf("Sum of sin(%.2f) series up to %d terms: %.6f\n", x, terms, result);
//     return 0;
// }


// #include<stdio.h>
// #include<math.h>
// int main(){
//   int a,b;
//   double power = 0;
//   printf("Enter the value of a and b : ");
//   scanf("%d%d",&a,&b);
//   for(int i = 1; i<=b; i++ ){
//      power = pow(a,i);
//   }
//   printf("%f",power);
// }

// #include<stdio.h>
// int main(){
//   int n,reverse = 0;
//   printf("Enter the value of n : ");
//   scanf("%d",&n);
//   int y = n;

//   for(int i = 0 ; n!=0; i++){
//     int digit = n%10; 
//     n = n/10; 
//     reverse = reverse * 10 + digit;
//   }
//   if( y == reverse ){
//     printf("The given number is palindrome");
//   }
//   else{
//     printf("Given number isn't a pelindrome.");
//   }
// }


// #include <stdio.h>
// #include <math.h>

// int main() {
//     double P, R, T, CI, totalAmount;
//     printf("Enter the principal amount: ");
//     scanf("%lf", &P);
//     printf("Enter the rate of interest (in percentage): ");
//     scanf("%lf", &R);
//     printf("Enter the time (in years): ");
//     scanf("%lf", &T);
//     totalAmount = P * pow((1 + R / 100), T);
//     CI = totalAmount - P;
//     printf("Compound Interest: %.2lf\n", CI);
//     printf("Total Amount: %.2lf\n", totalAmount);

//     return 0;
// }


// #include <stdio.h>
// int findHCF(int a, int b) {
//     while (b != 0) {
//         int temp = b;
//         b = a % b;
//         a = temp;
//     }
//     return a;
// }

// #include <stdio.h>

// int findHCF(int a, int b) {
//     int hcf = 1; 
//     int smaller = (a < b) ? a : b;
//     for (int i = 1; i <= smaller; i++) {
//         if (a % i == 0 && b % i == 0) {
//             hcf = i; 
//         }
//     }
//     return hcf;
// }
// int findLCM(int a, int b) {
//     int lcm = (a > b) ? a : b; 
//     while (1) {
//         if (lcm % a == 0 && lcm % b == 0) {
//             break;
//         }
//         lcm++;
//     }
//     return lcm;
// }
// int main() {
//     int x, y, hcf, lcm;
//     printf("Enter two numbers: ");
//     scanf("%d %d", &x, &y);
//     hcf = findHCF(x, y);
//     lcm = findLCM(x, y);
//     printf("HCF of %d and %d: %d\n", x, y, hcf);
//     printf("LCM of %d and %d: %d\n", x, y, lcm);
//     return 0;
// }


// #include <stdio.h>
// int findGCD(int a, int b) {
//     while (b != 0) { 
//         int remainder = a % b; 
//         a = b;                
//         b = remainder;       
//     }
//     return a; 
// }

// int main() {
//     int x, y, gcd;
//     printf("Enter two numbers: ");
//     scanf("%d %d", &x, &y);
//     if (x < y) {
//         int temp = x;
//         x = y;
//         y = temp;
//     }
//     gcd = findGCD(x, y);
//     printf("GCD of %d and %d is: %d\n", x, y, gcd);
//     return 0;
// }

// ASSIGNMENT 9****

// #include <stdio.h>
// long long factorialIterative(int n) {
//     long long result = 1;
//     for (int i = 1; i <= n; i++) {
//         result *= i; 
//     }
//     return result;
// }
// long long factorialRecursive(int n) {
//     if (n == 0 || n == 1) {
//         return 1; 
//     }
//     return n * factorialRecursive(n - 1); 
// }

// int main() {
//     int number;
//     long long Iterative, Recursive;
//     printf("Enter a number : ");
//     scanf("%d", &number);
//     if (number < 0) {
//         printf("Factorial is not defined for negative numbers.\n");
//         return 1;
//     }
//     Iterative = factorialIterative(number);
//     Recursive = factorialRecursive(number);
//     printf("Factorial of %d using iterative method: %lld\n", number, Iterative);
//     printf("Factorial of %d using recursive method: %lld\n", number, Recursive);
//     return 0;
// }


// #include <stdio.h>
// int Iterative(int n) {
//     int count = 0;
//     if (n == 0) { 
//         return 1;
//     }
//     while (n != 0) {
//         n = n / 10; 
//         count++; 
//     }
//     return count;
// }
// int Recursive(int n) {
//     if (n == 0) { 
//         return 0;
//     }
//     return 1 + Recursive(n / 10);
// }

// int main() {
//     int number, numDigitsIterative, numDigitsRecursive;
//     printf("Enter a number: ");
//     scanf("%d", &number);
//     int absoluteNumber = (number < 0) ? -number : number;
//     numDigitsIterative = Iterative(absoluteNumber);
//     numDigitsRecursive = (absoluteNumber == 0) ? 1 : Recursive(absoluteNumber);
//     printf("using iterative method: %d\n", numDigitsIterative);
//     printf("using recursive method: %d\n", numDigitsRecursive);
//     return 0;
// }


// #include <stdio.h>
// int Iterative(int n) {
//     int sum = 0;

//     while (n != 0) {
//         sum += n % 10; 
//         n = n / 10;    
//     }

//     return sum;
// }
// int Recursive(int n) {
//     if (n == 0) { 
//         return 0;
//     }
//     return (n % 10) + Recursive(n / 10); 
// }

// int main() {
//     int number, sumIterative, sumRecursive;
//     printf("Enter a number: ");
//     scanf("%d", &number);
//     int absoluteNumber = (number < 0) ? -number : number;
//     sumIterative = Iterative(absoluteNumber);
//     sumRecursive = Recursive(absoluteNumber);
//     printf("using iterative method: %d\n", sumIterative);
//     printf("using recursive method: %d\n", sumRecursive);
//     return 0;
// }


// #include <stdio.h>

// int Iterative(int n) {
//     int reverse = 0;
//     while (n != 0) {
//         reverse = reverse * 10 + n % 10;
//         n = n / 10;
//     }
//     return reverse;
// }

// int Recursive(int n, int reverse) {
//     if (n == 0) {
//         return reverse;
//     }
//     return Recursive(n / 10, reverse * 10 + n % 10);
// }

// int reverseRecursive(int n) {
//     return Recursive(n, 0);
// }

// int main() {
//     int number, Iteratives, Recursive;
//     printf("Enter a number: ");
//     scanf("%d", &number);
//     int isNegative = (number < 0) ? 1 : 0;
//     int absoluteNumber = (number < 0) ? -number : number;
//     Iteratives = Iterative(absoluteNumber);
//     Recursive = reverseRecursive(absoluteNumber);
//     if (isNegative) {
//         Iteratives = -Iteratives;
//         Recursive = -Recursive;
//     }
//     printf("Reversed number using iterative method: %d\n", Iteratives);
//     printf("Reversed number using recursive method: %d\n", Recursive);
//     return 0;
// }


// #include <stdio.h>

// void Iterative(int n) {
//     int a = 0, b = 1, next;
//     printf("Fibonacci Series (Iterative): ");
//     for (int i = 0; i < n; i++) {
//         if (i == 0) {
//             printf("%d ", a);
//         } else if (i == 1) {
//             printf("%d ", b);
//         } else {
//             next = a + b;
//             a = b;
//             b = next;
//             printf("%d ", next);
//         }
//     }
//     printf("\n");
// }

// void Recursive(int n) {
//     printf("Fibonacci Series (Recursive): ");
//     for (int i = 0; i < n; i++) {
//         printf("%d ", fibonacci(i));
//     }
//     printf("\n");
// }

// int fibonacci(int n) {
//     if (n == 0) {
//         return 0;
//     } else if (n == 1) {
//         return 1;
//     }
//     return fibonacci(n - 1) + fibonacci(n - 2);
// }

// int main() {
//     int n;

//     printf("Enter the number of terms: ");
//     scanf("%d", &n);

//     Iterative(n);
//     Recursive(n);

//     return 0;
// }


// #include <stdio.h>

// int Iterative(int a, int b) {
//     int result = 1;
//     for (int i = 0; i < b; i++) {
//         result *= a;
//     }
//     return result;
// }

// int Recursive(int a, int b) {
//     if (b == 0) {
//         return 1;
//     }
//     return a * Recursive(a, b - 1);
// }

// int main() {
//     int a, b;

//     printf("Enter a : ");
//     scanf("%d", &a);

//     printf("Enter b : ");
//     scanf("%d", &b);

//     int resultIterative = Iterative(a, b);
//     int resultRecursive = Recursive(a, b);

//     printf("using iterative method: %d\n", resultIterative);
//     printf("using recursive method: %d\n", resultRecursive);

//     return 0;
// }


//  ASSIGNMENT 10 *********

// #include <stdio.h>
// int main() {
//     int arr[20];
//     int sum = 0;
//     float average;
//     printf("Enter 20 elements: \n");
//     for (int i = 0; i < 20; i++) {
//         scanf("%d", &arr[i]);
//         sum += arr[i];
//     }
//     average = sum / 20.0;
//     printf("Sum of the array elements: %d\n", sum);
//     printf("Average of the array elements: %.2f\n", average);
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int arr[20];
//     int sum = 0;

//     printf("Enter 20 elements: \n");
//     for (int i = 0; i < 20; i++) {
//         scanf("%d", &arr[i]);
//     }

//     for (int i = 0; i < 20; i++) {
//         if (i % 2 == 0) {  
//             sum += arr[i];
//         }
//     }
//     printf("Sum of elements at even positions: %d\n", sum);

//     return 0;
// }


// #include <stdio.h>
// int main() {
//     int arr[20];
//     int largest, smallest;

//     printf("Enter 20 elements: \n");
//     for (int i = 0; i < 20; i++) {
//         scanf("%d", &arr[i]);
//     }

//     largest = arr[0];
//     smallest = arr[0];

//     for (int i = 1; i < 20; i++) {
//         if (arr[i] > largest) {
//             largest = arr[i];
//         }
//         if (arr[i] < smallest) {
//             smallest = arr[i];
//         }
//     }

//     printf("Largest number in the array: %d\n", largest);
//     printf("Smallest number in the array: %d\n", smallest);

//     return 0;
// }


// #include <stdio.h>

// int main() {
//     int arr[20], reversedArr[20];
//     int n;

//     printf("Enter the number of elements (up to 20): ");
//     scanf("%d", &n);

//     printf("Enter %d elements: \n", n);
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     for (int i = 0; i < n; i++) {
//         reversedArr[i] = arr[n - i - 1];
//     }

//     for (int i = 0; i < n; i++) {
//         printf("%d ", reversedArr[i]);
//     }

//     printf("\n");

//     return 0;
// }


// #include <stdio.h>

// int main() {
//     int arr[20], n;

//     printf("Enter the number of elements: ");
//     scanf("%d", &n);

//     printf("Enter %d elements: \n", n);
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     for (int i = 0; i < n; i++) {
//         int count = 1;
//         if (arr[i] != -1) {
//             for (int j = i + 1; j < n; j++) {
//                 if (arr[i] == arr[j]) {
//                     count++;
//                     arr[j] = -1;  
//                 }
//             }
//             printf("Element %d appears %d times\n", arr[i], count);
//         }
//     }

//     return 0;
// }


// #include <stdio.h>

// int main() {
//     int arr[20], n, search, found = -1;

//     printf("Enter the number of elements: ");
//     scanf("%d", &n);

//     printf("Enter %d elements: \n", n);
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     printf("Enter the number to search: ");
//     scanf("%d", &search);

//     for (int i = 0; i < n; i++) {
//         if (arr[i] == search) {
//             found = i;
//             break;
//         }
//     }

//     if (found != -1) {
//         printf("Number %d is found at position %d.\n", search, found + 1);
//     } else {
//         printf("Number %d is not found in the array.\n", search);
//     }

//     return 0;
// }

