def fibonacci(n):
    if n > 1:
        return fibonacci(n - 2) + fibonacci(n - 1)
    else:
        return n

try:
    n = int(input("Enter value of n: "))
except ValueError:
    print("Value is not a integer!")
    quit()   

fibonacci(n)         
