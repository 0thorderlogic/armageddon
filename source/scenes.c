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
    printf_cyan(">> (1) know more about the Dux before exploring\n>> (2) Go exploring\n>> (🚀) defaults to exploration\n>> ");
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
    printf_yellow_bold("About Dux 🤖 He is your guide, he is here to help you if you have any questions");
    SLEEP;

    // pros
    printf_green("[*] He has the ability to map out terrains");
    SLEEP;
    printf_green("[*] He can find life signs i.e to determine if any intelligent life is present in a certain region");
    SLEEP;
    printf_green("[*] Dux has the ability to detect toxic elements");
    SLEEP;
    printf_green("[*] He can purify water and locate food that will not harm you");
    SLEEP;
    printf_green("[*] He can protect you from animals with his pew-pew gun");
    SLEEP;
    printf_green("[*] He has designs to manufacture and produce a range of weapons mostly guns");
    SLEEP;
    printf_green("[*] He has an alarm clock");
    SLEEP;
    printf_green("[*] He runs on solar energy, and is very energy efficient he can provide you with small amount of energy when need be");
    SLEEP;

    // cons
    printf_red("[*] He is the only one who can access coms");
    SLEEP;
    printf_red("[*] You don't have the skills to repair any damage caused to him");
    SLEEP;
    printf_red("[*] Does't understand human emotions (not really a con ~ as)");
    SLEEP;
    print_break_line(MAX_LIMIT, true, false);
    scene_Explore_0(); // to continue the game!
}