/*
 * matematica.h
 *
 *  Created on: 08 set 2018
 *      Author: gabriele
 */

#ifndef PRINT_RESULTS_MATEMATICA_MATEMATICA_H_
#define PRINT_RESULTS_MATEMATICA_MATEMATICA_H_

/**
 * Restituisce il minore dei due parametri
 * @param a
 * @param b
 * @return
 */
int min(int a, int b);

/**
 * Restituisce il maggiore dei due parametri
 * @param a
 * @param b
 * @return
 */
int max(int a, int b);

/**
 * Restituisce il precedente del parametro
 * @param a
 * @return
 */
int pred(int a);

/**
 * Restituisce il successivo del parametro
 * @param a
 * @return
 */
int succ(int a);

/**
 * Restituisce la somma dei due parametri
 * Richiama le funzioni succe e pred
 * @param a
 * @param b
 * @return
 */
int sum(int a, int b);

/**
 * Restituisce la differenza dei due parametri richiamando la funzione sum
 * @param a
 * @param b
 * @return
 */
int subtract(int a, int b);

/**
 * Restituisce il prodotto dei due parametri
 * Richiama la funzione sum
 * @param a
 * @param b
 * @return
 */
int product(int a, int b);

/**
 * Calcola il prodotto fattoriale del parametro
 * Richiama la funzione prodotto
 * @param n
 * @return
 */
int factorial(int n);

#endif /* PRINT_RESULTS_MATEMATICA_MATEMATICA_H_ */
