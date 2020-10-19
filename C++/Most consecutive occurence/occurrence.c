#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>

int findMostOccuring(int size, int *Array);
int main()
{

    // int num[13] = {1, 2, 2, 3, 3, 3, 3, 4, 4, 4, 4, 3, 3};
    int num[1] = {10};

    printf("Max number : %d ", findMostOccuring(1, num));
    return 0;
}

int findMostOccuring(int size, int *Array)
{
    int max = Array[0];
    int counter = 1, old_counter = 0;
    for (int i = 0; i < size-1; i++)
    {
        if (Array[i] == Array[i + 1])
        {
            counter++;
        }
        else
        {
            if (counter > old_counter)
            {
                old_counter = counter;
                max = Array[i];
            }
        }
    }
    return max;
}