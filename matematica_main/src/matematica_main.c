/*
 ============================================================================
 Name        : matematica_main.c
 Author      : Gabriele Fortunato
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

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
	do{
		intro();
		print_results(get_second_number(),get_first_number());
	} while (repeat());
}

int main(void) {
	print_access();
	matematica();
	close();
	return EXIT_SUCCESS;
}
