#include <stdio.h>

int main() {
    float latitude;
    float longitude;
    char info[80];
    char line[300];
    while (scanf("%f,%f,%79[^\n]", &latitude, &longitude, info) == 3) {
        if ((latitude > 26) && (latitude < 34) && (longitude > -76) && (longitude < -64)) {
            scanf("%299s", line);
            printf("%s\n", line);
        }
    }
    return 0;
}
