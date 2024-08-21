// Pointer


// #include<stdio.h>
// int main()
// {
//     int age = 25;
//     int *ptr = &age;
//     int _age = *ptr;

//     printf("%p\n", ptr);        //value of ptr that is - address of age
//     printf("%p\n", &age);       //address of age

//     printf("%p\n", &ptr);       //address of ptr

//     printf("%d\n", age);        //value of age
//     printf("%d\n", *ptr);       //ptr = address of age and * = value at that address (valur of age)
//     printf("%d\n", *(&age));    //&age =address of age and * = value at that address (valur of age)


//     return 0;
// }


//Q 


// #include<stdio.h>
// int main()
// {
//     int x;
//     int *ptr;

//     ptr = &x;                    //&x (address of x) stored in ptr
//     *ptr = 0;                    //* value at the address //*ptr value at address stored in ptr that is value of x

//     printf("x = %d\n", x);
//     printf("*ptr = %d\n", *ptr);

//     *ptr +=5;
    
//     printf("x = %d\n", x);
//     printf("*ptr = %d\n", *ptr);

//     (*ptr)++;

//     printf("x = %d\n", x);
//     printf("*ptr = %d\n", *ptr);


//     return 0;
// }






//pointer to pointer




#include<stdio.h>
int main()
{
    int i = 5;
    int *ptr = &i;
    int **pptr = &ptr;

    printf("%d\n", i);          //value of i
    printf("%d\n", *ptr);       //value at address which stored in ptr
    printf("%d\n", **pptr);     //value at address which stored in ptr which store in pptr

    return 0;

}