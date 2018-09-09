/*
 * get_numbers.c
 *
 *  Created on: 08 set 2018
 *      Author: gabriele
 */

#include "get_numbers.h"

static const char* SPEC_INT = "%d";
static const char* INSERT_SECOND_NUMBER = "Inserisci il secondo numero>";
static const char* INSERT_FIRST_NUMBER = "Inserisci il primo numero>";

int get_first_number(){
	fflush(stdin);
	int number;
	printf(INSERT_FIRST_NUMBER);
	scanf(SPEC_INT, &number);
	return number;
}

int get_second_number(){
	fflush(stdin);
	int number;
	printf(INSERT_SECOND_NUMBER);
	scanf(SPEC_INT, &number);
	return number;
}

