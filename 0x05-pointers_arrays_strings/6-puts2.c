#include "main.h"
/**
 * puts2 - this will print all even characters of a string
 *
 * @str: the string input
 *
 * Return: nothing
 */
void puts2(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        printf("%c", str[i]);
        i += 2;
    }
    printf("\n");
}

int main() {
    char *input = "Hello, World!";
    printEveryOtherChar(input);
    return 0;
}

