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
        switch (card_name[0]) {
            case 'K':
            case 'Q':
            case 'J':
                val = 10;
                break;
            case 'A':
                val = 11;
                break;
            case 'X': {
                puts("Good bye!");
                continue;
            }
            default:
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
