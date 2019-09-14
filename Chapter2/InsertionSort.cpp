#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

vector<int> v = {5, 2, 4, 6, 1, 3};

void insertion_sort(vector<int> &v)
{
    for(int j = 1; j < v.size(); ++ j)
    {
        int key = v[j];
        int i;
        for(i = j - 1; i >= 0 && v[i] > key; -- i)
        {
            v[i + 1] = v[i];
        }
        v[i + 1] = key;
    }
}

int main()
{
    insertion_sort(v);

    for(const auto &i : v)
    {
        cout << i << ' ';
    }
    cout << endl;

    return 0;
}