#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>
#include <errno.h>


#define INIT_NUM 3
#define NAME_MAX 15
#define SEX_MAX 5
#define TEL_MAX 12
#define ADDR_MAX 20
#define CONTACT_MAX 1000


enum mainchoice
{
	EXIT,
	ADD,
	DEL,
	MODIFY,
	SORT,
	SHOW,
	SEARCH
};

enum sortchoice
{
	CANCEL,
	NAME,
	SEX,
	AGE,
	TEL,
	ADDR
};
typedef struct PeoInfo
{
	char name[NAME_MAX];
	char sex[SEX_MAX];
	short age;
	char tel[TEL_MAX];
	char address[ADDR_MAX];

}PeoInfo;

//typedef struct Contact
//{
//	PeoInfo data[CONTACT_MAX];
//	int sz;
//}Contact;

typedef struct Contact
{
	PeoInfo* data;
	int sz;
	int capacity;
}Contact;


void InitContact(Contact* pcon);
void AddContact(Contact* pcon);
void ShowContact(Contact* pcon);
void DelContact(Contact* pcon);
void ModifyContact(Contact* pcon);
void SearchContact(Contact* pcon);
void SortContact(Contact* pcon);
void CheckContact(Contact* pcon);
void DestroyContact(Contact* pcon);
void SaveContact(Contact* pcon);
void LoadContact(Contact* pcon);





