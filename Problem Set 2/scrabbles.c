#include <stdio.h>
#include <ctype.h>


int points[26] = {
    1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,10
};
 
int pscore(char word[]);

int main(void)
{
    char word1[97];
    char word2[98];

    printf("Word 1: ");
    scanf("%96s", word1);

    printf("Word 2: ");
    scanf("%97s", word2);

    int score1 = pscore(word1);
    int score2 = pscore(word2);

    if (score1 > score2)
    {
        printf("Word 1 wins!\n");
    }
    else if(score2 > score1)
    {
        printf("Word 2 wins!\n");
    }
    else
    {
        printf("Tied score!\n");
    }
}

int pscore(char word[])
{
    int score = 0;

    for (int i = 0; word[i] != '\0'; i++)
    {
        if (isalpha(word[i]))
        {
            char letter = toupper(word[i]);

            score += points[letter - 'A'];
        }
    }

    return score;
}


