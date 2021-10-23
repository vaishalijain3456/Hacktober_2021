"""
Convert Roman Number to integer
"""

class Solution:
    def romanToInt(self, s: str) -> int:
        roman_dict = {
            "I" : 1,
            "V" : 5,
            "X" : 10,
            "L" : 50,
            "C" : 100,
            "D" : 500,
            "M" : 1000
        }
        number = 0
        for index, character in enumerate(s):
            if index < len(s) - 1 and roman_dict.get(character) < roman_dict.get(s[index+1]):
                number -= roman_dict.get(character)
            else:
                number += roman_dict.get(character)
        
        return number

print(f"Roman number: III :: Integer:{Solution().romanToInt('III')}")
print(f"Roman number: IV :: Integer:{Solution().romanToInt('IV')}")
print(f"Roman number: IX :: Integer:{Solution().romanToInt('IX')}")
print(f"Roman number: LVIII :: Integer:{Solution().romanToInt('LVIII')}")
print(f"Roman number: MCMXCIV :: Integer:{Solution().romanToInt('MCMXCIV')}")