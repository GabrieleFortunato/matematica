/*
 * matematica.c
 *
 *  Created on: 08 set 2018
 *      Author: gabriele
 */

#include "matematica.h"

static const int ONE = 1;
static const int ZERO = 0;

int min(int a, int b){
	return (a < b) ? a : b;
}

int max(int a, int b){
	return (a > b) ? a : b;
}

int pred(int a){
	return --a;
}

int succ(int a){
	return ++a;
}

static int get_sum_b_major_zero(int a, int b) {
	for (int i = ZERO; i < b; i++)
		a = succ(a);
	return a;
}

static int get_sum_b_min_zero(int a, int b) {
	for (int i = b; i < ZERO; i++)
		a = pred(a);
	return a;
}

int sum(int a, int b){
	return (b == ZERO) ? a : (b > ZERO) ? get_sum_b_major_zero(a, b) :
			get_sum_b_min_zero(a, b);
}

int subtract(int a, int b){
	return sum(a, -b);
}

static int get_product_b_major_zero(int a, int b) {
	int result = ZERO;
	for (int i = ZERO; i < b; i++)
		result = sum(result, a);
	return result;
}

int product(int a, int b){
	return (b == ZERO) ? ZERO : (b > ZERO) ?
			get_product_b_major_zero(a, b) : - product(a, -b);
}

int factorial(int n){
	return (n <= ONE) ? ONE : product(n, factorial(pred(n)));
}
