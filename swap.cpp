void swapAlternate(int *arr, int size)
{
     int i = 0;
    int t;
    while (i < size - 1) {
        t = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = t;
        i = i + 2;
    }
}
