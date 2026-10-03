#ifndef DATABASE_H
#define DATABASE_H

#define CHAR_MAX 100
#define MAX_ENTRIES 250

typedef struct
{
	int id;
	char website[CHAR_MAX];
	char username[CHAR_MAX];
	char password[CHAR_MAX];
} PasswordEntry;

void DisplayMenu();
int GetIntInRange(int min, int max, char *prompt);
int AddPass();
int GetPass();
int ListPass();
int GenPass();
int DelPass();

#endif
