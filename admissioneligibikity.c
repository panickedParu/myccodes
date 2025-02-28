#include <stdio.h>

int main() {
    int math, physics, chemistry, total, math_physics_total;

    // Taking input for marks
    printf("Enter marks in Mathematics: ");
    scanf("%d", &math);

    printf("Enter marks in Physics: ");
    scanf("%d", &physics);

    printf("Enter marks in Chemistry: ");
    scanf("%d", &chemistry);

    // Calculate total marks
    total = math + physics + chemistry;
    math_physics_total = math + physics;

    // Check eligibility criteria
    if ((math >= 65 && physics >= 55 && chemistry >= 50 && total >= 190) || math_physics_total >= 140) {
        printf("The candidate is eligible for admission.\n");
    } else {
        printf("The candidate is NOT eligible for admission.\n");
    }

    return 0;
}

