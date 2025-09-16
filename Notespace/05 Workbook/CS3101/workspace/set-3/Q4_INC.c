#include <stdio.h>
void electricity_bill_calculator(double unit);

int main() {
  double unit = 24;
  electricity_bill_calculator(unit);
}

void electricity_bill_calculator(double unit) {
  double bill, factor;
  if (unit < 0) {
    printf("unit must be positive integer");
  } else if (unit < 25) {
    factor = 4.89;
    bill = unit * factor;
  } else if (unit < 35) {
    factor = 5.40;
    bill = unit * factor;
  } // copy and p[aste the rest
  printf("You'll pay %.2f times of your unit %i\n", factor, (int)unit);

  printf("Your total bill is %f Rs.", bill);
}
