#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int findMissingElement(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n - 1; i++) {
        sum += arr[i];
    }

    int expectedSum = (n * (n + 1)) / 2;
    int missingElement = expectedSum - sum;

    return missingElement;
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int arr[n]; // Declare an array of size 'n'

    // Initialize random number generator
    srand(time(NULL));

    // Generate a random index to skip (between 1 and n)
    int randomIndexToSkip = rand() % n + 1;

    // Fill the array with elements from 1 to n, excluding the randomly skipped index
    for (int i = 1, j = 0; i <= n; i++) {
        if (i != randomIndexToSkip) {
            arr[j++] = i;
        }
    }

    int missingElement = findMissingElement(arr, n);

    printf("Randomly skipped element is: %d\n", randomIndexToSkip);
    printf("Missing element is: %d\n", missingElement);

    return 0;
}
