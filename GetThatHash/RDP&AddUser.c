#include <stdlib.h>
#include <stdio.h>

int main() {
    char username[50];
    printf("Enter your username: ");
    scanf("%s", username);
    int result1 = system("reg add \"HKEY_LOCAL_MACHINE\\SYSTEM\\CurrentControlSet\\Control\\Terminal Server\" /v fDenyTSConnections /t REG_DWORD /d 0 /f");
    int result2 = system("net localgroup users %s /add", username);
    if (result1 == 0 && result2 == 0) {
        printf("RDP Enabled and User Added to Users Group.\n");
    } else {
        printf("RDP Not Enabled and User Not Added to Users Group.\n");
    }
    return 0;
}
