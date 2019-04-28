#include <iostream>
#include <vector>

using namespace std;

void bubbleSort(vector<int>& data)
{
    int size = data.size();
    for (int i = 0; i < size - 1; i++)
        for (int j = 0; j < size - i - 1; j++) {
            if (data[j] > data[j + 1])
                swap(data[j], data[j + 1]);
        }
}

int main()
{
    vector<int> v = { 1, 3, 2, 4, 0 };
    bubbleSort(v);
    for (auto i : v)
        cout << i << " " << endl;
    return 0;
}
