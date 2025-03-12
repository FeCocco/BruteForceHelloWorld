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

    while (i < tamanho) {
        int rand_interval = rand() % 4;

        char random_char;

        switch(rand_interval) {
            case 0:
                // Gera o espaço (ASCII 32)
                    random_char = 32;
            usleep(600);
            break;
            case 1:
                // Gera a vírgula (ASCII 44)
                    random_char = 44;
            usleep(6000);
            break;
            case 2:
                // Gera uma letra maiúscula (ASCII 65-90)
                    random_char = (char)(rand() % (90 - 65 + 1) + 65);
            usleep(600);
            break;
            case 3:
                // Gera uma letra minúscula (ASCII 97-122)
                    random_char = (char)(rand() % (122 - 97 + 1) + 97);
            usleep(600);
            break;
        }

        string_array[i] = random_char;

        if (string_array[i] == palavra[i]) {
            i++;
        }

        printf("%s\n", string_array);
    }
    system("pause");

    return 0;
}
