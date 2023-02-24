#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");
int n, i;
float fg, mng;
char *v1;
char *v2;

printf("Digite o numero de entrevistados: ");
scanf("%d", &n);
//alocação dos vetores para armazenar o sexo da pessoas (v1) e suas respectivas respostas (v2)
v1 = (char*) malloc(n*sizeof(char));
v2 = (char*) malloc(n*sizeof(char));

if(v1 == NULL || v2 == NULL){
printf("Espaço insuficiente!");
exit(1);
}

fflush(stdin);
fg = mng = 0;

for(i = 0; i < n; i++){
printf("Digite o sexo do %d° entrevistado (responda com m (macho) ou f (femea)): ", i+1);
scanf("%c", &v1[i]);
fflush(stdin);
printf("Ele(a) gostou do produto (responda com s(sim) ou n(nao))? ");
scanf("%c", &v2[i]);
fflush(stdin);
 if(v1[i] == 'f' || v1[i] == 'F'){//estrutura que incrementa um à variável fg caso o índice aponte pra uma mulher que gostou do produto
    if(v2[i] == 's' || v2[i] == 'S'){
    fg++;
    }
 } else{ //estrutura que incrementa um à variável mng caso o índice aponte pra um homem que não gostou do produto
   if(v2[i] == 'n' || v2[i] == 'N'){
    mng++;
   }
 }
}
printf("A porcrentagem de mulheres que gostaram é %f do total\n", fg*100/(float)n);
printf("A porcrentagem de homens que não gostaram é igual a: %f do total", mng*100/(float)n);
//liberação dos dois vetores alocados
free(v1);
free(v2);

return 0;
}

