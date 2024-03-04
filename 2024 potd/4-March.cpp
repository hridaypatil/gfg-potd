class Solution {
public:
    void swapElements(int arr[], int n) {
        for (int i = 0; i < n - 2; ++i) {
            std::swap(arr[i], arr[i+2]);
        }
    }
};
