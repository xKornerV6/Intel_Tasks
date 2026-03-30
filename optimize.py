import math

# Error define
MAX_ERR = 2.15e-6
QUANT_BUDGET = MAX_ERR / 2.0

ERR_A = QUANT_BUDGET / 3.0
ERR_B = QUANT_BUDGET / 3.0
ERR_C = QUANT_BUDGET / 3.0

X2_MAX = 2**(-6)

eps_a = ERR_A
eps_b = ERR_B / X2_MAX
eps_c = ERR_C / (X2_MAX**2)

bits_a = math.ceil(-math.log2(eps_a))
bits_b = math.ceil(-math.log2(eps_b))
bits_c = math.ceil(-math.log2(eps_c)+1)

print(f"Optimized (A_F): {bits_a}")
print(f"Optimized (B_F): {bits_b}")
print(f"Optimized (C_F): {bits_c}")
