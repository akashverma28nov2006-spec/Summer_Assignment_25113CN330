num = int(input("Enter a number: "))
#store num in temp
temp = num
rev = 0
#run the loop till num greater thann zero

while num > 0:
    digit = num % 10
    rev = rev * 10 + digit
    num //= 10
#palindrome no are those number in which num and their reverse is equal
if temp == rev:
    print("Palindrome Number")
else:
    print("Not a Palindrome Number")