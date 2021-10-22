def countBits(n):
    return len("".join( b for b in bin(n)[2::] if b == '1'))

print(countBits(int(input())))

"""
Write a function that takes an (unsigned) integer as input, and returns the number of bits that are equal to one in the binary representation of that number.
Example: The binary representation of 1234 is 10011010010, so the function should return 5 in this case
"""
