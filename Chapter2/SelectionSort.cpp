#include <iostream>
#include <vector>

using namespace std;

vector<int> v = {2, 4, 5, 7, 1, 2, 3, 6};

void selection_sort(vector<int> &v)
{
    for(int i = 0; i < v.size() - 1; ++ i)
    {
        int min = i;
        for(int j = i + 1; j < v.size(); ++ j)
        {
            if(v[j] < v[min])
            {
                min = j;
            }
        }
        int t = v[i];
        v[i] = v[min];
        v[min] = t;
    }
}

int main()
{
    selection_sort(v);

    for(const auto &i : v)
    {
        cout << i << ' ';
    }
    cout << endl;

    return 0;
}