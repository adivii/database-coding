def descending_order(num):
    str_num = list(str(num))
    
    for i in range(len(str_num)):
        for j in range(len(str_num)-i):
            if(int(str_num[i]) < int(str_num[i+j])):
                temp = str_num[i]
                str_num[i] = str_num[i+j]
                str_num[i+j] = temp
    
    return ''.join(str_num) #Return list as string

print(descending_order(505))