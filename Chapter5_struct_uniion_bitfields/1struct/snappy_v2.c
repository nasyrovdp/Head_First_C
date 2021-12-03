#include <stdio.h>

struct preferences {
    const char *food;
    float exercise_hours;
};

struct fish {
    const char *name;
    const char *species;
    int teeth;
    int age;
    struct preferences care;
};

/* Print out the catalog entry */
void catalog(struct fish f) {
    puts("Catalog entry:");
    printf("%s is a %s with %i teeth. He is %i years old.\n", f.name, f.species, f.teeth, f.age);
    printf("%s likes to eat %s.\n", f.name, f.care.food);
    printf("%s likes to exercise for %.1f hours.\n", f.name, f.care.exercise_hours);
}

/* Print the label for the tank */
void label(struct fish f) {
    puts("Tank label:");
    printf("Name: %s\nSpecies: %s\n%i teeth, %i years old\n", f.name, f.species, f.teeth, f.age);
}

int main() {
    struct fish snappy = {"Snappy", "Pirahna", 69, 4, {"meat", 7.5}};
    catalog(snappy);
    puts("");
    label(snappy);
    return 0;
}
