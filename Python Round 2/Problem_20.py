"""
Statement: Double [1, 2].
Expected Output: [2, 4]
"""

a = [1, 2]
b = [x + 2 for x in a]
print(b)
