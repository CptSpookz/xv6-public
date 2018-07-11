#include "types.h"
#include "stat.h"
#include "user.h"

int main() {
	// Test R/W
	uint *ptr = 0;
	*ptr = 0xFF;
	printf(1, "POSITION: %x CONTENT: %x\n", ptr, *ptr);
	
	// Test null function pointer
	void *fptr = 0;
	((void(*)()) fptr)();

	exit();
}
