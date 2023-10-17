import ctypes

a = 66
b = -76
arithmetic = ctypes.CDLL('./100-operations.so')

print(f"{a} + {b} = {arithmetic.sum(a, b)}")

print(f"{a} - {b} = {arithmetic.sub(a, b)}")

print(f"{a} * {b} = {arithmetic.mul(a, b)}")

print(f"{a} / {b} = {arithmetic.div(a, b)}")

print(f"{a} % {b} = {arithmetic.mod(a, b)}")
