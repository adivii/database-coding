# Importing numpy using alias np
import numpy as np

# Creating Array (1 Dimensional)
arr_1d = np.array([1, 2, 3, 4, 5])

# Accessing Index of Array (1 Dimensional)
# Can be done using array_name[index]
a1 = arr_1d[0]

print(arr_1d)
print("Elemen pada baris 1, kolom 1 adalah : ",a1)

# Creating Array (2 Dimensional)
arr_2d = np.array([[1, 2, 3], [4, 5, 6]])

# Accessing Index of Array (2 Dimensional)
# Can be done using array_name[row, column]
a2 = arr_2d[0, 1] # Mengakses nilai pada baris pertama (index 0), kolom kedua (index 1)

print(arr_2d)
print("Elemen pada baris 1, kolom 2 adalah : ",a2)

# Negative Indexing
a3 = arr_2d[-1, -1] # Mengakses nilai pada baris terakhir, kolom terakhir

print("Elemen pada baris terakhir, kolom terakhir : ",a3)