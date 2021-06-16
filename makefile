default:
	gcc -Wall -o prog main.c country.c -lm
debug:
	gcc -Wall -o prog -g main.c country.c -lm
clean:
	rm -f prog
