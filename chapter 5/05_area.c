#include <stdio.h>
int area(int x);
int area(int x){
    printf("the area of square is %d", x*x);
}
int main(){
    int a;
    scanf("%d",&a);
    area(a);
    return 0;
}