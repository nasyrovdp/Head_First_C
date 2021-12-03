#include <stdio.h>

struct exercise {
    const char *description;
    float duration;
};

struct meal {
    const char *ingredients;
    float weight;
};

struct preferences {
    struct meal food;
    struct exercise exercise;
};

struct fish {
    const char *name;
    const char *species;
    int teeth;
    int age;
    struct preferences care;
};

void label(struct fish a) {
    printf("Tank label\n----------\nName: %s\nSpecies: %s\nFood ingredients: %s\nFood weight: %.1f\nExercise description: %s\nExercise duration: %.1f\n----------\n", a.name, a.species, a.care.food.ingredients, a.care.food.weight, a.care.exercise.description, a.care.exercise.duration);
}

int main() {
    struct fish snappy = {"Snappy", "pirahna", 69, 4, {{"meat", 0.2}, {"swim in the jacuzzi", 7.5}}};
    label(snappy);
    return 0;
}
