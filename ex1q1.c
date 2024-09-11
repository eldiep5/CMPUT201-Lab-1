#include <stdio.h>

float pi = 3.14;


int main(void)  {

float velocity, radius, time;

printf("Enter an orbital speed (km/h): ");
scanf("%f", &velocity);
printf("\nEnter an orbital radius (km): ");
scanf("%f", &radius);
printf("\nEnter an orbital radius (km): ");
scanf("%f", &time);


printf("\n%f, %f, %f", velocity, radius, time);
return 0;


}