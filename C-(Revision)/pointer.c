#include <stdio.h>
int main()
{
    // int a = 10;
    // int *p;
    // printf("a  = %d\n", a);
    // printf("&a  = %p\n", &a);
    // printf("p  = %d\n", p);
    // printf("&p  = %p\n", &p);
    // printf("*p  = %d\n", *p);

    // a  = 10
    // &a  = 0061FF1C
    // p  = 0
    // &p  = 0061FF18

    printf("\n\n\n");

    int a = 10;
    int *p = &a;
    printf("a  = %d\n", a);
    printf("&a  = %p\n", &a);
    *p = 15;
    printf("a  = %d\n", a);
    printf("p  = %p\n", p);
    printf("&p  = %p\n", &p);
    // a  = 10
    // &a  = 0061FF1C
    // a  = 15
    // p  = 0061FF1C
    // &p  = 0061FF18
    return 0;
}