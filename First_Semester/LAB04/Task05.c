#include <stdio.h>

int main() {

    int id;
    char name;
    int units;
    float amt = 0;
    float surge = 0;
    float net = 0;
    printf("Enter ID: ");
    scanf("%d", &id);
    printf("Enter Name: ");
    scanf("%c", name);
    printf("Enter Units: ");
    scanf("%d", &units);
    if (units <= 199) {
        amt = units * 0.50;
    }
    else if (units >= 200 && units < 300) {
        amt = units * 16.20;
    }
    else if (units >= 300 && units < 500) {
        amt = units * 20.10;
    }
    else if (units >= 500) {
        amt = units * 35.90;
    }

    if (amt > 18000) {
        surge = amt * 0.15;
    }
    net = amt + surge;

    printf("ID: %d\n", id);

    printf("Name: %c\n", name);

    printf("Units: %d\n", units);

    printf("Amount: %.2f\n", amt);

    printf("Surcharge: %.2f\n", surge);

    printf("Net: %.2f\n", net);

    return 0;

}