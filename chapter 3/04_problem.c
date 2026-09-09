#include <stdio.h>
int main(){
    int year;
    printf("enter year:");
    scanf("%d",year);
    if(year % 4==0){
        int year;
        printf("yes %d is leap year",year);
    }
    else{
        int year;
        printf("no %d is not leap year",year);
    }
    return 0;
}