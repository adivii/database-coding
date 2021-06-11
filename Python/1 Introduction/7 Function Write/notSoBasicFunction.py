def getString(n):
    result = ""
    for i in range(n):
        # str() will type-cast an integer into a string, so it can be Concatenated
        result = result + str(i+1)

    return result

a = int(input())
print(getString(a))