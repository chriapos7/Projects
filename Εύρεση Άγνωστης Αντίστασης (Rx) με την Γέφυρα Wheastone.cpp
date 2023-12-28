#include <stdio.h>


int main() {

	static bool hasBeenCalled = false; 
  	static int calculatedResistance;

  	if (hasBeenCalled) {
    	return calculatedResistance; 
  	}

  	int userInputResistance;
  	double R1, R2, R3, Rx;
  
  	printf("Choose one of the below statements that is true: \n");
  	printf("\t 1 -> All the resistances are between 1 - 999 ohm. \n");
  	printf("\t 2 -> All the resistances are between 1000 - 999.999 ohm. \n");
  	printf("\t 3 -> None of the above. \n");
  	scanf("%d", &userInputResistance);
	
	if (userInputResistance == 1) {
		printf("\t\tTHE RESISTANCES MUST BE IN OHMS. \n");
		printf("Type the resistance for R1 (Consider It is on the top left): \n");
  		scanf("%lf", &R1);
  		printf("Type the resistance for R2 (Consider It is on the top right): \n");
  		scanf("%lf", &R2);
  		printf("Type the resistance for R3 (Consider It is on the bottom left): \n");
  		scanf("%lf", &R3);
  		Rx = ( R2 * R3) / R1;
  		printf("The restistance of Rx = %lfohm \n", Rx);
	} else if (userInputResistance == 2) {
		printf("\t\tTHE RESISTANCES MUST BE IN OHMS. \n");
		printf("Type the resistance for R1 (Consider It is on the top left): \n");
  		scanf("%lf", &R1);
  		printf("Type the resistance for R2 (Consider It is on the top right): \n");
  		scanf("%lf", &R2);
  		printf("Type the resistance for R3 (Consider It is on the bottom left): \n");
  		scanf("%lf", &R3);
  		Rx = ( R2 * R3) / R1;
  		printf("The restistance of Rx = %lfkohm \n", Rx);
	} else if (userInputResistance == 3){
		printf("\t\tTHE RESISTANCES MUST BE IN OHMS. \n");
		printf("Type the resistance for R1 (Consider It is on the top left): \n");
  		scanf("%lf", &R1);
  		printf("Type the resistance for R2 (Consider It is on the top right): \n");
  		scanf("%lf", &R2);
  		printf("Type the resistance for R3 (Consider It is on the bottom left): \n");
  		scanf("%lf", &R3);
  		Rx = ( R2 * R3) / R1;
  		if (Rx < 1000) {
  			printf("The restistance of Rx = %lfohm \n", Rx);
		  } else if ( Rx > 1000 ) {
		  	Rx /= 1000;
		  	printf("The restistance of Rx = %lfkohm \n", Rx);
		  }
	} else {
		printf("Invalid number!Please try again.");
	}
  	hasBeenCalled = true; 
  	
  	return 0;
}

