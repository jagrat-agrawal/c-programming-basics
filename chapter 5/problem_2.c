#include <stdio.h>
float force(int a);
float force(int a){
    return 9.8*a;
}
int main(){
    int m = 5;
    printf("%f",force(m));
    return 0;
}