#include <stdio.h>

#define Hourly_Rate (15.75)

int main(){

    double hours_per_week, weeks_worked, total_hours_worked, monthly_salary;
    
    //user input
    printf("Enter the number of hours worked per week: ");
    scanf("%lf", &hours_per_week);
    
    printf("Enter the number of weeks worked: ");
    scanf("%lf", &weeks_worked);
    
    //monthly salary calculation
    monthly_salary = (hours_per_week * weeks_worked * Hourly_Rate) / 12;
    //print monthly salary
    printf("Monthly salary: $%.2f\n", monthly_salary);
    

    return 0;
}
