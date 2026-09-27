#include <stdio.h>


struct novo_tipo {
	int dados;
	float valor;
};
int main(){
	struct novo_tipo variavel;
	variavel.dados = 10;
	variavel.valor = 22.22;
	printf("%.2d\n%.2f", variavel.dados, variavel.valor);
}