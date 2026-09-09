#include <stdio.h>
int main(){
    int a;
    printf("enter a:");
    scanf("%d", &a);
    switch (a){
    case 1:
        printf("you entered a");
        break;
    case 2:
        printf(" you entered b ");
        break;
    case 3:
        printf(" you entered c");
        break;
    case 4:
        printf("you entered d \n");
        break;
    default:
        printf("you pick nothing");
    }
    return 0;
}