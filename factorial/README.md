# Factorial

## In mathematics, the factorial of a non-negative integer n, denoted by n!, is the product of all positive integers less than or equal to n

### n! = n * (n - 1) * (n - 2) * (n - 3) ... 3 * 2 * 1

## Example

### 5 ! = 5 * 4 * 3 * 2 * 1 = 120

## Code

### C++
```c++
long factorial(int n) {
    if (n < 2)
        return 1;

    return n * factorial(n - 1);
}
```

### Python
```python
def factorial(n):
    if n < 2:
        return 1

    return n * factorial(n - 1)
```    
    
