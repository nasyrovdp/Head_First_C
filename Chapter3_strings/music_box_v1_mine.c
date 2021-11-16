#include <stdio.h>
#include <string.h>

char track_list[][80] = {
    "I left my heart in Harvard Med School", 
    "Newark, Newark - a wonderful town", 
    "Dancing with a Dork", 
    "From here to maternity", 
    "The girl from Iwo Jima"
};

void find(char search_string[]) {
    for (int i = 0; i < 5; i++) {
        if (strcasestr(track_list[i], search_string))
            printf("Track %i: '%s'\n", i, track_list[i]);
    }
}

int main() {
    char search_string[80];
    printf("What song are you looking for? - ");
    scanf("%79s", search_string);
    find(search_string);
    return 0;
}
