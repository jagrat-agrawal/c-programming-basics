#include <stdio.h>
int main(){
    int a, b, c, d, greatest;
    printf("enter 4 numbers");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    greatest = a;
    if(b>greatest){
        greatest = b;
    }
    if(c>greatest){
        greatest = c;
    }
    if(d>greatest){
        greatest = d;
    }
    printf("the greatest number is %d", greatest);
    return 0;
}