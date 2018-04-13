#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void) {
    float dollars;
    do {
      dollars = get_float("Change: ");
    }
    while (dollars < 0);
    int amount = round(dollars * 100);
    int coins = 0;
    while(amount > 0) {
        if(amount >= 25) {
            coins++;
            amount -= 25;
        } else if(amount >= 10) {
            coins++;
            amount -= 10;
        } else if(amount >= 5) {
            coins++;
            amount -= 5;
        } else {
            coins++;
            amount -= 1;
        }
    }
    printf("%i\n", coins)
}