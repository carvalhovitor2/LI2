#include <stdio.h>
#include <stdlib.h>
#include "interface.h"

int main(){
	ESTADO *e=inicializar_estado();
	mostrar_tabuleiro(stdout, e);
	interpretador(e);
	return 0;
}
