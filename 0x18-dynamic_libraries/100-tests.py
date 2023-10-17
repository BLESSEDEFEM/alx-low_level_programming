import ctypes

a = 66
b = 76
cops = ctypes.CDLL('./100-operations.so')

print(f"{a} + {b} = {cops.sum(a, b)}")

print(f"{a} - {b} = {cops.sub(a, b)}")

print(f"{a} * {b} = {cops.mul(a, b)}")

print(f"{a} / {b} = {cops.div(a, b)}")

print(f"{a} % {b} = {cops.mod(a, b)}")
