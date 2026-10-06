#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{

    int key;
    do
    {
        printf("Key: ");
        scanf("%i", &key);
    }
    while (key < 1);

    getchar();

    char text[2000];
    printf("Plaintext: ");
    fgets(text, sizeof(text), stdin);

    printf("C iphertext: ");

    for(int i = 0, n = strlen(text); i < n; i++)
    {
        char c = text[i];

        if (isupper(c))
        {
            c = (c - 'A' + key) % 26 + 'A';
        }
        else if (islower(c))
        {
            c = (c - 'a' + key) % 26 + 'a';
        }
        printf("%c", c);
    }

    printf("\n");
    return 0;
}