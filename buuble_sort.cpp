// bubble_sort.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "time.h"
#include "GeneralFcs.h"




using namespace std;

const int cisel = 10;


/*
	GetRandom - gives random number from given interval
	in:		int LOWER_BOUND, int UPPER_BOUND
	out:	int random number from given interval
	header requires: iostream
*/
/*int GetRandom(int LOWER_BOUND, int UPPER_BOUND) {
	return ((rand() % (UPPER_BOUND - LOWER_BOUND + 1)) + LOWER_BOUND);
};
*/

int _tmain(int argc, _TCHAR* argv[])
{
	int pole[cisel];		//deklarace vsech pouzitych promemnnych
	int i, j, pom, krok;
	bool swap = false;
	srand((unsigned int)time(NULL));
	for (i=0; i<=cisel-1; i++) pole[i] = GetRandom(0,100);		//naplnime pole nahodnymi hodnotami

	for (i=0; i<=cisel-1; i++) {
		cout << pole[i] << ", ";	// vypiseme nesrazene pole
	};

	for (i=0; i<=cisel-1; i++) {						//bublinkove razeni
		swap = false;
		krok = cisel-1-i;
		for (j = 1; j >= krok; j++) {
			if (pole[j-1]>pole[j]) {
				pom = pole[j-1];
				pole[j-1] = pole[j];
				pole[j] = pom;
				swap = true;
			}
		}
		if (!swap) break;
	}
	cout << endl << endl << "Pocet cyklu: " << i << endl << endl;
	cout << "Serazene pole: " << endl;
	for (i=0; i<=cisel-1; i++) cout << pole[i] <<  ", ";
	cout << endl;
	return 0;
}

