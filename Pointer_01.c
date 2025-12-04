/*
Pointer points to the memory location, where, 
In order to access the memory address of a variable, , prepend it with  sign. For example, &val returns the memory address of .

This memory address is assigned to a pointer and can be shared among various functions. For example,  will assign the memory address of  to pointer . To access the content of the memory to which the pointer points, prepend it with a *. For example, *p will return the value reflected by  and any modification to it will be reflected at the source ().

Task

Complete the function void update(int *a,int *b). It receives two integer pointers, int* a and int* b. Set the value of  to their sum, and  to their absolute difference. There is no return value, and no return statement is needed.

>>> a = a + b;
>>> b = |a - b|

Input Format

The input will contain two integers,  and , separated by a newline.

Output Format

Modify the two values in place and the code stub main() will print their values.

Note: Input/ouput will be automatically handled. You only have to complete the function described in the 'task' section.


steps :

first initialize 2 variables, let say a, b; then we will be initializing the pointers as *pa and *pb and assign this pointer with the memory location of the a and b:

*pa = a, *pb = b;

we will pass this pointer to function which is of type void (does nto return), and then we will perform addition and substraction operation, [Note: In substraction, the result can be in negative,
so will will find the absolute difference instead of going in negative value, I want the values to be positive which satisfy b = |a-b|].

*/

#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function
    int sum, diff;
    sum = *a + *b;
    diff = *a - *b;
    if(diff < 0){
        diff = -diff;        // here we are getting the absolute difference, like if the output gives -1 then it will become +1.
    }
    *a = sum;
    *b = diff;
    
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}

