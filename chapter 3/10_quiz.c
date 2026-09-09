#include <stdio.h>
int main(){
    /* Quick Quiz: Write a program to find grade of a student given his marks based on below:
90 100 => A
80 -90 => B
70 80 => C
60-70 => D
5060 => E
<50 => F*/
    int marks;
    printf("enter your marks:");
    scanf("%d", &marks);
    if(marks<=100 && marks>=90){
        printf("your grade is A");
    }
    if(marks<=90 && marks>=80){
        printf("your grade is B");
    }
    if(marks<=80 && marks>=70){
        printf("your grade is C");
    }
    if(marks<=70 && marks>=60){
        printf("your grade is D");
    }
    if(marks<=60 && marks>=50){
        printf("your grade is E");
    }
     if(marks<=50){
        printf("you are fail");
    }
    return 0;
}