#include <iostream>
#include <vector>

using namespace std;

vector<int> v = {2, 4, 5, 7, 1, 2, 3, 6};

void merge(vector<int> &v, int p, int q, int r)
{
    int i = p, j = q + 1;
    vector<int> temp;

    while(i <= q && j <= r)
    {
        if(v[i] <= v[j])
        {
            temp.push_back(v[i ++]);
        }
        else
        {
            temp.push_back(v[j ++]);
        }
    }

    while(i <= q)
    {
        temp.push_back(v[i ++]);
    }
    while(j <= r)
    {
        temp.push_back(v[j ++]);
    }

    for(int i = 0; i < temp.size(); ++ i)
    {
        v[p + i] = temp[i];
    }
}

void merge_sort(vector<int> &v, int p, int r)
{
    if(p < r)
    {
        int q = (p + r) / 2;
        merge_sort(v, p, q);
        merge_sort(v, q + 1, r);
        merge(v, p, q, r);
    }
}

int main()
{
    merge_sort(v, 0, v.size() - 1);

    for(const auto &i : v)
    {
        cout << i << ' ';
    }
    cout << endl;

    return 0;
}