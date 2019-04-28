/**
 * quick sort
 * 
 * */
#include <iostream>
#include <vector>
//#include "quickSort.h"

using namespace std;

int onceQuickSort(vector<int>& data, int left, int right)
{
    int key = data[left];
    
    while (left < right) {
        while (left < right && data[right] >= key)
            right--;
        if (left < right)
            data[left++] = data[right];
        while (left < right && data[left] < key)
            left++;
        if (left < right)
            data[right--] = data[left];
    }
    data[left] = key;
    return left;
}
// void quickSort(vector<int>& num, int l, int r)
// {
//     if (l >= r) //先检查左右条件
//         return;
//     int i = l, j = r, x = num[l];
//     while (i < j) {
//         while (i < j && num[j] >= x) //从右向左找到第一个小于x的
//             j--;
//         if (i < j)
//             num[i++] = num[j]; //填坑之后i++
//         while (i < j && num[i] <= x) //从左向右找第一个大于x的数
//             i++;
//         if (i < j)
//             num[j--] = num[i];
//     }
//     num[i] = x; //把最开始取出来的x放到i处
//     quickSort(num, l, i - 1); //以i为中间值，分左右两部分递归调用
//     quickSort(num, i + 1, r);
// }
void quickSort(vector<int>& data, int left, int right)
{
    if (left >= right) {
        return;
    }
    int mid = 0;
    mid = onceQuickSort(data, left, right);
    quickSort(data, left, mid - 1);
    quickSort(data, mid + 1, right);
}
int main()
{
    vector<int> v = { 4, 2, 1, 4, 5, 6 };
    quickSort(v, 0, 6);
    for (auto i : v)
        cout << i << "  " << endl;
    return 0;
    
}
