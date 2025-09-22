#include <stdio.h>
#include <math.h>

int main() {

    float n1, n2, n3, media_aritmetica, nota_final, media_final;

    printf("Digite suas 3 notas: \n");
    scanf("%f %f %f", &n1, &n2, &n3);

    media_aritmetica = (n1 + n2 + n3) / 3;

    if (media_aritmetica >= 7){
        printf("O aluno foi aprovado!\n");
    } else if (media_aritmetica >= 4 && media_aritmetica < 7){
        nota_final = (5 - media_aritmetica / 2) * 2;
        nota_final = ceil(nota_final * 10) / 10;
        
        printf("O aluno está em recuperação e precisa tirar, ao menos, %.1f pontos na prova final\n", nota_final);
    } else {
        printf("O aluno foi reprovado!\n");
    }

    return 0;
}