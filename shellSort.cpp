#include <iostream>
#include <vector>

using namespace std;

void shell_sort(vector<int>& data)
{
    int gap;
    for (gap = 3; gap > 0; gap--) {
        for (int i = 0; i < gap; i++) {
            for (int j = i + gap; j < data.size(); j = j + gap) {
                if (data[j] < data[j - gap]) {
                    int temp = data[j];
                    int k = j - gap;
                    while (k >= 0 && data[k] > temp) {
                        data[k + gap] = data[k];
                        k = k - gap;
                    }
                    data[k + gap] = temp;
                }
            }
        }
    }
}

int main()
{
    vector<int> data = { 70, 30, 40, 10, 80, 20, 90, 100, 75, 60, 45 };
    shell_sort(data);
    for (auto i : data)
        cout << i << " " << flush;
    return 0;
}