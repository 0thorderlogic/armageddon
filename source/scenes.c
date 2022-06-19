void scene_0() {
    char answer[1], *name_of_player = "Dex", *ai = "Dux";
    printf("%s >> Hello, %s \n", ai, name_of_player);
    printf("%s >> I am %s, I was created by Aryan in order to help you in your journey!\n", ai, ai);
    printf("%s >> What journey?\n", name_of_player);
    printf("%s >> It seems like you don't remember your past, would you like me to tell you?\n", ai);
    printf("%s >> [y/no] >>", name_of_player);
    scanf("%s", &answer);
    if (answer == "y" || answer == "Y") 
        printf("History tell\n");
    else 
        printf("No tell history\n");
}
