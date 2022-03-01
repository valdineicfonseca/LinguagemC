/* 
Portfolio - programacao estruturada

Desenvolver um programa em C para cadastrar as denúncias como iluminação,
Saneamento Básico, Mobilidade Urbana, etc. usando as estruturas de dados como registro
(struct) e vetor (array) para armazenar e manipular os dados cadastrados.
As operações são simples :
 .Cadastrar denúncias;
 .Consultar a lista das denúncias cadastradas
 .finalizar


Author: Valdinei C. Fonseca
Data: 01/03/2022

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <conio.h>  //clrscr

#define BUFFER 64

/* Estrutura da lista declarada para armazenar nossos dados. */
typedef struct lista {
        char *descricao;
        char *data;
        int codigo;
        struct lista *proximo;
} Dados;

/* Prototipo das funcoes de manuseio dos dados. */
Dados *inicia_dados(char *descricao, char*data, int codigo);
Dados *insere_dados(Dados *dados, char *descricao,  char*data, int codigo);
void exibe_dados(Dados *dados);

int checa_vazio(Dados *dados);

/* Prototipo das funcoes do menu.*/
void insere(void);
void exibe(void);


/* Inicializa a estrutura de dados principal. */
Dados *principal = NULL;

/* Cria a nova lista apontando o proximo no para NULL. */
Dados *inicia_dados(char *descricao,  char*data, int codigo) {

        Dados *novo;

        novo = (Dados *)malloc(sizeof(Dados));
        novo->descricao = (char *)malloc(strlen(descricao)+1);
        strncpy(novo->descricao, descricao, strlen(descricao)+1);
        
        novo->data = (char *)malloc(strlen(data)+1);
        strncpy(novo->data, data, strlen(data)+1);
        
        novo->codigo = codigo;
        novo->proximo = NULL;

        return novo;
}

/* Como a lista nao esta mais vazia, apontamos o proximo no para lista anterior. */
Dados *insere_dados(Dados *dados, char *descricao,  char *data, int codigo) {

        Dados *novo;

        novo = (Dados *)malloc(sizeof(Dados));
        novo->descricao = (char *)malloc(strlen(descricao)+1);
        strncpy(novo->descricao, descricao, strlen(descricao)+1);
        
        novo->data = (char *)malloc(strlen(data)+1);
        strncpy(novo->data, data, strlen(data)+1);
        
        novo->codigo = codigo;
        novo->proximo = dados;

        return novo;
}

/* Percorre todos os campos da lista e imprime ate o ponteiro proximo chegar em NULL. */
void exibe_dados(Dados *dados) {

        fprintf(stdout, "Cadastro:\n\n");

        fprintf(stdout, "------------------------\n");

        for (; dados != NULL; dados = dados->proximo) {
                
                fprintf(stdout, "Codigo....: %d\n", dados->codigo);
				fprintf(stdout, "Descricao..: %s\n", dados->descricao);
                fprintf(stdout, "Data.......: %s\n", dados->data);
                
                fprintf(stdout, "------------------------\n ");
        }
        printf("Pressione uma tecla para continuar.");
        getch();
}


/* a pena checa se a lista e NULL ou nao. */
int checa_vazio(Dados *dados) {

        if (dados == NULL) {
                fprintf(stdout, "Lista vazia!\\n");
                sleep(1);
                return 1;
        } else
                return 0;
}

/* Obtem os dados necessarios para chamar as funcoes de manuseio de dados. */
void insere(void) {

        char *descricao;
        char *data;
        int codigo;

        descricao = (char *)malloc(BUFFER);
        data = (char *)malloc(BUFFER);
		//scanf("%c");
		
		printf("Digite a codigo: \n---->  ");
        scanf("%d", &codigo);
        fflush(stdin);

        fprintf(stdout, "\n\nDigite a descricao da denuncia: \n----> ");
        gets(descricao);
		//scanf("%s", descricao);
        //fprintf(stdout, "\n");
        
        fprintf(stdout, "\n\nDigite a Data: \n----> ");
        scanf("%s", data);
        fprintf(stdout, "\n");
        
        //printf("\n\n Digite o Nome: \n----> ");
        //gets(nome);
        
        
        //fflush(stdin);

        ///fprintf(stdout, "Digite a codigo: \n----> ");
        ///scanf("%d", &codigo);
        ///fprintf(stdout, "\n");

        if (principal == NULL)
                principal = inicia_dados(descricao, data, codigo);
        else
                principal = insere_dados(principal, descricao, data, codigo);
}

void exibe(void) {

        if (!checa_vazio(principal))
                exibe_dados(principal);

}



int main(void) {

        char escolha;

        do {
                system("cls"); 
                fprintf(stdout, "\n Cadastro de Denuncias\n\n");
                fprintf(stdout, "Escolha uma opcao: \n\n");
                fprintf(stdout, "1 - Insere Dados\n");
                fprintf(stdout, "2 - Exibe Dados\n");
                fprintf(stdout, "3 - Sair\n\n");

                scanf("%c", &escolha);

                switch(escolha) {
                        case '1':
                                insere();
                                break;

                        case '2':
                                exibe();
                                break;
                       
                        case '3':
                                exit(0);
                                break;

                        default:
                                fprintf(stderr,"Digite uma opcao valida!\\n");
                                sleep(1);
                                break;
                }

                //getchar(); /* E para impedir sujeira na entrada da escolha. Nao lembro de nada melhor tambem.   */
        }

        while (escolha > 0); /* Loop Principal. */

        return 0;
}



