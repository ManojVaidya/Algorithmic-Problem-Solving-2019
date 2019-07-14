
# Manoj has a secret number and he converted it to a code. He does that as follows:

# The digits in his number are always in ascending order
# Ex: 123

# Converted each digit into English words.
# Ex: 123 = ONETWOTHREE

# Then rearranged randomly.
# Ex:  ONETWOTHREE = TTONWOHREEE

# As Manoj is not so good at encrypting, it can be decoded easily!

# Task is to decode the given string to return the original number.

# Input Format: 
# The only line containing the decoded number in UPPERCASE Letters.

# Constraints:
# Length of input String ranges from 3 to 60

# Output Format:
# A single string denoting the actual number


# Sample Test Cases:

# Test Case 1:
# 	Input: OONETW
# 	Output: 12

# Test Case 2:
# 	Input: EIGNINEONFIVEETH
# 	Output: 1589

from collections import Counter

nums_dict={'ZERO':'0','EIGHT':'8','SIX':'6','SEVEN':'7',
        'THREE':'3','FOUR':'4','FIVE':'5','NINE':'9',
        'TWO':'2','ONE':'1'}
        
keys =['ZERO','EIGHT','SIX','SEVEN',
         'THREE','FOUR','FIVE','NINE',
         'TWO','ONE']         

def deCode(s):
    res=''
    counted=Counter(s)
    for key in keys:
        while all(counted[char]>0 for char in key):
            for char in key:
                counted[char]-=1
            res+=nums_dict[key]
    return ''.join(sorted(res))

s=input()    
print(deCode(s))


# Test Cases:

# Test Case 1:
# 	Input: OONETW
# 	Output: 12

# Test Case 2:
# 	Input: EIGNINEONFIVEETH
# 	Output: 1589

# Test Case 3:
# 	Input: TTEIHWEEGEZFOTHITHIIIVTOGOXSGREW
# 	Output: 02256888


# Test Case 4:
# 	Input: EIENVNETHXOUEFSOWRHGFINEIIERSNTTEEOV
# 	Output: 123456789

# Test Case 5:
# 	Input: EHVTFUFIOIOREETGTWHER
# 	Output: 23458

# Test Case 6:
# 	Input: OTISWEOOERTFRIFNOTRNHNGXINEEHUEWTENIUSEV
# 	Output: 2234467899

# Test Case 7:
# 	Input: OZIEVEIRHHENIINEOEIEGTIFIGGVEESTFFNHIXVET
# 	Output: 0155568889

# Test Case 8:
# 	Input: ZEROZEROONEONETWOTWOTHREETHREEFOURFOURFIVEFIVESIXSIX
# 	Output: 00112233445566 
