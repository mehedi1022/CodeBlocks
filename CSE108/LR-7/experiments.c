#include <stdio.h>

int main() {
    int no_t_c, amount;
    char animal;
    int t_rabbit = 0, t_rat = 0, t_frog = 0;  // Totals for rabbits, rats, and frogs


    printf("Enter the number of test cases: ");
    scanf("%d", &no_t_c);

    for (int i = 0; i < no_t_c; i++) {

        printf("Enter the amount and type of animal (C/R/S): ");
        scanf("%d %c", &amount, &animal);


        if (amount >= 1 && amount <= 15) {
            if (animal == 'C') {
                t_rabbit += amount;
            } else if (animal == 'R') {
                t_rat += amount;
            } else if (animal == 'S') {
                t_frog += amount;
            }
        }
    }

    int t_animals = t_rabbit + t_rat + t_frog;
    double p_rabbit = (t_rabbit * 100.0) / t_animals;
    double p_rat = (t_rat * 100.0) / t_animals;
    double p_frog = (t_frog * 100.0) / t_animals;


    printf("Total: %d cobaias\n", t_animals);
    printf("Total de coelhos: %d\n", t_rabbit);
    printf("Total de ratos: %d\n", t_rat);
    printf("Total de sapos: %d\n", t_frog);
    printf("Percentual de coelhos: %.2f %%\n", p_rabbit);
    printf("Percentual de ratos: %.2f %%\n", p_rat);
    printf("Percentual de sapos: %.2f %%\n", p_frog);

    return 0;
}
