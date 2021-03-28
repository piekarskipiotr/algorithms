# The greatest common divisor (GCD)

In mathematics, the greatest common divisor (GCD) of two or more integers, which are not all zero, is the largest positive integer that divides each of the integers. 

## Example

For 8 and 12 GCD is 4

## Code

### C++
```c++
int gcd(int a, int b) {
    int controlValue = 0, lower = 0, temp, nwd;

    if (a > b) {
        controlValue = a;
        lower = b;

    } else if(b > a) {
        controlValue = b;
        lower = a;

    }

    while (true) {
        controlValue = controlValue - lower;

        if (controlValue == 0) {
            nwd = lower;
            return nwd;

        }

        if (controlValue < lower) {
            temp = lower;
            lower = controlValue;
            controlValue = temp;

        }
    }
}
```

### Python
```python
def gcd(a, b):
    controlValue = 0
    lower = 0
     
    if a > b:
        controlValue = a
        lower = b
    elif b > a:
        controlValue = b
        lower = a
    
    while True:
        controlValue = controlValue - lower

        if controlValue == 0: 
            gcd = lower
            return gcd

        if controlValue < lower:
            temp = lower
            lower = controlValue
            controlValue = temp
```    
    
