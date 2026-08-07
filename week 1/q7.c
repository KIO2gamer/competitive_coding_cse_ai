#include <stdio.h>
#include <limits.h>

void findSecondLargest(int arr[], int size) {
    int first = INT_MIN;
    int second = INT_MIN;

    for (int i = 0; i < size; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] < first) {
            second = arr[i];
        }
    }

    if (second == INT_MIN) {
        printf("There is no second largest element (all elements might be equal).\n");
    } else {
        printf("The second largest element is: %d\n", second);
    }
}

int main() {
    int arr[100], size;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    findSecondLargest(arr, size);

    return 0;
}
