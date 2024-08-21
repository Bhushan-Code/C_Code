/*


Syntax 2 - Function Call

int main(){
    printHello();
    return 0;
    }


Syntax 3 - Function Defination

void printHello(){
    printf("Hello");
    }


*/






// for indian say namaste and for french say bonjour

/*
#include<stdio.h>

void Namaste()
{
    printf("Namaste \n");
}

void Bonjoir()
{
    printf("Bonjoir \n");
}

int main()
{
   char ch;
   printf("Please enter your nation (i or f): ");
   scanf("%c", &ch);

   if(ch == 'f')
   {
    Bonjoir();
   }

    else if(ch == 'i')
    {
        Namaste();
    }
   
    else 
    {
        printf("enter valid country");
    }
   
    return 0;
}
*/







//take two number and return sum of two numbers

/*
#include<stdio.h>


int sum(int a, int b)
{
    return a+b;
}


int main()
{
    int a=0;
    int b=0;

    printf("Enter First Number : \n");
    scanf("%d", &a);

    printf("Enter Second Number : \n");
    scanf("%d", &b);

    int s = sum(a, b);
    printf("Sum is : %d\n", s);

    return 0;
}
*/




//print table of given number

/*

#include<stdio.h>
void table(int N)
{
    for(int i=1; i<=10; i++)
    {
    int sum = i * N;    
    printf("%d\n", sum);    
    }
}


int main()
{
    int N=0;
    printf("Enter the number : ");
    scanf("%d", &N);

    table(N);
    return 0;
}
*/





//add 18% gst on any given price

/*
#include<stdio.h>

float GST(float P)
{
  return P+(0.18*P);
}

void calvalue(float value)
    {
        value = value+(0.18*value);
        printf("cal by using void %f\n", value);
    }


int main()
{
    float P=0;
    float value=0;

    printf("Enter Product Price : ");
    scanf("%f", &P);

    calvalue(P);                                         //type 1 by apana college
    printf("cal by using float %f\n", GST(P));           //type 2 by bhushan

}

*/






//Reccursion
//write a code to type hello world  by reccursion

/*

#include<stdio.h>

void Hello(int N)
{
    if (N==0){
        return;
    }
    printf("Hello World\n");
    Hello(N-1);
}

int main()
{
    int N=0;
    printf("How many times : ");
    scanf("%d", &N);

    Hello(N);
}


*/



//Sum of first n natural number

/*
#include<stdio.h>

int sum(int n)
{   
    if(n==1)
    {
        return 1;
    }
    int sumNm = sum(n-1);
    int sumN = sumNm*n;
    return sumN;
}

int main()
{
    int n=0;
    printf("enter: ");
    scanf("%d", &n);
    printf("%d\n",sum(n));
    return 0;
}
*/




//factorial of given number
/*
#include<stdio.h>

int fact(int n)
{   
    if(n==1)
    {
        return 1;
    }
    int factNm = fact(n-1);
    int factN = factNm*n;
    return factN;
}

int main()
{
    int n=0;
    scanf("%d", &n);
    printf("%d\n",fact(n));
    return 0;
}
*/






//write down the n term number in fibonacci number



#include<stdio.h>

int fib(int n)
    {
        if(n == 0) 
        {
            return 0;
        }
        if(n == 1)
        {
            return 1;
        }
        int fibNm1 = fib(n-1);
        int fibNm2 = fib(n-2);
        int fibN = fibNm1 + fibNm2;

        return fibN;
    }


int main()
{
    printf("%d", fib(6));
    return 0;
}