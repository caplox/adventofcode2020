#include <stdio.h>
#include <stdlib.h>

#define LINES 200

int partOne()
{
    FILE * fPointer = fopen("input.txt", "r");
    int array[LINES];

    for (int i = 0; i < LINES; i++)
        fscanf(fPointer, "%d", &array[i]);
    for (int i = 0 ; i < LINES; i++)
        for (int j = 1; j < LINES; j++)
            switch (array[i] + array[j])
                case 2020:
                    return array[i]*array[j];
}

int partTwo()
{
    FILE * fPointer = fopen("input.txt", "r");
    int array[LINES];

    for (int i = 0; i < LINES; i++)
        fscanf(fPointer, "%d", &array[i]);
    for (int i = 0 ; i < LINES; i++)
        for (int j = 1; j < LINES; j++)
            for (int k = 2; k < LINES; k++)
                switch (array[i] + array[j] + array[k])
                    case 2020:
                        return array[i]*array[j]*array[k];
}

int main()
{
    printf("%d\n", partOne());
    printf("%d\n", partTwo());
}
