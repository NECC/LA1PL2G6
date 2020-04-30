//
// Created by tiago on 30/04/20.
//
/**
@file fim_jodo.h
A função que deteta o fim do jogo.
*/
#ifndef PROJETO_FIM_JOGO_H
#define PROJETO_FIM_JOGO_H
#include "../dados/inicializar_estado.h"
#include "../dados/obter_dados_estado.h"
/**
 * \brief Verifica se algum jogador venceu o jogo.
 * @param e O valor do estado.
 * @return Retorna 0 se nao houver vencedor ou retorna 1 ou 2 consoante o jogador que venceu.
 */
int verificar_vencedor (ESTADO e);
#endif //PROJETO_FIM_JOGO_H