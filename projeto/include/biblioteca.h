#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

extern char **biblioteca;
extern int totalLivros;
extern int capacidadeBiblioteca;

extern int **dadosLivros; // Matriz para [status][contador_emprestimos]

void inicializarBiblioteca(int capacidade);
void liberarBiblioteca();

void cadastrarLivros();
void listarLivros();
void removerLivros();
void buscarLivros();

void emprestarLivro();
void devolverLivro();
void imprimirRelatorio();

#endif