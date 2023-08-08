#include <stdlib.h>
#include <stdio.h>

int main() {
    int result = system("netsh advfirewall set allprofiles state off");
    if (result == 0) {
        printf("Windows Firewall: Disabled successfully.\n");
    } else {
        printf("Windows Firewall: Not Disabled.\n");
    }
    return 0;
}
