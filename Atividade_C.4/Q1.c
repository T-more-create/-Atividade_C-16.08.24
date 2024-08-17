#include <stdio.h>
#include <string.h>

struct Pessoa {
    char nome[50];
    int idade;
    char endereco[50];
};

int main(){
    struct Pessoa pessoa;

    printf("Insira o nome: "); 

    fgets(pessoa.nome, sizeof(pessoa.nome), stdin);
    pessoa.nome[strcspn(pessoa.nome, "\n")] = '0';

    printf("Insira a idade: ");
    scanf ("%d", &pessoa.idade);
    getchar();

    printf("Insira o endereço: ");
    fgets(pessoa.endereco, sizeof(pessoa.endereco), stdin);
    pessoa.endereco[strcspn(pessoa.endereco, "\n")] = '\0';

    printf("Dados da Pessoa: \n");
    printf("nome: %s\n", pessoa.nome);
    printf("Idade: %d\n", pessoa.idade);
    printf("Endereço; %s\n", pessoa.endereco);

    return 0;

    


}