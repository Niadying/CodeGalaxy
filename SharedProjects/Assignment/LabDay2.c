#include <stdio.h>
// #include <conio.h>

int main(){

    //To calculate the Simple interest of a given amount

    int SI, A, R, T;

    printf("Enter Money\n");
    scanf("%d", &A);

    printf("What rate can you afford?\n");
    scanf("%d", &R);

    printf("For how long?\n");
    scanf("%d", &T);

    SI = (A * R * T)/100;

    printf("Your Simple Interest is %d", SI);
    printf("\n");

    printf("Hamari Bank me Kabhi-bhi wapas mat ana\n");

    //Ramesh Babu

    float BSalary, Dear, Rent, Gross;

    printf("Your Basic Salary\n");
    scanf("%f", &BSalary);

    printf("Your Dearness's Allowance\n");
    scanf("%f", &Dear);

    printf("Your Rent\n");
    scanf("%f", &Rent);

    printf("Your inputed Values are\n Salary %f\n Dearness %f\n Rent %f\n", BSalary, Dear, Rent);

    Gross = (Dear * BSalary/100) + (Rent * Gross/100);

    printf("Your Gross Salary is %f", Gross);
    printf("\n");


    //Distance Converter

    int Distance, Meter, Inches, Feet, CM;

    printf("Input the distance between IIITB and NITB\n");
    scanf("%d", &Distance);

    Meter = Distance * 1000;
    Feet = Distance * 3820;
    Inches = Distance * 39280;
    CM = Distance * 1000 * 100;

    printf("The Value in different Units\n Meters = %d\n Feet = %d\n Inches = %d\n CM = %d", Meter, Feet, Inches, CM);
    printf("\n");

    int Sub1, Sub2, Sub3, Sub4, Sub5;
    float Agg, Per;

    printf("Please provide your Marks accordingly\n");
    printf("Sub1\n Sub2\n Sub3\n Sub4\n Sub5\n");

    scanf("%d %d %d %d %d", &Sub1, &Sub2, &Sub3, &Sub4, &Sub5);
    Agg = Sub1 + Sub2 + Sub3 + Sub4 + Sub5;

    printf("The Aggregrate value of your Subjects is %f", Agg);
    printf("\n");

    Per = Agg/5;

    printf("Total percentage Obtained = %f", Per);
    printf("\n");


    //Variable Exchange


    int a, b;

    printf("See the magic\n");
    scanf("%d %d", &a, &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("Magic!!\n");
    printf("a = %d\n b = %d\n", a, b);

    //Profit

    int CP, SP, P;

    printf("Selling Price\n");
    scanf("%d", &SP);

    printf("Profit\n");
    scanf("%d", &P);

    CP = (SP - P)/ 15;

    printf("The Cost Price of single item is %d", CP);
    printf("\n");


    printf("Thank You!");

}