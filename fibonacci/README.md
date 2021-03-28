# Fibonacci

Fibonacci Sequence - a sequence of natural numbers defined recursively as follows,tThe first term is 0, the second is 1, and each subsequent term is the sum of the previous two. The next terms of this sequence are called Fibonacci numbers.

## Example

  F0  |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |  F7  |  F8  |  F9  |   
:----:|:----:|:----:|:----:|:----:|:----:|:----:|:----:|:----:|:----:|
   0  |   1  |   1  |   2  |   3  |   5  |   8  |  13  |  21  |  34  |

## Code

### C++
```c++
long fibonacci(int n) {
    if (n > 1)
        return fibonacci(n - 2) + fibonacci(n - 1);
    else
        return n;
}
```

### Python
```python
def fibonacci(n):
    if n > 1:
        return fibonacci(n - 2) + fibonacci(n - 1)
    else:
        return n
```    
    
