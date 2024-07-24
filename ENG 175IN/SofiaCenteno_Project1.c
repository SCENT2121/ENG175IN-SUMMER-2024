#include <stdio.h>

int main() {
    // variables
    double S_sample = 7.734;
    double S0 = 2.47;
    double S1 = 3.00;
    double T0 = 29.6001;
    double T1 = 29.1000;
    
    // calculate predicted freezing temperature using linear interpolation formula
    double T_prediction = T0 + (T1 - T0) * ((S_sample - S0) / (S1 - S0));
    
    // high precision prediction
    printf("The predicted freezing temperature of water with a salinity of %.6f percent is %.6f degrees Fahrenheit.\n", S_sample, T_prediction);

    // lower precision prediction
    printf("The predicted freezing temperature of water with a salinity of %.2f percent is %.4f degrees Fahrenheit.\n", S_sample, T_prediction);

    // convert fahrenheit to celsius
    double T_celsius = ((T_prediction - 32) * 5) / 9;
    
    // convert salinity percentage to ppt (parts per thousand)
    double salinity_ppt = S_sample * 10;
    
    // temp in celsius and salinity in ppt
    printf("The predicted freezing temperature of water with a salinity of %.2f ppt is %.4f degrees Celsius.\n", salinity_ppt, T_celsius);

    return 0;
}