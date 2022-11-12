/*****************************************************************************
 * Lab 11
 * CS1050
 * FS 2022
 *****************************************************************************/
#include <stdio.h>
#include <string.h>

typedef struct _Team
{
    char city[256];
    char name[256];
} Team;

typedef struct _Player
{
	char firstName[256];
    char lastName[256];
    long salary;
    Team team;
} Player;

 int main(void)
 {
	Player players[] = 
    {
		{"Corey","Seager",32500000,{"Texas","Rangers"}},
		{"Stephen","Strasburg",35000000,{"Washington","Nationals"}},
		{"Gerrit","Cole",36000000, {"New York","Yankees"}},
		{"Mike","Trout",35500000, {"Los Angeles","Angels"}},
		{"Carlos","Correa",35100000,{"Minnesota","Twins"}},
		{"Anthony","Rendon",35000000,{"Los Angeles","Angels"}},
		{"Francisco","Lindor",34100000,{"New York","Mets"}},
		{"Trevor","Bauer",34000000,{"Los Angeles","Dodgers"}},
		{"Nolan","Arenado",32500000,{"St. Louis","Cardinals"}},
		{"Max","Scherzer",43300000,{"New York","Mets"}},
    };
 }
