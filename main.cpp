int main() {
    std::vector<int> arr2 = {1,2,3,4,5};
    bubbleSort(arr2);
    std::cout << "Sorted array is: ";
    for (int i = 0; i < arr2.size(); ++i)
        std::cout << arr2[i] << " ";
    std::cout << std::endl;
    return 0;
}

