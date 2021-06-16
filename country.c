typedef struct date {
unsigned int day, month, year;
} Date;
typedef struct vaccination {
char country[35];
Date date;
int totalVaccination;
int peopleVaccinated;
int peopleFullyVaccinated;
float dailyVaccination;
float totalVaccinationsPerHundred;
float peopleVaccinatedPerHundred;
float peopleFullyVaccinatedPerHundred;
int dailyVaccinationsPerMillion;
char vaccines[5][20];
int number_vaccines;
} Vaccination;
typedef struct country_struct {
 char country[35];
 char region[20];
 int population;
 int area;
 int medianAge;
 float urbanPopulation;
 float worldShare;
} Country;
