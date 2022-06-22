#include <unistd.h> // notice this! you need it!

#define DECLARE char answer, *name_of_player = "Dex", *ai = "Dux";
#define MAX_LIMIT 80
#define TIME_LIMIT 1
#define SLEEP sleep(TIME_LIMIT)

void scene_About_AI();
void scene_Explore_0();
bool scene_1();
void scene_0();
void history();

void history() {
    print_break_line(MAX_LIMIT, true, false);
    SLEEP;
    printf_yellow_bold("HISTORY 📖\n");
    SLEEP;
}

void scene_0() {
    char answer;

    // scene set up output should be styled in a particular manner 
    // will make the function and add it to the super.h file soon ~ as
    printf_yellow_bold("You wake up in a old building, you don't recognize it at all and you suddenly hear a voice");
    
    printf("DUX >> Hello!\n");
    SLEEP;
    printf("DUX >> I am DUX, I was created by Aryan in order to help you in your journey!\n");
    SLEEP;
    printf("YOU >> What journey?\n");
    SLEEP;
    printf("DUX >> It seems like you don't remember your past, would you like me to tell you?\n");
    SLEEP;
    printf_cyan(">> (Y) Yes\n>> (N) No\n>> (🚀) defaults to N\n>> ");
    scanf("%c", &answer);

    if (answer == 'y' || answer == 'Y' || answer == '1') 
        history();
    else 
        return;
        // and do nothing
        // It bothers me to write a if statement and not add a else statement
}

bool scene_1() {
    char *name_of_player = "You", *ai = "Dux";
    int answer = 2;
    bool first;

    print_break_line(MAX_LIMIT, true, false);
    SLEEP;
    printf_yellow_bold("Be wise as to what you say!");
    SLEEP;
    printf("DUX >> What would you do? 💭\n");
    SLEEP;
    printf_cyan(">> (1) know more about the AI\n>> (2) Go exploring\n>> (🚀) defaults to Exploration\n>> ");
    SLEEP;
    scanf("%d", &answer);

    if ( answer == 1 )
        first = true;
    else
        first = false;

    print_break_line(MAX_LIMIT, true, false);
    return first;
}

void scene_Explore_0() {
    SLEEP;
    printf_yellow_bold("EXPLORE TIME 🌍\n");
    SLEEP;
    print_break_line(MAX_LIMIT, true, false);
}

void scene_About_AI() {
    SLEEP;
    printf_yellow_bold("ABOUT AI 🤖\n");
    SLEEP;
    print_break_line(MAX_LIMIT, true, false);
}