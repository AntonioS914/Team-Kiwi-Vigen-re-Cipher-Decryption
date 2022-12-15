# Team-Kiwi-Vigen-re-Cipher-Decryption                  
CREATOR: ANTONIO SOTELO, no other memebers      DATE PUBLISHED: 12/14/2022
C++ program that encrypt and decrypts a message from the user.  

Approaches used are:
switch statment for choosing encryption/decryption/endprogram
arrays to store character
loops to kep the program running, match character length of key to input message, and to use the discrete math to encrypt/decrypt
void function for encrypt/decrypt
use of getline
cin.ignore & cin.clear to flush cin buffer
mostly string variables
Encryption: Ei = (Pi + Ki) mod 26         Decryption:  Di = (Ei - Ki + 26) mod 26
Capatalize all letters
push_back to return New message characters
Limitation: no symbols or spaces

INSTRRUCTION:
+++++++++++++++
-RUN PROGRAM
-CHOOSE OPTION
1.ENCRYPTION
2.DECRYPTION
3.END PROGRAM
BY TYPING IN ON OF THE NUMBERS AND CLICKING ENTER

[DO NOT INPUT ANY SPACES OR SYMBOLS]
-1 AND 2 WILL ASK TO INPUT A MESSAGE THEN PRESS ENTER
-1 AND 2 WILL ASK TO INPUT A KEY THEN PRESS ENTER
-PROVIDES AN ENCRYPTED OR DECRYPTED MESSAG DEPENDING ON OPTION CHOSEN

-PROGRAM WILL NOT END IF YOU DO NOT CHOOSE OPTION 3
-TO END PROGRAM CHOOSE OPTION 3
