#include <iostream>
#include <string.h>

using namespace std;
# define NO_OF_CHARS 256

void print(char list[][50], char *word, int list_size)
{
    int *map = new int[(sizeof(int)*NO_OF_CHARS)];
    int i, j, count, word_size;

    for (i = 0; *(word + i); i++)
    {
        map[*(word + i)] = 1;
    }
    word_size = strlen(word);

    for (i = 0; i < list_size; i++)
    {
        for (j = 0, count = 0; *(list[i] + j); j++)
        {
            if (map[*(list[i] + j)])
            {
                count++;
                map[*(list[i] + j)] = 0;
            }
        }
        if (count == word_size)
        {
            cout << list[i] << endl;
        }
        for (j = 0; *(word + j); j++)
        {
            map[*(word + j)] = 1;
        }
    }
}




int main()
{
    char str[] = "sun";
    char list[][50] = {"geekforgeeks", "unsorted", "sunday", "just", "sss"};
    print(list, str, 5);
    return 0;
}
