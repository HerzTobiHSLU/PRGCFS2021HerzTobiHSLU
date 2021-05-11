#include <stdio.h>
#include <stdlib.h>

//struktur Datenaufnahme
struct data
	{
		long long int Time_stamp;
		int Pressure_pa;
		char System_state;
		char Alarm_state;
	};

int main() 
{
	int buffer;	//'Zwischenspeicher'variablen
	int store;
	int size;
	int i;
	long lSize;

				
	struct data data_t;	//Import bin Daten
	FILE *fp;
	fp = fopen("pressureSpike.bin", "rb");
	if (!fp)		//Fehlermeldung wenn bin Datei nicht geöffnet werden kann
	{
			printf("Unable to open file!");
			return 1;
		}

				//Definieren des Outputfiles
	FILE *csv;					
	csv = fopen("pressureSpike.csv", "w");
	
				//lesen und schreiben der einzelnen Spalten mit counter 
				//8 * 60 sekunden / 0.25 sekunden -> 1920 messpunkte  
	for (i = 0; i<= 1920; i++)
    	{
    		long long int Time_stamp;
    		
        	fread(&Time_stamp, sizeof(Time_stamp), 1, fp);
        	fwrite(&data_t.Time_stamp, sizeof(8), 1, csv);
        	
        	int Pressure_pa;
        	
		fread(&Pressure_pa, sizeof(4), 1, fp);
		fwrite(&data_t.Pressure_pa, sizeof(4), 1, fp);
		
		char System_state;
		
		fread(&System_state, sizeof(1), 1, fp);
		fwrite(&data_t.System_state, sizeof(1), 1, fp);
		
		char Alarm_state;
		
		fread(&Alarm_state, sizeof(1), 1, fp);
		fwrite(&data_t.Alarm_state, sizeof(1), 1, fp);
		
		printf("Time_stamp is %lld,  Pressure is %d in pa, System_state is %c, Alarm_state is %c\n", data_t.Time_stamp, data_t.Pressure_pa, data_t.System_state, data_t.Alarm_state);
		
   	}
	
fclose(fp);
fclose(csv);
fprintf(stdout, "Done reading files\n");

return 0;
}
