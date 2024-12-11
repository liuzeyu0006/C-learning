#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

class QuickSort {
public:
    static void quickSort(vector<int>& arr) {
        if (arr.empty() || arr.size() < 2) {
            return;
        }
        srand(time(0)); // Seed for random number generator
        quickSort(arr, 0, arr.size() - 1);
    }

private:
    static void quickSort(vector<int>& arr, int l, int r) {
        if (l < r) {
            // Randomly select a pivot and swap it with the last element
            swap(arr[l + rand() % (r - l + 1)], arr[r]);
            vector<int> p = partition(arr, l, r);
            quickSort(arr, l, p[0] - 1);  // Sort the left partition
            quickSort(arr, p[1] + 1, r); // Sort the right partition
        }
    }

    static vector<int> partition(vector<int>& arr, int l, int r) {
        int less = l - 1;  // Boundary for elements less than pivot
        int more = r;      // Boundary for elements greater than pivot
        while (l < more) {
            if (arr[l] < arr[r]) {
                swap(arr[++less], arr[l++]);  // Expand the "less than" area
            }
            else if (arr[l] > arr[r]) {
                swap(arr[--more], arr[l]);    // Expand the "greater than" area
            }
            else {
                l++; // Move to the next element
            }
        }
        // Swap the pivot element back to its correct position
        swap(arr[more], arr[r]);
        return { less + 1, more };
    }

    static void swap(int& a, int& b) {
        int temp = a;
        a = b;
        b = temp;
    }
};

int main() {
    vector<int> arr = { 7, 2, 5, 3, 1, 4, 6 }; // Example array
    cout << "Original array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    QuickSort::quickSort(arr);

    cout << "Sorted array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
