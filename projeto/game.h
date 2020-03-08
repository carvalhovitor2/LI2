#ifndef HEADER_FILE
#define HEADER_FILE

typedef enum {VAZIO, BRANCA, PRETA} CASA;


typedef struct {
	int coluna;
	int linha;
} COORDENADA;

typedef struct {
	COORDENADA jogador1;
	COORDENADA jogador2;
} JOGADA;

typedef JOGADA JOGADAS[32];

//Estado do jogo
typedef struct {
	CASA tab[8][8];
	JOGADAS jogadas;
	int num_jogadas;
	int jogador_atual;
} ESTADO;


#endif
