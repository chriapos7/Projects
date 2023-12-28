
#include <stdio.h>

int main(){
	int unknown_variable;
	float volt, resistance, current, power;
	
	printf("Choose the electrical quantity you want to calculate: \n");
	printf("\t1 -> Resistance \n");
	printf("\t2 -> Volt \n");
	printf("\t3 -> Current \n");
	printf("\t4 -> Power \n");
	scanf("%d", &unknown_variable);
	
	switch (unknown_variable) {
		case 1:
			printf("Give me the volt: \n");
			scanf("%f", &volt);
			printf("Give me the current: \n");
			scanf("%f", &current);
			printf("Resistance = %f", volt / current);
		break;
		case 2:
			printf("Give me the current: \n");
			scanf("%f", &current);
			printf("Give me the resistance: \n");
			scanf("%f", &resistance);
			printf("Volt = %f", current * resistance);
		break;
		case 3:
			printf("Give me the volt: \n");
			scanf("%f", &volt);
			printf("Give me the resistance: \n");
			scanf("%f", &resistance);
			printf("Current = %f", volt /  resistance);
		break;
		case 4:
			printf("Give me the volt: \n");
			scanf("%f", &volt);
			printf("Give me the current: \n");
			scanf("%f", &current);
			printf("Power = %f", volt * current);
		break;
	}
	return 0;
}
