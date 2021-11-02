Bubble Sort : 

It has n - 1 iterations in each iteration it compares the adjacent elements and swaps according to the condition.

    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                swap(arr[j],arr[j + 1]);
            }
            _print(arr);
        }
    }

Selection Sort:

It has n - 1 iterations in each iteration it selects the minimum / maximum element should present in that index.

    for (i = 0; i < size -1; i++){
        min_idx = i;
        for (j = i + 1; j < size; j++){
            if (arr[j] < arr[min_idx]){
                min_idx = j;
            }
        }
        swap(arr[min_idx],arr[i]);
        _print(arr);
    }


Insertion Sort:

inserting elements in a sorted array Based on the condition given.And then it shift that element in correct position.

    for (i = 1; i < size; i++){
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }

MergeSort:

It first divide the elements based on mid.And then it sort the small arrays And the it merges the small arrays to form array.

