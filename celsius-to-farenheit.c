#include <stdio.h>
/*
 *
 * While loop ascendent
 *
int main() {
	float celsius, farh;
	int lo, hi, step;

	lo = 0;
	hi = 200;
	step = 10;

	celsius = lo;

	printf("Celsius | Farenheit\n");
	while(celsius <= hi){
		farh = 9.0/5.0 * celsius + 32.0;
		printf("%7.0f | %6.1f\n", celsius, farh);
		celsius += step;
	}
}
*/

/*
 *
 * FOR LOOP DESC
 *
 */
#define LOWER 0
#define UPPER 200
#define STEP 10

int main() {
	int celsius;
	printf("Celsius | Farenheit\n");
	for (celsius = UPPER; celsius >= LOWER; celsius -= STEP)
		printf("%7d | %6.1f\n", celsius, 9.0/5.0 * celsius + 32.0);
}

