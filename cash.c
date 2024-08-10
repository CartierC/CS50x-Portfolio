#include <cs50.h>
#include <stdio.h>

// Function to calculate the minimum number of coins
int calculate_coins(int cents);

int main(void)
{
    int cents;

    // Prompt user for a positive integer for change owed
    do
    {
        cents = get_int("Change owed: ");
    }
    while (cents < 0);

    // Calculate the minimum number of coins
    int coins = calculate_coins(cents);

    // Print the results
    printf("%d\n", coins);

    return 0;
}

// Function to calculate the minimum number of coins
int calculate_coins(int cents)
{
    int coins = 0;

    // Calculate number of quarters
    coins += cents / 25;
    cents %= 25;

    // Calculate number of dimes
    coins += cents / 10;
    cents %= 10;

    // Calculate number of nickels
    coins += cents / 5;
    cents %= 5;

    // Calculate number of pennies
    coins += cents;

    return coins;
}
