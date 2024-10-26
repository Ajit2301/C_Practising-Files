#include<stdio.h>

int main() {
    int amt;
    printf("\nEnter the amount: ");
    scanf("%d", &amt); // For example, 5255

    printf("\nNotes of 500: %d", (amt / 500)); // Calculate 500 notes
    amt = amt % 500; // Update amt

    printf("\nNotes of 200: %d", (amt / 200)); // Calculate 200 notes
    amt = amt % 200; // Update amt

    printf("\nNotes of 100: %d", (amt / 100)); // Calculate 100 notes
    amt = amt % 100; // Update amt

    printf("\nNotes of 50: %d", (amt / 50)); // Calculate 50 notes
    amt = amt % 50; // Update amt

    printf("\nNotes of 20: %d", (amt / 20)); // Calculate 20 notes
    amt = amt % 20; // Update amt

    printf("\nNotes of 10: %d", (amt / 10)); // Calculate 10 notes
    amt = amt % 10; // Update amt

    printf("\nCoins of 5: %d", (amt / 5)); // Calculate 5 coins
    amt = amt % 5; // Update amt

    printf("\nCoins of 2: %d", (amt / 2)); // Calculate 2 coins
    amt = amt % 2; // Update amt

    printf("\nCoins of 1: %d", (amt / 1)); // Calculate 1 coins

    return 0;
}
