n1 = int(input("Enter subject 1 marks: "))
n2 = int(input("Enter subject 2 marks: "))
n3 = int(input("Enter subject 3 marks: "))

avg = (n1 + n2 + n3)/3.0
print("Total Marks:", n1 + n2 + n3)
print("Average Percentage:", avg)

if (avg >= 90):
    print("Grade: S")
elif (avg <= 80 and avg >= 70):
    print("Grade: A")
elif (avg <= 60 and avg >= 50):
    print("Grade: B")
else:
    print("Grade: F")
