/*
 ============================================================================
 Name        : matematica_main.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include "close/close.h"
#include "intro/intro.h"
#include "get_numbers/get_numbers.h"
#include "print_results/print_results.h"
#include "repeat/repeat.h"

int main(void) {
	do{
		intro();
		print_results(get_second_number(),get_first_number());
	} while (repeat());
	return EXIT_SUCCESS;
}
