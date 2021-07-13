#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	char com[100];
	sprintf(com, "jupyter lab \"%s\"", argc > 1 ? argv[1] : "");
	system(com);
	return (0);
}
