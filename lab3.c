#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "ru_RU.UTF-8");
    char input[81];

    printf("Введите строку символов: ");
    fgets(input, 80, stdin);
    input[strcspn(input, "\n")] = 0; // удаление символа новой строки

    for (int i = 0; input[i] != '\0'; i++) {
        if (input[i] == 'a' || input[i] == 'b') {
            input[i] = toupper(input[i]);
        }
    }

    printf("Результат: %s\n", input);
    system("pause");
    return 0;
}