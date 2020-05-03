/**
@file logic.h
This file is supposed to store the declarations of the logic functions used in our project
*/

#include "../data/data.h"

/**
\brief Função que faz a jogada e atualiza o estado com ajuda das funções dos dados
@param e Apontador para o estado
@param c A coordenada
*/
int jogar(ESTADO *e, COORDENADA c);

/**
\brief Função que dado a coordenada vê se a jogada é válida e se não for avisa o jogador
@param e Apontador para o estado
@param c A coordenada
*/
int jogadaValida(ESTADO *e, COORDENADA c);

/**
\brief Função que dado o estado devolve a coordenada onde se encontra a peça branca.
@param e Apontador para o estado do jogo.
*/
COORDENADA findBranca(ESTADO *e);


/**
\brief Função responsável por verificar se uma peça está cercada. Caso esteja, o jogo é terminado. Esta função é uma dependência da função gameOver.
@param e Apontador para o estado do jogo.
*/
int aroundBranca(ESTADO *e);

/**
\brief Retorna o numero de coordenadas vazias no entorno de um jogador
@param A coordenada onde esta o jogador
@param Apotador para o estado do jogo
*/
int nr_coord_around(COORDENADA c, ESTADO *e);

/**
\brief Monta um array com as coordenadas que estao no entorno de um player
@param A coordenada onde esta o player
@param Um array de coordenadas
@param Apontador para o estado do jogo
*/
void array_coord_around(COORDENADA c, COORDENADA *A, ESTADO *e);

/**
\brief Função responsável por verificar se o jogo se acabou.
@param e Apontador para o estado do jogo.
*/
int gameOver(ESTADO *e);


/**
\brief Função responsável por declarar o vencedor da partida.
@param e Apontador para o estado do jogo.
*/
int winner(ESTADO *e);

