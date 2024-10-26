#include<stdio.h>

int main() {
    float total_selling_price, total_profit, cost_price_per_item;
    int number_of_items = 15;

    // Input total selling price and total profit
    printf("Enter the total selling price of %d items: ", number_of_items);
    scanf("%f", &total_selling_price);

    printf("Enter the total profit earned on %d items: ", number_of_items);
    scanf("%f", &total_profit);

    // Calculate the cost price of one item
    cost_price_per_item = (total_selling_price - total_profit) / number_of_items;

    // Display the result
    printf("The cost price of one item is: %.2f\n", cost_price_per_item);

    return 0;
}

