#include <stdio.h>
#include <string.h>

int main() {
    char password[10];
    int passcheck = 0;


    char bank_details[100] = "name:vishwa vadaliya\ncontact:1112223334\nBank Account: 12345678\nBalance: 10,000\n";

    printf("What's the secret password?\n");
    gets(password);  

    if (strcmp(password, "password1")) {
        printf("You fail\n");
    } else {
        printf("Correct password\n");
        passcheck = 1;
    }

    if (passcheck) {
        printf("Access granted to data:\n");
        printf("%s\n", bank_details);
    } else {
        printf("No access granted to data.\n");
    }

    return 0;
}
