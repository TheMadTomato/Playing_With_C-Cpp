#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

int main() {
    const char* folderPath = "RegistryBackup";
    const char* samFilePath = "RegistryBackup/SAM.save";
    const char* systemFilePath = "RegistryBackup/SYSTEM.save";

    // Create the folder for storing the backup files
    createFolder(folderPath);

    // Execute the system commands to save the registry keys
    executeSystemCommand("reg save HKLM\\SAM .\\RegistryBackup\\SAM.save");
    executeSystemCommand("reg save HKLM\\SYSTEM .\\RegistryBackup\\SYSTEM.save");

    printf("Registry backup files saved successfully.\n");
    return 0;
}
