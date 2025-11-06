#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {

    char nome_aluno[11];
    char relatorio[1002];

    printf("Digite o nome do aluno: ");
    scanf("%s", nome_aluno);

    // Limpa o buffer de entrada (consome o '\n' deixado pelo scanf)
    getchar();

    printf("Digite as frequências: ");
    fgets(relatorio, sizeof(relatorio), stdin);

    int total_de_aulas = 0;
    int presencas_do_aluno = 0;

    char palavra_atual[1002]; 
    int indice_palavra = 0;

    for (int i = 0; i <= strlen(relatorio); i++) {
        char caractere_lido = relatorio[i];


        if (caractere_lido == ' ' || caractere_lido == '\n' || caractere_lido == '\0') {
            

            if (indice_palavra > 0) {

                palavra_atual[indice_palavra] = '\0';

                if (strlen(palavra_atual) == 5 && palavra_atual[2] == '/' && 
                    isdigit(palavra_atual[0]) && isdigit(palavra_atual[1]) &&
                    isdigit(palavra_atual[3]) && isdigit(palavra_atual[4])) 
                {
                    total_de_aulas++;
                }

                else {
                    // strcmp retorna 0 se as strings forem iguais
                    if (strcmp(palavra_atual, nome_aluno) == 0) {
                        presencas_do_aluno++;
                    }
                }

                indice_palavra = 0;
            }
        } 

        else {
            palavra_atual[indice_palavra] = caractere_lido;
            indice_palavra++;
        }
    }

    int ausencias = total_de_aulas - presencas_do_aluno;
    printf("%d\n", ausencias);

    return 0;
}