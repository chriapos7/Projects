#include <stdio.h>
#include <math.h>

int main() {
  double a, b, c, x1, x2, realpart, imaginepart;
  double discriminant;

  printf("Enter the value of a: ");
  scanf("%lf", &a);

  printf("Enter the value of b: ");
  scanf("%lf", &b);

  printf("Enter the value of c: ");
  scanf("%lf", &c);

  discriminant = (b * b) - 4 * a * c;

  if (discriminant > 0) {
  		x1=(-b+sqrt(discriminant)) / (2 * a);
    	x2=(-b-sqrt(discriminant)) / (2 * a);
    printf("The equation has two real roots : \n x1 = %lf \n x2= %lf", x1, x2);
  } else if (discriminant == 0) {
  		x1= -b / (2 * a);
    printf("The equation has one real root : \n x1 = %lf", x1);
  } else {
  		realpart = -b / (2 * a);
  		imaginepart = sqrt(-discriminant) / (2 * a);
    printf("The equation has 2 imagine roots : \n x1 = %10.5f + %10.5f i \n x2 = %10.5f - %10.5f i ",realpart, imaginepart, realpart, imaginepart);
  }

  return 0;
}
 
