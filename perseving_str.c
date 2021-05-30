#include<stdio.h>
#include<string.h>

int main() {
    char str[] = "I am going to be selected";
    // char str[] = "S am";
    int len = strlen(str);
    int j = strlen(str) - 1, i=0;
    char result[1000] = "";
    while( i <= j ) {
            if ((str[i] != ' ') & (str[j] != ' ')) {
                result[j] = str[i];
                result[i] = str[j];
                i += 1;
                j -= 1;
            }
            else if (str[i] == ' '){
                result[i] = ' ';
                i += 1;
            }
            else if (str[j] == ' '){
                result[j] = ' ';
                j -= 1;
            }
    }

    printf("%s", result);

    return 0;
}