// 1111111for loop
// for(declaration; condition; updation) {print}


// print 1 to 100 numbers

// #include<stdio.h>
//    int main(){ 
//    for(int i=1; i<=100; i++){
//        printf("%d\n", i);
//    }
//    return 0;
// }




//print 0 to 10
// #include<stdio.h>
// int main(){
// for(int i=0; i<=10; i++){
//     printf("%d\n", i);
//     }
//     return 0;
// }




// //print a to z
// #include<stdio.h>
//     int main(){
//         for(char ch='a'; ch<='z'; ch++){
//         printf("%c \n", ch);
//         }
//         return 0;
//     }



// 2222222while loop 
// declaration; then while(condition then){print; and then updation;}

//1 to 5 number print

// #include<stdio.h>
// int main(){
//     int i=1;
//     while(i<=5){
//         printf("%d \n", i);
//         i++;
//     }


//     return 0;
// }



//print the number from 0 to n (n given by user)

// #include<stdio.h>
// int main(){

//     int n;
//     printf("give the number : ");
//     scanf("%d", &n);

//     int i=0;
//     while(i<=n){
//         printf("%d \n", i);
//         i++;

//     }
//     return 0;

// }







//33333333333do while loop(first do then condition)
//declaration; do {print; updation;} while(condition);

// #include<stdio.h>
// int main(){
//     int i=1;
//     do{
//         printf("%d \n", i);
//         i++;
//     }
//     while(i<=5);
    
//     return 0;
// }





//print sum of first natural number 

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Give me a Natural Number: ");
//     scanf("%d", &n);

//     int sum=0;  
//     for(int i=1; i<=n; i++){                        //used for loop
//         sum=sum+i;

//     }
//     printf("Sum of first natural number till %d", n); 
//     printf(" is %d\n", sum);
    
//     return 0;
// }






////print sum of first natural number and print all natural number in reverse format


// #include<stdio.h>
// int main(){
//     int n;
//     printf("Give me a Natural Number: ");
//     scanf("%d", &n);

//     int sum=0;  
//     for(int i=n; i>=1; i--){                                           //used "for" loop
//         sum=sum+i;                                                     //reverse number print  (shortcut)
//         printf("%d\n", i);
//    }
//         printf(" Sum is %d\n", sum);
    

//     // for(int i=n; i>=1; i--){                                        //reverse number print (long code)
//     //     printf("%d\n", i);

//     // }   
//     return 0;
// }



// print table of given number

// #include<stdio.h>
// int main(){
//     int n;
//     printf("table number: ");
//     scanf("%d", &n);
//     int table;
//     for(int i=1; i<=10; i++){
    
//         printf("%d\n", n*i);
//     }
//     return 0;
// }









//44444444 breake statement 
//if(condition){break;}


// #include<stdio.h>
// int main(){
// for(int i=1; i<=5; i++){
//     if(i==3){
//         break;
//     }
//     printf("%d\n", i);
// }
// printf("end\n");

//     return 0;
// }





//keep taking number as iput from user until enters odd number


// #include<stdio.h>
// int main(){
//     int n;
    
    
//     do{
//     printf("enter the number: ");
//     scanf("%d", &n);
//     printf("%d\n", n);

//     if(n%2 !=0 ){break;}
//     } while (1);
    
//     printf("Its an odd number\n");
    
//     return 0;
// }



//code to check the given number is multiple of 7


// #include<stdio.h>
// int main(){

//     int n;
//     do
//     {
//         printf("enter number: ");
//         scanf("%d", &n);
//         printf("%d\n", n);
//         if(n%7 == 0){break;}

//     } while (1);
//     printf("yes this number is multiple of 7\n");


//     return 0;

// }








///55555555555continue 

// #include<stdio.h>
// int main(){

//     for(int i=5; i<=50; i++){
//         if(i%2 ==0){continue;}
        
//     printf("%d\n", i);
//     }
//     return 0;
// }





//66666666666factorial

// #include<stdio.h>
// int main(){
//     int n;
//     printf("give me a number: ");
//     scanf("%d", &n);

//     int fact=1;
//     for(int i=1; i<=n; i++){
//         fact=fact*i;
    
//     }printf("%d\n", fact);
//     return 0;
// }



// calculate the sum of all the numbers between 5 and 50

#include<stdio.h>
int main(){

    int sum=0;
    for(int i=5; i<=50; i++){
    sum=sum+i;
    }
     printf("%d\n", sum);
    return 0;

}


/*all the practice code here on date 14/08/2024*/