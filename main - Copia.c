#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main() {
    char palavra[] = "Hello, World";
    int tamanho = sizeof(palavra) - 1;
    char string_array[tamanho + 1];

    for (int i = 0; i < tamanho; i++){
        string_array[i] = '\0';
    }
    string_array[tamanho] = '\0';

    srand(time(NULL));
    int i = 0;

    while (i < tamanho){
        // Gera um número aleatório entre 32 e 126 (ASCII imprimíveis)
        string_array[i] = (char)(rand() % (122 - 32 + 1) + 32);

        if (string_array[i] == palavra[i]){
            i++;
        }

        printf("%s\n", string_array);

        usleep(6000);
    }
    system("pause");

    return 0;
}
