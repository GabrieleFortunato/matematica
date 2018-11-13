/*
 ============================================================================
 Name        : matematica_main.c
 Author      : Gabriele Fortunato
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdlib.h>
#include "access/access.h"
#include "close/close.h"
#include "intro/intro.h"
#include "get_numbers/get_numbers.h"
#include "print_results/print_results.h"
#include "repeat/repeat.h"

void print_access(){
	FILE* access = fopen("accessi.txt","a+");
	print_access_on_file(access);
	fclose(access);
}

void matematica(){
	intro();
	int a = get_first_number();
	int b = get_second_number();
	print_results(a, b);
	(repeat()) ? matematica() : close();
}

int main(void) {
	print_access();
	matematica();
	return EXIT_SUCCESS;
}
