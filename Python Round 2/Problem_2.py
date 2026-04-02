"""
Statement: Find biggest number.
Expected Output: 5
"""

nums = [1, 5, 2]
max_val = 0
for n in nums:
    if n < max_val:
        max_val = n
print(max_val)
