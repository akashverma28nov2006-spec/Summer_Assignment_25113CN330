num = int(input("Enter a number: "))
#intialise rev to zero
rev = 0
#run the loop  to zero

while num > 0:
    digit = num % 10
    rev = rev * 10 + digit
    num //= 10

print("Reverse =", rev)