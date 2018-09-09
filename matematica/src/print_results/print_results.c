/*
 * print_results.c
 *
 *  Created on: 08 set 2018
 *      Author: gabriele
 */

#include "print_results.h"

static const char* PRINT_NOT_VALID_FACT =
		"Impossibile calcolare il fattoriale di %d";
static const char* PRINT_FACT = "\nFattoriale di &d: %d";
static const char* PRINT_PRODUCT = "\nProdotto: %d";
static const char* PRINT_SUBRACT = "\nSottrazione: %d";
static const char* PRINT_SUM = "\nSomma: %d";
static const char* PRINT_SUCC = "\nSuccessivo di %d: %d";
static const char* PRINT_PRED = "\nPrecedente di %d: %d";
static const char* PRINT_MAX = "\nMaggiore dei due numeri: %d";
static const char* PRINT_MIN = "\nMinore dei due numeri: %d";
static const int FACT_MAX = 14;

static void print_min(int a, int b){
	printf(PRINT_MIN, min(a, b));
}

static void print_max(int a, int b){
	printf(PRINT_MAX, max(a, b));
}

static void print_pred(int n){
	printf(PRINT_PRED, n, pred(n));
}

static void print_succ(int n){
	printf(PRINT_SUCC, n, succ(n));
}

static void print_sum(int a, int b){
	printf(PRINT_SUM, sum(a, b));
}

static void print_subtract(int a, int b){
	printf(PRINT_SUBRACT, subtract(a, b));
}

static void print_product(int a, int b){
	printf(PRINT_PRODUCT, product(a, b));
}

static void print_factorial(int a){
	(a < FACT_MAX) ?
			printf(PRINT_FACT, factorial(a)) :
			printf(PRINT_NOT_VALID_FACT, a);
}

void print_results(int a, int b){
	print_min(a, b);
	print_max(a, b);
	print_pred(a);
	print_pred(b);
	print_succ(a);
	print_succ(b);
	print_sum(a, b);
	print_subtract(a, b);
	print_product(a, b);
	print_factorial(a);
	print_factorial(b);
}
