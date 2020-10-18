#include <stdint.h>

/*
Most common used fixed width integer types are shown in the main function

stdint.h must be included.

This exists on C99 and later
*/

int main() {
	uint32_t u32 = 32; //Exactly 32 bits wide (unsigned)

	uint8_t u8 = 8; //Exactly 8 bits wide (unsigned)

	int64_t i64 = -100; //Exactly 64 bits wide (signed - Two's complement)

	return 0;
}
