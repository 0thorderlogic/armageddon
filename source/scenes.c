#define DECLARE char answer, *name_of_player = "Dex", *ai = "Dux";
#define MAX_LIMIT 80

void scene_About_AI();
void scene_Explore_0();
bool scene_1();
void scene_0();
void history();

void history() {
    print_break_line(MAX_LIMIT, true, false);
    printf_yellow_bold("HISTORY 📖\n");
}

void scene_0() {
    char answer, *name_of_player = "You", *ai = "Dux";

    // scene set up output should be styled in a particular manner 
    // will make the function and add it to the super.h file soon ~ as
    printf_yellow_bold("You wake up in a old building, you don't recognize it at all and you suddenly hear a voice");
    
    printf("%s >> Hello, %s \n", ai, name_of_player);
    printf("%s >> I am %s, I was created by Aryan in order to help you in your journey!\n", ai, ai);
    printf("%s >> What journey?\n", name_of_player);
    
    printf("%s >> It seems like you don't remember your past, would you like me to tell you?\n", ai);
    printf_cyan(">> (Y) Yes\n>> (N) No\n>> (🚀) defaults to N\n>> ");
    scanf("%c", &answer);

    if (answer == 'y' || answer == 'Y') 
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

    printf_yellow_bold("Be wise as to what you say!");

    printf("%s >> What would you do? 💭\n", ai);
    printf_cyan(">> (1) know more about the AI\n>> (2) Go exploring\n>> (🚀) defaults to Exploration\n>> ");
    scanf("%d", &answer);

    if ( answer == 1 )
        first = true;
    else
        first = false;

    print_break_line(MAX_LIMIT, true, false);
    return first;
}

void scene_Explore_0() {
    printf_yellow_bold("EXPLORE TIME 🌍\n");
    print_break_line(MAX_LIMIT, true, false);
}

void scene_About_AI() {
    printf_yellow_bold("ABOUT AI 🤖\n");
    print_break_line(MAX_LIMIT, true, false);
}