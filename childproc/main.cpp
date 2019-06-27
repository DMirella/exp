#include <iostream>
#include <fstream>
#include <unistd.h>
#include <cstring>

int main(){
	std::cout << "Hello, I'm the child process\n";
	char *a = new char[100];
	std::strcpy(a, "Hello parent\n");
	std::cout << &a << std::endl;
	while(1);
	return 0;
}
