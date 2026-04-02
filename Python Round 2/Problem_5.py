"""
Statement: How many even numbers.
Expected Output: 2
"""

nums = [1, 2, 4, 5]
count = 0
for n in nums:
    if n % 2 != 0:
        count += 1
print(count)
