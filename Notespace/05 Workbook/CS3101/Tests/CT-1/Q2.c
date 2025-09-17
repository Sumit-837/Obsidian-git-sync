#include <stdio.h>

double Tax_Calculator(double total_income);

int main() {
  double total_income;
  printf("Input your total income: ");
  scanf("%lf", &total_income);
  printf("\n");
  double tax_payable = Tax_Calculator(total_income);
  printf("your total tax is: %lf\n", tax_payable);
}

double Tax_Calculator(double total_income) {
  double extra, p, other, tax_1, tax_2, tax_payable;
  if (total_income < 0) {
    printf("invalid income!!\n");
  } else if (total_income <= 250000) {
    extra = 0;
    p = 0;
    other = 0;
  } else if (total_income <= 500000) {
    extra = total_income - 250000;
    p = 5;
    other = 0;
  } else if (total_income <= 750000) {
    extra = total_income - 500000;
    p = 10;
    other = 12500;
  } else if (total_income <= 1000000) {
    extra = total_income - 750000;
    p = 15;
    other = 37500;
  } else if (total_income <= 1250000) {
    extra = total_income - 1000000;
    p = 20;
    other = 75000;
  } else if (total_income <= 1500000) {
    extra = total_income - 1250000;
    p = 25;
    other = 125000;
  } else if (total_income > 1500000) {
    extra = total_income - 1500000;
    p = 30;
    other = 187500;
  }
  double a = 4.00 / 100.00;
  double b = p / 100.00;
  double c = extra * b;
  tax_1 = other + c;
  tax_2 = tax_1 * a;
  tax_payable = tax_1 + tax_2;
  return tax_payable;
}
