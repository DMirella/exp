#include <unistd.h>
#include <iostream>
#include <sys/wait.h>
#include <fstream>


int main(){
	int childpid;
	childpid = fork();
	char *args[3];
	args[0] = (char*)"./childproc/childproc";
	args[1] = NULL;
	if(childpid == 0){
		execvp(args[0], args);
		std::cerr << "Execl error\n";
	}
	else{
		wait(0);
		int adr;
		std::cin >> adr;
		char *a = (char*)adr;
		std::cout << "Parent: " << *a << std::endl;
	}
	return 0;
}
