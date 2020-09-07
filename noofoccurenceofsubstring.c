#include <stdio.h>
#include <string.h>

int countOccurrences(char * str, char * word)
{
    int i, j, found, count, Len1, Len2;

    Len1 = strlen(str);     
    Len2 = strlen(word); 
    count = 0;

    for(i=0; i <= Len1-Len2; i++)
    {
        found = 1;
        for(j=0; j<Len2; j++)
        {
            if(str[i + j] != word[j])
            {
                found = 0;
                break;
            }
        }
        if(found == 1)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    char str[100];
    char word[20];
    int count;
    printf("Enter any string: ");
    gets(str);
    printf("Enter word to search occurrences: ");
    gets(word);

    count = countOccurrences(str, word);

    printf("Total occurrences of '%s': %d", word, count);

    return 0;
}
