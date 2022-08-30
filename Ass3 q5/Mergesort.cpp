#include <iostream>
#include <vector>
using namespace std;

void mergeSort(vector<int>& arr) {

    if (arr.size() > 1) {
        int miduim = arr.size() / 2;
        vector<int> left(arr.begin(), arr.begin() + miduim);
        vector<int> right(arr.begin() + miduim, arr.begin() + arr.size());

        mergeSort(left);
        mergeSort(right);

        int i = 0; int j = 0; int a = 0;
        while (i < left.size() && j < right.size()) {
            if (left[i] < right[j]) {
                arr[a] = left[i];
                i++;
            }
            else {
                arr[a] = right[j];
                j++;
            }
            a++;
        }

        while (i < left.size()) {
            arr[a] = left[i];
            i++;
            a++;
        }

        while (j < right.size()) {
            arr[a] = right[j];
            j++;
            a++;
        }

    }
}


int main() {

    vector<int> vector{ 2,3,1,5,-10,20,19,1,3,2,11 };
    mergeSort(vector);
    for (int i = 0; i < vector.size(); i++)
        cout << vector[i] << endl;
    return 0;
}