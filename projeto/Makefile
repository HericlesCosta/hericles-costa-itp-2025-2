# Define o compilador a ser usado
CC = gcc

# Define as flags de compilação.
# -Wall: Mostra todos os warnings (muito recomendado)
# -g: Inclui informações de debug (para usar com gdb)
# -Iinclude: Diz ao compilador para procurar por arquivos de cabeçalho na pasta 'include'
CFLAGS = -Wall -g -Iinclude

# Nome do executável final
TARGET = projeto

# Lista de arquivos objeto (.o) necessários para o executável
# A sintaxe $(patsubst ...) é uma função que transforma a lista de .c em .o
# Ex: src/main.c src/matematica.c -> main.o matematica.o
OBJS = $(patsubst src/%.c, %.o, $(wildcard src/*.c))

#
# REGRAS DO MAKEFILE
#

# A primeira regra é a padrão. Quando você digita apenas "make", é esta que ele executa.
# .PHONY significa que 'all' não é um arquivo real, mas sim o nome de uma receita.
.PHONY: all
all: $(TARGET)

# Regra para criar o executável final (o alvo)
# Depende de todos os arquivos objeto (.o)
# Se qualquer arquivo .o for mais novo que 'meu_programa', este comando roda.
$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $(TARGET)

# Regra para criar os arquivos objeto (.o) a partir dos arquivos fonte (.c)
# %.o: É um alvo genérico para qualquer arquivo que termine em .o
# %.c: É uma dependência genérica correspondente
# $<: É uma variável automática que representa a primeira dependência (o arquivo .c)
# $@: É uma variável automática que representa o nome do alvo (o arquivo .o)
%.o: src/%.c
	$(CC) $(CFLAGS) -c $< -o $@

# Regra para limpar os arquivos gerados pela compilação
# .PHONY é usado aqui também, pois 'clean' é uma ação, não um arquivo.
.PHONY: clean
clean:
	rm -f $(OBJS) $(TARGET)