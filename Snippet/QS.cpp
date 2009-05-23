// Copied from Array's QuickSort implementation.
void QuickSortHelper(int * array, wchar_t** secondArray, int left, int right) {
    do {
        int i = left;
        int j = right;
        int pivot = array[(i + j) >> 1];
        do {
            while(array[i] < pivot) i++;
            while(pivot < array[j]) j--;
            assert(j>=left && j<=right);
			assert(i>=left && i<=right);
            if (i > j) break;
            if (i < j) {
                int tmp = array[i];
                array[i] = array[j];
                array[j] = tmp;
                if (secondArray != NULL) {
                    wchar_t* tmpString = secondArray[i];
                    secondArray[i] = secondArray[j];
                    secondArray[j] = tmpString;
                }
            }
            i++;
            j--;
        } while (i <= j);
        if (j - left < right - i) {
            if (left < j) {
                QuickSortHelper(array, secondArray, left, j);
            }
            left = i;
        }
        else {
            if (i < right) QuickSortHelper(array, secondArray, i, right);
            right = j;
        }
    } while (left < right);
}
