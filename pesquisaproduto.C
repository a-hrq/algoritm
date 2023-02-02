#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
int n, i;
float fg, mng;
char *v1;
char *v2;

printf("Digite o numero de entrevistados: ");
scanf("%d", &n);
v1 = (char*) malloc(n*sizeof(char));
v2 = (char*) malloc(n*sizeof(char));
fflush(stdin);
fg = mng = 0;

for(i = 0; i < n; i++){
printf("Digite seu sexo (m (macho) ou f (femea)): ");
scanf("%c", &v1[i]);
fflush(stdin);
printf("Voce gostou do produto (responda com s(sim ou n(nao)): ");
scanf("%c", &v2[i]);
fflush(stdin);
 if(v1[i] == 'f'){
    if(v2[i] == 's'){
        fg++;
    }
 } else{
   if(v2[i] == 'n'){
    mng++;
   }
 }
}
printf("A porcrentagem de mulheres que gostaram eh igual a: %f\n", fg*100/(float)n);
printf("A porcrentagem de homens que n gostaram eh igual a: %f", mng*100/(float)n);

return 0;
}
