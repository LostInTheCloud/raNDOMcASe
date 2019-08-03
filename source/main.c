//
// Created by lenni on 7/29/19.
//

#include "main.h"

int main(int argc, char **argv)
{
    if(argc <= 1)
    {
        fprintf(stderr, "Expected more arguments!");
        exit(EXIT_FAILURE);
    }

    /* Intializes random number generator */
    time_t t;
    srand((unsigned) time(&t));

    for(int i = 1; i < argc; i++)
    {
        for(int j = 0; j < strlen(argv[i]); j++)
        {
            if(isalpha(argv[i][j]) && rand()%2)
            {
                if(islower(argv[i][j]))
                {
                    argv[i][j] = toupper(argv[i][j]);
                }
                else
                {
                    argv[i][j] = tolower(argv[i][j]);
                }
            }
        }
        printf("%s ", argv[i]);
    }
    printf("\n");
}