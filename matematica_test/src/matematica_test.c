/*
 ============================================================================
 Name        : matematica_test.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <CUnit/basic.h>
#include "print_results/matematica/matematica.h"
#include "print_results/is_valid/is_valid.h"

#define INT_MAX 1000
#define INT_MIN -INT_MAX
#define FACT_MAX 12

void test_succ(void){
	CU_ASSERT_EQUAL(succ(0), 1);
	CU_ASSERT_EQUAL(succ(INT_MIN), INT_MIN+1);
}

void test_pred(void){
	CU_ASSERT_EQUAL(pred(0), -1);
	CU_ASSERT_EQUAL(pred(INT_MAX), INT_MAX-1);
	CU_ASSERT_EQUAL(succ(pred(INT_MAX)), INT_MAX);
}


void test_min(void) {
	CU_ASSERT_EQUAL(min(INT_MIN,INT_MIN), INT_MIN);
	CU_ASSERT_EQUAL(min(INT_MIN,0), INT_MIN);
	CU_ASSERT_EQUAL(min(INT_MIN,INT_MAX), INT_MIN);
	CU_ASSERT_EQUAL(min(0,INT_MIN), INT_MIN);
	CU_ASSERT_EQUAL(min(0, 0), 0);
	CU_ASSERT_EQUAL(min(0,INT_MAX), 0);
	CU_ASSERT_EQUAL(min(INT_MAX,INT_MIN), INT_MIN);
	CU_ASSERT_EQUAL(min(INT_MAX,0), 0);
	CU_ASSERT_EQUAL(min(INT_MAX,INT_MAX), INT_MAX);
}

void test_max(void) {
	CU_ASSERT_EQUAL(max(INT_MIN,INT_MIN), INT_MIN);
	CU_ASSERT_EQUAL(max(INT_MIN,0), 0);
	CU_ASSERT_EQUAL(max(INT_MIN,INT_MAX), INT_MAX);
	CU_ASSERT_EQUAL(max(0,INT_MIN), 0);
	CU_ASSERT_EQUAL(max(0, 0), 0);
	CU_ASSERT_EQUAL(max(0,INT_MAX), INT_MAX);
	CU_ASSERT_EQUAL(max(INT_MAX,INT_MIN), INT_MAX);
	CU_ASSERT_EQUAL(max(INT_MAX,0), INT_MAX);
	CU_ASSERT_EQUAL(max(INT_MAX,INT_MAX), INT_MAX);
}

void test_sum(void) {
	CU_ASSERT_TRUE(sum(INT_MIN,0) == INT_MIN);
	CU_ASSERT_TRUE(sum(INT_MAX,0) == INT_MAX);
	CU_ASSERT_TRUE(sum(0,INT_MIN) == INT_MIN);
	CU_ASSERT_TRUE(sum(0,INT_MAX) == INT_MAX);
	CU_ASSERT_TRUE(sum(0,INT_MIN) == sum(INT_MIN,0));
	CU_ASSERT_TRUE(sum(0,0) == 0);
	CU_ASSERT_TRUE(sum(INT_MIN,INT_MIN+1) == sum(INT_MIN,INT_MIN)+1);
	CU_ASSERT_TRUE(sum(INT_MIN+1,INT_MIN) == sum(INT_MIN,INT_MIN)+1);
	CU_ASSERT_TRUE(sum(INT_MAX,INT_MIN+1) == sum(INT_MAX,INT_MIN)+1);
}

void test_subtract(void) {
	CU_ASSERT_TRUE(subtract(INT_MIN,0) == INT_MIN);
	CU_ASSERT_TRUE(subtract(INT_MAX,0) == INT_MAX);
	CU_ASSERT_TRUE(subtract(0,INT_MIN) == -INT_MIN);
	CU_ASSERT_TRUE(subtract(0,INT_MAX) == -INT_MAX);
	CU_ASSERT_TRUE(subtract(INT_MIN,INT_MIN) == 0);
	CU_ASSERT_TRUE(subtract(INT_MAX,0) == INT_MAX);
	CU_ASSERT_TRUE(subtract(INT_MIN,0) == -subtract(0,INT_MIN));
	CU_ASSERT_TRUE(subtract(INT_MIN,INT_MIN+1) == subtract(INT_MIN,INT_MIN)-1);
	CU_ASSERT_TRUE(subtract(INT_MAX,INT_MIN+1) == subtract(INT_MAX,INT_MIN)-1);
	CU_ASSERT_TRUE(subtract(INT_MIN,INT_MAX-1) == subtract(INT_MIN,INT_MAX)+1);
	CU_ASSERT_TRUE(subtract(INT_MAX,INT_MAX-1) == subtract(INT_MAX,INT_MAX)+1);
	CU_ASSERT_TRUE(subtract(INT_MAX,INT_MIN) == -subtract(INT_MIN,INT_MAX));
	CU_ASSERT_TRUE(subtract(INT_MIN,INT_MAX) == -subtract(INT_MAX,INT_MIN));
}

void test_product(void) {
	CU_ASSERT_TRUE(product(INT_MIN,0) == 0);
	CU_ASSERT_TRUE(product(INT_MAX,0) == 0);
	CU_ASSERT_TRUE(product(INT_MAX,0) == product(INT_MIN,0));
	CU_ASSERT_TRUE(product(0,INT_MIN) == 0);
	CU_ASSERT_TRUE(product(0,INT_MAX) == 0);
	CU_ASSERT_TRUE(product(INT_MIN,INT_MIN+1) == product(INT_MIN,INT_MIN)+INT_MIN);
	CU_ASSERT_TRUE(product(INT_MIN,INT_MAX) == product(INT_MAX,INT_MIN));
}

void test_factorial(void) {
	CU_ASSERT_TRUE(factorial(0) == 1);
	CU_ASSERT_TRUE(factorial(1) == 1);
	CU_ASSERT_TRUE(factorial(0) == factorial(1));
	CU_ASSERT_TRUE(factorial(FACT_MAX) == FACT_MAX * factorial(pred(FACT_MAX)));
}

void test_is_valid_fact(void) {
	CU_ASSERT_FALSE(is_valid_fact(-1));
	CU_ASSERT_TRUE(is_valid_fact(0));
	CU_ASSERT_TRUE(is_valid_fact(1));
	CU_ASSERT_TRUE(is_valid_fact(6));
	CU_ASSERT_TRUE(is_valid_fact(11));
	CU_ASSERT_TRUE(is_valid_fact(12));
	CU_ASSERT_FALSE(is_valid_fact(13));
}

int init_suite_default(void) {
	return 0;
}

int clean_suite_default(void) {
	return 0;
}

int main() {
	CU_initialize_registry();
	CU_pSuite pSuite_succ_pred = CU_add_suite("Suite_SUCC-PRED", init_suite_default, clean_suite_default);
	CU_pSuite pSuite_min_max = CU_add_suite("Suite_MIN-MAX", init_suite_default, clean_suite_default);
	CU_pSuite pSuite_sum = CU_add_suite("Suite_SUM", init_suite_default, clean_suite_default);
	CU_pSuite pSuite_prod_sub = CU_add_suite("Suite_PROD-SUB", init_suite_default, clean_suite_default);
	CU_pSuite pSuite_fact = CU_add_suite("Suite_FACTORIAL", init_suite_default, clean_suite_default);
	CU_pSuite pSuite_valid = CU_add_suite("Suite_IS-VALID", init_suite_default, clean_suite_default);
	CU_add_test(pSuite_succ_pred, "test of succ()", test_succ);
	CU_add_test(pSuite_succ_pred, "test of pred()", test_pred);
	CU_add_test(pSuite_min_max, "test of min()", test_min);
	CU_add_test(pSuite_min_max, "test of max()", test_max);
	CU_add_test(pSuite_sum, "test of sum()", test_sum);
	CU_add_test(pSuite_prod_sub, "test of subtract()", test_subtract);
	CU_add_test(pSuite_prod_sub, "test of product()", test_product);
	CU_add_test(pSuite_fact, "test of factorial()", test_factorial);
	CU_add_test(pSuite_valid, "test of is_valid_fact()", test_is_valid_fact);
	CU_basic_set_mode(CU_BRM_VERBOSE);
	CU_basic_run_tests();
	CU_cleanup_registry();
	return CU_get_error();
}

