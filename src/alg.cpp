// Copyright 2021 NNTU-CS

int cbinsearch(int* arr, int size, int value) {
    int counter = 0;
    int right = size - 1;
    int left = 0;
    while (left <= right) {
        int middle = (right + left) / 2;
        if (*(arr + middle) == value) {
            counter++;
            int newmiddle = middle;
            while ((*(arr + middle + 1)) == value) {
                middle++;
                counter++;
            }
            while ((*(arr + newmiddle - 1)) == value) {
                newmiddle--;
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
