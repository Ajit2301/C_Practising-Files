#include<stdio.h>

int main() {
    int ch, quantity, i, net = 0;

    Ajith:
    printf("\tMenu Card:\n");
    printf("\n\t\t 1.Tea:Rs.15");
    printf("\n\t\t 2.Coffee:Rs.20");
    printf("\n\t\t 3.LemonTea:Rs.15");
    printf("\n\t\t 4.GreenTea:Rs.20");
    printf("\n\t\t 5.BlackTea:Rs.15");
    printf("\n\t\t 6.BlackCoffee:Rs.20");

    printf("\n Enter your choice:");
    scanf("%d",&ch);

    switch(ch) {
        case 1:
            printf("\n You Ordered Tea");
            printf("\n Enter the quantity: ");
            scanf("%d",&quantity);
            quantity = quantity * 15;
            net += quantity;
            break;
        case 2:
            printf("\n You Ordered Coffee");
            printf("\n Enter the quantity: ");
            scanf("%d",&quantity);
            quantity = quantity * 20;
            net += quantity;
            break;
        case 3:
            printf("\n You Ordered LemonTea");
            printf("\n Enter the quantity: ");
            scanf("%d",&quantity);
            quantity = quantity * 15;
            net += quantity;
            break;
        case 4:
            printf("\n You Ordered GreenTea");
            printf("\n Enter the quantity: ");
            scanf("%d",&quantity);
            quantity = quantity * 20;
            net += quantity;
            break;
        case 5:
            printf("\n You Ordered BlackTea");
            printf("\n Enter the quantity: ");
            scanf("%d",&quantity);
            quantity = quantity * 15;
            net += quantity;
            break;
        case 6:
            printf("\n You Ordered BlackCoffee");
            printf("\n Enter the quantity: ");
            scanf("%d",&quantity);
            quantity = quantity * 20;
            net += quantity;
            break;
        default:
            printf("\n You entered the Invalid Number");
    }

    printf("\n If you want some other items press 1:");
    scanf("%d",&i);
    if(i == 1) {
        goto Ajith;
    }

    printf("\n Total Amount RS %d", net);
    printf("\n Thank You!!, Visit Again");

    return 0;
}
