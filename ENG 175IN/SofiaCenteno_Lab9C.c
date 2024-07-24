#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// define structure
struct person {
    char firstName[50];
    char lastName[50];
    int age;
    int income;
    char married; // 'Y' for married 'N' for single
    char state[3];
};

int main() {
    FILE *fp;
    char line[200];
    struct person customers[20];
    int count = 0;

    // open file
    fp = fopen("Lab9b.txt", "r");
    if (fp == NULL) {
        perror("Error opening file");
        return 1;
    }

    // read each line from the file
    while (fgets(line, sizeof(line), fp)) {
        sscanf(line, "%s %s %d %d %c %s",
               customers[count].firstName,
               customers[count].lastName,
               &customers[count].age,
               &customers[count].income,
               &customers[count].married,
               customers[count].state);
        
        count++;
    }

    // close file
    fclose(fp);

    // process data and print eligible customers
    for (int i = 0; i < count; ++i) {
        struct person p = customers[i];

        // check criteria
        if (p.age > 21 &&
            ((p.married == 'N' && (strcmp(p.state, "CA") != 0 ? p.income >= 60000 : p.income >= 80000)) ||
             (p.married == 'Y' && (strcmp(p.state, "CA") != 0 ? p.income >= 100000 : p.income >= 150000)))) {
            printf("Reach out to %s %s from %s and %d\n", p.firstName, p.lastName, p.state, p.age);
        }
    }

    return 0;
}

// pseudocode:
// define person structure with fields: firstName, lastName, age, income, married, state
// open "Lab9b.txt" file
// read each line, parse data into person structure fields
// close file
// check eligibility criteria (age > 21, income based on marital status and state)
// print details of eligible customers


