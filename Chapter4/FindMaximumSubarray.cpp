#include <cstdio>
#include <algorithm>

const int INF = 0x7fffffff;

int n = 5;
int ni[5] = {1, -4, 3, -4};

int find_max_crossing_subarray(int ni[], int low, int mid, int high)
{
    int sum = 0, left_sum = -INF, right_sum = -INF;

    for(int i = mid; i >= low; -- i)
    {
        sum += ni[i];
        if(sum > left_sum)
        {
            left_sum = sum;
        }
    }

    sum = 0;
    for(int i = mid + 1; i <= high; ++ i)
    {
        sum += ni[i];
        if(sum > right_sum)
        {
            right_sum = sum;
        }
    }
    
    return left_sum + right_sum;
}

int find_maximum_subarray(int ni[], int low, int high)
{
    if(low == high)
    {
        return ni[low];
    }
    else
    {
        int mid = (low + high) / 2;
        int left_sum = find_maximum_subarray(ni, low, mid);
        int right_sum = find_maximum_subarray(ni, mid + 1, high);
        int cross_sum = find_max_crossing_subarray(ni, low, mid, high);
        return std::max(cross_sum, std::max(left_sum, right_sum));
    }
}

int main()
{
    
    printf("%d\n", find_maximum_subarray(ni, 0, n - 1));
    return 0;
}