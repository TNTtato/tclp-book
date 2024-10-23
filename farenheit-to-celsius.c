#include <stdio.h>

int main(){
	float farh, celsius;
	int step, lo, hi;
	
	lo = 0;
	hi = 200;
	step = 10;

	farh = lo + 0.0;

	printf("Farenheit | Celsius\n");
	while(farh <= hi) {
		celsius = 5 * (farh - 32) / 9;
		printf("%9.0f | %6.1f\n", farh, celsius);
		farh = farh + step;
	}
}

