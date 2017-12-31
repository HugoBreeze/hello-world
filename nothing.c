#include <stdio.h>
#include <stdlib.h>

void add(int a, int b){
    printf("Function called: add\n");
    int ans = a + b;
    printf("Sum: %d + %d = %d\n",a,b,ans);
}

void call(void){
    printf("Enter 2 numbers to add.\n");
    int a, b;
    scanf("%d%d",&a,&b);
    add(a,b);
    int *a_ptr = &a;
    int *b_ptr = &b;
    printf("Pointers: %p, %p\n", a_ptr, b_ptr);
}

void main(void){
    printf("The beginning of something new and difficult?...\n");
    call();
}