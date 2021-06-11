# Importing numpy using alias np
import numpy as np

# Importing module linalg from scipy (used to calculate determinant)
# linalg also available in numpy, actually
from scipy import linalg

# Creating Array (2-Dimensional 3x3)
# arr_2d = np.array([[2, 5, 7, 1], [4, -2, 0, 2], [4, 10, 14, 1], [3, 2, -1, 5]])
arr_2d = np.array([[0.1, 2.0, 1.3], [3.0, 4.5, 0.5], [5.3, 1.6, 5.8]])

# Finding Determinant
arr_det = linalg.det(arr_2d) # Calculated using linalg from scipy

print(arr_det)
print(np.linalg.det(arr_2d)) # Calculated using linalg from numpy