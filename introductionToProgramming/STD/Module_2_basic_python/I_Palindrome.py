number = int(input())
conversion_number_string = str(number)
reversed_string = conversion_number_string[::-1]
reversed_number = int(reversed_string)
print(reversed_number)
if conversion_number_string == reversed_string:
    print("YES")
else:
    print("NO")