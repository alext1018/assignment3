int calculateProduct(int numbers[], int length) {
    int product = 1;
    for (int i = 0; i < length; i++) {
        product *= numbers[i];
    }
    return product;
}
