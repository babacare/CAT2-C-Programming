/*
MAINA WANGUI
CT101/G/23707/24
*/

#include <stdio.h>
// Function declaration
int grossPayCalculation(int hoursWorked, int hourlyWage);
int taxesCalculation(int grossPay);
int netPayCalculation(int grossPay, int taxes);

int grossPayCalculation(int hoursWorked, int hourlyWage) {
    int grossPay, regularHours, overtimeHours;
    // Gross Pay Calculation
    if(hoursWorked > 40){
        regularHours = 40;
        overtimeHours = hoursWorked - 40;

        grossPay = (regularHours * hourlyWage) + (overtimeHours * hourlyWage * 1.5);
    }
    else{
        grossPay = hoursWorked * hourlyWage;
    }

    return grossPay;
    }

// Tax calculation
int taxesCalculation(int grossPay) {
    int taxes;

    if (grossPay <= 600){
        taxes = grossPay * 0.15;
    }
    else{
        taxes = (600 * 0.15) + ((grossPay - 600) * 0.2);
    }
    return taxes;
}

//Netpay calculation
int netPayCalculation(int grossPay, int taxes){

    return grossPay - taxes;
}

int main() {
    int hoursWorked, hourlyWage, grossPay, taxes, netPay;

    printf("Please enter hours worked: ");
    scanf("%d", &hoursWorked);

    printf("Please enter hourly wage: ");
    scanf("%d", &hourlyWage);

    grossPay = grossPayCalculation(hoursWorked, hourlyWage);
    taxes = taxesCalculation(grossPay);
    netPay = netPayCalculation(grossPay, taxes);

    printf("GROSS PAY: %d\n", grossPay);
    printf("TAX PAID: %d\n", taxes);
    printf("NET PAY: %d\n", netPay);

   return 0;
}