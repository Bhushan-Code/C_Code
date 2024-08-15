// If-else
/*
if (condition){
    do something if TRUE
}
else{
 do something if FALSE
 }
 */


//Aldult or not


// #include<stdio.h>
// int main(){
//     int age;
//     printf("Enter your Age: ");
//     scanf("%d", &age);

//     if (age<18)
//     {
//         printf("Not Adult\n");
//     }
//     else{
//         printf("Adult\n");
//     }
//     printf("Thank you.\n");
// return 0;
// }





//else if


// #include<stdio.h>
// int main(){
//     int age;
//     printf("Enter Your Age: ");
//     scanf("%d", &age);

//     if (age<18 && age>0)
//     {
//         printf("Not Adult\n");
//     }
//     else if (age>=18 && age<=60)
//     {
//        printf("Adult\n");
//     }
//     else {
//         printf("You don't exist\n");
//     }
//        printf("Thank You\n");
// }




//ternary condition operation
/*conditon ? do something if TRUE do : do something; */



// #include<stdio.h>
// int main(){
//     int age;
//     printf("Enter Your Age: ");
//     scanf("%d", &age);


//     age<18 ? printf("Not Adult\n") : printf("Adult\n");
//     return 0;
// }




//Switch
/*
int number;
switch(number){
case C1: do something           check if true will print
    breake;                     if case 1 true this wiil break next cases
case C2 : do something          if case 1 false thic check if true print
    breake;                     if case 2 true this will break next cases
default : do something          if all cases false this case will exicute
}
*/


// #include<stdio.h>
// int main(){
//     int day;
//     printf("Enter day(1-7): ");
//     scanf("%d", &day);

//     switch (day)
//     {
//         case 1 : printf("Monday\n");
//         break;
//         case 2 : printf("Tuesday\n");
//         break;
//         case 3 : printf("Wednesday\n");
//         break;
//         case 4 : printf("Thursday\n");
//         break;
//         case 5 : printf("Friday\n");
//         break;
//         case 6 : printf("Saturday\n");
//         break;
//         case 7 : printf("Sunday\n");
//         break;
//        default : printf("Not a valid day\n");
//     }

//     return 0;
// }










// condition with condition


// #include<stdio.h>
// int main(){

//     int number;
//     printf("Enter a number; ");
//     scanf("%d", &number);
//     if (number>=0)
//     {
//         printf("Number is Positive\n");
//         if (number % 2 == 0)
//         {
//             printf("And Even\n");
//         }
//         else{
//             printf("And Odd\n");
//         }
            
//     }
//     else {
//         printf("Number is Negative\n");
//         if (number % 2 == 0)
//         {
//             printf("And Even\n");
//         }
//         else{
//             printf("And Odd\n");
//         }
//     }
    
//     return 0;
// }





/*write a program to give grade to a student 
mark <30 is C
30<=mark <70 B
70<=mark <90 A
90<=mark <100 A+
*/



// #include<stdio.h>
// int main(){

//     int mark;
//     printf("Enter Marks: ");
//     scanf("%d", &mark);

//     if (mark<30)
//     {
//         printf("Grade is C\n");
//     }
//     else if (mark>=30 && mark <70)
//     {
//         printf("Grade is B\n");
//     }
//     else if (mark>=70 && mark <90)
//     {
//         printf("Grade is A\n");
//     }
//     else if (mark>=90 && mark <=100)
//     {
//         printf("Grade is A+\n");
//     }
//     else 
//     {
//         printf("Enter Valid Marks\n");
//     }

//     return 0;

// }



//Digit or not


#include<stdio.h>
int main(){
char ch;
printf("Enter the Character");
scanf("%c", &ch);

if(ch>='0' && ch<='9')
	 {
	  	printf("%c is DIGIT.\n", ch);
	 }
	 else
	 {
	  	printf("%c is NOT DIGIT.\n", ch);
	 }
     
return 0;
}

