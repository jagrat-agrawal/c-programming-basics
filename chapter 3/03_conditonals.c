#include <stdio.h>

int main() {
    int marks = 99;

    if (marks >= 90) {
        printf("Grade A\n");
    }
    else if (marks >= 70) {
        printf("Grade B\n");
    }
    else {
        printf("Grade C\n");
    }

    return 0;
}