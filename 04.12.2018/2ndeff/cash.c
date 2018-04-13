#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void) {
    float dollars;
    do {
      dollars = get_float("Change: ");
    }
    while (dollars < 0);
    int change = round(dollars * 100);
    int coins = 0;
    while(change >= 25)
    {
        change = change - 25;
        coins++;
    }
    while(change >= 10)
    {
        change = change - 10;
        coins++;
    }
    while(change >= 5)
    {
        change = change - 5;
        coins++;
    }
    while(change >= 1)
    {
        change = change - 1;
        coins++;
    }
    printf("%i\n", coins);
}