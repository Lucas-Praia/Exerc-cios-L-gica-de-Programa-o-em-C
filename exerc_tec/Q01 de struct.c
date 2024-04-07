//Q01: Escreva um trecho de código para fazer a criação dos novos tipos de dados
//conforme solicitado abaixo:
//Horário: composto de hora, minutos e segundos.
//Data: composto de dia, mês e ano.
//Compromisso: composto de uma data, horário e texto que descreve o compromisso.

#include <stdio.h>

// Definição do tipo Horário
typedef struct {
    int hora;
    int minutos;
    int segundos;
} Horario;

// Definição do tipo Data
typedef struct {
    int dia;
    int mes;
    int ano;
} Data;

// Definição do tipo Compromisso
typedef struct {
    Data data;
    Horario horario;
    char texto[100]; // Assumindo que o texto do compromisso terá no máximo 100 caracteres
} Compromisso;

int main() {
    // Exemplo de utilização dos novos tipos de dados
    Compromisso compromisso1;

    compromisso1.data.dia = 8;
    compromisso1.data.mes = 3;
    compromisso1.data.ano = 2024;

    compromisso1.horario.hora = 8;
    compromisso1.horario.minutos = 00;
    compromisso1.horario.segundos = 0;

    // Texto do compromisso
    sprintf(compromisso1.texto, "\"Simulado de Desenvolvimento de Software\"");
    printf("\n");

    // Exibindo o compromisso
    printf("Compromisso: %s\n", compromisso1.texto);
    printf("Data: %02d/%02d/%04d\n", compromisso1.data.dia, compromisso1.data.mes, compromisso1.data.ano);
    printf("Horario: %02d:%02d:%02d\n", compromisso1.horario.hora, compromisso1.horario.minutos, compromisso1.horario.segundos);

    return 0;
}