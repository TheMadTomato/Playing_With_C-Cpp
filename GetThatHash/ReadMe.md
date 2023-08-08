# About
This Program should always be run as administrator in order to run correctly. When launched correctly the program will save the hashes stored in HKLM\SAM and HKLM\SYSTEM (Basically the place where the hashes of your windows pc password is stored).
Why? well it's a lil nice shortcut to quickly get the hashes and then use tools on kali such as "impacket-secretsdumps", "cupp", and "hashcat" to prepare for a Dictionary attack.
Sadly, the process of running the hashes through those 3 tools will only end in success if the user have weak password. But try to get as much info as possible about the target  in order for "cupp" to generate more possible words.

# To Work Properly
Make sure to first know the victims username then append this section in the code to add the user's username instead of Ur:
     int result2 = system("net localgroup users Ur /add");

# Update
Getting access to one's .SAM and .SYSTEM hashes is dangerous. But cannot be much exploited unless we deeactivate some security features such as: 
- Disable "DisableRestrictedAdmin"(This allows winrm and rdp access with a hash) ---> DRM.c
- turn off Windows Firewall ---> DisableFirewall.c
- Enable RDP and add user to users group ---> RDP&AddUser.c
So i will write programs that adresse each feature to be disabled then combine them all into one tool

