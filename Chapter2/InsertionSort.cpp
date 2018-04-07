#include <cstdio>

int n = 6;
int ni[6] = {5, 2, 4, 6, 1, 3};

void print(int n, int ni[])
{
    for(int i = 0; i < n; ++ i)
    {
        printf("%d ", ni[i]);
    }
    printf("\n");
}

void insertion_sort(int n, int ni[])
{
    for(int j = 1; j < n; ++ j)
    {
        int key = ni[j];
        int i;
        for(i = j - 1; i >= 0 && ni[i] > key; -- i)
        {
            ni[i + 1] = ni[i];
        }
        ni[i + 1] = key;
        print(n, ni);
    }
}

int main()
{
    insertion_sort(n, ni);

    return 0;
}