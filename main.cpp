/*!!!!!!!!!Team Kiwi!!!!!!!!*/
#include <iostream>
#include <string>
using namespace std;



void encryptMessage()  //case 1
{
  string msg, key; // message and key
  string message, newKey; //same message and new key
  string encryptedText;  //message encrypted by key
  
  cout << "\n\nEncryption\n++++++++++++++\n";

  //Message Input
  cout << "Message to Encrypt: ";
  getline(cin, msg);
  //Message to uppercase
  for(int i = 0; i < msg.size(); i++)
    {
      msg[i] = toupper(msg[i]);
    }

  //Key Input
  cout << "\nShift Key: ";
  getline(cin, key);
  //Key to uppercase
  for(int i = 0; i < key.size();i++)
    {
      key[i] = toupper(key[i]);
    }

  //Makes Key repeat itself to the number of character the message has
  string changeKey = "";
   for(int i = 0, j = 0; i < msg.size(); ++i, ++j)
     {
       if (j < key.size()) 
        {
				  changeKey += key[j];
        }
			else 
        {
				  j = 0;
  				changeKey += key[j];
			  }
     }

    
  message = msg;
  newKey = changeKey;
  
  //Encryption
  for(int i=0; i < message.size(); i++)
    {
      /*adds value of message and new key while arithmetic circle of
      0-25(mod 26) in orrder to encrypt it*/
      char E = (message[i] + newKey[i]) %26;
      //convert back to A-Z by adding value of A to E and storing it
      E += 'A';

      encryptedText.push_back(E);
    }
  
  cout << "\nEncrypted Message: " << encryptedText;
}

void decryptMessage() //case 2
{
  string msg, key; // message and key
  string message, newKey;
  string decryptedText;  //message decrypted by key

   cout << "\n\nDecryption\n++++++++++++++\n";
  //Message Input
   cout << "Message to Decrypt: ";
   getline(cin, msg);
  //Message to uppercase
  for(int i = 0; i < msg.size(); i++)
    {
      msg[i] = toupper(msg[i]);
    }

  //Key Input
  cout << "\nShift Key: ";
  getline(cin, key);
  //Key to uppercase
  for(int i = 0; i < key.size();i++)
    {
      key[i] = toupper(key[i]);
    }

  //Makes Key repeat itself to the number of character the message has
  string changeKey = "";
   for(int i = 0, j = 0; i < msg.size(); ++i, ++j)
    {
       if (j < key.size()) 
        {
				  changeKey += key[j];
        }
			else 
        {
				  j = 0;
  				changeKey += key[j];
			  }
    }
    message = msg;
    newKey = changeKey;
    
  //Decryption
  for(int i=0; i < message.size(); i++)
    {
       /*subtract value of message and new key while arithmetic circle of
      0-25(mod 26) in orrder to decrypt it*/
      char E = (message[i] - newKey[i] +26) %26;
      //convert back to A-Z by adding value of A to E and storing it
      E += 'A';

      decryptedText.push_back(E);
    }
  
  cout << "\nDecrypted Message: " << decryptedText;
}

int main() 
{
  int choice;  // switch case

  // Introduction
  cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++\n"
       << "This program encrypts and decrypt input messages.\n"
       << "DOES NOT WORK WITH SPACES OR SYMBOLS.\n"
       << "+++++++++++++++++++++++++++++++++++++++++++++++++++\n";

  do {
    // Select an option
    cout << "PLEASE CHOOSE A GIVEN OPTION\n"
         << "1.(Encrypt) \n2.(Decrypt) \n3.(End Program)\n"
         << "Number choice: ";
    cin >> choice;
    // if both ways to flush are not there it repeat with character inputs
    cin.clear();
    cin.ignore();

    switch (choice) 
    {
    case 1: // Encryption Option
      {
        encryptMessage();
        
        cout << "\n+++++++++++++++++++++++++++++++++++++++++++++++++++\n\n";
        break;
      }
    case 2: // Decryption Option
      {
        decryptMessage();
        
        cout << "\n+++++++++++++++++++++++++++++++++++++++++++++++++++\n\n";
        break;
      }
      
    case 3: // Stop Program
      {
        cout << "\n\nGoodbye";
        break;
      }

     default:  //when choice is none of the given options
      {
        cout << endl << endl;
      }
    }
  } while (choice != 3); //choice 3 terminates do-while loop

  cout << "\nEnd of Program";
  return 0;
}