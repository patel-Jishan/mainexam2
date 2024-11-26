/* WAP to convert Fahrenheit to Celsius C = (F-32)/1.85*/
#include<stdio.h>
int main() {
	float fahrenheit,celsius;
	printf("Enter temperature in Fahrenheit:");
	scanf("%f",&fahrenheit);

	celsius=(fahrenheit-32)/1.85;
	printf("%.2fF= %.2fC\n",fahrenheit,celsius);
}
