// ramesh  
#include<stdio.h>
#include<conio.h>
void main(){
    printf("what are your wages");
    int aaa;
    scanf ("%d",&aaa);
    int bbb;
    bbb=aaa*4/10;
    int ccc;
    ccc=aaa*2/10;
    int ddd;
    ddd= aaa+bbb+ccc;
    printf("the final salry after the allowences is %d\n",ddd);
    

// smpl intrst
    printf("enter the amount you lent to the one in debt");
    int a;
    scanf("%d", &a);
    printf("how long was the time period of the loan ");
    int b;
    scanf("%d",&b);
    int c ;
    printf("what was the interest decided?");
    scanf("%d", &c);
    int d ;
    d = a*b*c/100;
    printf("the final amt that the lender has to pay back to thr lender is : %d\n", d );
    

     // kilometre to ohers
    
    printf("enter the desired distace you want to convert into ohter units");
    int dist;

    scanf("%d",&dist);
    int mtr;
    mtr = dist*1000;

    int inches;
    inches = dist*39370;

    int feet;
    feet = dist*3280;

    int cm;
    cm = dist*1000*100;


    printf("the distance in meter is %d\n",mtr);
    printf("the distance in feet is %d\n",feet);
    printf("the dist in inches is %d\n",inches);
    printf("the dist in cm is %d\n",cm);


    // student wala qu
    printf("ener the marks of the respetive subjects one by one\n");
    int aa;
    int bb;
    int cc;
    int dd;
    int ee;
    
    scanf("%d",&aa);
    scanf("%d",&bb);
    scanf("%d",&cc);
    scanf("%d",&dd);
    scanf("%d",&ee);
    int totl = aa + bb+cc+dd+ee;
    if(aa<101,bb<101,ee<101,cc<101,dd<101){
    printf("The final marks you scored in the exams are %d\n", totl);
    int perct =totl/5;

    printf ("you achieved %d percent \n",perct);
    }
    else {
        printf("The maximum marks for the exams are 100 hence no one can score above 100\nTherefore you should have entered a valid score\nUntil we meet agian\n");

    }
    

// ye wala nhi aata hme 

    // selling price 

    printf("what was the final price you sold the oranges for ? ");
    int prc ;
    scanf("%d" ,&prc);
    printf("what was the net profit that you earned?");
    
    int profit;
    scanf("%d" ,&profit);
    int base_price = (prc-profit)/15;
    printf("The base price of the oranges is %d",base_price);

}
