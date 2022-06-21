#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

#define C_BOLD   "\e[1m"
#define C_OFF    "\e[m"
#define C_WHITE  "\033[1m"
#define C_RED    "\033[31m"
#define C_GREEN  "\033[32m"
#define C_YELLOW "\033[33m"
#define C_BLUE   "\033[34m"
#define C_CYAN   "\033[36m"

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

void print_break_line(int limit, bool underscore, bool hyphen) {
	
	if (hyphen) {
		while (limit != 0) {
			printf("-");
			limit--;
		}
	}
	else {
		while (limit != 0) {
			printf("_");
			limit--;
		}
	}
	printf("\n\n");
} 

// yellow bold is for declaring scenes and setting up the "mood"
void printf_yellow_bold(char *text) {
    printf(C_YELLOW C_BOLD "%s\n\n" C_OFF, text);
}

// cyans are for questioning
void printf_cyan(char *text) {
    printf(C_CYAN "\n%s" C_OFF, text);
}