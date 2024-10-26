#include<stdio.h>

int main() {
    int tam, eng, mat, sci, soc, tot, avg;

    // Input marks for each subject
    printf("\nEnter the Tamil marks: ");
    scanf("%d", &tam);
    printf("\nEnter the English marks: ");
    scanf("%d", &eng);
    printf("\nEnter the Maths marks: ");
    scanf("%d", &mat);
    printf("\nEnter the Science marks: ");
    scanf("%d", &sci);
    printf("\nEnter the Social Science marks: ");
    scanf("%d", &soc);

    // Calculate total and average
    tot = tam + eng + mat + sci + soc;
    printf("\nTotal marks: %d", tot);

    avg = tot / 5;
    printf("\nAverage marks: %d", avg);

    // Determine grade based on average
    if(avg >= 90 && avg <= 100) {
        printf("\nA grade");
    }
    else if(avg >= 80 && avg < 90) {
        printf("\nB grade");
    }
    else if(avg >= 70 && avg < 80) {
        printf("\nC grade");
    }
    else if(avg >= 40 && avg < 70) {
        printf("\nD grade");
    }
    else if(avg < 40) {
        printf("\nNo grade");
    }

    // Check for individual subject fail condition
    if(tam < 35 || eng < 35 || mat < 35 || sci < 35 || soc < 35) {
        printf("\nFail");
    } else {
        printf("\nPass");
    }

    return 0;
}
