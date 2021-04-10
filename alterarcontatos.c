#include <stdio.h>
int opc;
int ControleAgenda=0;
#define tam_vet_agenda 10;


typedef struct agenda{
  char nome[30];
	int telefone;
  int ccodigo;
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
void buscar_contato(){
  int buscar;
  printf("Informe qual contato quer buscar pelo número do código: ");
  scanf("%i",&buscar); 
  
  if(buscar==Agenda[ControleAgenda].codigo){
       printf("**************************************\n");
      printf("NOME: \n");
      printf("%s\n",Agenda[ControleAgenda].nome);
      printf("TELEFONE: \n");
      printf("%i\n",Agenda[ControleAgenda].telefone);
      printf("CÓDIGO: \n");
      printf("%i\n",Agenda[ControleAgenda].codigo);
      printf("EMAIL:: \n");
      printf("%s\n",Agenda[ControleAgenda].email);
      printf("ANIVERSÁRIO: \n");
      printf("%s\n",Agenda[ControleAgenda].aniversario);
      printf("ANOTAÇÕES: \n");
      printf("%s",Agenda[ControleAgenda].anotacoes);
      printf("**************************************\n");
      break;
    }
    else{
      printf("!!!!!!!!!!!!!!!!!!!!!!!\n");
      printf("Contato não cadastrado!\n");
      printf("!!!!!!!!!!!!!!!!!!!!!!!\n");

  }
  }


void alterar_contato(){ 
  char nomealt[30];
  int opcalt, telefone[20];
  char nome[100], email[100], anotacoes[200], aniversario[8];;
  
  printf("Deseja o nome do contato que quer alterar:");
  scanf("%s", nomealt);

    for (int i = 0;i<ControleAgenda;i++){
        if (strcmp(nomealt, Agenda[i].nome) == 0){
          printf("O que deseja alterar?");
          printf("[1]-Nome");
          printf("[2]-Telefone");
          printf("[3]-EMAIL");
          printf("[4]-Observações");
          printf("[5]-Aniversário");
          scanf("%i",&opcalt);
          switch(opcalt)
          {
            case 1:
            printf("Informe a alteração do nome:/n");
            scanf("%s", nome);
            
            strcpy(Agenda->nome, nome);

            printf("Done!");
            
            case 2:
            printf("Informe a alteração do telefone:/n");
            scanf("%i", &telefone);
            
            strcpy(Agenda->telefone, telefone);

            printf("Done!");

            case 3:
            printf("Informe a alteração do email:/n");
            scanf("%s", email);
            
            strcpy(Agenda->email, email);

            printf("Done!");
            case 4:
            printf("Informe a alteração da observação:/n");
            scanf("%s", anotacoes);
            
            strcpy(Agenda->anotacoes,anotacoes);

            printf("Done!");
            case 5:
            printf("Informe a alteração da data de aniversario:/n");
            scanf("%s", aniversario);
            
            strcpy(Agenda->aniversario,aniversario);

            printf("Done!");
            default:
            break;
          }
}
void excluir_contato(){
  int codigo;

  printf("Qual contato deseja excluir?\n");
  scanf("%i", &codigo);
       for(int i = 0;i<ControleAgenda;i++)
          if Agenda[ControleAgenda].codigo == codigo{
             Agenda[ControleAgenda].codigo = 0;
             break;
          }
          else{
            printf("Código não encontrado!");
          }
 
}

int main(){
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
      alterar_contato();
    }
    else if(x==4)
    {
      excluir_contato()
    }
    else if(x==5)
    {
      buscar_contato();
    }
    else
    {
      printf("**************************************\n");
      printf("----------OPÇÃO INVALIDA!-----------\n");
      printf("**************************************\n");
    }
    }}
