# Define o compilador a ser usado
CC = gcc

CFLAGS = -Wall -g -Iinclude

# Nome do executável final
TARGET = projeto

# Lista de arquivos objeto (.o) necessários para o executável

OBJS = $(patsubst src/%.c, %.o, $(wildcard src/*.c))

#
# REGRAS DO MAKEFILE
#

.PHONY: all
all: $(TARGET)

# Regra para criar o executável final (o alvo)

$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $(TARGET)

# Regra para criar os arquivos objeto (.o) a partir dos arquivos fonte (.c)

%.o: src/%.c
	$(CC) $(CFLAGS) -c $< -o $@

# Regra para limpar os arquivos gerados pela compilação

.PHONY: clean
clean:
	rm -f $(OBJS) $(TARGET)