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
    fgets(search_string, 80, stdin);
    for(int i = 0; i < 5; i++) {
        if(strstr(track_list[i], search_string)) {
            printf("%s\n", track_list[i]);
        }
    }
    return 0;
}
