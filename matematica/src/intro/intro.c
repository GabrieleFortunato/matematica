/*
 * intro.c
 *
 *  Created on: 08 set 2018
 *      Author: gabriele
 */

#include "intro.h"

static const char* INTRO =
		"\n"
		"====================================================\n"
		"APPLICAZIONE DI ALCUNE SEMPLICI FUNZIONI MATEMATICHE\nS"
		"U DUE NUMERI INTERI INSERITI DA TASTIERA\n"
		"====================================================\n"
		"a cura di Gabriele Fortunato\n\n";
static const char* CLS = "CLS";

/**
 * Apertura e presentazione del programma
 */
void intro(){
	system(CLS);
	printf(
			INTRO
			);
}
