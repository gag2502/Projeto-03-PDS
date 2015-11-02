/*

Nome do programa
Objetivo do programa
Nome do programador
Data de criação

*/

#include "biblioteca_geral.h"
#include "biblioteca_geral.c"
#include "funcoes_CRUD.c"
#include <stdio.h>

int main()
{
  int escolha;

  printf("Digite 1: Adicionar um CRUD.\n");
  printf("Digite 2: Acessar um CRUD.\n");
  printf("Digite 3: Atualizar um CRUD.\n");
  printf("Digite 4: Deletar um CRUD.\n");
  scanf("%d", &escolha);

  switch (escolha) {
    case 1:
      adicionar_crud();
      break;
    case 2:
      ler();
      break;
    case 3:
        atualizar();
        break;
    case 4:
        deletar();
        break;
  }

  return 0;
}
