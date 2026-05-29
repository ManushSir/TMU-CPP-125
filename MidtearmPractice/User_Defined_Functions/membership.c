#include <stdio.h>

float e_membership(char mem, float sale) {
    float disc;
    if (mem == 'g' || mem == 'G') {
        disc = (float)sale * 0.5;
    }
    else if (mem == 'p' || mem == 'P') {
        disc = (float)sale * 0.75;
    }
    else if (mem == 's' || mem == 'S') {
        disc = (float)sale * 0.25;
    }
    else {
        printf("invalid input\n");
        disc = 0;
    }
    return disc;
}

int main(void) {
    float s;
    char c;
    printf("\nWelcome to Raghav's E commerce Store\n");
    printf("\nPlease enter your total sale in $: ");
    scanf("%f", &s);                        
    printf("Kindly enter your membership: ");
    scanf(" %c", &c);                      
    printf("Welcome %c member, your discount amount is %.2lf\n", c, e_membership(c, s));
    return 0;
}