











/*
struct ficha_denuncia{
	int Codigo;
	char Data[15];
	char Descricao[50];
};



void SetDenuncia(ficha_denuncia *D, int cod)
{ // Nesta função o parâmetro P é um ponteiro para uma struct
    (*D).Codigo = cod;  // o campo pode ser acessado desta forma

    printf("Digite a data: \n");
	gets(D->Data);

	printf("Digite a descricao: \n");
	gets(D->Descricao);
}


void SetCadastrar(char NomeDenuncia[20], int codigosoma){
	char texto[10] ="";
	codigosoma = codigosoma+1;
	texto[10] = sprintf(texto, "%d", codigosoma); 
	//strcat(NomeDenuncia, texto);
	NomeDenuncia[20] = NomeDenuncia[20] + texto[10];
	printf("%d | %s \n", codigosoma,NomeDenuncia);
	
}	

int soma(int s){
	s = s +1;
	return s;
}

void ImprimeDenuncia(ficha_denuncia D){
 	printf("Codigo: %d \n", D.Codigo);
	printf("Data: %s \n", D.Data);	
	printf("Descricao: %s \n", D.Descricao);	
}

int main(){
	int cod_auto = 0;
	
	SetCadastrar("denuncia", cod_auto);
	cod_auto= soma(cod_auto);
	
	ficha_denuncia Denuncia;
    SetDenuncia(&Denuncia, 15);
    ImprimeDenuncia(Denuncia);
	
	return 0;
	
}



















	struct ficha_denuncia denuncia;
	

	
	printf("Digite o codigo: \n");
	scanf("%d", &denuncia.Codigo);
	fflush(stdin);
	
	printf("Digite a data: \n");
	gets(denuncia.Data);
	
	printf("Codigo: %d \n", denuncia.Codigo);
	printf("Data: %s \n", denuncia.Data);
	
	printf("sizeof of the array is: %u\n", (char)( sizeof(denuncia.Codigo) ));


*/

/* Declaração subprogramas */
/*

typedef  struct ficha_denuncia {
		int Codigo;
		char Data[15];
		char Descricao[50];
	} Pessoa;
	

void ImprimePessoa(Pessoa P)
{
  printf("Cod: %d  Data: %s Desc: %s\n", P.Codigo, P.Data[15], P.Descricao[50]);
}

void SetPessoa(Pessoa *P, int codigo, char data, char descricao)
{ // Nesta função o parâmetro P é um ponteiro para uma struct
    (*P).Codigo = codigo;  // o campo pode ser acessado desta forma
    (*P).Data[15] = data[15];      // ou desta
    P->Descricao[50] = descricao[50];
}
   
int main()
{
    Pessoa Joao;
    SetPessoa(&Joao, 15, '01/10/2022', 'Teste de cadastro');
    ImprimePessoa(Joao);

    return 0;
}
*/
