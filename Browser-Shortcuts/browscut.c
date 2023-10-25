#include<stdio.h>


int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s -[t|s|b|w|m|p|d|h|v]\n", argv[0]);
        return 1;
    }

    char flag = argv[1][1]; // Extract the flag from the argument

    switch (flag) {
        case 't':
            printf("\t- Open a new tab:\033[1m Ctrl + T\033[0m\n"
                   "\t- To Move between tabs from right to left or up to down:\033[1m Ctrl + 1 to 8\033[0m\n"
                   "\t- To Move to the last tab on the right or down:\033[1m Ctrl + 9\033[0m\n"
		   "\t- To Move Up/Down or Left/Right in tabs: \033[1m Ctrl + PgUp/PgDn\033[0m\n"
                   "\t- Close the current tab you are in:\033[1m Ctrl + W\033[0m\n"
                   "\t- Open recently closed tabs:\033[1m Ctrl + Alt + T\033[0m\n"
                   "\t- Go Back:\033[1m Alt + left arrow\033[0m\n"
                   "\t- Go Forward:\033[1m Alt + right arrow\033[0m\n"
                   "\t- Go to home page:\033[1m Alt + home key\033[0m\n"
                   "\t- Refresh Tab:\033[1m F5\033[0m\n"
                   "\t- Print current page or tab:\033[1m Ctrl + P\033[0m\n");
            break;
        case 's':
            printf("\t- Go to the Address bar:\033[1m Alt + D\033[0m\n"
                   "\t- Find typed text on webpage:\033[1m Ctrl + F\033[0m\n"
		   "\t- Search from anywhere on the page:\033[1m Ctrl + K\033[0m\n"
		   "\t- Jump to the address bar:\033[1m Ctrl + L\033[0m\n"
		   "\t- Remove predictions from your address bar (after highlighting them):\033[1m Shift + Delete\033[0m");
            break;
        case 'b':
            printf("\t- Show or hide bookmark window:\033[1m Ctrl + Shift + B\033[0m\n"
                   "\t- Add a website or web page to bookmark:\033[1m Ctrl + D\033[0m\n");
            break;
        case 'w':
            printf("\t- Open new browser window:\033[1m Ctrl + N\033[0m\n"
                   "\t- Close current browser:\033[1m Alt + F4\033[0m\n"
                   "\t- Close all browser windows:\033[1m Ctrl + Q\033[0m\n"
		   "\t- Open an incognito window: \033[1m Ctrl + Shift + N\033[0m\n");
            break;
	case 'm':
	    printf("\t- Open the main menu:\033[1m Alt + F \033[0m\n"
		   "\t- Open History Tab:\033[1m Ctrl + H \033[0m\n"
		   "\t- Open Download Tab:\033[1m Ctrl + J \033[0m]\n"
		   "\t- Open the find bar to search the current page:\033[1m Ctrl + F \033[0m\n"
		   "\t- Jump to the next match in your find bar search:\033[1m Ctrl + G \033[0m\n"
		   "\t- Jump to the previous match in your find bar search:\033[1m Ctrl + Shift + G \033[0m\n"
		   "\t- Open profile menu:\033[1m Ctrl + Shift + M \033[0m\n");
	    break;
	case 'p':
	    printf("\t- Open options to print the current page:\033[1m Ctrl + P \033[0m\n"
		   "\t- Open options to save the current page:\033[1m Ctrl + S \033[0m\n"
		   "\t- Reload the current page:\033[1m Ctrl + R \033[1mor\033[0m F5 \033[0m\n"
		   "\t- Browse clickable items moving forward:\033[1m Tab \033[0m\n"
		   "\t- Open a file from your computer in Brave:\033[1m Ctrl + O \033[0m\n"
		   "\t- Display non-editable HTML source code for the current page:\033[1m Ctrl + U \033[0m\n"
		   "\t- Turn full-screen mode on or off:\033[1m F11 \033[0m\n"
		   "\t- Make everything on the page bigger/smaller:\033[1m Ctrl + +/- \033[0m\n"
		   "\t- Return everything on the page to default size:\033[1m Ctrl + 0 \033[0m\n"
		   "\t- Go to the top/bottom of the page:\033[1m Home/End \033[0m\n");
	    break;
	case 'd':
		printf("\t- Open the Brave task manager:\033[1m Shift + Esc\033[0m\n"
		       "\t- Open developers tools:\033[1m Ctrl + Shift + J \033[0m\n");
		break;
        case 'h':
            printf("\thelp"
		   "\t \'-t\':\tto show Tabs managment shortcuts.\n"
		   "\t \'-s\':\tto show Search and Search Bar Shortucts.\n"
		   "\t \'-b\':\tto show Bookmarking and Bookmark bar shortcuts.\n"
		   "\t \'-w\':\tto show Browser Window manegment shortcuts.\n"
		   "\t \'-m\':\tto show menu settings and general browser shortcuts.\n"
		   "\t \'-p\':\tto show webpage shortcuts.\n"
		   "\t \'-d\':\tto show developer shortcuts.\n"
		   "\t \'-h\':\tto show help.\n"
		   "\t \'-v\':\tto show current version.\n");
            break;
	case 'v':
		printf("\tVersion 1.0.3");
		break;
	default:
		printf("\t\"Type browscut with \'-h\' to get more info\"");
		break;

	}

	return 0;
}
