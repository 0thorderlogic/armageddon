#include <stdlib.h>

void clear_screen() {
	#if __APPLE__
		system("clear"); 
	#elif _WIN32
		system("cls"); 
	#elif __LINUX__
		system("clear"); 
	#elif BSD
		system("clear"); 
	#else
		system("clear"); 
	#endif
}
