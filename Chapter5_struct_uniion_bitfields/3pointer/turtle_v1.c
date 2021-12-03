#include <stdio.h>

typedef struct {
    const char *name;
    int age;
} turtle;

void happy_birthday(turtle *t) {
    t->age = t->age + 1;
    printf("Happy Birthday, %s! Your age is now %i.\n", t->name, t->age);
}

int main() {
    turtle myrtle = {"Myrtle", 99};
    happy_birthday(&myrtle);
    printf("%s's age is now %i.\n", myrtle.name, myrtle.age);
    return 0;
}
