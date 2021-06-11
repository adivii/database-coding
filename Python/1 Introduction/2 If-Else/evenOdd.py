# Basic input for python is input()
# This command will need to be contained into any kind of variable
# Command int() below is used to type cast the input into a integer value
n = int(input())

# Basic structure of a if-else statement is
# if(condition):
#     statement
# elif(condition):
#     statement
# else:
#     statement

if(n%2 == 1): # Basic if-else statement for python
    result = "Weird"
else:
    if(n >= 2 and n <= 5):
        result = "Not Weird"
    elif(n >= 6 and n <= 20):
        result = "Weird"
    else:
        result = "Not Weird"

print(result)