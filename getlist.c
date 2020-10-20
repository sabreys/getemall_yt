#include<stdio.h>
int main(int argc, char *argv[]){
	execlp("python", "python", "getliste.py", argv[1], (char*) NULL);
	return 0;
}

