cmake_minimum_required(VERSION 3.15)
project(Projeto C)

set(CMAKE_C_STANDARD 99)
set(CMAKE_C_FLAGS "-std=gnu11 -Wall -Wextra -pedantic-errors -O")
add_executable(Projeto main.c dados/mudar_estado.c dados/mudar_estado.h interface/mostrar.c interface/mostrar.h logica/fazer_jogada.c logica/fazer_jogada.h dados/inicializar_estado.c dados/inicializar_estado.h dados/obter_dados_estado.c dados/obter_dados_estado.h interface/interpretador.c interface/interpretador.h logica/ler_jogo.c logica/ler_jogo.h testes/testar_estado.c testes/testar_estado.h logica/comando_pos.h logica/comando_pos.c testes/testar_jogar.c testes/testar_jogar.h testes/main_teste.c testes/main_teste.h testes/testar_vencedor.c testes/testar_vencedor.h testes/testar_pos.c testes/testar_pos.h dados/lista.c dados/lista.h logica/comando_jog.c logica/comando_jog.h testes/testar_heuristica.c testes/testar_heuristica.h logica/fim_jogo.c logica/fim_jogo.h)