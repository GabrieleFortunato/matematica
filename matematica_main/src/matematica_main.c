/*
 ============================================================================
 Name        : matematica_main.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include "intro/intro.h"
#include "get_numbers/get_numbers.h"
#include "print_results/print_results.h"

int main(void) {
	intro();
	int a = get_first_number();
	printf("%d",a);
	int b = get_second_number();
	printf("%d",b);
	print_results(a,b);
	return EXIT_SUCCESS;
}
