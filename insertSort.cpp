#include <iostream>
#include <vector>
using namespace std;

void InsertSort(vector<int> data)
{
    cout << "before:";
    for (int i = 0; i < data.size(); i++)
        cout << " " << data[i];
    cout << endl;

    for (int i = 1; i < data.size(); i++) {
        if (data[i] < data[i - 1]) // 需要将[i]插入【前面大小为i的】有序子表
        {
            int temp = data[i];
            int j = 0;
            for (j = i - 1; j >= 0 && (temp < data[j]); j--) //此处j>=0 确保不会下标溢出data的“管辖区域”
                data[j + 1] = data[j];
            data[j + 1] = temp;
        }
    }
    cout << "after :";
    for (int i = 0; i < data.size(); i++)
        cout << " " << data[i];
    cout << endl;
}

int main(void)
{
    vector<int> v = { 3, 6, 1, 9, 7, 0 };
    InsertSort(v);
    return 0;
}