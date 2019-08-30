#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>
#include <errno.h>


#define INIT_NUM 3
#define name_max 15
#define sex_max 5
#define tel_max 12
#define address_max 20
#define contact_max 1000


enum choice
{
	EXIT,
	ADD,
	DEL,
	MODIFY,
	SORT,
	SHOW,
	SEARCH
};

typedef struct PeoInfo
{
	char name[name_max];
	char sex[sex_max];
	short age;
	char tel[tel_max];
	char address[address_max];

}PeoInfo;

//typedef struct Contact
//{
//	PeoInfo data[contact_max];
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
void DestoryContact(Contact* pcon);
void SaveContact(Contact* pcon);
void LoadContact(Contact*pcon);



