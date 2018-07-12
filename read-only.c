#include "types.h"
#include "stat.h"
#include "user.h"

int main() {
	char* pr = (char*)main;

	// Child process
	if (fork() == 0) {
		printf(1, "Now on child process space\n");
		printf(1, "Parent process address: %p Value: %c\n", pr, *pr);
		printf(1, "Attempt to write on read-only parent process...\n");
		*pr = 'k';
		printf(1, "Parent process address: %p Value: %c\n", pr, *pr);
	} else // Parent process
		wait();

	exit();
}
