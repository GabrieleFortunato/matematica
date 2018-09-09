/*
 * is_valid.c
 *
 *  Created on: 09 set 2018
 *      Author: gabriele
 */

#include "is_valid.h"

static const int MIN_FACT = 0;
static const int MAX_FACT = 12;

bool is_valid_fact(int n){
	return n <= MAX_FACT && n >= MIN_FACT;
}

