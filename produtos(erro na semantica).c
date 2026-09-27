#include <stdio.h>
#include <locale.h>

struct produto {
	int cod;
	float val;
};
int main(){
	setlocale(LC_ALL,"portuguese");
	struct produto p;
	printf("digite o código do produto\n");
	scanf("%d",&p.cod);
	printf("digite o valor do produto\n");
	scanf("%f",&p.val);
	printf("os dados são:\n");
	printf("código do produto:%d",&p.cod);
	printf("\n o valor do produto:%f",&p.val);
}