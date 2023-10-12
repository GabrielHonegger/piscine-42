test: test.o
	cc test.o -o test # Runs third

test.o: test.c
	cc -c test.c -o test.o # Runs second

# Typically test.c would already exist, but I want to limit any additional required files
test.c:
	echo "int main() { return 0; }" > test.c # Runs first
