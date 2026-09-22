#include <stdio.h>
float avg(int a , int b , int c);

float avg(int a , int b , int c){
    printf("avg of three is %d", (a +b +c )/3);
}
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    avg(a,b,c);
}
