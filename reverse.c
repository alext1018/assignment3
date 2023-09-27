int* reverseArray(int numbers[], int size) {
    int* reversed = new int[size];
    for (int i = 0; i < size; i++) {
        reversed[i] = numbers[size - 1 - i];
    }
    return reversed;
}
