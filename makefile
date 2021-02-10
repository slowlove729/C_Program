tree : tree.c
	gcc -o tree tree.c

run : tree
	.\tree