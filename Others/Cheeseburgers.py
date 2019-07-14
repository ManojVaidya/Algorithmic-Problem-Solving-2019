# Given an array consisting of number of cheeseburgers, and a number of cheeseburger lovers, 
# return an array with the total number of cheeseburgers what each cheeseburger lover eats, 
# given that they all eat in regular turns, beginning from the first cheeseburger lover.

# Input Format: 
# The first line contains M space-separated integers A[i], each denoting number of cheeseburgers.
# The second and last line consists of a single number N, denoting number of cheeseburger lovers.

# Constraints:
# 1<M<10001
# 0<A[i]<100
# 0< N < 101

# Output Format:
# An array of length N consisting of total number of cheeseburgers eaten by each one.


# Sample Test Cases:
# Input: 1 2 3 4 5
# 	2

# Output: [9, 6]

# Explanation: 
# Total 2 cheeseburger lovers. When eating in turns, first person eats 1 + 3 + 5 = 9 cheeseburgers and second person eats 2 + 4 = 6 cheeseburgers.

def TotalCheeseburger(values, N):
    cheeseburgerLovers=[]
    if N==0:
        return []
    for each in range(N):
        cheeseburgerLovers.append(0)
    if len(values)==0:
        return beggars
    else:
        for i in range(len(values)):
            cheeseburgerLovers[i%len(cheeseburgerLovers)]+=values[i]
    return cheeseburgerLovers

A=input().split()
A=[int(x) for x in A]
N=int(input())
print (TotalCheeseburger(A,N))


# Test Cases:

# Test Case 1:
# Input:
# 31 89 97 32 20 48 48 24 12 2
# 2
# Output:
# [208, 195]

# Test Case 2:
# Input:
# 31 89 97 32 20 48 48 24 12 2
# 20
# Output:
# [31, 89, 97, 32, 20, 48, 48, 24, 12, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0]

# Test Case 3:
# Input:
# 87 24 19 38 23 9 42 98 72 34 40 33 75 62 29 23 91 38 69 51 51 21 81 52 1 81 73 69 59 25 30 10 7 26 22 29 80 68 96 14 37 38 60 99 55 51 52 3 64 55
# 15
# Output:
# [191, 177, 67, 197, 151, 89, 143, 247, 220, 49, 158, 144, 204, 220, 109]

# Test Case 4:
# Input:
# 63 72 71 45 89 45 97 21 89 11 48 38 1 57 38 28 21 94 78 92 26 31 61 53 5 89 2 84 78 84 61 66 99 5 87 13 26 84 86 68 98 85 57 17 15 34 25 40 55 38
# 20
# Output:
# [187, 188, 189, 115, 109, 168, 124, 145, 222, 133, 109, 104, 100, 62, 125, 41, 47, 178, 164, 160]

# Test Case 5:
# Input:
# 17 65 83 31 24 73 43 72 52 10 9 12 29 55 67 63 89 12 41 44 9 94 37 43 23 43 24 98 77 87 66 18 3 65 75 4 60 20 14 55 42 93 66 66 84 65 76 68 85 65 47 23 13 38 14 15 59 54 15 80 16 59 76 78 28 35 2 39 4 38 5 32 40 41 60 74 40 95 18 5 10 91 80 75 74 17 62 75 54 69 5 90 7 51 79 45 8 99 88 98
# 12
# Output:
# [352, 464, 521, 595, 367, 502, 255, 349, 228, 468, 376, 359]

# Test Case 6:
# Input:
# 46 2 85 42 80 60 4 17 75 83 6 40 95 72 40 46 28 91 26 49 92 76 33 97 56 48 11 30 28 52 56 10 36 58 80 41 56 25 54 2 91 34 29 26 12 54 28 55 25 78 7 71 43 18 62 34 89 40 100 3 72 16 89 9 5 98 21 25 17 86 35 94 25 56 44 61 2 3 24 76 14 94 87 93 2 1 45 26 58 2 88 91 82 70 27 70 14 15 14 35
# 88
# Output:
# [104, 4, 173, 133, 162, 130, 31, 87, 89, 98, 20, 75, 95, 72, 40, 46, 28, 91, 26, 49, 92, 76, 33, 97, 56, 48, 11, 30, 28, 52, 56, 10, 36, 58, 80, 41, 56, 25, 54, 2, 91, 34, 29, 26, 12, 54, 28, 55, 25, 78, 7, 71, 43, 18, 62, 34, 89, 40, 100, 3, 72, 16, 89, 9, 5, 98, 21, 25, 17, 86, 35, 94, 25, 56, 44, 61, 2, 3, 24, 76, 14, 94, 87, 93, 2, 1, 45, 26]

# Test Case 7:
# Input:
# 56 18 66 60 25 71 70 69 23 86 92 50 94 66 24 5 26 87 56 88 75 41 93 40 59 49 73 32 17 72 7 79 66 78 53 18 2 29 90 60 35 66 21 33 100 30 19 42 29 62 50 45 61 4 60 77 34 51 94 85 82 47 30 67 85 55 49 100 33 71 85 13 68 72 43 83 78 1 11 78 33 74 62 58 14 86 3 77 70 9 65 71 17 67 80 84 89 65 35 31
# 200
# Output:
# [56, 18, 66, 60, 25, 71, 70, 69, 23, 86, 92, 50, 94, 66, 24, 5, 26, 87, 56, 88, 75, 41, 93, 40, 59, 49, 73, 32, 17, 72, 7, 79, 66, 78, 53, 18, 2, 29, 90, 60, 35, 66, 21, 33, 100, 30, 19, 42, 29, 62, 50, 45, 61, 4, 60, 77, 34, 51, 94, 85, 82, 47, 30, 67, 85, 55, 49, 100, 33, 71, 85, 13, 68, 72, 43, 83, 78, 1, 11, 78, 33, 74, 62, 58, 14, 86, 3, 77, 70, 9, 65, 71, 17, 67, 80, 84, 89, 65, 35, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0]

