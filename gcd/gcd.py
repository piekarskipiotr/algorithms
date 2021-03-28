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

try:
    a = int(input("Enter first value: "))
    b = int(input("Enter second value: "))
except ValueError:
    print("Value is not a integer!")
    quit()

gdc(a, b)

        
    
