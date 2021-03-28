def factorial(n):
    if n < 2:
        return 1

    return n * factorial(n - 1)

try:
    n = int(input("Enter value of n: "))
except ValueError:
    print("Value is not a integer!")
    quit()    

factorial(n)     