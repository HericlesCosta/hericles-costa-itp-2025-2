#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H
#define MAX_LIVROS 5
#define MAX_TITULO 100

extern char biblioteca[MAX_LIVROS][MAX_TITULO];

extern int totalLivros;

void cadastrarLivros();
void listarLivros();
void removerLivros();

#endif