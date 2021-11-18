// Created by Jeremy Bogacz on 11/17/2021
//
// This program calculated the resistance of the
// second resistor in a circuit. It reads in the
// voltage between the reistors then calculates the
// resistance.

#include "analogIn.h"

int main(int argc, char* argv[]){
	
	analogIn AIN0(0);       // Create analogIn with ADC value 0

	cout << "Using AIN0 to read analog value." << endl;

	cout << "Measuring Resistance ..." << endl;

	int adcVal = AIN0.readADCsample();
	
	cout << "ADC value is: " << adcVal << endl;

	float V1 = 1.80;
        float V2 = adcVal * (1.80f/4096.0f);
	float R1 = 10000.0;
	
	float I = (V1 - V2)/R1;
	float R2 = (V2 - 0)/I;
 	
	if(R2 >= 1000){
		cout.precision(2);
	}
	else{
		cout.precision(4);
	}

	cout << endl << "Resistance: " << R2 << " Ohms" << endl;

	return 0;
}	
