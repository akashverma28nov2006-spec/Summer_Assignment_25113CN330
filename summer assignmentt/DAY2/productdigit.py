num = int(input("Enter a number: "))
#intialise the product to zero
product = 1
#run the loop  till num become zero
while num > 0:
    digit = num % 10
    product *= digit
    num //= 10

print("Product of digits =", product)