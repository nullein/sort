#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

void SelectSort(vector<int>& data)
{
    for (int i = 0; i < data.size() - 1; i++) {
        int min = i;
        for (int j = i; j < data.size(); j++) {
            if (data[j] < data[min])
                min = j;
        }
        swap(data[i], data[min]);
    }
}

int main()
{
    vector<int> data = { 3, 4, 10, 1, 0, 2 };
    for (auto i : data)
        cout << i << " " << flush;
    cout << endl;
    SelectSort(data);
    for (auto i : data) {
        cout << i << " " << flush;
    }
    return 0;
}