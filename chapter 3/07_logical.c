#include <stdio.h>
int main()
{
    int a = 1;
    int b = 1;
    printf("the value of this is %d\n", a && b);  // it is and gate as learned in physics
    printf("the value of this is %d\n", a || b);  // it is or gate as learned in physics
    printf("this value is not of (a) is %d\n", !a); // it is not gate according to physics
    if (a && b){
        printf("both are true\n");
    }
    //similarly
    if (a){
        if (b)
        {
            printf("both are true\n");
        }
    }
    return 0;
}