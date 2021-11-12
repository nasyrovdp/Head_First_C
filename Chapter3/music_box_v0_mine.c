#include <stdio.h>
#include <string.h>

int main() {
    char track_list[][80] = {
        "I left my heart in Harvard Med School", 
        "Newark, Newark - a wonderful town", 
        "Dancing with a Dork", 
        "From here to maternity", 
        "The girl from Iwo Jima"
    };
    char search_string[80];
    printf("What song are you looking for? - ");
    scanf("%79s", search_string);               /* fgets doesn't work, I don't understand why, it adds "return" at the end */
    for (int i = 0; i < 5; i++) {
        if (strcasestr(track_list[i], search_string)) {   /* made it strcasestr to turn off case-sensitive */
            printf("Track %i: '%s'\n", i, track_list[i]);
        }
    }
    return 0;
}
