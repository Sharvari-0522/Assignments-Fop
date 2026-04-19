#include <stdio.h>
#include <string.h>

struct EMPLOYEE {
    char name[50];
    char designation[50];
    char gender[10];
    char doj[15];  // Date of Joining
    float salary;
};

// a) Total number of employees
void totalEmployees(int n) {
    printf("\nTotal number of employees: %d\n", n);
}

// b) Count male and female employees
void countGender(struct EMPLOYEE emp[], int n) {
    int male = 0, female = 0;
    for (int i = 0; i < n; i++) {
        if (strcasecmp(emp[i].gender, "Male") == 0)
            male++;
        else if (strcasecmp(emp[i].gender, "Female") == 0)
            female++;
    }
    printf("\nMale Employees: %d", male);
    printf("\nFemale Employees: %d\n", female);
}

// c) Employees with salary > 10,000
void highSalary(struct EMPLOYEE emp[], int n) {
    printf("\nEmployees with salary more than 10,000:\n");
    for (int i = 0; i < n; i++) {
        if (emp[i].salary > 10000)
            printf("  %s - %.2f\n", emp[i].name, emp[i].salary);
    }
}

// d) Employees with designation "Asst Manager"
void asstManagers(struct EMPLOYEE emp[], int n) {
    printf("\nEmployees with designation 'Asst Manager':\n");
    for (int i = 0; i < n; i++) {
        if (strcasecmp(emp[i].designation, "AsstManager") == 0 ||
            strcasecmp(emp[i].designation, "Asst Manager") == 0)
            printf("  %s\n", emp[i].name);
    }
}

int main() {
    int n;
    printf("Enter number of employees: ");
    scanf("%d", &n);

    struct EMPLOYEE emp[n];

    for (int i = 0; i < n; i++) {
        printf("\nEmployee %d: ", i + 1);
        scanf("%s %s %s %s %f",
              emp[i].name,
              emp[i].designation,
              emp[i].gender,
              emp[i].doj,
              &emp[i].salary);
    }

    totalEmployees(n);
    countGender(emp, n);
    highSalary(emp, n);
    asstManagers(emp, n);

    return 0;
}
