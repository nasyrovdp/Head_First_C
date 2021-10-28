/*
 * Program to count cards in Blackjack.
 * Released under the Vegas Public License.
 * (c)2014 The College Blackjack Team.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    char card_name[3];
    int count = 0;
    while (card_name[0] != 'X') {
        puts("Enter the card_name (or X to exit): ");
        scanf("%2s", card_name);
        int val = 0;
        if (card_name[0] == 'K') {
            val = 10;
        } else if (card_name[0] == 'Q') {
            val = 10;
        } else if (card_name[0] == 'J') {
            val = 10;
        } else if (card_name[0] == 'A') {
            val = 11;
        } else if (card_name[0] == 'X') {
            puts("Good bye!");
            break;
        } else {
            val = atoi(card_name);
        }
        printf("The card value is: %i\n", val);
        if (val >= 3 && val <= 6) {
            count++;
        } else if (val == 10) {
            count--;
        }
        printf("The count is %i\n", count);
    }

    return 0;
}
