#include <stdlib.h>
#include <stdio.h>

int main() {
    int result = system("reg add HKLM\\System\\CurrentControlSet\\Lsa /t REG_DWORD /v DisableRestrictedAdmin /d 0x0 /f");
    if (result == 0) {
        printf("DisableRestrictedAdmin: Disabled successfully.\n");
    } else {
        printf("DisableRestrictedAdmin: Not Disabled.\n");
    }
    return 0;
}
