n = int(input("Enter a number: "))
str_n = str(n)
s = 0
for i in str_n:
  a = int(i)
  s += a
print("Sum:", s)
print("Reverse number:", str_n[::-1])
