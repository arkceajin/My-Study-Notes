
// Binary search using recursive function.
int findR(int a[], int target, int start, int end){
    if(end < start){
        return -1;
    }
    int k = (start + end) / 2;
    if(target > a[k]){
        findR(a, target, k + 1, end);
    } else if(target <a[k]){
        findR(a, target, start, k - 1);
    } else {
        return k;
    }
}

// Binary search using loop.
int findL(int a[], int target, int start, int end){
    int k = -1;
    while (end > start) {
        k = (start + end)/2;
        if(target > a[k]){
            start = k + 1;
        } else if (target < a[k]){
            end = k - 1;
        } else {
            break;
        }
    }
    return k;
}

// Test code
int arr[] = {1, 3, 5, 6, 7, 8, 10, 19};
int n = sizeof(arr)/sizeof(*arr);

// exist
int target = 5;
findR(arr, target, 0, n);
//Output: 2
findL(arr, target, 0, n);
//Output: 2

// not exist 
target = 2;
findR(arr, target, 0, n);
//Output: -1
findL(arr, target, 0, n);
//Output: -1