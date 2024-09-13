#include <stdio.h>  //biblioteca de comunicação com usuario
#include <stdlib.h> //biblioteca de alocação de espaço em memória
#include <locale.h>// biblioteca de alocações de texto por região
#include <string.h>  //biblioteca responsavel por cuidar dos string

int registro() //função responsavel por cadastrar o usuário no sistema
{
//inicio criação de variaveis/string
char arquivo[40];
char cpf[40];
char nome [40];
char sobrenome[40];
char cargo[40];

//final da criação de variaveis/string

printf("Digite o cpf a ser cadastrado: ");// coletando informação do usuário
scanf("%s",cpf); //%s refere-se a string

strcpy(arquivo, cpf);  //responsavel por copiar os valores dos string

FILE*file; //cria arquivo
file = fopen(arquivo, "w");  //cria o aquivo e o "w" significa escrever
fprintf( file, cpf);  //salvo o valor da variavel
fclose(file);	// fecha o arquivo

file= fopen(arquivo, "a");   // abrindo arquivo para atualiza
fprintf(file,","); // colocando "," para dividi as variaveis do processo
fclose(file); //fechando o arquivo

printf("Digite o nome a ser cadastrado:"); //colocando informação do usuário
scanf("%s",nome);// %s refese-se a string

file = fopen(arquivo,"a");// abrindo arquivo para atualiza
fprintf(file, nome);// escrevendo uma variavel no arquivo
fclose(file);// fecha o arquivo

file = fopen(arquivo,"a");// abrindo arquivo para atualiza
fprintf(file,",");// colocando "," para dividi as variaveis do processo
fclose(file);// fecha o arquivo

printf("Digite o sobrenome a ser cadastrado:");// coletando informação do usuário
scanf("%s", sobrenome); //%s refere-se a string

file = fopen(arquivo,"a");// abrindo arquivo para atualiza
fprintf(file, sobrenome);// escrevendo uma variavel no arquivo
fclose(file);// fecha o arquivo

file = fopen(arquivo,"a");// abrindo arquivo para atualiza
fprintf(file,",");// colocando "," para dividi as variaveis do processo
fclose (file);// fecha o arquivo

printf("Digite o cargo a ser cadastrado:");// coletando informação do usuário
scanf("%s", cargo); //%s refere-se a string

file= fopen(arquivo,"a");// abrindo arquivo para atualiza
fprintf(file, cargo); // escrevendo uma variavel no arquivo
fclose(file);// fecha o arquivo

file = fopen(arquivo,"a");// abrindo arquivo para atualiza
fprintf(file, ",");// colocando "," para dividi as variaveis do processo
fclose(file);// fecha o arquivo


}

int consulta()
{
	setlocale(LC_ALL,"portuguese"); //Definindo a linguagem
	
	//inicio criação de variaveis/string
	char cpf[40];
	char conteudo [200];
	
	//final da criação de variaveis/string
	
	printf("Digite o CPF a ser consultado: ");// coletando informação do usuário
	scanf("%s", cpf); //%s refere-se a string
	
	FILE *file;
	file = fopen(cpf,"r");
	
	if(file==NULL)
	{
		printf("não foi possivel abrir o arquivo, não localizado!.\n");
	}
	
	while(fgets(conteudo,200,file) !=NULL)
	{
		printf("\nEssas são as informações do usuário");
		printf("%s", conteudo); //%s refere-se a string
		printf("\n\n"); //comando para pula linha no sistema
	}
	
	system("pause");
}

int deletar()
{
	//inicio criação de variaveis/string
	char cpf[40];
	
	//final da criação de variaveis/string
	
	setlocale(LC_ALL,"portuguese"); //Definindo a linguagem
	
	printf(" Digite o cpf do usuário a ser deletado:");
	scanf("%s", cpf);
	
	remove(cpf);
	
	FILE *file;
	file = fopen(cpf,"r");
	
	if(file == NULL)
	{
		printf(" O usuário não se encontra no sistema!.\n");
		system("pause");
	}

	else
	{
		fclose(file); //fecha o arquivo 
		remove(cpf); //  removedo o arquivo
		
		printf(" usuário deletado!\n");
		
		system("pause");
	}
}


int main ()
{
	int opcao=0; //Definindo variaveis
	int laco=1;
	
	for(laco=1;laco=1;)
	{
		system("cls"); //respondavel por limpar a tela
	
		setlocale(LC_ALL,"portuguese"); //Definindo a linguagem
	
		printf("### cartório da EBAC##\n\n");  // Inicio do menu
		printf("Escolhe a opção desejada do menu:\n\n");
		printf("\t1- Rgistrar nomes\n");
		printf("\t2- consulta nomes\n");
		printf("\t3- Deletar nomes\n");
		printf("opcao:");  //fim do menu
	
		scanf("%d", &opcao);   //armazanando a escolha do usuario
	
		system("cls"); //responsavel por limpa a tela
		
		switch(opcao) // inicio da seleção do menu
			{
				case 1:
				registro(); //chama de funções
				break;
			
				case 2:
				consulta(); 
				break;
			
				case 3:
				deletar(); 
				break;
			
			
				default :
				printf("Esss opção não esta disponivel!");  //fim da seleção do menu
				system("pause");
				break;
			
			}
		
		
				
				
	
	
	
		}
	
	}
 


