# Basic structure of function in python is
#     def functionName(parameter1, parameter2, ....):
#         statement

#         return statement (For function only. If you're making a procedures, then no return statement)

def is_leap(year):
    result = False
    if(year%4 == 0):
        if(year%100 == 0):
            if(year%400 == 0):
                result = True
            else:
                result = False
        else:
            result = True
    else:
        result = False
    
    return result

year = int(input())
print(is_leap(year))