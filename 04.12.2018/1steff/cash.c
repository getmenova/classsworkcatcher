#include <stdio.h>
#include <cs50.h>
#include <math.h>
//modulo
int main(void) {
    float dollars;
    do {
      dollars = get_float("Change: ");
    }
    while (dollars < 0);
    int change = round(dollars * 100);
    int coins = 0;
    coins = change / 25;
    change = change % 25;

    coins += change / 10;
    change = change % 10;

    coins += change / 5;
    change = change % 5;

    coins += change / 1;
    change = change % 1;
    printf("%i\n", coins);


}



