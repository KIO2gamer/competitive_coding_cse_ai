s = input("Enter a string: ")
f = {}

for ch in s:
    if ch.isalpha():
        char = ch.lower()
        f[char] = f.get(char, 0) + 1

for l in sorted(f.keys()):
    print(f"'{l}': {f[l]}")
