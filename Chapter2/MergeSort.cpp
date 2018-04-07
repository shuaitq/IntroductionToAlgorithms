#include <cstdio>

int n = 8;
int ni[8] = {2, 4, 5, 7, 1, 2, 3, 6};
int temp[8];

void print(int n, int ni[])
{
    for(int i = 0; i < n; ++ i)
    {
        printf("%d ", ni[i]);
    }
    printf("\n");
}

void merge(int ni[], int p, int q, int r, int temp[])
{
    int i = p, j = q + 1;
    int k = 0;

    while(i <= q && j <= r)
    {
        if(ni[i] <= ni[j])
        {
            temp[k ++] = ni[i ++];
        }
        else
        {
            temp[k ++] = ni[j ++];
        }
    }

    while(i <= q)
    {
        temp[k ++] = ni[i ++];
    }
    while(j <= r)
    {
        temp[k ++] = ni[j ++];
    }

    for(int i = 0; i < k; ++ i)
    {
        ni[p + i] = temp[i];
    }
    print(n, ni);
}

void merge_sort(int ni[], int p, int r, int temp[])
{
    if(p < r)
    {
        int q = (p + r) / 2;
        merge_sort(ni, p, q, temp);
        merge_sort(ni, q + 1, r, temp);
        merge(ni, p, q, r, temp);
    }
}

int main()
{
    merge_sort(ni, 0, n - 1, temp);
    return 0;
}