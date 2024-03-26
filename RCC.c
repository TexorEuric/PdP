#include <stdio.h>

int squareRoot(int x) {
    if (x == 0 || x == 1) // Base cases
        return x;

    int l = 0, r = x / 2; // Lower and upper bounds
    int ans;

    while (l <= r) {
        int mid = l + (r - l) / 2; // Calculate the midpoint

        // If mid*mid is less than or equal to x, search in the right half
        if ((long long)mid * mid <= x) {
            ans = mid;
            l = mid + 1;
        }
        // If mid*mid is greater than x, search in the left half
        else {
            r = mid - 1;
        }
    }

    return ans;
}

int main() {
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);

    printf("Square root of %d is: %d\n", x, squareRoot(x));

    return 0;
}
