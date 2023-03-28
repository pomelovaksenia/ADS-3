// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
    int right = size - 1;
    int left = 0;
    int counter = 0;
    while (left <= right) {
        int middle = (left + right) / 2;
        if (*(arr + middle) == value) {
            counter++;
            int newMiddle = middle;
            while ((*(arr + middle + 1)) == value) {
                middle++;
               counter++;                
            }
            while ((*(arr + newMiddle - 1)) == value) {
                newMiddle--;
                counter++;
            }
            return counter;
        } else if (*(arr + middle) > value) {
            right = middle - 1;
        } else {
            left = middle + 1;
        }
    }
    return counter;
}
