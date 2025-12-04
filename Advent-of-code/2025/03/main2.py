import sys

sumaT = 0
K = 12

for line in sys.stdin:
    line = line.strip()
    if not line:
        continue

    digits = list(map(int, line))
    stack = []
    to_remove = len(digits) - K  # cuántos dígitos podemos eliminar

    for d in digits:
        # mientras podamos borrar y el último dígito en stack sea menor que el nuevo
        while to_remove > 0 and stack and stack[-1] < d:
            stack.pop()
            to_remove -= 1
        stack.append(d)

    # si aún sobran dígitos (caso números ya decrecientes)
    result_digits = stack[:K]

    final_number = int("".join(map(str, result_digits)))
    print(final_number)
    sumaT += final_number

print(sumaT)
