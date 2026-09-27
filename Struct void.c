#include <stdio.h>
#include <string.h>

// Definindo a struct Pessoa
struct Pessoa {
    char nome[50];
    int idade;
    char endereco[100];
};

// Função que imprime as informações de uma Pessoa
void imprimirPessoa(struct Pessoa p) {
    printf("Nome: %s\n", p.nome);
    printf("Idade: %d\n", p.idade);
    printf("Endereço: %s\n", p.endereco);
}

int main() {
    // Criando uma variável do tipo struct Pessoa
    struct Pessoa pessoa1;
    
    // Solicitando e lendo os dados do usuário
    printf("Insira o nome: ");
    fgets(pessoa1.nome, 50, stdin);
    // Remove o newline do final da string, se existir
    pessoa1.nome[strcspn(pessoa1.nome, "\n")] = '\0';

    printf("Insira a idade: ");
    scanf("%d", &pessoa1.idade);
    
    // Limpar o buffer do stdin
    getchar();
    
    printf("Insira o endereço: ");
    fgets(pessoa1.endereco, 100, stdin);
    // Remove o newline do final da string, se existir
    pessoa1.endereco[strcspn(pessoa1.endereco, "\n")] = '\0';
    
    // Chamando a função para imprimir as informações da pessoa
    imprimirPessoa(pessoa1);

    return 0;
}
