def square_root(x):
    if x == 0 or x == 1:  # Base cases
        return x

    l, r = 0, x // 2  # Lower and upper bounds

    while l <= r:
        mid = l + (r - l) // 2  # Calculate the midpoint

        # If mid*mid is less than or equal to x, search in the right half
        if mid * mid <= x:
            ans = mid
            l = mid + 1
        # If mid*mid is greater than x, search in the left half
        else:
            r = mid - 1

    return ans

# Test the function
x = int(input("Enter a number: "))
print("Square root of", x, "is:", square_root(x))
