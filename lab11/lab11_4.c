#include <stdio.h>
#include <string.h>

int remove_caracter(char *c, char letra){
    int soma = 0;
    if(*c == '\0')
        return 0;
    if(*c == letra)
        *c = '0';
    return remove_caracter(c + 1, letra);
}

int main(){
    char str[100], letra;
    int soma;
    scanf("%s", str);
    getchar();
    scanf("%c", &letra);
    remove_caracter(str, letra);
    for (int i = 0; i < strlen(str); i++)
        if(str[i] != '0')
            printf("%c", str[i]);
    return 0;
}