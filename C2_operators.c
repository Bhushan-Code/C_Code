//Area of Square



// #include<stdio.h>
// int main(){
//     int side;
//     printf("Enter Side_");
//     scanf("%d", &side);

//     printf("Area of Square : %d", side * side);
//     return 0;
// }





//Average of Numbers

// #include<stdio.h>
// int main(){
// int number1;
// int number2;   
// int number3;

// printf("enter number1_");
// scanf("%d", &number1);

// printf("enter number2_");
// scanf("%d", &number2);

// printf("enter number3_");
// scanf("%d", &number3);

// int sum;
// sum = (number1 + number2 + number3) / 3;
// printf("The average of 3 numbers : %d", sum);
// return 0;
// }






//Compound interest 



#include<stdio.h>
#include<math.h>

int main(){
    float principle;
    printf("Enter Principle Amount");
    scanf("%f", &principle);

    float ROI;
    printf("Enter Rate of Interest");
    scanf("%f", &ROI);

    float time;
    printf("Enter Time in Years");
    scanf("%f", &time);
    
    int n;
    printf("Number of times interest compounded per year");
    scanf("%d", &n);

    float CI;
    CI = principle * pow((1+ROI / (n*100)),n * time) - principle;

    printf("Compound Interest : %f", CI);
    
    return 0;
}