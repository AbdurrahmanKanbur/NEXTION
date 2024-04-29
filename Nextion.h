
#ifndef NEXTION_H_
#define NEXTION_H_



#endif /* NEXTION_H_ */


void Nextion_Send_String(char *ID,char *string);
void Nextion_Send_String_Color(char *ID,char *string);
void Nextion_Send_Value_Float(char*ID, float Value);
void Nextion_Send_Value_Integer(char*ID, int Value);
void Nextion_Send_Value_Picture(char *ID,int Varble);
void Nextion_Send_Value_Float_Num_eksi(char*ID);
void Nextion_Send_Value_Float_Num_arti(char*ID);
void Nextion_Send_Value_int_Vrbl(char*ID, int Value);
void Nextion_Send_Page(char *ID);
void Nextion_Send_Value_Float2(char*ID, float Value);
