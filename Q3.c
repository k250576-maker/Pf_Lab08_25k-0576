#include <stdio.h>

int main()
{
    char seating[5][5];
    int empty = 0, occupy = 0;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if ((i + j) % 2 == 0)
            {
                seating[i][j] = 'X';
                occupy++;
            }
            else
            {
                seating[i][j] = 'O';
                empty++;
            }
        }
    }

    printf("Seating Plan: (X = Occupied, O = Empty)\n");

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%c ", seating[i][j]);
        }
        printf("\n");
    }

    printf("Summary:\n Students seated: %3d \n Empty Seats: %3d \n Total Seats: 25",occupy,empty);

        return 0;
}
