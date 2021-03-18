//CÓDIGO ARRUMADO,ANTES O LIMITE ERA 3 AGORA É 10. COLOQUEI 3 PARA FINS DE TE TESTE DE CÓDIGO
#include <stdio.h>
int opc;
int ControleAgenda=0;
#define tam_vet_agenda 10;

typedef struct agenda{
	char nome[30];
	int telefone;
  int codigo;
	char email[30];
  char aniversario[8];
  char anotacoes[200];
} agenda;


struct agenda Agenda[10];
void mostrarmenu()
{
  printf("---------------------------------\n");
  printf("|[1]- Cadastrar contato\n");
  printf("|[2]- Listar contatos\n");
  printf("|[3]- Alterar contato\n");
  printf("|[4]- Excluir contato\n");
  printf("|[5]- Buscar contato\n");
  printf("|[6]- Sair \n ");
  printf("---------------------------------\n");
}
void cadastrar_contato()
{
  if(ControleAgenda<10)
  {
  printf("**************************************\n");
  printf("----------------AGENDA----------------\n");
  printf("**************************************\n");

  printf("NOME:");
  fgets(Agenda[ControleAgenda].nome,30,stdin);
  printf("TELEFONE:");
  scanf("%i",&Agenda[ControleAgenda].telefone);
  getchar();
  do {
  printf("INSIRA UM CÓDIGO MAIOR QUE 0:");
  scanf("%i",&Agenda[ControleAgenda].codigo);
  getchar();
  } while (Agenda[ControleAgenda].codigo<=0);
  printf("E-MAIL:");
  fgets(Agenda[ControleAgenda].email,30,stdin);
  printf("ANIVERSÁRIO:");
  fgets(Agenda[ControleAgenda].aniversario,30,stdin);
  printf("ANOTAÇÕES:");
  fgets(Agenda[ControleAgenda].anotacoes,30,stdin);
  getchar();

  ControleAgenda ++;
  }
  else
  {
     printf("**************************************\n");
     printf("----------AGENDA LOTADA!--------------\n");
     printf("**************************************\n");
  }
}
void listar_contato(){
  if(ControleAgenda>0){
    for(int i = 0;i<ControleAgenda;i++){

      
      printf("%s\n",Agenda[i].nome);
      printf("%i\n",Agenda[i].telefone);
      printf("%i\n",Agenda[i].codigo);
      printf("%s\n",Agenda[i].email);
      printf("%s\n",Agenda[i].aniversario);
      printf("%s",Agenda[i].anotacoes);
    }
  }
  else
  {
    printf("**************************************\n");
    printf("NINGUÉM CADASTRADO! INSIRA UM CONTATO!\n");
    printf("**************************************\n");
  }
}
//void buscar_contato(){}
//void alterar_contato(){}
//void excluir_contato(){}

int main() {
int x = 10;
  while(x!=0){
    printf("\n");
    mostrarmenu();
    printf("SELECIONE A OPÇÃO!:\n");
    scanf("%i",&x);
    getchar();

    if(x==6)
    {
      printf("#############################\n");
      printf("CÓDIGO ENCERRADO COM SUCESSO!\n");
      printf("#############################\n");
      x=0;
    }
    else if(x==1)
    {
      cadastrar_contato();
    }
    else if(x==2)
    {
      listar_contato();
    }
    else if(x==3)
    {
      printf("FALTA");
    }
    else if(x==4)
    {
      printf("FALTA");
    }
    else
    {
      printf("**************************************\n");
      printf("----------OPÇÃO INVALIDA!-----------\n");
      printf("**************************************\n");
    }
    }
}
//CÓDIGO ARRUMADO,ANTES O LIMITE ERA 3 AGORA É 10. COLOQUEI 3 PARA FINS DE TE TESTE DE CÓDIGO