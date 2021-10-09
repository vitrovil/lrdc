#include<stdio.h>
#include <stdlib.h>
#include<graphics.h>
#include <windows.h>
#include<math.h>

int JLar, JAlt;
int	RLar, RAlt;
int BLar, BAlt;
int FLar, FAlt;
int RES, CLar, CAlt, CHLar, CHAlt, CTLar, CTAlt, KLar, KAlt, GLar, GAlt, PTLar, PTAlt, CCLar, CCAlt;
int H0Lar, H0Alt, H1Lar, H1Alt, H2Lar, H2Alt, H3Lar, H3Alt, H4Lar, H4Alt, H5Lar, H5Alt;
int i;
void *chCLLT[2];

  	bool PLRDH1 = false;
  	bool PLRDH2 = false;
  	bool PLRDH3 = false;
  	bool PLRDH4 = false;
  	
  	bool SCENE10S = false;
  	bool SCENE20S = false;
  	bool SCENE30S = false;
  	bool SCENE40S = false;
  	bool SCENE50S = false;
  	bool SCENE60S = false;
  	bool SCENE70S = false;
  	bool SCENE80S = false;
  	bool SCENE90S = false;
  	bool SCENE100S = false;
  	bool SCENE110S = false;
  	bool SCENE120S = false;
  	
	bool CARD5S = false;
	bool CARD7S = false;
	bool CARD8S = false;
	bool CARD10S = false;
	bool CARD12S = false;
	bool CARD14S = false;
  	bool CARD15S = false;
	bool CARD16S = false;
	bool CARD18S = false;
	bool CARD19S = false;
	bool CARD20S = false;

void INIT();
void MENU();
void CASE();
void CARD();
void TAB();

void CASER01();
void CREDT();

void SCENE00();
void SCENE01();

void SCENE10();
void SCENE11();

void SCENE20();
void SCENE21();

void SCENE30();
void SCENE31();

void SCENE40();
void SCENE41();

void SCENE50();
void SCENE51();

void SCENE60();
void SCENE61();

void SCENE70();
void SCENE71();

void SCENE80();
void SCENE81();

void SCENE90();
void SCENE91();

void SCENE100();
void SCENE101();

void EXIT();

int main(){

	JLar = 1280;
	JAlt = 720;
	
	RLar = 1920;
	RAlt = 1080;
	
	BLar = 150;
	BAlt = 54;
	
	FLar = 130;
	FAlt = 196;
	
	CLar = 84;
	CAlt = 127;
	
	PTLar = 265;
	PTAlt = 125;
	
	H0Lar = 84;
	H0Alt = 126;
	
	H1Lar = 50;
	H1Alt = 62;
	
	H2Lar = 50;
	H2Alt = 50;
	
	H3Lar = 50;
	H3Alt = 75;
	
	H4Lar = 50;
	H4Alt = 50;
	
	H5Lar = 60;
	H5Alt = 77;
	
	KLar = 36;
	KAlt = 75;
	
	GLar = 76;
	GAlt = 33;	
	
	CCLar = 265;
	CCAlt = 190;	 
  
 /*MUSIC*/ {
  	mciSendString("open .\\sons\\musicaintro.mp3 type MPEGVideo alias intro", NULL, 0, 0);
	
	mciSendString("open .\\sons\\musicavillalobos.mp3 type MPEGVideo alias menu", NULL, 0, 0); 
  
  	mciSendString("open .\\sons\\ambtcasa.mp3 type MPEGVideo alias casa", NULL, 0, 0);
  	
	mciSendString("open .\\sons\\ambtrodoviaria.mp3 type MPEGVideo alias rodoviaria", NULL, 0, 0);
	mciSendString("open .\\sons\\fxrodoviaria.mp3 type MPEGVideo alias audio", NULL, 0, 0); 
	  
	mciSendString("open .\\sons\\ambtbeco.mp3 type MPEGVideo alias beco", NULL, 0, 0);
	   
  	mciSendString("open .\\sons\\ambthospital.mp3 type MPEGVideo alias hospital", NULL, 0, 0);
	
  	mciSendString("open .\\sons\\ambtnecroterio.mp3 type MPEGVideo alias necro", NULL, 0, 0);
	
	mciSendString("open .\\sons\\ambtmercado.mp3 type MPEGVideo alias mercado", NULL, 0, 0);
	mciSendString("open .\\sons\\fxmercado.mp3 type MPEGVideo alias efeito", NULL, 0, 0); 
	
	mciSendString("open .\\sons\\ambtrua.mp3 type MPEGVideo alias rua", NULL, 0, 0);
	  
	mciSendString("open .\\sons\\ambtparque.mp3 type MPEGVideo alias parque", NULL, 0, 0);
	   
   } 
  
  initwindow(JLar, JAlt, "LADO R DO CRIME", 50, 10);
  cleardevice();  
  
  RES = imagesize(0, 0, CCLar-1, CCAlt-1);
  for (i = 0; i < 2; i++){
  chCLLT[i] = malloc(RES);
  }
  readimagefile(".\\bttn\\COLLECT.bmp", 0, 0, CCLar-1, CCAlt-1);
  for (i = 0; i < 2; i++){
  getimage(0, 95*i, CCLar-1, 94+95*i, chCLLT[i]);
  } 
  
  INIT();

  closegraph();
  return(0);
}


void INIT(){

	POINT P;
  	HWND WND;
	bool END = false;
	bool BTON1 = false;
	bool BTON2 = false;
	int pg = 1;
	char tecla;
	int RES;
	void *bkINIT, *btINIT0, *btINIT1, *btEND0, *btEND1;

  RES = imagesize(0, 0, RLar-1, RAlt-1);
  bkINIT = malloc(RES);
  readimagefile(".\\scene\\INITHUD.bmp", 0, 0, JLar-1, JAlt-1);
  getimage(0, 0, RLar-1, RAlt-1, bkINIT);
  	
  RES = imagesize(0, 0, BLar-1, BAlt-1);
  btINIT0 = malloc(RES);
  readimagefile(".\\bttn\\BTINIT0.bmp", 0, 0, BLar-1, BAlt-1);
  getimage(0, 0, BLar-1, BAlt-1, btINIT0);
  
  RES = imagesize(0, 0, BLar-1, BAlt-1);
  btINIT1 = malloc(RES);
  readimagefile(".\\bttn\\BTINIT1.bmp", 0, 0, BLar-1, BAlt-1);
  getimage(0, 0, BLar-1, BAlt-1, btINIT1);
  
  RES = imagesize(0, 0, BLar-1, BAlt-1);
  btEND0 = malloc(RES);
  readimagefile(".\\bttn\\BTEND0.bmp", 0, 0, BLar-1, BAlt-1);
  getimage(0, 0, BLar-1, BAlt-1, btEND0);
  RES = imagesize(0, 0, BLar-1, BAlt-1);
  btEND1 = malloc(RES);
  readimagefile(".\\bttn\\BTEND1.bmp", 0, 0, BLar-1, BAlt-1);
  getimage(0, 0, BLar-1, BAlt-1, btEND1);
  	  	
	  cleardevice();
	  
	WND = GetForegroundWindow();

 while(!END) {
    if (pg == 1) pg = 2; else pg = 1;
    	setactivepage(pg);
		putimage(0, 0, bkINIT, COPY_PUT);
		mciSendString("play intro repeat", NULL, 0, 0);
	
		if (BTON1)
			putimage(1080, 550, btINIT1, COPY_PUT);
		 else
			putimage(1080, 550, btINIT0, COPY_PUT);
		if (BTON2)
			putimage(1080, 620, btEND1, COPY_PUT);
		 else
			putimage(1080, 620, btEND0, COPY_PUT);
			
		if (GetCursorPos(&P))
		 if (ScreenToClient(WND, &P)) {
		 
		 	BTON1 = false;
		 	if (1080 <= P.x && P.x <= 1080+BLar-1 && 550 <= P.y && P.y <= 550+BAlt-1)
		 		BTON1 = true;
			
			BTON2 = false;
		 	if (1080 <= P.x && P.x <= 1080+BLar-1 && 620 <= P.y && P.y <= 620+BAlt-1)
		 		BTON2 = true;	 

			if(GetKeyState(VK_LBUTTON)&0x80) {

				if (1080 <= P.x && P.x <= 1080+BLar-1 && 550 <= P.y && P.y <= 550+BAlt-1){
				mciSendString("close intro", NULL, 0, 0);
				mciSendString("play menu repeat", NULL, 0, 0);
				MENU();
				END = true;
				}
				
				if (1080 <= P.x && P.x <= 1080+BLar-1 && 620 <= P.y && P.y <= 620+BAlt-1){
				END = true;
				}
			}
	 		 	
		 }
		
		setvisualpage(pg);
	
	if (GetKeyState(0x1B)&0x80){
		END = true;
		}
	}
}

void CREDT(){
  
  int pg = 2;
  int tam;
  bool END = false;
  bool CRDT = false;
  int i;
  void *R;

  tam = imagesize(0, 0, RLar-1, RAlt-1);
  R = malloc(tam);
  
  
  while(!END){
	if (pg == 1) pg = 2; else pg = 1;
    	setactivepage(pg);
	 
	  for(i = 1; i <= 8; i++) {
	  	if(i == 1){
	  		readimagefile(".\\credt\\creditos_01.bmp", 0, 0, JLar-1, JAlt-1);
	   		getimage(0, 0, JLar-1, JAlt-1, R);
	   		i=i+1;
	   		setvisualpage(pg);
		  }
		  
		  delay(1500);
		if(i == 2){
	  		readimagefile(".\\credt\\creditos_02.bmp", 0, 0, JLar-1, JAlt-1);
	   		getimage(0, 0, JLar-1, JAlt-1, R);
	   		i=i+1;
	   		setvisualpage(pg);
		  }
		  
		  delay(1500);
		if(i == 3){
	  		readimagefile(".\\credt\\creditos_03.bmp", 0, 0, JLar-1, JAlt-1);
	   		getimage(0, 0, JLar-1, JAlt-1, R);
	   		i=i+1;
	   		setvisualpage(pg);
		  }
		  
		  delay(1500);
		if(i == 4){
	  		readimagefile(".\\credt\\creditos_04.bmp", 0, 0, JLar-1, JAlt-1);
	   		getimage(0, 0, JLar-1, JAlt-1, R);
	   		i=i+1;
	   		setvisualpage(pg);
		  }
		  
		  delay(1500);
		if(i == 5){
	  		readimagefile(".\\credt\\creditos_05.bmp", 0, 0, JLar-1, JAlt-1);
	   		getimage(0, 0, JLar-1, JAlt-1, R);
	   		i=i+1;
	   		setvisualpage(pg);
		  }
		  
		  delay(1500);
		if(i == 6){
	  		readimagefile(".\\credt\\creditos_06.bmp",0, 0, JLar-1, JAlt-1);
	   		getimage(0, 0, JLar-1, JAlt-1, R);
	   		i=i+1;
	   		setvisualpage(pg);
		  }

		  delay(1500);
		if(i == 7){
	  		readimagefile(".\\credt\\creditos_07.bmp",0, 0, JLar-1, JAlt-1);
	   		getimage(0, 0, JLar-1, JAlt-1, R);
	   		setvisualpage(pg);
		  }
    	}	
	   		
	 	INIT();
		END = true;
    	
	if (GetKeyState(0x1B)&0x80){
	//
		}				  		  		  
    	
	}   
	
}



void MENU(){

	POINT P;
  	HWND WND;
  	bool PLRD1 = false;
  	bool PLRD2 = false;
  	bool PLRD3 = false;
  	bool PLRD4 = false;
	bool END = false;
	int pg = 1;
	char tecla;
	int RES;
	void *bkMENU, *ftPLRD1, *ftPLRD2, *ftPLRD3, *ftPLRD4, *ftPLRD5, *ftPLRD6, *ftPLRD7, *ftPLRD8;

  RES = imagesize(0, 0, RLar-1, RAlt-1);
  bkMENU = malloc(RES);
  readimagefile(".\\scene\\MENUHUD.bmp", 0, 0, JLar-1, JAlt-1);
  getimage(0, 0, RLar-1, RAlt-1, bkMENU);
  
  RES = imagesize(0, 0, FLar-1, FAlt-1);
  ftPLRD1 = malloc(RES);
  readimagefile(".\\bttn\\PLRD1.bmp", 0, 0, FLar-1, FAlt-1);
  getimage(0, 0, FLar-1, FAlt-1, ftPLRD1);
  
  RES = imagesize(0, 0, FLar-1, FAlt-1);
  ftPLRD2 = malloc(RES);
  readimagefile(".\\bttn\\PLRD2.bmp", 0, 0, FLar-1, FAlt-1);
  getimage(0, 0, FLar-1, FAlt-1, ftPLRD2);
    
  RES = imagesize(0, 0, FLar-1, FAlt-1);
  ftPLRD3 = malloc(RES);
  readimagefile(".\\bttn\\PLRD3.bmp", 0, 0, FLar-1, FAlt-1);
  getimage(0, 0, FLar-1, FAlt-1, ftPLRD3);

  RES = imagesize(0, 0, FLar-1, FAlt-1);
  ftPLRD4 = malloc(RES);
  readimagefile(".\\bttn\\PLRD4.bmp", 0, 0, FLar-1, FAlt-1);
  getimage(0, 0, FLar-1, FAlt-1, ftPLRD4);
  
  RES = imagesize(0, 0, FLar-1, FAlt-1);
  ftPLRD5 = malloc(RES);
  readimagefile(".\\bttn\\PLRD5.bmp", 0, 0, FLar-1, FAlt-1);
  getimage(0, 0, FLar-1, FAlt-1, ftPLRD5);
  
  RES = imagesize(0, 0, FLar-1, FAlt-1);
  ftPLRD6 = malloc(RES);
  readimagefile(".\\bttn\\PLRD6.bmp", 0, 0, FLar-1, FAlt-1);
  getimage(0, 0, FLar-1, FAlt-1, ftPLRD6);
    
  RES = imagesize(0, 0, FLar-1, FAlt-1);
  ftPLRD7 = malloc(RES);
  readimagefile(".\\bttn\\PLRD7.bmp", 0, 0, FLar-1, FAlt-1);
  getimage(0, 0, FLar-1, FAlt-1, ftPLRD7);

  RES = imagesize(0, 0, FLar-1, FAlt-1);
  ftPLRD8 = malloc(RES);
  readimagefile(".\\bttn\\PLRD8.bmp", 0, 0, FLar-1, FAlt-1);
  getimage(0, 0, FLar-1, FAlt-1, ftPLRD8);
  
	  cleardevice();

  WND = GetForegroundWindow();

 while(!END) {
    if (pg == 1) pg = 2; else pg = 1;
    	setactivepage(pg);
		putimage(0, 0, bkMENU, COPY_PUT);
		
		if (PLRD1)
			putimage(820, 135, ftPLRD5, COPY_PUT);
		else
			putimage(820, 135, ftPLRD1, COPY_PUT);
		if (PLRD2)
			putimage(970, 135, ftPLRD6, COPY_PUT);
		else
			putimage(970, 135, ftPLRD2, COPY_PUT);
		if (PLRD3)
			putimage(820, 355, ftPLRD7, COPY_PUT);
		else
			putimage(820, 355, ftPLRD3, COPY_PUT);
		if (PLRD4)
			putimage(970, 355, ftPLRD8, COPY_PUT);
		else
			putimage(970, 355, ftPLRD4, COPY_PUT);
						
		if (GetCursorPos(&P)){
		  if (ScreenToClient(WND, &P)){
		
		  		PLRD1 = false;
			if (820 <= P.x && P.x <= 820+FLar-1 && 135 <= P.y && P.y <= 135+FAlt-1)
				PLRD1 = true;
		
		  		PLRD2 = false;
			if (970 <= P.x && P.x <= 970+FLar-1 && 135 <= P.y && P.y <= 135+FAlt-1)
				PLRD2 = true;
		
				PLRD3 = false;
			if (820 <= P.x && P.x <= 820+FLar-1 && 355 <= P.y && P.y <= 355+FAlt-1)
				PLRD3 = true;
								
				PLRD4 = false;
			if (970 <= P.x && P.x <= 970+FLar-1 && 355 <= P.y && P.y <= 355+FAlt-1)
				PLRD4 = true;

			if(GetKeyState(VK_LBUTTON)&0x80) {
				
				PLRDH1 = false;				
				if (820 <= P.x && P.x <= 820+FLar-1 && 135 <= P.y && P.y <= 135+FAlt-1){
					PLRDH1 = true;
					PLRDH2 = false;
					PLRDH3 = false;
					PLRDH4 = false;
					END = true;
					CASE();
				
				}
				PLRDH2 = false;
				if (970 <= P.x && P.x <= 970+FLar-1 && 135 <= P.y && P.y <= 135+FAlt-1){
					PLRDH2 = true;
					PLRDH1 = false;
					PLRDH3 = false;
					PLRDH4 = false;
					END = true;
					CASE();
				
				}
				PLRDH3 = false;
				if (820 <= P.x && P.x <= 820+FLar-1 && 355 <= P.y && P.y <= 355+FAlt-1){
					PLRDH3 = true;
					PLRDH1 = false;
					PLRDH2 = false;
					PLRDH4 = false;
					END = true;
					CASE();									
			
				}
				PLRDH4 = false;
				if (970 <= P.x && P.x <= 970+FLar-1 && 355 <= P.y && P.y <= 355+FAlt-1){
					PLRDH4 = true;
					PLRDH1 = false;
					PLRDH2 = false;
					PLRDH3 = false;
					END = true;		
					CASE();									
			
				}
			}
		  }
		}
		
		
		setvisualpage(pg);
			
	if (GetKeyState(0x1B)&0x80){
		//
		}
	}
}

void CASE(){

	CHLar = 530;
	CHAlt = 375;

	POINT P;
  	HWND WND;

	bool CASE1 = false;
	bool CASE2 = false;
	bool CASE3 = false;
	bool END = false;
	int pg = 1;
	char tecla;
	int RES;
	void *bkCASE, *hPLRD0, *hPLRD1, *hPLRD2, *hPLRD3, *hPLRD4, *cdCARD0;
	void *cCARD1,  *cCARD2, *cCARD3, *cCARD1a, *cCARD2a, *cCARD3a, *cCARD0m;
	void *chCASE1;

  RES = imagesize(0, 0, RLar-1, RAlt-1);
  bkCASE = malloc(RES);
  readimagefile(".\\scene\\CASEHUD.bmp", 0, 0, JLar-1, JAlt-1);
  getimage(0, 0, RLar-1, RAlt-1, bkCASE);
  
  RES = imagesize(0, 0, H0Lar-1, H0Alt-1);
  hPLRD0 = malloc(RES);
  readimagefile(".\\bttn\\PLRD0.bmp", 0, 0, H0Lar-1, H0Alt-1);
  getimage(0, 0, H0Lar-1, H0Alt-1, hPLRD0);
	  RES = imagesize(0, 0, H0Lar-1, H0Alt-1);
	  hPLRD1 = malloc(RES);
	  readimagefile(".\\bttn\\PLRDH1.bmp", 0, 0, H0Lar-1, H0Alt-1);
	  getimage(0, 0, H0Lar-1, H0Alt-1, hPLRD1);
	  
	  RES = imagesize(0, 0, H0Lar-1, H0Alt-1);
	  hPLRD2 = malloc(RES);
	  readimagefile(".\\bttn\\PLRDH2.bmp", 0, 0, H0Lar-1, H0Alt-1);
	  getimage(0, 0, H0Lar-1, H0Alt-1, hPLRD2);
	  
	  RES = imagesize(0, 0, H0Lar-1, H0Alt-1);
	  hPLRD3 = malloc(RES);
	  readimagefile(".\\bttn\\PLRDH3.bmp", 0, 0, H0Lar-1, H0Alt-1);
	  getimage(0, 0, H0Lar-1, H0Alt-1, hPLRD3);
	  
	  RES = imagesize(0, 0, H0Lar-1, H0Alt-1);
	  hPLRD4 = malloc(RES);
	  readimagefile(".\\bttn\\PLRDH4.bmp", 0, 0, H0Lar-1, H0Alt-1);
	  getimage(0, 0, H0Lar-1, H0Alt-1, hPLRD4);
	  
  RES = imagesize(0, 0, CLar-1, CAlt-1);
  cCARD1 = malloc(RES);
  readimagefile(".\\card\\CARD1.bmp", 0, 0, CLar-1, CAlt-1);
  getimage(0, 0, CLar-1, CAlt-1, cCARD1);
  		RES = imagesize(0, 0, CLar-1, CAlt-1);
		cCARD1a = malloc(RES);
		readimagefile(".\\card\\CARD1a.bmp", 0, 0, CLar-1, CAlt-1);
		getimage(0, 0, CLar-1, CAlt-1, cCARD1a);
		  
  RES = imagesize(0, 0, CLar-1, CAlt-1);
  cCARD2 = malloc(RES);
  readimagefile(".\\card\\CARD2.bmp", 0, 0, CLar-1, CAlt-1);
  getimage(0, 0, CLar-1, CAlt-1, cCARD2);
  		RES = imagesize(0, 0, CLar-1, CAlt-1);
		cCARD2a = malloc(RES);
		readimagefile(".\\card\\CARD2a.bmp", 0, 0, CLar-1, CAlt-1);
		getimage(0, 0, CLar-1, CAlt-1, cCARD2a);
				  
  RES = imagesize(0, 0, CLar-1, CAlt-1);
  cCARD3 = malloc(RES);
  readimagefile(".\\card\\CARD3.bmp", 0, 0, CLar-1, CAlt-1);
  getimage(0, 0, CLar-1, CAlt-1, cCARD3);
  		RES = imagesize(0, 0, CLar-1, CAlt-1);
		cCARD3a = malloc(RES);
		readimagefile(".\\card\\CARD3a.bmp", 0, 0, CLar-1, CAlt-1);
		getimage(0, 0, CLar-1, CAlt-1, cCARD3a);
		  
		RES = imagesize(0, 0, CLar-1, CAlt-1);
  		cCARD0m = malloc(RES);
  		readimagefile(".\\card\\CARD0m.bmp", 0, 0, CLar-1, CAlt-1);
  		getimage(0, 0, CLar-1, CAlt-1, cCARD0m);
  		
  RES = imagesize(0, 0, CHLar-1, CHAlt-1);
  chCASE1 = malloc(RES);
  readimagefile(".\\bttn\\CHATCASE1.bmp", 0, 0, CHLar-1, CHAlt-1);
  getimage(0, 0, CHLar-1, CHAlt-1, chCASE1);
  
	  cleardevice();

  WND = GetForegroundWindow();

 while(!END) {
    if (pg == 1) pg = 2; else pg = 1;
    	setactivepage(pg);
		putimage(0, 0, bkCASE, COPY_PUT);
		
		if (PLRDH1)
			putimage(30, 30, hPLRD1, COPY_PUT);
		  	
		if (PLRDH2)
			putimage(30, 30, hPLRD2, COPY_PUT);

		if (PLRDH3)
			putimage(30, 30, hPLRD3, COPY_PUT);						

		if (PLRDH4)
			putimage(30, 30, hPLRD4, COPY_PUT);		
							
		else
			putimage(30, 30, hPLRD0, OR_PUT);
		
		if (CASE1){
			putimage(30, 170, cCARD0m, AND_PUT);
			putimage(30, 170, cCARD1a, OR_PUT);
			putimage(370, 120, chCASE1, OR_PUT);
		}
		else{
			putimage(30, 170, cCARD0m, AND_PUT);
			putimage(30, 170, cCARD1, OR_PUT);
		}
		
		if (CASE2){
			putimage(30, 310, cCARD0m, AND_PUT);
			putimage(30, 310, cCARD2a, OR_PUT);
		}
		else{
			putimage(30, 310, cCARD0m, AND_PUT);
			putimage(30, 310, cCARD2, OR_PUT);
		}	
		
		if (CASE3){
			putimage(30, 450, cCARD0m, AND_PUT);
			putimage(30, 450, cCARD3a, OR_PUT);
		}	
		else{
			putimage(30, 450, cCARD0m, AND_PUT);
			putimage(30, 450, cCARD3, OR_PUT);
		}	
						
		if (GetCursorPos(&P)){
		  if (ScreenToClient(WND, &P)){
				
				CASE1 = false;
			if (30 <= P.x && P.x <= 30+CLar-1 && 170 <= P.y && P.y <= 170+CAlt-1){
				CASE1 = true;
			}

				CASE2 = false;
			if (30 <= P.x && P.x <= 30+CLar-1 && 310 <= P.y && P.y <= 310+CAlt-1){
				CASE2 = true;
			}

				CASE3 = false;
			if (30 <= P.x && P.x <= 30+CLar-1 && 450 <= P.y && P.y <= 450+CAlt-1){
				CASE3 = true;
			}

			if(GetKeyState(VK_LBUTTON)&0x80) {
				
				if (30 <= P.x && P.x <= 30+CLar-1 && 170 <= P.y && P.y <= 170+CAlt-1){
					END = true;
					SCENE00();
				}
			}
		  }
		}
		
		
		setvisualpage(pg);
			
	if (GetKeyState(0x1B)&0x80){
		//
    	}
	}
}

void TAB(){
	
	#define CHATAB 5
		
	CTLar = 265;
	CTAlt = 475;

	POINT P;
  	HWND WND;

  	bool HNDsl = false;
  	bool LPAsl = false;
  	bool DCKsl = false;
  	bool TABs1 = false;
  	
	bool PNTs1 = false;
  	bool PNTs2 = false;
  	bool PNTs3 = false;
  	bool PNTs4 = false;
  	bool PNTs5 = false;
  	bool PNTs6 = false;
  	bool PNTs7 = false;
  	bool PNTs8 = false;
  	bool PNTs9 = false;
  	bool PNTs10 = false;
  	bool PNTs11 = false;
  	bool PNTs12 = false;
  		
	bool END = false;
	int pg = 1;
	char tecla;
	int RES, i;
	void *bkTAB, *hPLRD0, *hPLRD1, *hPLRD2, *hPLRD3, *hPLRD4, *cdCARD0;
	void *hHUD1, *hHUD2, *hHUD3, *hHUD4, *hHUD1m, *hHUD2m, *hHUD3m, *hHUD4m, *hHUD1a, *hHUD2a, *hHUD3a, *hHUD4a, *hHUD5, *hHUD5m, *hHUD5a;
	void *chTAB0[CHATAB], *chTAB1[CHATAB];
	
  RES = imagesize(0, 0, JLar-1, JAlt-1);
  bkTAB = malloc(RES);
  readimagefile(".\\scene\\TABHUD.bmp", 0, 0, JLar-1, JAlt-1);
  getimage(0, 0, JLar-1, JAlt-1, bkTAB);
  
  RES = imagesize(0, 0, H0Lar-1, H0Alt-1);
  hPLRD0 = malloc(RES);
  readimagefile(".\\bttn\\PLRD0.bmp", 0, 0, H0Lar-1, H0Alt-1);
  getimage(0, 0, H0Lar-1, H0Alt-1, hPLRD0);
	  RES = imagesize(0, 0, H0Lar-1, H0Alt-1);
	  hPLRD1 = malloc(RES);
	  readimagefile(".\\bttn\\PLRDH1.bmp", 0, 0, H0Lar-1, H0Alt-1);
	  getimage(0, 0, H0Lar-1, H0Alt-1, hPLRD1);
	  
	  RES = imagesize(0, 0, H0Lar-1, H0Alt-1);
	  hPLRD2 = malloc(RES);
	  readimagefile(".\\bttn\\PLRDH2.bmp", 0, 0, H0Lar-1, H0Alt-1);
	  getimage(0, 0, H0Lar-1, H0Alt-1, hPLRD2);
	  
	  RES = imagesize(0, 0, H0Lar-1, H0Alt-1);
	  hPLRD3 = malloc(RES);
	  readimagefile(".\\bttn\\PLRDH3.bmp", 0, 0, H0Lar-1, H0Alt-1);
	  getimage(0, 0, H0Lar-1, H0Alt-1, hPLRD3);
	  
	  RES = imagesize(0, 0, H0Lar-1, H0Alt-1);
	  hPLRD4 = malloc(RES);
	  readimagefile(".\\bttn\\PLRDH4.bmp", 0, 0, H0Lar-1, H0Alt-1);
	  getimage(0, 0, H0Lar-1, H0Alt-1, hPLRD4);
  
  
  RES = imagesize(0, 0, H1Lar-1, H1Alt-1);
  hHUD1 = malloc(RES);
  readimagefile(".\\bttn\\HUD1.bmp", 0, 0, H1Lar-1, H1Alt-1);
  getimage(0, 0, H1Lar-1, H1Alt-1, hHUD1);
		RES = imagesize(0, 0, H1Lar-1, H1Alt-1);
		hHUD1m = malloc(RES);
		readimagefile(".\\bttn\\HUD1m.bmp", 0, 0, H1Lar-1, H1Alt-1);
		getimage(0, 0, H1Lar-1, H1Alt-1, hHUD1m);
		RES = imagesize(0, 0, H1Lar-1, H1Alt-1);
		hHUD1a = malloc(RES);
		readimagefile(".\\bttn\\HUD1a.bmp", 0, 0, H1Lar-1, H1Alt-1);
		getimage(0, 0, H1Lar-1, H1Alt-1, hHUD1a);

  RES = imagesize(0, 0, H2Lar-1, H2Alt-1);
  hHUD2 = malloc(RES);
  readimagefile(".\\bttn\\HUD2.bmp", 0, 0, H2Lar-1, H2Alt-1);
  getimage(0, 0, H2Lar-1, H2Alt-1, hHUD2);
	  RES = imagesize(0, 0, H2Lar-1, H2Alt-1);
	  hHUD2m = malloc(RES);
	  readimagefile(".\\bttn\\HUD2m.bmp", 0, 0, H2Lar-1, H2Alt-1);
	  getimage(0, 0, H2Lar-1, H2Alt-1, hHUD2m);
	  RES = imagesize(0, 0, H2Lar-1, H2Alt-1);
	  hHUD2a = malloc(RES);
	  readimagefile(".\\bttn\\HUD2a.bmp", 0, 0, H2Lar-1, H2Alt-1);
	  getimage(0, 0, H2Lar-1, H2Alt-1, hHUD2a);
	
  RES = imagesize(0, 0, H3Lar-1, H3Alt-1);
  hHUD3 = malloc(RES);
  readimagefile(".\\bttn\\HUD3.bmp", 0, 0, H3Lar-1, H3Alt-1);
  getimage(0, 0, H3Lar-1, H3Alt-1, hHUD3);
	  RES = imagesize(0, 0, H3Lar-1, H3Alt-1);
	  hHUD3m = malloc(RES);
	  readimagefile(".\\bttn\\HUD3m.bmp", 0, 0, H3Lar-1, H3Alt-1);
	  getimage(0, 0, H3Lar-1, H3Alt-1, hHUD3m);
	  RES = imagesize(0, 0, H3Lar-1, H3Alt-1);
	  hHUD3a = malloc(RES);
	  readimagefile(".\\bttn\\HUD3a.bmp", 0, 0, H3Lar-1, H3Alt-1);
	  getimage(0, 0, H3Lar-1, H3Alt-1, hHUD3a);


  RES = imagesize(0, 0, H4Lar-1, H4Alt-1);
  hHUD4 = malloc(RES);
  readimagefile(".\\bttn\\HUD4.bmp", 0, 0, H4Lar-1, H4Alt-1);
  getimage(0, 0, H4Lar-1, H4Alt-1, hHUD4);
	  RES = imagesize(0, 0, H4Lar-1, H4Alt-1);
	  hHUD4m = malloc(RES);
	  readimagefile(".\\bttn\\HUD4m.bmp", 0, 0, H4Lar-1, H4Alt-1);
	  getimage(0, 0, H4Lar-1, H4Alt-1, hHUD4m);
	  RES = imagesize(0, 0, H4Lar-1, H4Alt-1);
	  hHUD4a = malloc(RES);
	  readimagefile(".\\bttn\\HUD4a.bmp", 0, 0, H4Lar-1, H4Alt-1);
	  getimage(0, 0, H4Lar-1, H4Alt-1, hHUD4a);

  RES = imagesize(0, 0, H5Lar-1, H5Alt-1);
  hHUD5 = malloc(RES);
  readimagefile(".\\bttn\\HUD5.bmp", 0, 0, H5Lar-1, H5Alt-1);
  getimage(0, 0, H5Lar-1, H5Alt-1, hHUD5);
	  RES = imagesize(0, 0, H5Lar-1, H5Alt-1);
	  hHUD5m = malloc(RES);
	  readimagefile(".\\bttn\\HUD5m.bmp", 0, 0, H5Lar-1, H5Alt-1);
	  getimage(0, 0, H5Lar-1, H5Alt-1, hHUD5m);
	  RES = imagesize(0, 0, H5Lar-1, H5Alt-1);
	  hHUD5a = malloc(RES);
	  readimagefile(".\\bttn\\HUD5a.bmp", 0, 0, H5Lar-1, H5Alt-1);
	  getimage(0, 0, H5Lar-1, H5Alt-1, hHUD5a);

  RES = imagesize(0, 0, CTLar-1, CTAlt-1);
  for (i = 0; i < CHATAB; i++){
  chTAB0[i] = malloc(RES);
  }
  readimagefile(".\\bttn\\CHATAB0.bmp", 0, 0, CTLar-1, CTAlt-1);
  for (i = 0; i < CHATAB; i++){
  getimage(0, 95*i, CTLar-1, 94+95*i, chTAB0[i]);
  }
  
  RES = imagesize(0, 0, CTLar-1, CTAlt-1);
  for (i = 0; i < CHATAB; i++){
  chTAB1[i] = malloc(RES);
  }
  readimagefile(".\\bttn\\CHATAB1.bmp", 0, 0, CTLar-1, CTAlt-1);
  for (i = 0; i < CHATAB; i++){
  getimage(0, 95*i, CTLar-1, 94+95*i, chTAB1[i]);
  }

	  cleardevice();

  WND = GetForegroundWindow();



 while(!END) {
    if (pg == 1) pg = 2; else pg = 1;
    	setactivepage(pg);
    	putimage(0, 0, bkTAB, COPY_PUT);

    	
		if (PLRDH1)
			putimage(30, 30, hPLRD1, COPY_PUT);
		  	
		if (PLRDH2)
			putimage(30, 30, hPLRD2, COPY_PUT);

		if (PLRDH3)
			putimage(30, 30, hPLRD3, COPY_PUT);						

		if (PLRDH4)
			putimage(30, 30, hPLRD4, COPY_PUT);		
							
		else
			putimage(30, 30, hPLRD0, OR_PUT);
		  	

		if (HNDsl){
			putimage(1200, 30, hHUD1m, AND_PUT);
			putimage(1200, 30, hHUD1a, OR_PUT);
		}
		else{
			putimage(1200, 30, hHUD1m, AND_PUT);
			putimage(1200, 30, hHUD1, OR_PUT);
		}
		
		if (LPAsl){
			putimage(1200, 110, hHUD2m, AND_PUT);
			putimage(1200, 110, hHUD2a, OR_PUT);
		}
		else{
			putimage(1200, 110, hHUD2m, AND_PUT);
    		putimage(1200, 110, hHUD2, OR_PUT);
		}
		
		if (DCKsl){
			putimage(1200, 180, hHUD3m, AND_PUT);
    		putimage(1200, 180, hHUD3a, OR_PUT);
		}
		else{
			putimage(1200, 180, hHUD3m, AND_PUT);
    		putimage(1200, 180, hHUD3, OR_PUT);
		}
		
		if (TABs1){
			putimage(615, 335, hHUD4m, AND_PUT);
			putimage(615, 335, hHUD4a, OR_PUT);
		}
		else{
			putimage(615, 335, hHUD4m, AND_PUT);
			putimage(615, 335, hHUD4, OR_PUT);
		}
		
		if (PNTs1){
			putimage(487, 159, hHUD5m, AND_PUT);
			putimage(487, 159, hHUD5, OR_PUT);
			putimage(120, 30, chTAB0[0], OR_PUT);
		}
		
		if (SCENE10S){
			PNTs1 = false;
			putimage(487, 159, hHUD5m, AND_PUT);
			putimage(487, 159, hHUD5a, OR_PUT);
		}
		
		if (PNTs2){
			putimage(729, 153, hHUD5m, AND_PUT);
			putimage(729, 153, hHUD5, OR_PUT);
			putimage(120, 30, chTAB0[1], OR_PUT);
		}
		
		if (SCENE20S){
			PNTs2 = false;
			putimage(729, 153, hHUD5m, AND_PUT);
			putimage(729, 153, hHUD5a, OR_PUT);
		}
		
		if (PNTs3){
			putimage(727, 408, hHUD5m, AND_PUT);
			putimage(727, 408, hHUD5, OR_PUT);
			putimage(120, 30, chTAB0[2], OR_PUT);
		}
		
		if (SCENE30S){
			PNTs3 = false;
			putimage(727, 408, hHUD5m, AND_PUT);
			putimage(727, 408, hHUD5a, OR_PUT);
		}
		
		if (PNTs4){
			putimage(486, 414, hHUD5m, AND_PUT);
			putimage(486, 414, hHUD5, OR_PUT);
			putimage(120, 30, chTAB0[3], OR_PUT);
		}
		
		if (SCENE40S){
			PNTs4 = false;
			putimage(486, 414, hHUD5m, AND_PUT);
			putimage(486, 414, hHUD5a, OR_PUT);
		}
		
		if (PNTs5){
			putimage(437, 285, hHUD5m, AND_PUT);
			putimage(437, 285, hHUD5, OR_PUT);
			putimage(120, 30, chTAB0[4], OR_PUT);
		}
		
		if (SCENE50S){
			PNTs5 = false;
			putimage(437, 285, hHUD5m, AND_PUT);
			putimage(437, 285, hHUD5a, OR_PUT);
		}
		
		if (PNTs6){
			putimage(780, 282, hHUD5m, AND_PUT);
			putimage(780, 282, hHUD5, OR_PUT);
			putimage(120, 30, chTAB1[0], OR_PUT);
		}
		
		if (SCENE60S){
			PNTs6 = false;
			putimage(780, 282, hHUD5m, AND_PUT);
			putimage(780, 282, hHUD5a, OR_PUT);
		}
		
		if (PNTs7){
			putimage(611, 106, hHUD5m, AND_PUT);
			putimage(611, 106, hHUD5, OR_PUT);
			putimage(120, 30, chTAB1[1], OR_PUT);
		}
		
		if (SCENE70S){
			PNTs7 = false;
			putimage(611, 106, hHUD5m, AND_PUT);
			putimage(611, 106, hHUD5a, OR_PUT);
		}
		
		if (PNTs8){
			putimage(608, 460, hHUD5m, AND_PUT);
			putimage(608, 460, hHUD5, OR_PUT);
			putimage(120, 30, chTAB1[2], OR_PUT);
		}
		
		if (SCENE80S){
			PNTs8 = false;
			putimage(608, 460, hHUD5m, AND_PUT);
			putimage(608, 460, hHUD5a, OR_PUT);
		}
		
		if (PNTs9){
			putimage(610, 180, hHUD5m, AND_PUT);
			putimage(610, 180, hHUD5, OR_PUT);
			putimage(120, 30, chTAB1[3], OR_PUT);
		}
		
		if (SCENE90S){
			PNTs9 = false;
			putimage(610, 180, hHUD5m, AND_PUT);
			putimage(610, 180, hHUD5a, OR_PUT);
		}
		
		if (PNTs10){
			putimage(609, 386, hHUD5m, AND_PUT);
			putimage(609, 386, hHUD5, OR_PUT);
			putimage(120, 30, chTAB1[3], OR_PUT);
		}
		
		if (SCENE100S){
			PNTs10 = false;
			putimage(609, 386, hHUD5m, AND_PUT);
			putimage(609, 386, hHUD5a, OR_PUT);
		}
		
		if (PNTs11){
			putimage(511, 282, hHUD5m, AND_PUT);
			putimage(511, 282, hHUD5, OR_PUT);
			putimage(120, 30, chTAB1[4], OR_PUT);
		}
		
		if (SCENE110S){
			PNTs11 = false;
			putimage(511, 282, hHUD5m, AND_PUT);
			putimage(511, 282, hHUD5a, OR_PUT);			
		}
		
		if (PNTs12){
			putimage(704, 280, hHUD5m, AND_PUT);
			putimage(704, 280, hHUD5, OR_PUT);
			putimage(120, 30, chTAB1[4], OR_PUT);
		}
		
		if (SCENE120S){
			PNTs12 = false;
			putimage(704, 280, hHUD5m, AND_PUT);
			putimage(704, 280, hHUD5a, OR_PUT);
		}
			
		if (GetCursorPos(&P)){
		  	if (ScreenToClient(WND, &P)){

				HNDsl = false;
			if (1200 <= P.x && P.x <= 1200+H1Lar-1 && 30 <= P.y && P.y <= 30+H1Alt-1)
				HNDsl = true;

				LPAsl = false;
			if (1200 <= P.x && P.x <= 1200+H2Lar-1 && 110 <= P.y && P.y <= 110+H2Alt-1)
				LPAsl = true;

				DCKsl = false;
			if (1200 <= P.x && P.x <= 1200+H3Lar-1 && 180 <= P.y && P.y <= 180+H3Alt-1)
				DCKsl = true;					
				
				TABs1 = false;
			if (615 <= P.x && P.x <= 615+H4Lar-1 && 335 <= P.y && P.y <= 335+H4Alt-1)
				TABs1 = true;
				
				PNTs1 = false;
			if (482 <= P.x && P.x <= 482+74 && 201 <= P.y && P.y <= 201+74)
				PNTs1 = true;
				
				PNTs2 = false;
			if (721 <= P.x && P.x <= 721+74 && 195 <= P.y && P.y <= 195+74)
				PNTs2 = true;
				
				PNTs3 = false;
			if (720 <= P.x && P.x <= 720+74 && 446 <= P.y && P.y <= 446+74)
				PNTs3 = true;
				
				PNTs4 = false;
			if (480 <= P.x && P.x <= 480+74 && 454 <= P.y && P.y <= 454+74)
				PNTs4 = true;
				
				PNTs5 = false;
			if (sqrt(pow(P.x - 468, 2) + pow(P.y - 362, 2)) <= 22)
				PNTs5 = true;
				
				PNTs6 = false;
			if (sqrt(pow(P.x - 810, 2) + pow(P.y - 359, 2)) <= 22)
				PNTs6 = true;
				
				PNTs7 = false;
			if (sqrt(pow(P.x - 641, 2) + pow(P.y - 183, 2)) <= 22)
				PNTs7 = true;
				
				PNTs8 = false;
			if (sqrt(pow(P.x - 638, 2) + pow(P.y - 537, 2)) <= 22)
				PNTs8 = true;
				
				PNTs9 = false;
			if (626 <= P.x && P.x <= 626+27 && 243 <= P.y && P.y <= 243+27)
				PNTs9 = true;
				
				PNTs10 = false;
			if (625 <= P.x && P.x <= 625+27 && 449 <= P.y && P.y <= 449+27)
				PNTs10 = true;	
				
				PNTs11 = false;
			if (527 <= P.x && P.x <= 527+27 && 349 <= P.y && P.y <= 349+27)
				PNTs11 = true;							
				
				PNTs12 = false;
			if (720 <= P.x && P.x <= 720+27 && 343 <= P.y && P.y <= 343+27)
				PNTs12 = true;					
				
			if(GetKeyState(VK_LBUTTON)&0x80) {
					
					TABs1 = false;				
				if (615 <= P.x && P.x <= 615+H4Lar-1 && 335 <= P.y && P.y <= 335+H4Alt-1){
					TABs1 = true;
					SCENE00();
					END = true;
				}
				
					PNTs1 = false;
				if (!SCENE10S && 482 <= P.x && P.x <= 482+74 && 201 <= P.y && P.y <= 201+74){
					PNTs1 = true;
					SCENE10S = true;
					mciSendString("close menu", NULL, 0, 0);
					SCENE10();
					END = true;
				}
				
					PNTs2 = false;
				if (!SCENE20S && 721 <= P.x && P.x <= 721+74 && 195 <= P.y && P.y <= 195+74){
					PNTs2 = true;
					SCENE20S = true;
					mciSendString("close menu", NULL, 0, 0);
					mciSendString("play casa repeat", NULL, 0, 0);
					SCENE20();
					END = true;
				}
				
					PNTs3 = false;
				if (!SCENE30S && 720 <= P.x && P.x <= 720+74 && 446 <= P.y && P.y <= 446+74){
					PNTs3 = true;
					SCENE30S = true;
					mciSendString("close menu", NULL, 0, 0);
					mciSendString("play audio", NULL, 0, 0);
					mciSendString("play rodoviaria repeat", NULL, 0, 0);
					SCENE30();
					END = true;
				}
				
					PNTs4 = false;
				if (!SCENE40S && 480 <= P.x && P.x <= 480+74 && 454 <= P.y && P.y <= 454+74){
					PNTs4 = true;
					SCENE40S = true;
					mciSendString("close menu", NULL, 0, 0);
					mciSendString("play beco repeat", NULL, 0, 0);
					SCENE40();
					END = true;
				}
				
					PNTs5 = false;
				if (!SCENE50S && sqrt(pow(P.x - 468, 2) + pow(P.y - 362, 2)) <= 22){
					PNTs5 = true;
					SCENE50S = true;
					mciSendString("close menu", NULL, 0, 0);
					mciSendString("play hospital repeat", NULL, 0, 0);
					SCENE50();
					END = true;
				}
				
					PNTs6 = false;
				if (!SCENE60S && sqrt(pow(P.x - 810, 2) + pow(P.y - 359, 2)) <= 22){
					PNTs6 = true;
					SCENE60S = true;
					mciSendString("close menu", NULL, 0, 0);
					mciSendString("play necro repeat", NULL, 0, 0);
					SCENE60();
					END = true;
				}
				
					PNTs7 = false;
				if (!SCENE70S && sqrt(pow(P.x - 641, 2) + pow(P.y - 183, 2)) <= 22){
					PNTs7 = true;
					SCENE70S = true;
					mciSendString("close menu", NULL, 0, 0);
					mciSendString("play mercado repeat", NULL, 0, 0);
					SCENE70();
					END = true;
				}
				
					PNTs8 = false;
				if (!SCENE80S && sqrt(pow(P.x - 638, 2) + pow(P.y - 537, 2)) <= 22){
					PNTs8 = true;
					SCENE80S = true;
					mciSendString("close menu", NULL, 0, 0);
					SCENE80();
					END = true;
				}
				
					PNTs9 = false;
				if (!SCENE90S && 626 <= P.x && P.x <= 626+27 && 243 <= P.y && P.y <= 243+27){
					PNTs9 = true;
					SCENE90S = true;
					mciSendString("close menu", NULL, 0, 0);
					mciSendString("play rua repeat", NULL, 0, 0);
					SCENE90();
					END = true;
				}
				
					PNTs10 = false;
				if (!SCENE100S && 625 <= P.x && P.x <= 625+27 && 449 <= P.y && P.y <= 449+27){
					PNTs10 = true;
					SCENE100S = true;
					mciSendString("close menu", NULL, 0, 0);
					mciSendString("play rua repeat", NULL, 0, 0);
					SCENE91();
					END = true;
				}
				
					PNTs11 = false;
				if (!SCENE110S && 527 <= P.x && P.x <= 527+27 && 349 <= P.y && P.y <= 349+27){
					PNTs11 = true;
					SCENE110S = true;
					mciSendString("close menu", NULL, 0, 0);
					mciSendString("play parque repeat", NULL, 0, 0);
					SCENE100();
					END = true;
				}
				
					PNTs12 = false;
				if (!SCENE120S && 720 <= P.x && P.x <= 720+27 && 343 <= P.y && P.y <= 343+27){
					PNTs12 = true;
					SCENE120S = true;
					mciSendString("close menu", NULL, 0, 0);
					mciSendString("play parque repeat", NULL, 0, 0);
					SCENE101();
					END = true;
				}
				
				}
			}
		}
		
			
    	
    	setvisualpage(pg);
    	
    	if (GetKeyState(0x1B)&0x80){

    	}
	}
}

void CASER01(){

	CHLar = 530;
	CHAlt = 370;

	POINT P;
  	HWND WND;

	bool END = false;
	int pg = 1;
	char tecla;
	int RES;
	void *bkCASER, *hPLRD0, *hPLRD1, *hPLRD2, *hPLRD3, *hPLRD4, *cdCARD0;
	void *cCARD1,  *cCARD2, *cCARD3, *cCARD1a, *cCARD2a, *cCARD3a, *cCARD0m;
	void *chCASER;

  RES = imagesize(0, 0, RLar-1, RAlt-1);
  bkCASER = malloc(RES);
  readimagefile(".\\scene\\CASEHUD.bmp", 0, 0, JLar-1, JAlt-1);
  getimage(0, 0, RLar-1, RAlt-1, bkCASER);
  	  
  RES = imagesize(0, 0, CHLar-1, CHAlt-1);
  chCASER = malloc(RES);
  readimagefile(".\\bttn\\CHATCASER.bmp", 0, 0, CHLar-1, CHAlt-1);
  getimage(0, 0, CHLar-1, CHAlt-1, chCASER);
  
	  cleardevice();

  WND = GetForegroundWindow();

 while(!END) {
    if (pg == 1) pg = 2; else pg = 1;
    	setactivepage(pg);
		putimage(0, 0, bkCASER, COPY_PUT);
				
		putimage(370, 120, chCASER, OR_PUT);
						
		if (GetCursorPos(&P)){
		  if (ScreenToClient(WND, &P)){
				

			if(GetKeyState(VK_LBUTTON)&0x80) {
				CREDT();
				END = true;
			}
		  }
		}
		
		
		setvisualpage(pg);
			
	if (GetKeyState(0x1B)&0x80){
    	}
	}
}

void SCENE00(){
	
	#define CHAT	5
	
	CHLar = 265;
	CHAlt = 95*CHAT;

	POINT P;
  	HWND WND;
  	bool HNDsl = false;
  	bool HND = false;
  	bool LPAsl = false;
  	bool DCKsl = false;
  	bool TABsl = false;
	bool CHT0 = false;
	bool END = false;
	
	int pg = 1;
	char tecla;
	int RES, i;
	void *bkSCENE00, *hPLRD0, *hPLRD1, *hPLRD2, *hPLRD3, *hPLRD4, *cdCARD0;
	void *hHUD1, *hHUD2, *hHUD3, *hHUD4, *hHUD1m, *hHUD2m, *hHUD3m, *hHUD4m, *hHUD1a, *hHUD2a, *hHUD3a, *hHUD4a;
	void *chCHAT0[CHAT];
	
  RES = imagesize(0, 0, RLar-1, RAlt-1);
  bkSCENE00 = malloc(RES);
  readimagefile(".\\scene\\SCENE0-0.bmp", 0, 0, JLar-1, JAlt-1);
  getimage(0, 0, JLar-1, JAlt-1, bkSCENE00);
  
  RES = imagesize(0, 0, H0Lar-1, H0Alt-1);
  hPLRD0 = malloc(RES);
  readimagefile(".\\bttn\\PLRD0.bmp", 0, 0, H0Lar-1, H0Alt-1);
  getimage(0, 0, H0Lar-1, H0Alt-1, hPLRD0);
	  RES = imagesize(0, 0, H0Lar-1, H0Alt-1);
	  hPLRD1 = malloc(RES);
	  readimagefile(".\\bttn\\PLRDH1.bmp", 0, 0, H0Lar-1, H0Alt-1);
	  getimage(0, 0, H0Lar-1, H0Alt-1, hPLRD1);
	  
	  RES = imagesize(0, 0, H0Lar-1, H0Alt-1);
	  hPLRD2 = malloc(RES);
	  readimagefile(".\\bttn\\PLRDH2.bmp", 0, 0, H0Lar-1, H0Alt-1);
	  getimage(0, 0, H0Lar-1, H0Alt-1, hPLRD2);
	  
	  RES = imagesize(0, 0, H0Lar-1, H0Alt-1);
	  hPLRD3 = malloc(RES);
	  readimagefile(".\\bttn\\PLRDH3.bmp", 0, 0, H0Lar-1, H0Alt-1);
	  getimage(0, 0, H0Lar-1, H0Alt-1, hPLRD3);
	  
	  RES = imagesize(0, 0, H0Lar-1, H0Alt-1);
	  hPLRD4 = malloc(RES);
	  readimagefile(".\\bttn\\PLRDH4.bmp", 0, 0, H0Lar-1, H0Alt-1);
	  getimage(0, 0, H0Lar-1, H0Alt-1, hPLRD4);
  
  
  RES = imagesize(0, 0, H1Lar-1, H1Alt-1);
  hHUD1 = malloc(RES);
  readimagefile(".\\bttn\\HUD1.bmp", 0, 0, H1Lar-1, H1Alt-1);
  getimage(0, 0, H1Lar-1, H1Alt-1, hHUD1);
		RES = imagesize(0, 0, H1Lar-1, H1Alt-1);
		hHUD1m = malloc(RES);
		readimagefile(".\\bttn\\HUD1m.bmp", 0, 0, H1Lar-1, H1Alt-1);
		getimage(0, 0, H1Lar-1, H1Alt-1, hHUD1m);
		RES = imagesize(0, 0, H1Lar-1, H1Alt-1);
		hHUD1a = malloc(RES);
		readimagefile(".\\bttn\\HUD1a.bmp", 0, 0, H1Lar-1, H1Alt-1);
		getimage(0, 0, H1Lar-1, H1Alt-1, hHUD1a);

  RES = imagesize(0, 0, H2Lar-1, H2Alt-1);
  hHUD2 = malloc(RES);
  readimagefile(".\\bttn\\HUD2.bmp", 0, 0, H2Lar-1, H2Alt-1);
  getimage(0, 0, H2Lar-1, H2Alt-1, hHUD2);
	  RES = imagesize(0, 0, H2Lar-1, H2Alt-1);
	  hHUD2m = malloc(RES);
	  readimagefile(".\\bttn\\HUD2m.bmp", 0, 0, H2Lar-1, H2Alt-1);
	  getimage(0, 0, H2Lar-1, H2Alt-1, hHUD2m);
	  RES = imagesize(0, 0, H2Lar-1, H2Alt-1);
	  hHUD2a = malloc(RES);
	  readimagefile(".\\bttn\\HUD2a.bmp", 0, 0, H2Lar-1, H2Alt-1);
	  getimage(0, 0, H2Lar-1, H2Alt-1, hHUD2a);
	
  RES = imagesize(0, 0, H3Lar-1, H3Alt-1);
  hHUD3 = malloc(RES);
  readimagefile(".\\bttn\\HUD3.bmp", 0, 0, H3Lar-1, H3Alt-1);
  getimage(0, 0, H3Lar-1, H3Alt-1, hHUD3);
	  RES = imagesize(0, 0, H3Lar-1, H3Alt-1);
	  hHUD3m = malloc(RES);
	  readimagefile(".\\bttn\\HUD3m.bmp", 0, 0, H3Lar-1, H3Alt-1);
	  getimage(0, 0, H3Lar-1, H3Alt-1, hHUD3m);
	  RES = imagesize(0, 0, H3Lar-1, H3Alt-1);
	  hHUD3a = malloc(RES);
	  readimagefile(".\\bttn\\HUD3a.bmp", 0, 0, H3Lar-1, H3Alt-1);
	  getimage(0, 0, H3Lar-1, H3Alt-1, hHUD3a);


  RES = imagesize(0, 0, H4Lar-1, H4Alt-1);
  hHUD4 = malloc(RES);
  readimagefile(".\\bttn\\HUD4.bmp", 0, 0, H4Lar-1, H4Alt-1);
  getimage(0, 0, H4Lar-1, H4Alt-1, hHUD4);
	  RES = imagesize(0, 0, H4Lar-1, H4Alt-1);
	  hHUD4m = malloc(RES);
	  readimagefile(".\\bttn\\HUD4m.bmp", 0, 0, H4Lar-1, H4Alt-1);
	  getimage(0, 0, H4Lar-1, H4Alt-1, hHUD4m);
	  RES = imagesize(0, 0, H4Lar-1, H4Alt-1);
	  hHUD4a = malloc(RES);
	  readimagefile(".\\bttn\\HUD4a.bmp", 0, 0, H4Lar-1, H4Alt-1);
	  getimage(0, 0, H4Lar-1, H4Alt-1, hHUD4a);
	  
  RES = imagesize(0, 0, CHLar-1, CHAlt-1);
  for (i = 0; i < CHAT; i++){
  chCHAT0[i] = malloc(RES);
  }
  readimagefile(".\\bttn\\CHAT0.bmp", 0, 0, CHLar-1, CHAlt-1);
  for (i = 0; i < CHAT; i++){
  getimage(0, 95*i, CHLar-1, 94+95*i, chCHAT0[i]);
  }
	  

	  cleardevice();

  WND = GetForegroundWindow();


 while(!END) {
    if (pg == 1) pg = 2; else pg = 1;
    	setactivepage(pg);
    	putimage(0, 0, bkSCENE00, COPY_PUT);  
    
		if (PLRDH1)
			putimage(30, 30, hPLRD1, COPY_PUT);
		  	
		if (PLRDH2)
			putimage(30, 30, hPLRD2, COPY_PUT);

		if (PLRDH3)
			putimage(30, 30, hPLRD3, COPY_PUT);						

		if (PLRDH4)
			putimage(30, 30, hPLRD4, COPY_PUT);		
							
		else
			putimage(30, 30, hPLRD0, OR_PUT);
																	
		
		if (HNDsl){
			putimage(1200, 30, hHUD1m, AND_PUT);
			putimage(1200, 30, hHUD1a, OR_PUT);
			putimage(120, 30, chCHAT0[1], OR_PUT);
		}
		else{
			putimage(1200, 30, hHUD1m, AND_PUT);
			putimage(1200, 30, hHUD1, OR_PUT);			
		}
		
		if (HND){
			putimage(P.x-25, P.y-31, hHUD1m, AND_PUT);
			putimage(P.x-25, P.y-31, hHUD1, OR_PUT);			
		}
		
		if (LPAsl){
			putimage(1200, 110, hHUD2m, AND_PUT);
			putimage(1200, 110, hHUD2a, OR_PUT);
			putimage(120, 30, chCHAT0[2], OR_PUT);
		}
		else{
			putimage(1200, 110, hHUD2m, AND_PUT);
    		putimage(1200, 110, hHUD2, OR_PUT);
		}
		
		if (DCKsl){
			putimage(1200, 180, hHUD3m, AND_PUT);
    		putimage(1200, 180, hHUD3a, OR_PUT);
    		putimage(120, 30, chCHAT0[3], OR_PUT);
		}
		else{
			putimage(1200, 180, hHUD3m, AND_PUT);
    		putimage(1200, 180, hHUD3, OR_PUT);
		}
		
		
		if (TABsl){
			putimage(1200, 650, hHUD4m, AND_PUT);
			putimage(1200, 650, hHUD4a, OR_PUT);			
			putimage(120, 30, chCHAT0[4], OR_PUT);
		}
		else{
			putimage(1200, 650, hHUD4m, AND_PUT);
			putimage(1200, 650, hHUD4, OR_PUT);
		}
					
		if (!CHT0){
			putimage(120, 30, chCHAT0[0], OR_PUT);
		}	
			
		if (GetCursorPos(&P)){
		  	if (ScreenToClient(WND, &P)){

				HNDsl = false;
			if (1200 <= P.x && P.x <= 1200+H1Lar-1 && 30 <= P.y && P.y <= 30+H1Alt-1){
				CHT0 = true;
				HNDsl = true;
			}

				LPAsl = false;
			if (1200 <= P.x && P.x <= 1200+H2Lar-1 && 110 <= P.y && P.y <= 110+H2Alt-1){
				CHT0 = true;
				LPAsl = true;
			}

				DCKsl = false;
			if (1200 <= P.x && P.x <= 1200+H3Lar-1 && 180 <= P.y && P.y <= 180+H3Alt-1){
				CHT0 = true;
				DCKsl = true;
			}

				TABsl = false;
			if (1200 <= P.x && P.x <= 1200+H4Lar-1 && 650 <= P.y && P.y <= 650+H4Alt-1){
				CHT0 = true;
				TABsl = true;
			}

			if (GetKeyState(VK_LBUTTON)&0x80) {
				
				if (HND && 432 <= P.x && P.x <= 432+244 && 202 <= P.y && P.y <= 202+175){
					SCENE01();
					END = true;
				}
				
					HND = false;
				if (1200 <= P.x && P.x <= 1200+H1Lar-1 && 30 <= P.y && P.y <= 30+H1Alt-1){
					HND = true;
				}
				
				if (1200 <= P.x && P.x <= 1200+H4Lar-1 && 650 <= P.y && P.y <= 650+H4Alt-1){
					TAB();
					END = true;
				}
			}
			}
		}


    	
    	
    	setvisualpage(pg);
    	

    	
    	if (GetKeyState(0x1B)&0x80){

    	}	
	}
}

void SCENE01(){
	
	CHLar = 265;
	CHAlt = 95;
	
	POINT P;
  	HWND WND;
  	bool HNDsl = false;
  	bool LPAsl = false;
  	bool DCKsl = false;
  	bool TABsl = false;
  	bool CASE1 = false;
  	bool CASER = false;
  	bool RESP = false;
	bool END = false;
	
	int pg = 1;
	char tecla;
	int RES, i;
	void *bkSCENE01, *hPLRD0, *hPLRD1, *hPLRD2, *hPLRD3, *hPLRD4, *cdCARD0;
	void *hHUD1, *hHUD2, *hHUD3, *hHUD4, *hHUD1m, *hHUD2m, *hHUD3m, *hHUD4m, *hHUD1a, *hHUD2a, *hHUD3a, *hHUD4a;
	void *cCARD0, *cCARD0m, *cCARD1, *cCARD1a, *cCARD5, *cCARD7, *cCARD8, *cCARD10, *cCARD12, *cCARD14, *cCARD15, *cCARD16, *cCARD18, *cCARD19, *cCARD20;
	void *chCASE;
	
  RES = imagesize(0, 0, RLar-1, RAlt-1);
  bkSCENE01 = malloc(RES);
  readimagefile(".\\scene\\SCENE0-1.bmp", 0, 0, JLar-1, JAlt-1);
  getimage(0, 0, JLar-1, JAlt-1, bkSCENE01);
  
  RES = imagesize(0, 0, H0Lar-1, H0Alt-1);
  hPLRD0 = malloc(RES);
  readimagefile(".\\bttn\\PLRD0.bmp", 0, 0, H0Lar-1, H0Alt-1);
  getimage(0, 0, H0Lar-1, H0Alt-1, hPLRD0);
	  RES = imagesize(0, 0, H0Lar-1, H0Alt-1);
	  hPLRD1 = malloc(RES);
	  readimagefile(".\\bttn\\PLRDH1.bmp", 0, 0, H0Lar-1, H0Alt-1);
	  getimage(0, 0, H0Lar-1, H0Alt-1, hPLRD1);
	  
	  RES = imagesize(0, 0, H0Lar-1, H0Alt-1);
	  hPLRD2 = malloc(RES);
	  readimagefile(".\\bttn\\PLRDH2.bmp", 0, 0, H0Lar-1, H0Alt-1);
	  getimage(0, 0, H0Lar-1, H0Alt-1, hPLRD2);
	  
	  RES = imagesize(0, 0, H0Lar-1, H0Alt-1);
	  hPLRD3 = malloc(RES);
	  readimagefile(".\\bttn\\PLRDH3.bmp", 0, 0, H0Lar-1, H0Alt-1);
	  getimage(0, 0, H0Lar-1, H0Alt-1, hPLRD3);
	  
	  RES = imagesize(0, 0, H0Lar-1, H0Alt-1);
	  hPLRD4 = malloc(RES);
	  readimagefile(".\\bttn\\PLRDH4.bmp", 0, 0, H0Lar-1, H0Alt-1);
	  getimage(0, 0, H0Lar-1, H0Alt-1, hPLRD4);
  
  
  RES = imagesize(0, 0, H1Lar-1, H1Alt-1);
  hHUD1 = malloc(RES);
  readimagefile(".\\bttn\\HUD1.bmp", 0, 0, H1Lar-1, H1Alt-1);
  getimage(0, 0, H1Lar-1, H1Alt-1, hHUD1);
		RES = imagesize(0, 0, H1Lar-1, H1Alt-1);
		hHUD1m = malloc(RES);
		readimagefile(".\\bttn\\HUD1m.bmp", 0, 0, H1Lar-1, H1Alt-1);
		getimage(0, 0, H1Lar-1, H1Alt-1, hHUD1m);
		RES = imagesize(0, 0, H1Lar-1, H1Alt-1);
		hHUD1a = malloc(RES);
		readimagefile(".\\bttn\\HUD1a.bmp", 0, 0, H1Lar-1, H1Alt-1);
		getimage(0, 0, H1Lar-1, H1Alt-1, hHUD1a);

  RES = imagesize(0, 0, H2Lar-1, H2Alt-1);
  hHUD2 = malloc(RES);
  readimagefile(".\\bttn\\HUD2.bmp", 0, 0, H2Lar-1, H2Alt-1);
  getimage(0, 0, H2Lar-1, H2Alt-1, hHUD2);
	  RES = imagesize(0, 0, H2Lar-1, H2Alt-1);
	  hHUD2m = malloc(RES);
	  readimagefile(".\\bttn\\HUD2m.bmp", 0, 0, H2Lar-1, H2Alt-1);
	  getimage(0, 0, H2Lar-1, H2Alt-1, hHUD2m);
	  RES = imagesize(0, 0, H2Lar-1, H2Alt-1);
	  hHUD2a = malloc(RES);
	  readimagefile(".\\bttn\\HUD2a.bmp", 0, 0, H2Lar-1, H2Alt-1);
	  getimage(0, 0, H2Lar-1, H2Alt-1, hHUD2a);
	
  RES = imagesize(0, 0, H3Lar-1, H3Alt-1);
  hHUD3 = malloc(RES);
  readimagefile(".\\bttn\\HUD3.bmp", 0, 0, H3Lar-1, H3Alt-1);
  getimage(0, 0, H3Lar-1, H3Alt-1, hHUD3);
	  RES = imagesize(0, 0, H3Lar-1, H3Alt-1);
	  hHUD3m = malloc(RES);
	  readimagefile(".\\bttn\\HUD3m.bmp", 0, 0, H3Lar-1, H3Alt-1);
	  getimage(0, 0, H3Lar-1, H3Alt-1, hHUD3m);
	  RES = imagesize(0, 0, H3Lar-1, H3Alt-1);
	  hHUD3a = malloc(RES);
	  readimagefile(".\\bttn\\HUD3a.bmp", 0, 0, H3Lar-1, H3Alt-1);
	  getimage(0, 0, H3Lar-1, H3Alt-1, hHUD3a);


  RES = imagesize(0, 0, H4Lar-1, H4Alt-1);
  hHUD4 = malloc(RES);
  readimagefile(".\\bttn\\HUD4.bmp", 0, 0, H4Lar-1, H4Alt-1);
  getimage(0, 0, H4Lar-1, H4Alt-1, hHUD4);
	  RES = imagesize(0, 0, H4Lar-1, H4Alt-1);
	  hHUD4m = malloc(RES);
	  readimagefile(".\\bttn\\HUD4m.bmp", 0, 0, H4Lar-1, H4Alt-1);
	  getimage(0, 0, H4Lar-1, H4Alt-1, hHUD4m);
	  RES = imagesize(0, 0, H4Lar-1, H4Alt-1);
	  hHUD4a = malloc(RES);
	  readimagefile(".\\bttn\\HUD4a.bmp", 0, 0, H4Lar-1, H4Alt-1);
	  getimage(0, 0, H4Lar-1, H4Alt-1, hHUD4a);
	  
  RES = imagesize(0, 0, CHLar-1, CHAlt-1);
  chCASE = malloc(RES);
  readimagefile(".\\bttn\\CHATCASE0.bmp", 0, 0, CHLar-1, CHAlt-1);
  getimage(0, 0, CHLar-1, CHAlt-1, chCASE);	  
	  
  RES = imagesize(0, 0, CLar-1, CAlt-1);
  cCARD0 = malloc(RES);
  readimagefile(".\\card\\CARD0.bmp", 0, 0, CLar-1, CAlt-1);
  getimage(0, 0, CLar-1, CAlt-1, cCARD0);
		RES = imagesize(0, 0, CLar-1, CAlt-1);
  		cCARD0m = malloc(RES);
  		readimagefile(".\\card\\CARD0m.bmp", 0, 0, CLar-1, CAlt-1);
  		getimage(0, 0, CLar-1, CAlt-1, cCARD0m);
		  
  RES = imagesize(0, 0, CLar-1, CAlt-1);
  cCARD1 = malloc(RES);
  readimagefile(".\\card\\CARD1.bmp", 0, 0, CLar-1, CAlt-1);
  getimage(0, 0, CLar-1, CAlt-1, cCARD1);
		  RES = imagesize(0, 0, CLar-1, CAlt-1);
		  cCARD1a = malloc(RES);
		  readimagefile(".\\card\\CARD1a.bmp", 0, 0, CLar-1, CAlt-1);
		  getimage(0, 0, CLar-1, CAlt-1, cCARD1a);
 
  RES = imagesize(0, 0, CLar-1, CAlt-1);
  cCARD5 = malloc(RES);
  readimagefile(".\\card\\CARD5.bmp", 0, 0, CLar-1, CAlt-1);
  getimage(0, 0, CLar-1, CAlt-1, cCARD5);
  
  RES = imagesize(0, 0, CLar-1, CAlt-1);
  cCARD7 = malloc(RES);
  readimagefile(".\\card\\CARD7.bmp", 0, 0, CLar-1, CAlt-1);
  getimage(0, 0, CLar-1, CAlt-1, cCARD7);
  
  RES = imagesize(0, 0, CLar-1, CAlt-1);
  cCARD8 = malloc(RES);
  readimagefile(".\\card\\CARD8.bmp", 0, 0, CLar-1, CAlt-1);
  getimage(0, 0, CLar-1, CAlt-1, cCARD8);
  
  RES = imagesize(0, 0, CLar-1, CAlt-1);
  cCARD10 = malloc(RES);
  readimagefile(".\\card\\CARD10.bmp", 0, 0, CLar-1, CAlt-1);
  getimage(0, 0, CLar-1, CAlt-1, cCARD10);
  
  RES = imagesize(0, 0, CLar-1, CAlt-1);
  cCARD12 = malloc(RES);
  readimagefile(".\\card\\CARD12.bmp", 0, 0, CLar-1, CAlt-1);
  getimage(0, 0, CLar-1, CAlt-1, cCARD12);
  
  RES = imagesize(0, 0, CLar-1, CAlt-1);
  cCARD14 = malloc(RES);
  readimagefile(".\\card\\CARD14.bmp", 0, 0, CLar-1, CAlt-1);
  getimage(0, 0, CLar-1, CAlt-1, cCARD14);             
  
  RES = imagesize(0, 0, CLar-1, CAlt-1);
  cCARD15 = malloc(RES);
  readimagefile(".\\card\\CARD15.bmp", 0, 0, CLar-1, CAlt-1);
  getimage(0, 0, CLar-1, CAlt-1, cCARD15);
  
  RES = imagesize(0, 0, CLar-1, CAlt-1);
  cCARD16 = malloc(RES);
  readimagefile(".\\card\\CARD16.bmp", 0, 0, CLar-1, CAlt-1);
  getimage(0, 0, CLar-1, CAlt-1, cCARD16);  
  
  RES = imagesize(0, 0, CLar-1, CAlt-1);
  cCARD18 = malloc(RES);
  readimagefile(".\\card\\CARD18.bmp", 0, 0, CLar-1, CAlt-1);
  getimage(0, 0, CLar-1, CAlt-1, cCARD18);
  
  RES = imagesize(0, 0, CLar-1, CAlt-1);
  cCARD19 = malloc(RES);
  readimagefile(".\\card\\CARD19.bmp", 0, 0, CLar-1, CAlt-1);
  getimage(0, 0, CLar-1, CAlt-1, cCARD19);
  
  RES = imagesize(0, 0, CLar-1, CAlt-1);
  cCARD20 = malloc(RES);
  readimagefile(".\\card\\CARD20.bmp", 0, 0, CLar-1, CAlt-1);
  getimage(0, 0, CLar-1, CAlt-1, cCARD20);     	  	  

	  cleardevice();

  WND = GetForegroundWindow();


 while(!END) {
    if (pg == 1) pg = 2; else pg = 1;
    	setactivepage(pg);
    	putimage(0, 0, bkSCENE01, COPY_PUT);  
    
		if (PLRDH1)
			putimage(30, 30, hPLRD1, COPY_PUT);
		  	
		if (PLRDH2)
			putimage(30, 30, hPLRD2, COPY_PUT);

		if (PLRDH3)
			putimage(30, 30, hPLRD3, COPY_PUT);						

		if (PLRDH4)
			putimage(30, 30, hPLRD4, COPY_PUT);		
							
		else
			putimage(30, 30, hPLRD0, OR_PUT);
		
						
		if (TABsl){
			putimage(1200, 650, hHUD4m, AND_PUT);
			putimage(1200, 650, hHUD4a, OR_PUT);			
		}
		else{
			putimage(1200, 650, hHUD4m, AND_PUT);
			putimage(1200, 650, hHUD4, OR_PUT);
		}

		if (CASE1){
			putimage(600, 150, cCARD0m, AND_PUT);															
			putimage(600, 150, cCARD1a, OR_PUT);
			putimage(120, 30, chCASE, OR_PUT);
		}
		else{
			putimage(600, 150, cCARD0m, AND_PUT);															
			putimage(600, 150, cCARD1, OR_PUT);
		}
		

		if (CARD15S){
			putimage(490, 300, cCARD0m, AND_PUT);															
			putimage(490, 300, cCARD15, OR_PUT);
		}
		else{
			putimage(490, 300, cCARD0m, AND_PUT);															
			putimage(490, 300, cCARD0, OR_PUT);
		}
		if (CARD18S){
			putimage(600, 300, cCARD0m, AND_PUT);															
			putimage(600, 300, cCARD18, OR_PUT);
		}
		else{
			putimage(600, 300, cCARD0m, AND_PUT);															
			putimage(600, 300, cCARD0, OR_PUT);
		}	
		if (CARD19S){
			putimage(710, 300, cCARD0m, AND_PUT);															
			putimage(710, 300, cCARD19, OR_PUT);
			CASER = true;
		}	
		else{			
			putimage(710, 300, cCARD0m, AND_PUT);															
			putimage(710, 300, cCARD0, OR_PUT);
		}
	
	
		if (GetCursorPos(&P)){
		  	if (ScreenToClient(WND, &P)){

				TABsl = false;
			if (1200 <= P.x && P.x <= 1200+H4Lar-1 && 650 <= P.y && P.y <= 650+H4Alt-1){
				TABsl = true;
			}

				CASE1 = false;
			if (600 <= P.x && P.x <= 600+CLar-1 && 150 <= P.y && P.y <= 150+CAlt-1){
				CASE1 = true;
			}

			if (GetKeyState(VK_LBUTTON)&0x80) {
			
				if (CASER && 600 <= P.x && P.x <= 600+CLar-1 && 150 <= P.y && P.y <= 150+CAlt-1){
					CASER01();
					END = true;
				}

				if (!CASER && 600 <= P.x && P.x <= 600+CLar-1 && 150 <= P.y && P.y <= 150+CAlt-1){
					CREDT();
					END = true;
				}
			
				
				if (1200 <= P.x && P.x <= 1200+H4Lar-1 && 650 <= P.y && P.y <= 650+H4Alt-1){
					SCENE00();
					END = true;
				}
			
			}
			}
		}


    	
    	
    	setvisualpage(pg);
    	

    	
    	if (GetKeyState(0x1B)&0x80){

    	}	
	}
}

void SCENE10(){
	
	CHLar = 265;
	CHAlt = 95;

	POINT P;
  	HWND WND;
  	bool HNDsl = false;
  	bool HND = false;
  	bool LPAsl = false;
  	bool LPA = false;
  	bool DCKsl = false;
  	bool TABsl = false;
	bool CHT0 = false;
	bool END = false;
	
	int pg = 1;
	char tecla;
	int RES, i;
	void *bkSCENE10, *hPLRD0, *hPLRD1, *hPLRD2, *hPLRD3, *hPLRD4, *cdCARD0;
	void *hHUD1, *hHUD2, *hHUD3, *hHUD4, *hHUD1m, *hHUD2m, *hHUD3m, *hHUD4m, *hHUD1a, *hHUD2a, *hHUD3a, *hHUD4a;
	void *chCHAT1;
	
  RES = imagesize(0, 0, RLar-1, RAlt-1);
  bkSCENE10 = malloc(RES);
  readimagefile(".\\scene\\SCENE1-0.bmp", 0, 0, JLar-1, JAlt-1);
  getimage(0, 0, JLar-1, JAlt-1, bkSCENE10);
  
  RES = imagesize(0, 0, H0Lar-1, H0Alt-1);
  hPLRD0 = malloc(RES);
  readimagefile(".\\bttn\\PLRD0.bmp", 0, 0, H0Lar-1, H0Alt-1);
  getimage(0, 0, H0Lar-1, H0Alt-1, hPLRD0);
	  RES = imagesize(0, 0, H0Lar-1, H0Alt-1);
	  hPLRD1 = malloc(RES);
	  readimagefile(".\\bttn\\PLRDH1.bmp", 0, 0, H0Lar-1, H0Alt-1);
	  getimage(0, 0, H0Lar-1, H0Alt-1, hPLRD1);
	  
	  RES = imagesize(0, 0, H0Lar-1, H0Alt-1);
	  hPLRD2 = malloc(RES);
	  readimagefile(".\\bttn\\PLRDH2.bmp", 0, 0, H0Lar-1, H0Alt-1);
	  getimage(0, 0, H0Lar-1, H0Alt-1, hPLRD2);
	  
	  RES = imagesize(0, 0, H0Lar-1, H0Alt-1);
	  hPLRD3 = malloc(RES);
	  readimagefile(".\\bttn\\PLRDH3.bmp", 0, 0, H0Lar-1, H0Alt-1);
	  getimage(0, 0, H0Lar-1, H0Alt-1, hPLRD3);
	  
	  RES = imagesize(0, 0, H0Lar-1, H0Alt-1);
	  hPLRD4 = malloc(RES);
	  readimagefile(".\\bttn\\PLRDH4.bmp", 0, 0, H0Lar-1, H0Alt-1);
	  getimage(0, 0, H0Lar-1, H0Alt-1, hPLRD4);
  
  
  RES = imagesize(0, 0, H1Lar-1, H1Alt-1);
  hHUD1 = malloc(RES);
  readimagefile(".\\bttn\\HUD1.bmp", 0, 0, H1Lar-1, H1Alt-1);
  getimage(0, 0, H1Lar-1, H1Alt-1, hHUD1);
		RES = imagesize(0, 0, H1Lar-1, H1Alt-1);
		hHUD1m = malloc(RES);
		readimagefile(".\\bttn\\HUD1m.bmp", 0, 0, H1Lar-1, H1Alt-1);
		getimage(0, 0, H1Lar-1, H1Alt-1, hHUD1m);
		RES = imagesize(0, 0, H1Lar-1, H1Alt-1);
		hHUD1a = malloc(RES);
		readimagefile(".\\bttn\\HUD1a.bmp", 0, 0, H1Lar-1, H1Alt-1);
		getimage(0, 0, H1Lar-1, H1Alt-1, hHUD1a);

  RES = imagesize(0, 0, H2Lar-1, H2Alt-1);
  hHUD2 = malloc(RES);
  readimagefile(".\\bttn\\HUD2.bmp", 0, 0, H2Lar-1, H2Alt-1);
  getimage(0, 0, H2Lar-1, H2Alt-1, hHUD2);
	  RES = imagesize(0, 0, H2Lar-1, H2Alt-1);
	  hHUD2m = malloc(RES);
	  readimagefile(".\\bttn\\HUD2m.bmp", 0, 0, H2Lar-1, H2Alt-1);
	  getimage(0, 0, H2Lar-1, H2Alt-1, hHUD2m);
	  RES = imagesize(0, 0, H2Lar-1, H2Alt-1);
	  hHUD2a = malloc(RES);
	  readimagefile(".\\bttn\\HUD2a.bmp", 0, 0, H2Lar-1, H2Alt-1);
	  getimage(0, 0, H2Lar-1, H2Alt-1, hHUD2a);
	
  RES = imagesize(0, 0, H3Lar-1, H3Alt-1);
  hHUD3 = malloc(RES);
  readimagefile(".\\bttn\\HUD3.bmp", 0, 0, H3Lar-1, H3Alt-1);
  getimage(0, 0, H3Lar-1, H3Alt-1, hHUD3);
	  RES = imagesize(0, 0, H3Lar-1, H3Alt-1);
	  hHUD3m = malloc(RES);
	  readimagefile(".\\bttn\\HUD3m.bmp", 0, 0, H3Lar-1, H3Alt-1);
	  getimage(0, 0, H3Lar-1, H3Alt-1, hHUD3m);
	  RES = imagesize(0, 0, H3Lar-1, H3Alt-1);
	  hHUD3a = malloc(RES);
	  readimagefile(".\\bttn\\HUD3a.bmp", 0, 0, H3Lar-1, H3Alt-1);
	  getimage(0, 0, H3Lar-1, H3Alt-1, hHUD3a);

  RES = imagesize(0, 0, H4Lar-1, H4Alt-1);
  hHUD4 = malloc(RES);
  readimagefile(".\\bttn\\HUD4.bmp", 0, 0, H4Lar-1, H4Alt-1);
  getimage(0, 0, H4Lar-1, H4Alt-1, hHUD4);
	  RES = imagesize(0, 0, H4Lar-1, H4Alt-1);
	  hHUD4m = malloc(RES);
	  readimagefile(".\\bttn\\HUD4m.bmp", 0, 0, H4Lar-1, H4Alt-1);
	  getimage(0, 0, H4Lar-1, H4Alt-1, hHUD4m);
	  RES = imagesize(0, 0, H4Lar-1, H4Alt-1);
	  hHUD4a = malloc(RES);
	  readimagefile(".\\bttn\\HUD4a.bmp", 0, 0, H4Lar-1, H4Alt-1);
	  getimage(0, 0, H4Lar-1, H4Alt-1, hHUD4a);
	  
  RES = imagesize(0, 0, CHLar-1, CHAlt-1);
  chCHAT1 = malloc(RES);
  readimagefile(".\\bttn\\CHAT1.bmp", 0, 0, CHLar-1, CHAlt-1);
  getimage(0, 0, CHLar-1, CHAlt-1, chCHAT1);
	  

	  cleardevice();

  WND = GetForegroundWindow();


 while(!END) {
    if (pg == 1) pg = 2; else pg = 1;
    	setactivepage(pg);
    	putimage(0, 0, bkSCENE10, COPY_PUT);  
    
		if (PLRDH1)
			putimage(30, 30, hPLRD1, COPY_PUT);
		  	
		if (PLRDH2)
			putimage(30, 30, hPLRD2, COPY_PUT);

		if (PLRDH3)
			putimage(30, 30, hPLRD3, COPY_PUT);						

		if (PLRDH4)
			putimage(30, 30, hPLRD4, COPY_PUT);		
							
		else
			putimage(30, 30, hPLRD0, OR_PUT);
																	
		
		if (HNDsl){
			putimage(1200, 30, hHUD1m, AND_PUT);
			putimage(1200, 30, hHUD1a, OR_PUT);
		}
		else{
			putimage(1200, 30, hHUD1m, AND_PUT);
			putimage(1200, 30, hHUD1, OR_PUT);			
		}
		
		if (HND){
			putimage(P.x-25, P.y-31, hHUD1m, AND_PUT);
			putimage(P.x-25, P.y-31, hHUD1, OR_PUT);			
		}
		
		if (LPAsl){
			putimage(1200, 110, hHUD2m, AND_PUT);
			putimage(1200, 110, hHUD2a, OR_PUT);
		}
		else{
			putimage(1200, 110, hHUD2m, AND_PUT);
    		putimage(1200, 110, hHUD2, OR_PUT);
		}
		
		if (LPA){
			putimage(P.x-25, P.y-25, hHUD2m, AND_PUT);
			putimage(P.x-25, P.y-25, hHUD2, OR_PUT);
		}
		
		if (DCKsl){
			putimage(1200, 180, hHUD3m, AND_PUT);
    		putimage(1200, 180, hHUD3a, OR_PUT);
		}
		else{
			putimage(1200, 180, hHUD3m, AND_PUT);
    		putimage(1200, 180, hHUD3, OR_PUT);
		}
		
		
		if (TABsl){
			putimage(1200, 650, hHUD4m, AND_PUT);
			putimage(1200, 650, hHUD4a, OR_PUT);
		}
		else{
			putimage(1200, 650, hHUD4m, AND_PUT);
			putimage(1200, 650, hHUD4, OR_PUT);
		}
		
		if (CHT0){
			putimage(120, 30, chCHAT1, OR_PUT);
		}	
			
		if (GetCursorPos(&P)){
		  	if (ScreenToClient(WND, &P)){

				HNDsl = false;
			if (1200 <= P.x && P.x <= 1200+H1Lar-1 && 30 <= P.y && P.y <= 30+H1Alt-1)
				HNDsl = true;

				LPAsl = false;
			if (1200 <= P.x && P.x <= 1200+H2Lar-1 && 110 <= P.y && P.y <= 110+H2Alt-1)
				LPAsl = true;

				DCKsl = false;
			if (1200 <= P.x && P.x <= 1200+H3Lar-1 && 180 <= P.y && P.y <= 180+H3Alt-1)
				DCKsl = true;

				TABsl = false;
			if (1200 <= P.x && P.x <= 1200+H4Lar-1 && 650 <= P.y && P.y <= 650+H4Alt-1)
				TABsl = true;

			if (GetKeyState(VK_LBUTTON)&0x80) {
				
				if (HND && 417 <= P.x && P.x <= 417+88 && 184 <= P.y && P.y <= 184+42){
					CHT0 = true;
				}
				
				if (HND && 674 <= P.x && P.x <= 674+77 && 443 <= P.y && P.y <= 443+16){
					CHT0 = true;
				}
				
				if (HND && 841 <= P.x && P.x <= 841+78 && 521 <= P.y && P.y <= 521+23){
					CHT0 = true;
				}
				
				if (HND && 666 <= P.x && P.x <= 666+63 && 172 <= P.y && P.y <= 172+55){
					SCENE11();
					END = true;
				}
					HND = false;
				if (1200 <= P.x && P.x <= 1200+H1Lar-1 && 30 <= P.y && P.y <= 30+H1Alt-1){
					HND = true;
					CHT0 = false;
				}
					
					LPA = false;
				if (1200 <= P.x && P.x <= 1200+H2Lar-1 && 110 <= P.y && P.y <= 110+H2Alt-1){
					LPA = true;
					CHT0 = false;
				}
				
				if (1200 <= P.x && P.x <= 1200+H4Lar-1 && 650 <= P.y && P.y <= 650+H4Alt-1){
					TAB();
					END = true;
				}
				
			}			
			}
		}
   	
    	
    	setvisualpage(pg);
        	
    	if (GetKeyState(0x1B)&0x80){
		//
    	}	
	}
}

void SCENE11(){

	CHLar = 265;
	CHAlt = 95;

	POINT P;
  	HWND WND;
  	bool HNDsl = false;
  	bool HND = false;
  	bool LPAsl = false;
  	bool LPA = false;
  	bool DCKsl = false;
  	bool TABsl = false;
  	bool CARD15 = false;
	bool END = false;
	
	int pg = 1;
	char tecla;
	int RES, i;
	void *bkSCENE11, *hPLRD0, *hPLRD1, *hPLRD2, *hPLRD3, *hPLRD4, *cdCARD0;
	void *hHUD1, *hHUD2, *hHUD3, *hHUD4, *hHUD1m, *hHUD2m, *hHUD3m, *hHUD4m, *hHUD1a, *hHUD2a, *hHUD3a, *hHUD4a;
	void *cCARD15, *cCARD0m, *chPST1;
	
  RES = imagesize(0, 0, RLar-1, RAlt-1);
  bkSCENE11 = malloc(RES);
  readimagefile(".\\scene\\SCENE1-1.bmp", 0, 0, JLar-1, JAlt-1);
  getimage(0, 0, JLar-1, JAlt-1, bkSCENE11);
  
  RES = imagesize(0, 0, H0Lar-1, H0Alt-1);
  hPLRD0 = malloc(RES);
  readimagefile(".\\bttn\\PLRD0.bmp", 0, 0, H0Lar-1, H0Alt-1);
  getimage(0, 0, H0Lar-1, H0Alt-1, hPLRD0);
	  RES = imagesize(0, 0, H0Lar-1, H0Alt-1);
	  hPLRD1 = malloc(RES);
	  readimagefile(".\\bttn\\PLRDH1.bmp", 0, 0, H0Lar-1, H0Alt-1);
	  getimage(0, 0, H0Lar-1, H0Alt-1, hPLRD1);
	  
	  RES = imagesize(0, 0, H0Lar-1, H0Alt-1);
	  hPLRD2 = malloc(RES);
	  readimagefile(".\\bttn\\PLRDH2.bmp", 0, 0, H0Lar-1, H0Alt-1);
	  getimage(0, 0, H0Lar-1, H0Alt-1, hPLRD2);
	  
	  RES = imagesize(0, 0, H0Lar-1, H0Alt-1);
	  hPLRD3 = malloc(RES);
	  readimagefile(".\\bttn\\PLRDH3.bmp", 0, 0, H0Lar-1, H0Alt-1);
	  getimage(0, 0, H0Lar-1, H0Alt-1, hPLRD3);
	  
	  RES = imagesize(0, 0, H0Lar-1, H0Alt-1);
	  hPLRD4 = malloc(RES);
	  readimagefile(".\\bttn\\PLRDH4.bmp", 0, 0, H0Lar-1, H0Alt-1);
	  getimage(0, 0, H0Lar-1, H0Alt-1, hPLRD4);
  
  
  RES = imagesize(0, 0, H1Lar-1, H1Alt-1);
  hHUD1 = malloc(RES);
  readimagefile(".\\bttn\\HUD1.bmp", 0, 0, H1Lar-1, H1Alt-1);
  getimage(0, 0, H1Lar-1, H1Alt-1, hHUD1);
		RES = imagesize(0, 0, H1Lar-1, H1Alt-1);
		hHUD1m = malloc(RES);
		readimagefile(".\\bttn\\HUD1m.bmp", 0, 0, H1Lar-1, H1Alt-1);
		getimage(0, 0, H1Lar-1, H1Alt-1, hHUD1m);
		RES = imagesize(0, 0, H1Lar-1, H1Alt-1);
		hHUD1a = malloc(RES);
		readimagefile(".\\bttn\\HUD1a.bmp", 0, 0, H1Lar-1, H1Alt-1);
		getimage(0, 0, H1Lar-1, H1Alt-1, hHUD1a);

  RES = imagesize(0, 0, H2Lar-1, H2Alt-1);
  hHUD2 = malloc(RES);
  readimagefile(".\\bttn\\HUD2.bmp", 0, 0, H2Lar-1, H2Alt-1);
  getimage(0, 0, H2Lar-1, H2Alt-1, hHUD2);
	  RES = imagesize(0, 0, H2Lar-1, H2Alt-1);
	  hHUD2m = malloc(RES);
	  readimagefile(".\\bttn\\HUD2m.bmp", 0, 0, H2Lar-1, H2Alt-1);
	  getimage(0, 0, H2Lar-1, H2Alt-1, hHUD2m);
	  RES = imagesize(0, 0, H2Lar-1, H2Alt-1);
	  hHUD2a = malloc(RES);
	  readimagefile(".\\bttn\\HUD2a.bmp", 0, 0, H2Lar-1, H2Alt-1);
	  getimage(0, 0, H2Lar-1, H2Alt-1, hHUD2a);
	
  RES = imagesize(0, 0, H3Lar-1, H3Alt-1);
  hHUD3 = malloc(RES);
  readimagefile(".\\bttn\\HUD3.bmp", 0, 0, H3Lar-1, H3Alt-1);
  getimage(0, 0, H3Lar-1, H3Alt-1, hHUD3);
	  RES = imagesize(0, 0, H3Lar-1, H3Alt-1);
	  hHUD3m = malloc(RES);
	  readimagefile(".\\bttn\\HUD3m.bmp", 0, 0, H3Lar-1, H3Alt-1);
	  getimage(0, 0, H3Lar-1, H3Alt-1, hHUD3m);
	  RES = imagesize(0, 0, H3Lar-1, H3Alt-1);
	  hHUD3a = malloc(RES);
	  readimagefile(".\\bttn\\HUD3a.bmp", 0, 0, H3Lar-1, H3Alt-1);
	  getimage(0, 0, H3Lar-1, H3Alt-1, hHUD3a);

  RES = imagesize(0, 0, H4Lar-1, H4Alt-1);
  hHUD4 = malloc(RES);
  readimagefile(".\\bttn\\HUD4.bmp", 0, 0, H4Lar-1, H4Alt-1);
  getimage(0, 0, H4Lar-1, H4Alt-1, hHUD4);
	  RES = imagesize(0, 0, H4Lar-1, H4Alt-1);
	  hHUD4m = malloc(RES);
	  readimagefile(".\\bttn\\HUD4m.bmp", 0, 0, H4Lar-1, H4Alt-1);
	  getimage(0, 0, H4Lar-1, H4Alt-1, hHUD4m);
	  RES = imagesize(0, 0, H4Lar-1, H4Alt-1);
	  hHUD4a = malloc(RES);
	  readimagefile(".\\bttn\\HUD4a.bmp", 0, 0, H4Lar-1, H4Alt-1);
	  getimage(0, 0, H4Lar-1, H4Alt-1, hHUD4a);
	  
  RES = imagesize(0, 0, CLar-1, CAlt-1);
  cCARD15 = malloc(RES);
  readimagefile(".\\card\\CARD15.bmp", 0, 0, CLar-1, CAlt-1);
  getimage(0, 0, CLar-1, CAlt-1, cCARD15);
  		RES = imagesize(0, 0, CLar-1, CAlt-1);
  		cCARD0m = malloc(RES);
  		readimagefile(".\\card\\CARD0m.bmp", 0, 0, CLar-1, CAlt-1);
  		getimage(0, 0, CLar-1, CAlt-1, cCARD0m);
  		 	
  RES = imagesize(0, 0, PTLar-1, PTAlt-1);
  chPST1 = malloc(RES);
  readimagefile(".\\bttn\\PST1.bmp", 0, 0, PTLar-1, PTAlt-1);
  getimage(0, 0, PTLar-1, PTAlt-1, chPST1);
	  
	  cleardevice();

  WND = GetForegroundWindow();


 while(!END) {
    if (pg == 1) pg = 2; else pg = 1;
    	setactivepage(pg);
    	putimage(0, 0, bkSCENE11, COPY_PUT);  
    
		if (PLRDH1)
			putimage(30, 30, hPLRD1, COPY_PUT);
		  	
		if (PLRDH2)
			putimage(30, 30, hPLRD2, COPY_PUT);

		if (PLRDH3)
			putimage(30, 30, hPLRD3, COPY_PUT);						

		if (PLRDH4)
			putimage(30, 30, hPLRD4, COPY_PUT);		
							
		else
			putimage(30, 30, hPLRD0, OR_PUT);
																	
		
		if (HNDsl){
			putimage(1200, 30, hHUD1m, AND_PUT);
			putimage(1200, 30, hHUD1a, OR_PUT);
		}
		else{
			putimage(1200, 30, hHUD1m, AND_PUT);
			putimage(1200, 30, hHUD1, OR_PUT);			
		}
		
		if (HND){
			putimage(P.x-25, P.y-31, hHUD1m, AND_PUT);
			putimage(P.x-25, P.y-31, hHUD1, OR_PUT);			
		}
		
		if (LPAsl){
			putimage(1200, 110, hHUD2m, AND_PUT);
			putimage(1200, 110, hHUD2a, OR_PUT);
		}
		else{
			putimage(1200, 110, hHUD2m, AND_PUT);
    		putimage(1200, 110, hHUD2, OR_PUT);
		}
		
		if (LPA){
			putimage(P.x-25, P.y-25, hHUD2m, AND_PUT);
			putimage(P.x-25, P.y-25, hHUD2, OR_PUT);
		}
		
		if (DCKsl){
			putimage(1200, 180, hHUD3m, AND_PUT);
    		putimage(1200, 180, hHUD3a, OR_PUT);
		}
		else{
			putimage(1200, 180, hHUD3m, AND_PUT);
    		putimage(1200, 180, hHUD3, OR_PUT);
		}
		
		
		if (TABsl){
			putimage(1200, 650, hHUD4m, AND_PUT);
			putimage(1200, 650, hHUD4a, OR_PUT);
		}
		else{
			putimage(1200, 650, hHUD4m, AND_PUT);
			putimage(1200, 650, hHUD4, OR_PUT);
		}
			
		if (CARD15){
			putimage(30, 170, cCARD0m, AND_PUT);
			putimage(30, 170, cCARD15, OR_PUT);
			putimage(120, 30, chPST1, OR_PUT);
		}
		
		if (CARD15S){
			putimage(120, 30, chCLLT[0], OR_PUT);
			CARD15 = false;
		}
			
		if (GetCursorPos(&P)){
		  	if (ScreenToClient(WND, &P)){

				HNDsl = false;
			if (1200 <= P.x && P.x <= 1200+H1Lar-1 && 30 <= P.y && P.y <= 30+H1Alt-1)
				HNDsl = true;

				LPAsl = false;
			if (1200 <= P.x && P.x <= 1200+H2Lar-1 && 110 <= P.y && P.y <= 110+H2Alt-1)
				LPAsl = true;

				DCKsl = false;
			if (1200 <= P.x && P.x <= 1200+H3Lar-1 && 180 <= P.y && P.y <= 180+H3Alt-1)
				DCKsl = true;

				TABsl = false;
			if (1200 <= P.x && P.x <= 1200+H4Lar-1 && 650 <= P.y && P.y <= 650+H4Alt-1)
				TABsl = true;

			if (GetKeyState(VK_LBUTTON)&0x80) {
				
					DCKsl = false;
				if (CARD15 && 1200 <= P.x && P.x <= 1200+H3Lar-1 && 180 <= P.y && P.y <= 180+H3Alt-1){
					DCKsl = true;	
					CARD15S = true;
				}
				
				if (LPA && 670 <= P.x && P.x <= 670+97 && 562 <= P.y && P.y <= 562+79){
					CARD15 = true;
					LPA = false;
				}
					HND = false;
				if (1200 <= P.x && P.x <= 1200+H1Lar-1 && 30 <= P.y && P.y <= 30+H1Alt-1){
					HND = true;
				}
					
					LPA = false;
				if (1200 <= P.x && P.x <= 1200+H2Lar-1 && 110 <= P.y && P.y <= 110+H2Alt-1){
					LPA = true;
				}
				
				if (1200 <= P.x && P.x <= 1200+H4Lar-1 && 650 <= P.y && P.y <= 650+H4Alt-1){
					TAB();
					END = true;
				}
				
			}			
			}
		}
   	
    	
    	setvisualpage(pg);
        	
    	if (GetKeyState(0x1B)&0x80){
		//
    	}	
	}
}

void SCENE20(){
	
	#define CHAT2 	3
	
	CHLar = 265;
	CHAlt = 95*CHAT2;

	POINT P;
  	HWND WND;
  	bool HNDsl = false;
  	bool HND = false;
  	bool LPAsl = false;
  	bool LPA = false;
  	bool DCKsl = false;
  	bool TABsl = false;
  	bool CHT0 = false;
	bool CHT1 = false;
	bool CHT2 = false;
	bool KEYs = false;
	bool KEYa = false;
  	bool KEY = false;
	bool END = false;
	
	int pg = 1;
	char tecla;
	int RES, i;
	void *bkSCENE20, *hPLRD0, *hPLRD1, *hPLRD2, *hPLRD3, *hPLRD4, *cdCARD0;
	void *hHUD1, *hHUD2, *hHUD3, *hHUD4, *hHUD1m, *hHUD2m, *hHUD3m, *hHUD4m, *hHUD1a, *hHUD2a, *hHUD3a, *hHUD4a;
	void *kKEY, *kKEYa, *kKEYm;
	void *chCHAT2[CHAT2];
	
  RES = imagesize(0, 0, RLar-1, RAlt-1);
  bkSCENE20 = malloc(RES);
  readimagefile(".\\scene\\SCENE2-0.bmp", 0, 0, JLar-1, JAlt-1);
  getimage(0, 0, JLar-1, JAlt-1, bkSCENE20);
  
  RES = imagesize(0, 0, H0Lar-1, H0Alt-1);
  hPLRD0 = malloc(RES);
  readimagefile(".\\bttn\\PLRD0.bmp", 0, 0, H0Lar-1, H0Alt-1);
  getimage(0, 0, H0Lar-1, H0Alt-1, hPLRD0);
	  RES = imagesize(0, 0, H0Lar-1, H0Alt-1);
	  hPLRD1 = malloc(RES);
	  readimagefile(".\\bttn\\PLRDH1.bmp", 0, 0, H0Lar-1, H0Alt-1);
	  getimage(0, 0, H0Lar-1, H0Alt-1, hPLRD1);
	  
	  RES = imagesize(0, 0, H0Lar-1, H0Alt-1);
	  hPLRD2 = malloc(RES);
	  readimagefile(".\\bttn\\PLRDH2.bmp", 0, 0, H0Lar-1, H0Alt-1);
	  getimage(0, 0, H0Lar-1, H0Alt-1, hPLRD2);
	  
	  RES = imagesize(0, 0, H0Lar-1, H0Alt-1);
	  hPLRD3 = malloc(RES);
	  readimagefile(".\\bttn\\PLRDH3.bmp", 0, 0, H0Lar-1, H0Alt-1);
	  getimage(0, 0, H0Lar-1, H0Alt-1, hPLRD3);
	  
	  RES = imagesize(0, 0, H0Lar-1, H0Alt-1);
	  hPLRD4 = malloc(RES);
	  readimagefile(".\\bttn\\PLRDH4.bmp", 0, 0, H0Lar-1, H0Alt-1);
	  getimage(0, 0, H0Lar-1, H0Alt-1, hPLRD4);
  
  
  RES = imagesize(0, 0, H1Lar-1, H1Alt-1);
  hHUD1 = malloc(RES);
  readimagefile(".\\bttn\\HUD1.bmp", 0, 0, H1Lar-1, H1Alt-1);
  getimage(0, 0, H1Lar-1, H1Alt-1, hHUD1);
		RES = imagesize(0, 0, H1Lar-1, H1Alt-1);
		hHUD1m = malloc(RES);
		readimagefile(".\\bttn\\HUD1m.bmp", 0, 0, H1Lar-1, H1Alt-1);
		getimage(0, 0, H1Lar-1, H1Alt-1, hHUD1m);
		RES = imagesize(0, 0, H1Lar-1, H1Alt-1);
		hHUD1a = malloc(RES);
		readimagefile(".\\bttn\\HUD1a.bmp", 0, 0, H1Lar-1, H1Alt-1);
		getimage(0, 0, H1Lar-1, H1Alt-1, hHUD1a);

  RES = imagesize(0, 0, H2Lar-1, H2Alt-1);
  hHUD2 = malloc(RES);
  readimagefile(".\\bttn\\HUD2.bmp", 0, 0, H2Lar-1, H2Alt-1);
  getimage(0, 0, H2Lar-1, H2Alt-1, hHUD2);
	  RES = imagesize(0, 0, H2Lar-1, H2Alt-1);
	  hHUD2m = malloc(RES);
	  readimagefile(".\\bttn\\HUD2m.bmp", 0, 0, H2Lar-1, H2Alt-1);
	  getimage(0, 0, H2Lar-1, H2Alt-1, hHUD2m);
	  RES = imagesize(0, 0, H2Lar-1, H2Alt-1);
	  hHUD2a = malloc(RES);
	  readimagefile(".\\bttn\\HUD2a.bmp", 0, 0, H2Lar-1, H2Alt-1);
	  getimage(0, 0, H2Lar-1, H2Alt-1, hHUD2a);
	
  RES = imagesize(0, 0, H3Lar-1, H3Alt-1);
  hHUD3 = malloc(RES);
  readimagefile(".\\bttn\\HUD3.bmp", 0, 0, H3Lar-1, H3Alt-1);
  getimage(0, 0, H3Lar-1, H3Alt-1, hHUD3);
	  RES = imagesize(0, 0, H3Lar-1, H3Alt-1);
	  hHUD3m = malloc(RES);
	  readimagefile(".\\bttn\\HUD3m.bmp", 0, 0, H3Lar-1, H3Alt-1);
	  getimage(0, 0, H3Lar-1, H3Alt-1, hHUD3m);
	  RES = imagesize(0, 0, H3Lar-1, H3Alt-1);
	  hHUD3a = malloc(RES);
	  readimagefile(".\\bttn\\HUD3a.bmp", 0, 0, H3Lar-1, H3Alt-1);
	  getimage(0, 0, H3Lar-1, H3Alt-1, hHUD3a);

  RES = imagesize(0, 0, H4Lar-1, H4Alt-1);
  hHUD4 = malloc(RES);
  readimagefile(".\\bttn\\HUD4.bmp", 0, 0, H4Lar-1, H4Alt-1);
  getimage(0, 0, H4Lar-1, H4Alt-1, hHUD4);
	  RES = imagesize(0, 0, H4Lar-1, H4Alt-1);
	  hHUD4m = malloc(RES);
	  readimagefile(".\\bttn\\HUD4m.bmp", 0, 0, H4Lar-1, H4Alt-1);
	  getimage(0, 0, H4Lar-1, H4Alt-1, hHUD4m);
	  RES = imagesize(0, 0, H4Lar-1, H4Alt-1);
	  hHUD4a = malloc(RES);
	  readimagefile(".\\bttn\\HUD4a.bmp", 0, 0, H4Lar-1, H4Alt-1);
	  getimage(0, 0, H4Lar-1, H4Alt-1, hHUD4a);
	  
  RES = imagesize(0, 0, KLar-1, KAlt-1);
  kKEY = malloc(RES);
  readimagefile(".\\bttn\\KEY.bmp", 0, 0, KLar-1, KAlt-1);
  getimage(0, 0, KLar-1, KAlt-1, kKEY);
	  RES = imagesize(0, 0, KLar-1, KAlt-1);
	  kKEYm = malloc(RES);
	  readimagefile(".\\bttn\\KEYm.bmp", 0, 0, KLar-1, KAlt-1);
	  getimage(0, 0, KLar-1, KAlt-1, kKEYm);
	  RES = imagesize(0, 0, KLar-1, KAlt-1);
	  kKEYa = malloc(RES);
	  readimagefile(".\\bttn\\KEYa.bmp", 0, 0, KLar-1, KAlt-1);
	  getimage(0, 0, KLar-1, KAlt-1, kKEYa);
	  
  RES = imagesize(0, 0, CHLar-1, CHAlt-1);
  for (i = 0; i < CHAT2; i++){
  chCHAT2[i] = malloc(RES);
  }
  readimagefile(".\\bttn\\CHAT2.bmp", 0, 0, CHLar-1, CHAlt-1);
  for (i = 0; i < CHAT2; i++){
  getimage(0, 95*i, CHLar-1, 94+95*i, chCHAT2[i]);
  }

	  cleardevice();

  WND = GetForegroundWindow();


 while(!END) {
    if (pg == 1) pg = 2; else pg = 1;
    	setactivepage(pg);
    	putimage(0, 0, bkSCENE20, COPY_PUT); 
    
		if (PLRDH1)
			putimage(30, 30, hPLRD1, COPY_PUT);
		  	
		if (PLRDH2)
			putimage(30, 30, hPLRD2, COPY_PUT);

		if (PLRDH3)
			putimage(30, 30, hPLRD3, COPY_PUT);						

		if (PLRDH4)
			putimage(30, 30, hPLRD4, COPY_PUT);		
							
		else
			putimage(30, 30, hPLRD0, OR_PUT);
																	
		
		if (HNDsl){
			putimage(1200, 30, hHUD1m, AND_PUT);
			putimage(1200, 30, hHUD1a, OR_PUT);
		}
		else{
			putimage(1200, 30, hHUD1m, AND_PUT);
			putimage(1200, 30, hHUD1, OR_PUT);			
		}
		
		if (HND){
			putimage(P.x-25, P.y-31, hHUD1m, AND_PUT);
			putimage(P.x-25, P.y-31, hHUD1, OR_PUT);			
		}
		
		if (LPAsl){
			putimage(1200, 110, hHUD2m, AND_PUT);
			putimage(1200, 110, hHUD2a, OR_PUT);
		}
		else{
			putimage(1200, 110, hHUD2m, AND_PUT);
    		putimage(1200, 110, hHUD2, OR_PUT);
		}
		
		if (LPA){
			putimage(P.x-25, P.y-25, hHUD2m, AND_PUT);
			putimage(P.x-25, P.y-25, hHUD2, OR_PUT);
		}
		
		if (DCKsl){
			putimage(1200, 180, hHUD3m, AND_PUT);
    		putimage(1200, 180, hHUD3a, OR_PUT);
		}
		else{
			putimage(1200, 180, hHUD3m, AND_PUT);
    		putimage(1200, 180, hHUD3, OR_PUT);
		}
		
		if (KEYa){
			if (KEYs){
				putimage(1200, 270, kKEYm, AND_PUT);
				putimage(1200, 270, kKEYa, OR_PUT);
			}
			else{
				putimage(1200, 270, kKEYm, AND_PUT);
				putimage(1200, 270, kKEY, OR_PUT);
			}
		}
		if (KEY){
			putimage(P.x-18, P.y-37, kKEYm, AND_PUT);
			putimage(P.x-18, P.y-37, kKEY, OR_PUT);
		}
		
		if (TABsl){
			putimage(1200, 650, hHUD4m, AND_PUT);
			putimage(1200, 650, hHUD4a, OR_PUT);
		}
		else{
			putimage(1200, 650, hHUD4m, AND_PUT);
			putimage(1200, 650, hHUD4, OR_PUT);
		}

		if (CHT0){
			putimage(120, 30, chCHAT2[0], OR_PUT);
		}
		
		if (CHT1){
			putimage(120, 30, chCHAT2[1], OR_PUT);
		}
		
		if (CHT2){
			putimage(120, 30, chCHAT2[2], OR_PUT);
		}
			
		if (GetCursorPos(&P)){
		  	if (ScreenToClient(WND, &P)){

				HNDsl = false;
			if (1200 <= P.x && P.x <= 1200+H1Lar-1 && 30 <= P.y && P.y <= 30+H1Alt-1)
				HNDsl = true;

				LPAsl = false;
			if (1200 <= P.x && P.x <= 1200+H2Lar-1 && 110 <= P.y && P.y <= 110+H2Alt-1)
				LPAsl = true;

				DCKsl = false;
			if (1200 <= P.x && P.x <= 1200+H3Lar-1 && 180 <= P.y && P.y <= 180+H3Alt-1)
				DCKsl = true;

				TABsl = false;
			if (1200 <= P.x && P.x <= 1200+H4Lar-1 && 650 <= P.y && P.y <= 650+H4Alt-1)
				TABsl = true;
				
				KEYs = false;
			if (1200 <= P.x && P.x <= 1200+KLar-1 && 270 <= P.y && P.y <= 270+KAlt-1)
				KEYs = true;
				

			if (GetKeyState(VK_LBUTTON)&0x80) {
					
				if (HND && 391 <= P.x && P.x <= 391+166 && 504 <= P.y && P.y <= 504+87){
					CHT0 = true;
				}
					
				if (HND && 318 <= P.x && P.x <= 318+40 && 498 <= P.y && P.y <= 498+15){
					CHT1 = true;
				}
				
				if (HND && 530 <= P.x && P.x <= 530+562 && 492 <= P.y && P.y <= 492+126){
					CHT2 = true;
				}
				
				if (LPA && 318 <= P.x && P.x <= 318+40 && 498 <= P.y && P.y <= 498+15){
					KEYa = true;
				}
				
				if (KEY && 391 <= P.x && P.x <= 391+166 && 504 <= P.y && P.y <= 504+87){
					SCENE21();
					END = true;
				}
				
					KEY = false;
				if (1200 <= P.x && P.x <= 1200+KLar-1 && 270 <= P.y && P.y <= 270+KAlt-1){
					KEY = true;				
					CHT0 = false;
					CHT1 = false;
					CHT2 = false;
				}
				
					HND = false;
				if (1200 <= P.x && P.x <= 1200+H1Lar-1 && 30 <= P.y && P.y <= 30+H1Alt-1){
					HND = true;
					CHT0 = false;
					CHT1 = false;
					CHT2 = false;
				}
					
					LPA = false;
				if (1200 <= P.x && P.x <= 1200+H2Lar-1 && 110 <= P.y && P.y <= 110+H2Alt-1){
					LPA = true;
					CHT0 = false;
					CHT1 = false;
					CHT2 = false;
				}
					
				if (1200 <= P.x && P.x <= 1200+H4Lar-1 && 650 <= P.y && P.y <= 650+H4Alt-1){
					mciSendString("close casa", NULL, 0, 0);
					TAB();
					END = true;
					CHT0 = false;
					CHT1 = false;
					CHT2 = false;
				}
			}			
			}
		}
   	
    	
    	setvisualpage(pg);
        	
    	if (GetKeyState(0x1B)&0x80){
		//
    	}	
	}
}

void SCENE21(){

	
	POINT P;
  	HWND WND;
  	bool HNDsl = false;
  	bool HND = false;
  	bool LPAsl = false;
  	bool LPA = false;
  	bool DCKsl = false;
  	bool TABsl = false;
  	bool CARD5 = false;
	bool END = false;
	
	int pg = 1;
	char tecla;
	int RES, i;
	void *bkSCENE21, *hPLRD0, *hPLRD1, *hPLRD2, *hPLRD3, *hPLRD4, *cdCARD0;
	void *hHUD1, *hHUD2, *hHUD3, *hHUD4, *hHUD1m, *hHUD2m, *hHUD3m, *hHUD4m, *hHUD1a, *hHUD2a, *hHUD3a, *hHUD4a;
	void *cCARD5, *cCARD0m, *chPST2;
	
  RES = imagesize(0, 0, RLar-1, RAlt-1);
  bkSCENE21 = malloc(RES);
  readimagefile(".\\scene\\SCENE2-1.bmp", 0, 0, JLar-1, JAlt-1);
  getimage(0, 0, JLar-1, JAlt-1, bkSCENE21);
  
  RES = imagesize(0, 0, H0Lar-1, H0Alt-1);
  hPLRD0 = malloc(RES);
  readimagefile(".\\bttn\\PLRD0.bmp", 0, 0, H0Lar-1, H0Alt-1);
  getimage(0, 0, H0Lar-1, H0Alt-1, hPLRD0);
	  RES = imagesize(0, 0, H0Lar-1, H0Alt-1);
	  hPLRD1 = malloc(RES);
	  readimagefile(".\\bttn\\PLRDH1.bmp", 0, 0, H0Lar-1, H0Alt-1);
	  getimage(0, 0, H0Lar-1, H0Alt-1, hPLRD1);
	  
	  RES = imagesize(0, 0, H0Lar-1, H0Alt-1);
	  hPLRD2 = malloc(RES);
	  readimagefile(".\\bttn\\PLRDH2.bmp", 0, 0, H0Lar-1, H0Alt-1);
	  getimage(0, 0, H0Lar-1, H0Alt-1, hPLRD2);
	  
	  RES = imagesize(0, 0, H0Lar-1, H0Alt-1);
	  hPLRD3 = malloc(RES);
	  readimagefile(".\\bttn\\PLRDH3.bmp", 0, 0, H0Lar-1, H0Alt-1);
	  getimage(0, 0, H0Lar-1, H0Alt-1, hPLRD3);
	  
	  RES = imagesize(0, 0, H0Lar-1, H0Alt-1);
	  hPLRD4 = malloc(RES);
	  readimagefile(".\\bttn\\PLRDH4.bmp", 0, 0, H0Lar-1, H0Alt-1);
	  getimage(0, 0, H0Lar-1, H0Alt-1, hPLRD4);
  
  
  RES = imagesize(0, 0, H1Lar-1, H1Alt-1);
  hHUD1 = malloc(RES);
  readimagefile(".\\bttn\\HUD1.bmp", 0, 0, H1Lar-1, H1Alt-1);
  getimage(0, 0, H1Lar-1, H1Alt-1, hHUD1);
		RES = imagesize(0, 0, H1Lar-1, H1Alt-1);
		hHUD1m = malloc(RES);
		readimagefile(".\\bttn\\HUD1m.bmp", 0, 0, H1Lar-1, H1Alt-1);
		getimage(0, 0, H1Lar-1, H1Alt-1, hHUD1m);
		RES = imagesize(0, 0, H1Lar-1, H1Alt-1);
		hHUD1a = malloc(RES);
		readimagefile(".\\bttn\\HUD1a.bmp", 0, 0, H1Lar-1, H1Alt-1);
		getimage(0, 0, H1Lar-1, H1Alt-1, hHUD1a);

  RES = imagesize(0, 0, H2Lar-1, H2Alt-1);
  hHUD2 = malloc(RES);
  readimagefile(".\\bttn\\HUD2.bmp", 0, 0, H2Lar-1, H2Alt-1);
  getimage(0, 0, H2Lar-1, H2Alt-1, hHUD2);
	  RES = imagesize(0, 0, H2Lar-1, H2Alt-1);
	  hHUD2m = malloc(RES);
	  readimagefile(".\\bttn\\HUD2m.bmp", 0, 0, H2Lar-1, H2Alt-1);
	  getimage(0, 0, H2Lar-1, H2Alt-1, hHUD2m);
	  RES = imagesize(0, 0, H2Lar-1, H2Alt-1);
	  hHUD2a = malloc(RES);
	  readimagefile(".\\bttn\\HUD2a.bmp", 0, 0, H2Lar-1, H2Alt-1);
	  getimage(0, 0, H2Lar-1, H2Alt-1, hHUD2a);
	
  RES = imagesize(0, 0, H3Lar-1, H3Alt-1);
  hHUD3 = malloc(RES);
  readimagefile(".\\bttn\\HUD3.bmp", 0, 0, H3Lar-1, H3Alt-1);
  getimage(0, 0, H3Lar-1, H3Alt-1, hHUD3);
	  RES = imagesize(0, 0, H3Lar-1, H3Alt-1);
	  hHUD3m = malloc(RES);
	  readimagefile(".\\bttn\\HUD3m.bmp", 0, 0, H3Lar-1, H3Alt-1);
	  getimage(0, 0, H3Lar-1, H3Alt-1, hHUD3m);
	  RES = imagesize(0, 0, H3Lar-1, H3Alt-1);
	  hHUD3a = malloc(RES);
	  readimagefile(".\\bttn\\HUD3a.bmp", 0, 0, H3Lar-1, H3Alt-1);
	  getimage(0, 0, H3Lar-1, H3Alt-1, hHUD3a);

  RES = imagesize(0, 0, H4Lar-1, H4Alt-1);
  hHUD4 = malloc(RES);
  readimagefile(".\\bttn\\HUD4.bmp", 0, 0, H4Lar-1, H4Alt-1);
  getimage(0, 0, H4Lar-1, H4Alt-1, hHUD4);
	  RES = imagesize(0, 0, H4Lar-1, H4Alt-1);
	  hHUD4m = malloc(RES);
	  readimagefile(".\\bttn\\HUD4m.bmp", 0, 0, H4Lar-1, H4Alt-1);
	  getimage(0, 0, H4Lar-1, H4Alt-1, hHUD4m);
	  RES = imagesize(0, 0, H4Lar-1, H4Alt-1);
	  hHUD4a = malloc(RES);
	  readimagefile(".\\bttn\\HUD4a.bmp", 0, 0, H4Lar-1, H4Alt-1);
	  getimage(0, 0, H4Lar-1, H4Alt-1, hHUD4a);
	  
  RES = imagesize(0, 0, CLar-1, CAlt-1);
  cCARD5 = malloc(RES);
  readimagefile(".\\card\\CARD5.bmp", 0, 0, CLar-1, CAlt-1);
  getimage(0, 0, CLar-1, CAlt-1, cCARD5);
  		RES = imagesize(0, 0, CLar-1, CAlt-1);
  		cCARD0m = malloc(RES);
  		readimagefile(".\\card\\CARD0m.bmp", 0, 0, CLar-1, CAlt-1);
  		getimage(0, 0, CLar-1, CAlt-1, cCARD0m);
  		
  RES = imagesize(0, 0, PTLar-1, PTAlt-1);
  chPST2 = malloc(RES);
  readimagefile(".\\bttn\\PST2.bmp", 0, 0, PTLar-1, PTAlt-1);
  getimage(0, 0, PTLar-1, PTAlt-1, chPST2);

	  cleardevice();

  WND = GetForegroundWindow();


 while(!END) {
    if (pg == 1) pg = 2; else pg = 1;
    	setactivepage(pg);
    	putimage(0, 0, bkSCENE21, COPY_PUT); 
    
		if (PLRDH1)
			putimage(30, 30, hPLRD1, COPY_PUT);
		  	
		if (PLRDH2)
			putimage(30, 30, hPLRD2, COPY_PUT);

		if (PLRDH3)
			putimage(30, 30, hPLRD3, COPY_PUT);						

		if (PLRDH4)
			putimage(30, 30, hPLRD4, COPY_PUT);		
							
		else
			putimage(30, 30, hPLRD0, OR_PUT);
																	
		
		if (HNDsl){
			putimage(1200, 30, hHUD1m, AND_PUT);
			putimage(1200, 30, hHUD1a, OR_PUT);
		}
		else{
			putimage(1200, 30, hHUD1m, AND_PUT);
			putimage(1200, 30, hHUD1, OR_PUT);			
		}
		
		if (HND){
			putimage(P.x-25, P.y-31, hHUD1m, AND_PUT);
			putimage(P.x-25, P.y-31, hHUD1, OR_PUT);			
		}
		
		if (LPAsl){
			putimage(1200, 110, hHUD2m, AND_PUT);
			putimage(1200, 110, hHUD2a, OR_PUT);
		}
		else{
			putimage(1200, 110, hHUD2m, AND_PUT);
    		putimage(1200, 110, hHUD2, OR_PUT);
		}
		
		if (LPA){
			putimage(P.x-25, P.y-25, hHUD2m, AND_PUT);
			putimage(P.x-25, P.y-25, hHUD2, OR_PUT);
		}
		
		if (DCKsl){
			putimage(1200, 180, hHUD3m, AND_PUT);
    		putimage(1200, 180, hHUD3a, OR_PUT);
		}
		else{
			putimage(1200, 180, hHUD3m, AND_PUT);
    		putimage(1200, 180, hHUD3, OR_PUT);
		}
		
		
		if (TABsl){
			putimage(1200, 650, hHUD4m, AND_PUT);
			putimage(1200, 650, hHUD4a, OR_PUT);
		}
		else{
			putimage(1200, 650, hHUD4m, AND_PUT);
			putimage(1200, 650, hHUD4, OR_PUT);
		}
			
		if (CARD5){
			putimage(30, 170, cCARD0m, AND_PUT);
			putimage(30, 170, cCARD5, OR_PUT);
			putimage(120, 30, chPST2, OR_PUT);
		}
		
		if (CARD5S){
			putimage(120, 30, chCLLT[0], OR_PUT);
			CARD5 = false;
		}
			
		if (GetCursorPos(&P)){
		  	if (ScreenToClient(WND, &P)){

				HNDsl = false;
			if (1200 <= P.x && P.x <= 1200+H1Lar-1 && 30 <= P.y && P.y <= 30+H1Alt-1)
				HNDsl = true;

				LPAsl = false;
			if (1200 <= P.x && P.x <= 1200+H2Lar-1 && 110 <= P.y && P.y <= 110+H2Alt-1)
				LPAsl = true;

				DCKsl = false;
			if (1200 <= P.x && P.x <= 1200+H3Lar-1 && 180 <= P.y && P.y <= 180+H3Alt-1)
				DCKsl = true;

				TABsl = false;
			if (1200 <= P.x && P.x <= 1200+H4Lar-1 && 650 <= P.y && P.y <= 650+H4Alt-1)
				TABsl = true;

			if (GetKeyState(VK_LBUTTON)&0x80) {
				
					DCKsl = false;
				if (CARD5 && 1200 <= P.x && P.x <= 1200+H3Lar-1 && 180 <= P.y && P.y <= 180+H3Alt-1){
					DCKsl = true;	
					CARD5S = true;
				}
				
				if (LPA && 975 <= P.x && P.x <= 975+14 && 399 <= P.y && P.y <= 399+407){
					CARD5 = true;
					LPA = false;
				}
				
					HND = false;
				if (1200 <= P.x && P.x <= 1200+H1Lar-1 && 30 <= P.y && P.y <= 30+H1Alt-1){
					HND = true;
				}
					
					LPA = false;
				if (1200 <= P.x && P.x <= 1200+H2Lar-1 && 110 <= P.y && P.y <= 110+H2Alt-1){
					LPA = true;
				}
				
				if (1200 <= P.x && P.x <= 1200+H4Lar-1 && 650 <= P.y && P.y <= 650+H4Alt-1){
					mciSendString("close casa", NULL, 0, 0);
					TAB();
					END = true;
				}
			}			
			}
		}
   	
    	
    	setvisualpage(pg);
        	
    	if (GetKeyState(0x1B)&0x80){
		//
    	}	
	}
}

void SCENE30(){
	
	#define CHAT3	 4
	
	CHLar = 265;
	CHAlt = 95*CHAT3;

	POINT P;
  	HWND WND;
  	bool HNDsl = false;
  	bool HND = false;
  	bool LPAsl = false;
  	bool LPA = false;
  	bool DCKsl = false;
  	bool TABsl = false;
  	bool CHT0 = false;
	bool CHT1 = false;
	bool CHT2 = false;
	bool CHT3 = false;
	bool TCKT = false;
	bool END = false;
	
	int pg = 1;
	char tecla;
	int RES, i;
	void *bkSCENE30, *hPLRD0, *hPLRD1, *hPLRD2, *hPLRD3, *hPLRD4, *cdCARD0;
	void *hHUD1, *hHUD2, *hHUD3, *hHUD4, *hHUD1m, *hHUD2m, *hHUD3m, *hHUD4m, *hHUD1a, *hHUD2a, *hHUD3a, *hHUD4a;
	void *chCHAT3[CHAT3];
	
  RES = imagesize(0, 0, RLar-1, RAlt-1);
  bkSCENE30 = malloc(RES);
  readimagefile(".\\scene\\SCENE3-0.bmp", 0, 0, JLar-1, JAlt-1);
  getimage(0, 0, JLar-1, JAlt-1, bkSCENE30);
  
  RES = imagesize(0, 0, H0Lar-1, H0Alt-1);
  hPLRD0 = malloc(RES);
  readimagefile(".\\bttn\\PLRD0.bmp", 0, 0, H0Lar-1, H0Alt-1);
  getimage(0, 0, H0Lar-1, H0Alt-1, hPLRD0);
	  RES = imagesize(0, 0, H0Lar-1, H0Alt-1);
	  hPLRD1 = malloc(RES);
	  readimagefile(".\\bttn\\PLRDH1.bmp", 0, 0, H0Lar-1, H0Alt-1);
	  getimage(0, 0, H0Lar-1, H0Alt-1, hPLRD1);
	  
	  RES = imagesize(0, 0, H0Lar-1, H0Alt-1);
	  hPLRD2 = malloc(RES);
	  readimagefile(".\\bttn\\PLRDH2.bmp", 0, 0, H0Lar-1, H0Alt-1);
	  getimage(0, 0, H0Lar-1, H0Alt-1, hPLRD2);
	  
	  RES = imagesize(0, 0, H0Lar-1, H0Alt-1);
	  hPLRD3 = malloc(RES);
	  readimagefile(".\\bttn\\PLRDH3.bmp", 0, 0, H0Lar-1, H0Alt-1);
	  getimage(0, 0, H0Lar-1, H0Alt-1, hPLRD3);
	  
	  RES = imagesize(0, 0, H0Lar-1, H0Alt-1);
	  hPLRD4 = malloc(RES);
	  readimagefile(".\\bttn\\PLRDH4.bmp", 0, 0, H0Lar-1, H0Alt-1);
	  getimage(0, 0, H0Lar-1, H0Alt-1, hPLRD4);
  
  
  RES = imagesize(0, 0, H1Lar-1, H1Alt-1);
  hHUD1 = malloc(RES);
  readimagefile(".\\bttn\\HUD1.bmp", 0, 0, H1Lar-1, H1Alt-1);
  getimage(0, 0, H1Lar-1, H1Alt-1, hHUD1);
		RES = imagesize(0, 0, H1Lar-1, H1Alt-1);
		hHUD1m = malloc(RES);
		readimagefile(".\\bttn\\HUD1m.bmp", 0, 0, H1Lar-1, H1Alt-1);
		getimage(0, 0, H1Lar-1, H1Alt-1, hHUD1m);
		RES = imagesize(0, 0, H1Lar-1, H1Alt-1);
		hHUD1a = malloc(RES);
		readimagefile(".\\bttn\\HUD1a.bmp", 0, 0, H1Lar-1, H1Alt-1);
		getimage(0, 0, H1Lar-1, H1Alt-1, hHUD1a);

  RES = imagesize(0, 0, H2Lar-1, H2Alt-1);
  hHUD2 = malloc(RES);
  readimagefile(".\\bttn\\HUD2.bmp", 0, 0, H2Lar-1, H2Alt-1);
  getimage(0, 0, H2Lar-1, H2Alt-1, hHUD2);
	  RES = imagesize(0, 0, H2Lar-1, H2Alt-1);
	  hHUD2m = malloc(RES);
	  readimagefile(".\\bttn\\HUD2m.bmp", 0, 0, H2Lar-1, H2Alt-1);
	  getimage(0, 0, H2Lar-1, H2Alt-1, hHUD2m);
	  RES = imagesize(0, 0, H2Lar-1, H2Alt-1);
	  hHUD2a = malloc(RES);
	  readimagefile(".\\bttn\\HUD2a.bmp", 0, 0, H2Lar-1, H2Alt-1);
	  getimage(0, 0, H2Lar-1, H2Alt-1, hHUD2a);
	
  RES = imagesize(0, 0, H3Lar-1, H3Alt-1);
  hHUD3 = malloc(RES);
  readimagefile(".\\bttn\\HUD3.bmp", 0, 0, H3Lar-1, H3Alt-1);
  getimage(0, 0, H3Lar-1, H3Alt-1, hHUD3);
	  RES = imagesize(0, 0, H3Lar-1, H3Alt-1);
	  hHUD3m = malloc(RES);
	  readimagefile(".\\bttn\\HUD3m.bmp", 0, 0, H3Lar-1, H3Alt-1);
	  getimage(0, 0, H3Lar-1, H3Alt-1, hHUD3m);
	  RES = imagesize(0, 0, H3Lar-1, H3Alt-1);
	  hHUD3a = malloc(RES);
	  readimagefile(".\\bttn\\HUD3a.bmp", 0, 0, H3Lar-1, H3Alt-1);
	  getimage(0, 0, H3Lar-1, H3Alt-1, hHUD3a);

  RES = imagesize(0, 0, H4Lar-1, H4Alt-1);
  hHUD4 = malloc(RES);
  readimagefile(".\\bttn\\HUD4.bmp", 0, 0, H4Lar-1, H4Alt-1);
  getimage(0, 0, H4Lar-1, H4Alt-1, hHUD4);
	  RES = imagesize(0, 0, H4Lar-1, H4Alt-1);
	  hHUD4m = malloc(RES);
	  readimagefile(".\\bttn\\HUD4m.bmp", 0, 0, H4Lar-1, H4Alt-1);
	  getimage(0, 0, H4Lar-1, H4Alt-1, hHUD4m);
	  RES = imagesize(0, 0, H4Lar-1, H4Alt-1);
	  hHUD4a = malloc(RES);
	  readimagefile(".\\bttn\\HUD4a.bmp", 0, 0, H4Lar-1, H4Alt-1);
	  getimage(0, 0, H4Lar-1, H4Alt-1, hHUD4a);
	  
	  
  RES = imagesize(0, 0, CHLar-1, CHAlt-1);
  for (i = 0; i < CHAT3; i++){
  chCHAT3[i] = malloc(RES);
  }
  readimagefile(".\\bttn\\CHAT3.bmp", 0, 0, CHLar-1, CHAlt-1);
  for (i = 0; i < CHAT3; i++){
  getimage(0, 95*i, CHLar-1, 94+95*i, chCHAT3[i]);
  }

	  cleardevice();

  WND = GetForegroundWindow();


 while(!END) {
    if (pg == 1) pg = 2; else pg = 1;
    	setactivepage(pg);
    	putimage(0, 0, bkSCENE30, COPY_PUT); 
    
		if (PLRDH1)
			putimage(30, 30, hPLRD1, COPY_PUT);
		  	
		if (PLRDH2)
			putimage(30, 30, hPLRD2, COPY_PUT);

		if (PLRDH3)
			putimage(30, 30, hPLRD3, COPY_PUT);						

		if (PLRDH4)
			putimage(30, 30, hPLRD4, COPY_PUT);		
							
		else
			putimage(30, 30, hPLRD0, OR_PUT);
																	
		
		if (HNDsl){
			putimage(1200, 30, hHUD1m, AND_PUT);
			putimage(1200, 30, hHUD1a, OR_PUT);
		}
		else{
			putimage(1200, 30, hHUD1m, AND_PUT);
			putimage(1200, 30, hHUD1, OR_PUT);			
		}
		
		if (HND){
			putimage(P.x-25, P.y-31, hHUD1m, AND_PUT);
			putimage(P.x-25, P.y-31, hHUD1, OR_PUT);			
		}
		
		if (LPAsl){
			putimage(1200, 110, hHUD2m, AND_PUT);
			putimage(1200, 110, hHUD2a, OR_PUT);
		}
		else{
			putimage(1200, 110, hHUD2m, AND_PUT);
    		putimage(1200, 110, hHUD2, OR_PUT);
		}
		
		if (LPA){
			putimage(P.x-25, P.y-25, hHUD2m, AND_PUT);
			putimage(P.x-25, P.y-25, hHUD2, OR_PUT);
		}
		
		if (DCKsl){
			putimage(1200, 180, hHUD3m, AND_PUT);
    		putimage(1200, 180, hHUD3a, OR_PUT);
		}
		else{
			putimage(1200, 180, hHUD3m, AND_PUT);
    		putimage(1200, 180, hHUD3, OR_PUT);
		}
				
		if (TABsl){
			putimage(1200, 650, hHUD4m, AND_PUT);
			putimage(1200, 650, hHUD4a, OR_PUT);
		}
		else{
			putimage(1200, 650, hHUD4m, AND_PUT);
			putimage(1200, 650, hHUD4, OR_PUT);
		}

		if (!CHT0){
			putimage(120, 30, chCHAT3[0], OR_PUT);
		}
		
		if (CHT1){
			putimage(120, 30, chCHAT3[1], OR_PUT);
		}
		
		if (CHT3){
			putimage(120, 30, chCHAT3[3], OR_PUT);
		}
			
		if (GetCursorPos(&P)){
		  	if (ScreenToClient(WND, &P)){

				HNDsl = false;
			if (1200 <= P.x && P.x <= 1200+H1Lar-1 && 30 <= P.y && P.y <= 30+H1Alt-1)
				HNDsl = true;

				LPAsl = false;
			if (1200 <= P.x && P.x <= 1200+H2Lar-1 && 110 <= P.y && P.y <= 110+H2Alt-1)
				LPAsl = true;

				DCKsl = false;
			if (1200 <= P.x && P.x <= 1200+H3Lar-1 && 180 <= P.y && P.y <= 180+H3Alt-1)
				DCKsl = true;

				TABsl = false;
			if (1200 <= P.x && P.x <= 1200+H4Lar-1 && 650 <= P.y && P.y <= 650+H4Alt-1)
				TABsl = true;				

			if (GetKeyState(VK_LBUTTON)&0x80) {
				
				if (LPA &&  sqrt(pow(P.x - 642, 2) + pow(P.y - 480, 2)) <= 8){
					CHT1 = true;
					TCKT = true;
				}
					
				if (HND && TCKT && 754 <= P.x && P.x <= 754+51 && 410 <= P.y && P.y <= 410+66){
					SCENE31();
					END = true;
				}
				
				if (HND && !TCKT && 754 <= P.x && P.x <= 754+51 && 410 <= P.y && P.y <= 410+66){
					CHT3 = true;
				}
				
				if (LPA && !TCKT && 754 <= P.x && P.x <= 754+51 && 410 <= P.y && P.y <= 410+66){
					CHT3 = true;
				}	
								
					HND = false;
				if (1200 <= P.x && P.x <= 1200+H1Lar-1 && 30 <= P.y && P.y <= 30+H1Alt-1){
					HND = true;
					CHT0 = true;
					CHT1 = false;
					CHT2 = false;
					CHT3 = false;
				}
					
					LPA = false;
				if (1200 <= P.x && P.x <= 1200+H2Lar-1 && 110 <= P.y && P.y <= 110+H2Alt-1){
					LPA = true;
					CHT0 = true;
					CHT1 = false;
					CHT2 = false;
					CHT3 = false;
				}
					
				if (1200 <= P.x && P.x <= 1200+H4Lar-1 && 650 <= P.y && P.y <= 650+H4Alt-1){
					mciSendString("close rodoviaria", NULL, 0, 0);
					TAB();
					END = true;
					CHT0 = true;
					CHT1 = false;
					CHT2 = false;
					CHT3 = false;
				}							
			}			
			}
		}
   	
    	
    	setvisualpage(pg);
        	
    	if (GetKeyState(0x1B)&0x80){
		//
    	}	
	}
}

void SCENE31(){
	
	#define CHAT3	 4
	
	CHLar = 265;
	CHAlt = 95*CHAT3;

	POINT P;
  	HWND WND;
  	bool HNDsl = false;
  	bool HND = false;
  	bool LPAsl = false;
  	bool LPA = false;
  	bool DCKsl = false;
  	bool TABsl = false;
  	bool CHT0 = false;
	bool CHT1 = false;
	bool CHT2 = false;
	bool CHT3 = false;
	bool TCKT = false;
	bool CARD19 = false;
	bool END = false;
	
	int pg = 1;
	char tecla;
	int RES, i;
	void *bkSCENE31, *hPLRD0, *hPLRD1, *hPLRD2, *hPLRD3, *hPLRD4, *cdCARD0;
	void *hHUD1, *hHUD2, *hHUD3, *hHUD4, *hHUD1m, *hHUD2m, *hHUD3m, *hHUD4m, *hHUD1a, *hHUD2a, *hHUD3a, *hHUD4a;
	void *cCARD19, *cCARD0m;
	void *chCHAT3[CHAT3], *chPST3;
	
  RES = imagesize(0, 0, RLar-1, RAlt-1);
  bkSCENE31 = malloc(RES);
  readimagefile(".\\scene\\SCENE3-1.bmp", 0, 0, JLar-1, JAlt-1);
  getimage(0, 0, JLar-1, JAlt-1, bkSCENE31);
  
  RES = imagesize(0, 0, H0Lar-1, H0Alt-1);
  hPLRD0 = malloc(RES);
  readimagefile(".\\bttn\\PLRD0.bmp", 0, 0, H0Lar-1, H0Alt-1);
  getimage(0, 0, H0Lar-1, H0Alt-1, hPLRD0);
	  RES = imagesize(0, 0, H0Lar-1, H0Alt-1);
	  hPLRD1 = malloc(RES);
	  readimagefile(".\\bttn\\PLRDH1.bmp", 0, 0, H0Lar-1, H0Alt-1);
	  getimage(0, 0, H0Lar-1, H0Alt-1, hPLRD1);
	  
	  RES = imagesize(0, 0, H0Lar-1, H0Alt-1);
	  hPLRD2 = malloc(RES);
	  readimagefile(".\\bttn\\PLRDH2.bmp", 0, 0, H0Lar-1, H0Alt-1);
	  getimage(0, 0, H0Lar-1, H0Alt-1, hPLRD2);
	  
	  RES = imagesize(0, 0, H0Lar-1, H0Alt-1);
	  hPLRD3 = malloc(RES);
	  readimagefile(".\\bttn\\PLRDH3.bmp", 0, 0, H0Lar-1, H0Alt-1);
	  getimage(0, 0, H0Lar-1, H0Alt-1, hPLRD3);
	  
	  RES = imagesize(0, 0, H0Lar-1, H0Alt-1);
	  hPLRD4 = malloc(RES);
	  readimagefile(".\\bttn\\PLRDH4.bmp", 0, 0, H0Lar-1, H0Alt-1);
	  getimage(0, 0, H0Lar-1, H0Alt-1, hPLRD4);
  
  
  RES = imagesize(0, 0, H1Lar-1, H1Alt-1);
  hHUD1 = malloc(RES);
  readimagefile(".\\bttn\\HUD1.bmp", 0, 0, H1Lar-1, H1Alt-1);
  getimage(0, 0, H1Lar-1, H1Alt-1, hHUD1);
		RES = imagesize(0, 0, H1Lar-1, H1Alt-1);
		hHUD1m = malloc(RES);
		readimagefile(".\\bttn\\HUD1m.bmp", 0, 0, H1Lar-1, H1Alt-1);
		getimage(0, 0, H1Lar-1, H1Alt-1, hHUD1m);
		RES = imagesize(0, 0, H1Lar-1, H1Alt-1);
		hHUD1a = malloc(RES);
		readimagefile(".\\bttn\\HUD1a.bmp", 0, 0, H1Lar-1, H1Alt-1);
		getimage(0, 0, H1Lar-1, H1Alt-1, hHUD1a);

  RES = imagesize(0, 0, H2Lar-1, H2Alt-1);
  hHUD2 = malloc(RES);
  readimagefile(".\\bttn\\HUD2.bmp", 0, 0, H2Lar-1, H2Alt-1);
  getimage(0, 0, H2Lar-1, H2Alt-1, hHUD2);
	  RES = imagesize(0, 0, H2Lar-1, H2Alt-1);
	  hHUD2m = malloc(RES);
	  readimagefile(".\\bttn\\HUD2m.bmp", 0, 0, H2Lar-1, H2Alt-1);
	  getimage(0, 0, H2Lar-1, H2Alt-1, hHUD2m);
	  RES = imagesize(0, 0, H2Lar-1, H2Alt-1);
	  hHUD2a = malloc(RES);
	  readimagefile(".\\bttn\\HUD2a.bmp", 0, 0, H2Lar-1, H2Alt-1);
	  getimage(0, 0, H2Lar-1, H2Alt-1, hHUD2a);
	
  RES = imagesize(0, 0, H3Lar-1, H3Alt-1);
  hHUD3 = malloc(RES);
  readimagefile(".\\bttn\\HUD3.bmp", 0, 0, H3Lar-1, H3Alt-1);
  getimage(0, 0, H3Lar-1, H3Alt-1, hHUD3);
	  RES = imagesize(0, 0, H3Lar-1, H3Alt-1);
	  hHUD3m = malloc(RES);
	  readimagefile(".\\bttn\\HUD3m.bmp", 0, 0, H3Lar-1, H3Alt-1);
	  getimage(0, 0, H3Lar-1, H3Alt-1, hHUD3m);
	  RES = imagesize(0, 0, H3Lar-1, H3Alt-1);
	  hHUD3a = malloc(RES);
	  readimagefile(".\\bttn\\HUD3a.bmp", 0, 0, H3Lar-1, H3Alt-1);
	  getimage(0, 0, H3Lar-1, H3Alt-1, hHUD3a);

  RES = imagesize(0, 0, H4Lar-1, H4Alt-1);
  hHUD4 = malloc(RES);
  readimagefile(".\\bttn\\HUD4.bmp", 0, 0, H4Lar-1, H4Alt-1);
  getimage(0, 0, H4Lar-1, H4Alt-1, hHUD4);
	  RES = imagesize(0, 0, H4Lar-1, H4Alt-1);
	  hHUD4m = malloc(RES);
	  readimagefile(".\\bttn\\HUD4m.bmp", 0, 0, H4Lar-1, H4Alt-1);
	  getimage(0, 0, H4Lar-1, H4Alt-1, hHUD4m);
	  RES = imagesize(0, 0, H4Lar-1, H4Alt-1);
	  hHUD4a = malloc(RES);
	  readimagefile(".\\bttn\\HUD4a.bmp", 0, 0, H4Lar-1, H4Alt-1);
	  getimage(0, 0, H4Lar-1, H4Alt-1, hHUD4a);
	  
  RES = imagesize(0, 0, CLar-1, CAlt-1);
  cCARD19 = malloc(RES);
  readimagefile(".\\card\\CARD19.bmp", 0, 0, CLar-1, CAlt-1);
  getimage(0, 0, CLar-1, CAlt-1, cCARD19);
  		RES = imagesize(0, 0, CLar-1, CAlt-1);
  		cCARD0m = malloc(RES);
  		readimagefile(".\\card\\CARD0m.bmp", 0, 0, CLar-1, CAlt-1);
  		getimage(0, 0, CLar-1, CAlt-1, cCARD0m);
	  
	  
  RES = imagesize(0, 0, CHLar-1, CHAlt-1);
  for (i = 0; i < CHAT3; i++){
  chCHAT3[i] = malloc(RES);
  }
  readimagefile(".\\bttn\\CHAT3.bmp", 0, 0, CHLar-1, CHAlt-1);
  for (i = 0; i < CHAT3; i++){
  getimage(0, 95*i, CHLar-1, 94+95*i, chCHAT3[i]);
  }
  
  RES = imagesize(0, 0, PTLar-1, PTAlt-1);
  chPST3 = malloc(RES);
  readimagefile(".\\bttn\\PST3.bmp", 0, 0, PTLar-1, PTAlt-1);
  getimage(0, 0, PTLar-1, PTAlt-1, chPST3);

	  cleardevice();

  WND = GetForegroundWindow();


 while(!END) {
    if (pg == 1) pg = 2; else pg = 1;
    	setactivepage(pg);
    	putimage(0, 0, bkSCENE31, COPY_PUT);  
    
		if (PLRDH1)
			putimage(30, 30, hPLRD1, COPY_PUT);
		  	
		if (PLRDH2)
			putimage(30, 30, hPLRD2, COPY_PUT);

		if (PLRDH3)
			putimage(30, 30, hPLRD3, COPY_PUT);						

		if (PLRDH4)
			putimage(30, 30, hPLRD4, COPY_PUT);		
							
		else
			putimage(30, 30, hPLRD0, OR_PUT);
																	
		
		if (HNDsl){
			putimage(1200, 30, hHUD1m, AND_PUT);
			putimage(1200, 30, hHUD1a, OR_PUT);
		}
		else{
			putimage(1200, 30, hHUD1m, AND_PUT);
			putimage(1200, 30, hHUD1, OR_PUT);			
		}
		
		if (HND){
			putimage(P.x-25, P.y-31, hHUD1m, AND_PUT);
			putimage(P.x-25, P.y-31, hHUD1, OR_PUT);			
		}
		
		if (LPAsl){
			putimage(1200, 110, hHUD2m, AND_PUT);
			putimage(1200, 110, hHUD2a, OR_PUT);
		}
		else{
			putimage(1200, 110, hHUD2m, AND_PUT);
    		putimage(1200, 110, hHUD2, OR_PUT);
		}
		
		if (LPA){
			putimage(P.x-25, P.y-25, hHUD2m, AND_PUT);
			putimage(P.x-25, P.y-25, hHUD2, OR_PUT);
		}
		
		if (DCKsl){
			putimage(1200, 180, hHUD3m, AND_PUT);
    		putimage(1200, 180, hHUD3a, OR_PUT);
		}
		else{
			putimage(1200, 180, hHUD3m, AND_PUT);
    		putimage(1200, 180, hHUD3, OR_PUT);
		}
				
		if (TABsl){
			putimage(1200, 650, hHUD4m, AND_PUT);
			putimage(1200, 650, hHUD4a, OR_PUT);
		}
		else{
			putimage(1200, 650, hHUD4m, AND_PUT);
			putimage(1200, 650, hHUD4, OR_PUT);
		}

		if (!CHT2){
			putimage(120, 30, chCHAT3[2], OR_PUT);
		}
		
		if (CARD19){
			putimage(30, 170, cCARD0m, AND_PUT);
			putimage(30, 170, cCARD19, OR_PUT);
			putimage(120, 30, chPST3, OR_PUT);
		}
		
		if (CARD19S){
			putimage(120, 30, chCLLT[0], OR_PUT);
			CARD19 = false;
		}
			
		if (GetCursorPos(&P)){
		  	if (ScreenToClient(WND, &P)){

				HNDsl = false;
			if (1200 <= P.x && P.x <= 1200+H1Lar-1 && 30 <= P.y && P.y <= 30+H1Alt-1)
				HNDsl = true;

				LPAsl = false;
			if (1200 <= P.x && P.x <= 1200+H2Lar-1 && 110 <= P.y && P.y <= 110+H2Alt-1)
				LPAsl = true;

				DCKsl = false;
			if (1200 <= P.x && P.x <= 1200+H3Lar-1 && 180 <= P.y && P.y <= 180+H3Alt-1)
				DCKsl = true;

				TABsl = false;
			if (1200 <= P.x && P.x <= 1200+H4Lar-1 && 650 <= P.y && P.y <= 650+H4Alt-1)
				TABsl = true;				

			if (GetKeyState(VK_LBUTTON)&0x80) {
				
					DCKsl = false;
				if (CARD19 && 1200 <= P.x && P.x <= 1200+H3Lar-1 && 180 <= P.y && P.y <= 180+H3Alt-1){
					DCKsl = true;	
					CARD19S = true;
				}

				
				if (LPA && 580 <= P.x && P.x <= 580+25 && 510 <= P.y && P.y <= 510+10){
					CARD19 = true;
					LPA = false;
				}
								
					HND = false;
				if (1200 <= P.x && P.x <= 1200+H1Lar-1 && 30 <= P.y && P.y <= 30+H1Alt-1){
					HND = true;
					CHT2 = true;
				}
					
					LPA = false;
				if (1200 <= P.x && P.x <= 1200+H2Lar-1 && 110 <= P.y && P.y <= 110+H2Alt-1){
					LPA = true;
					CHT2 = true;
				}
					
				if (1200 <= P.x && P.x <= 1200+H4Lar-1 && 650 <= P.y && P.y <= 650+H4Alt-1){
					mciSendString("close rodoviaria", NULL, 0, 0);
					TAB();
					END = true;
					CHT2 = true;
				}							
			}			
			}
		}
   	
    	
    	setvisualpage(pg);
        	
    	if (GetKeyState(0x1B)&0x80){
		//
    	}	
	}
}

void SCENE40(){

	POINT P;
  	HWND WND;
  	bool HNDsl = false;
  	bool HND = false;
  	bool LPAsl = false;
  	bool LPA = false;
  	bool DCKsl = false;
  	bool TABsl = false;
	bool END = false;
	
	int pg = 1;
	char tecla;
	int RES, i;
	void *bkSCENE40, *hPLRD0, *hPLRD1, *hPLRD2, *hPLRD3, *hPLRD4, *cdCARD0;
	void *hHUD1, *hHUD2, *hHUD3, *hHUD4, *hHUD1m, *hHUD2m, *hHUD3m, *hHUD4m, *hHUD1a, *hHUD2a, *hHUD3a, *hHUD4a;
	
  RES = imagesize(0, 0, RLar-1, RAlt-1);
  bkSCENE40 = malloc(RES);
  readimagefile(".\\scene\\SCENE4-0.bmp", 0, 0, JLar-1, JAlt-1);
  getimage(0, 0, JLar-1, JAlt-1, bkSCENE40);
  
  RES = imagesize(0, 0, H0Lar-1, H0Alt-1);
  hPLRD0 = malloc(RES);
  readimagefile(".\\bttn\\PLRD0.bmp", 0, 0, H0Lar-1, H0Alt-1);
  getimage(0, 0, H0Lar-1, H0Alt-1, hPLRD0);
	  RES = imagesize(0, 0, H0Lar-1, H0Alt-1);
	  hPLRD1 = malloc(RES);
	  readimagefile(".\\bttn\\PLRDH1.bmp", 0, 0, H0Lar-1, H0Alt-1);
	  getimage(0, 0, H0Lar-1, H0Alt-1, hPLRD1);
	  
	  RES = imagesize(0, 0, H0Lar-1, H0Alt-1);
	  hPLRD2 = malloc(RES);
	  readimagefile(".\\bttn\\PLRDH2.bmp", 0, 0, H0Lar-1, H0Alt-1);
	  getimage(0, 0, H0Lar-1, H0Alt-1, hPLRD2);
	  
	  RES = imagesize(0, 0, H0Lar-1, H0Alt-1);
	  hPLRD3 = malloc(RES);
	  readimagefile(".\\bttn\\PLRDH3.bmp", 0, 0, H0Lar-1, H0Alt-1);
	  getimage(0, 0, H0Lar-1, H0Alt-1, hPLRD3);
	  
	  RES = imagesize(0, 0, H0Lar-1, H0Alt-1);
	  hPLRD4 = malloc(RES);
	  readimagefile(".\\bttn\\PLRDH4.bmp", 0, 0, H0Lar-1, H0Alt-1);
	  getimage(0, 0, H0Lar-1, H0Alt-1, hPLRD4);
  
  
  RES = imagesize(0, 0, H1Lar-1, H1Alt-1);
  hHUD1 = malloc(RES);
  readimagefile(".\\bttn\\HUD1.bmp", 0, 0, H1Lar-1, H1Alt-1);
  getimage(0, 0, H1Lar-1, H1Alt-1, hHUD1);
		RES = imagesize(0, 0, H1Lar-1, H1Alt-1);
		hHUD1m = malloc(RES);
		readimagefile(".\\bttn\\HUD1m.bmp", 0, 0, H1Lar-1, H1Alt-1);
		getimage(0, 0, H1Lar-1, H1Alt-1, hHUD1m);
		RES = imagesize(0, 0, H1Lar-1, H1Alt-1);
		hHUD1a = malloc(RES);
		readimagefile(".\\bttn\\HUD1a.bmp", 0, 0, H1Lar-1, H1Alt-1);
		getimage(0, 0, H1Lar-1, H1Alt-1, hHUD1a);

  RES = imagesize(0, 0, H2Lar-1, H2Alt-1);
  hHUD2 = malloc(RES);
  readimagefile(".\\bttn\\HUD2.bmp", 0, 0, H2Lar-1, H2Alt-1);
  getimage(0, 0, H2Lar-1, H2Alt-1, hHUD2);
	  RES = imagesize(0, 0, H2Lar-1, H2Alt-1);
	  hHUD2m = malloc(RES);
	  readimagefile(".\\bttn\\HUD2m.bmp", 0, 0, H2Lar-1, H2Alt-1);
	  getimage(0, 0, H2Lar-1, H2Alt-1, hHUD2m);
	  RES = imagesize(0, 0, H2Lar-1, H2Alt-1);
	  hHUD2a = malloc(RES);
	  readimagefile(".\\bttn\\HUD2a.bmp", 0, 0, H2Lar-1, H2Alt-1);
	  getimage(0, 0, H2Lar-1, H2Alt-1, hHUD2a);
	
  RES = imagesize(0, 0, H3Lar-1, H3Alt-1);
  hHUD3 = malloc(RES);
  readimagefile(".\\bttn\\HUD3.bmp", 0, 0, H3Lar-1, H3Alt-1);
  getimage(0, 0, H3Lar-1, H3Alt-1, hHUD3);
	  RES = imagesize(0, 0, H3Lar-1, H3Alt-1);
	  hHUD3m = malloc(RES);
	  readimagefile(".\\bttn\\HUD3m.bmp", 0, 0, H3Lar-1, H3Alt-1);
	  getimage(0, 0, H3Lar-1, H3Alt-1, hHUD3m);
	  RES = imagesize(0, 0, H3Lar-1, H3Alt-1);
	  hHUD3a = malloc(RES);
	  readimagefile(".\\bttn\\HUD3a.bmp", 0, 0, H3Lar-1, H3Alt-1);
	  getimage(0, 0, H3Lar-1, H3Alt-1, hHUD3a);

  RES = imagesize(0, 0, H4Lar-1, H4Alt-1);
  hHUD4 = malloc(RES);
  readimagefile(".\\bttn\\HUD4.bmp", 0, 0, H4Lar-1, H4Alt-1);
  getimage(0, 0, H4Lar-1, H4Alt-1, hHUD4);
	  RES = imagesize(0, 0, H4Lar-1, H4Alt-1);
	  hHUD4m = malloc(RES);
	  readimagefile(".\\bttn\\HUD4m.bmp", 0, 0, H4Lar-1, H4Alt-1);
	  getimage(0, 0, H4Lar-1, H4Alt-1, hHUD4m);
	  RES = imagesize(0, 0, H4Lar-1, H4Alt-1);
	  hHUD4a = malloc(RES);
	  readimagefile(".\\bttn\\HUD4a.bmp", 0, 0, H4Lar-1, H4Alt-1);
	  getimage(0, 0, H4Lar-1, H4Alt-1, hHUD4a);
	  
	  cleardevice();

  WND = GetForegroundWindow();


 while(!END) {
    if (pg == 1) pg = 2; else pg = 1;
    	setactivepage(pg);
    	putimage(0, 0, bkSCENE40, COPY_PUT);  
    
		if (PLRDH1)
			putimage(30, 30, hPLRD1, COPY_PUT);
		  	
		if (PLRDH2)
			putimage(30, 30, hPLRD2, COPY_PUT);

		if (PLRDH3)
			putimage(30, 30, hPLRD3, COPY_PUT);						

		if (PLRDH4)
			putimage(30, 30, hPLRD4, COPY_PUT);		
							
		else
			putimage(30, 30, hPLRD0, OR_PUT);
																	
		
		if (HNDsl){
			putimage(1200, 30, hHUD1m, AND_PUT);
			putimage(1200, 30, hHUD1a, OR_PUT);
		}
		else{
			putimage(1200, 30, hHUD1m, AND_PUT);
			putimage(1200, 30, hHUD1, OR_PUT);			
		}
		
		if (HND){
			putimage(P.x-25, P.y-31, hHUD1m, AND_PUT);
			putimage(P.x-25, P.y-31, hHUD1, OR_PUT);			
		}
		
		if (LPAsl){
			putimage(1200, 110, hHUD2m, AND_PUT);
			putimage(1200, 110, hHUD2a, OR_PUT);
		}
		else{
			putimage(1200, 110, hHUD2m, AND_PUT);
    		putimage(1200, 110, hHUD2, OR_PUT);
		}
		
		if (LPA){
			putimage(P.x-25, P.y-25, hHUD2m, AND_PUT);
			putimage(P.x-25, P.y-25, hHUD2, OR_PUT);
		}
		
		if (DCKsl){
			putimage(1200, 180, hHUD3m, AND_PUT);
    		putimage(1200, 180, hHUD3a, OR_PUT);
		}
		else{
			putimage(1200, 180, hHUD3m, AND_PUT);
    		putimage(1200, 180, hHUD3, OR_PUT);
		}
				
		if (TABsl){
			putimage(1200, 650, hHUD4m, AND_PUT);
			putimage(1200, 650, hHUD4a, OR_PUT);
		}
		else{
			putimage(1200, 650, hHUD4m, AND_PUT);
			putimage(1200, 650, hHUD4, OR_PUT);
		}
			
		if (GetCursorPos(&P)){
		  	if (ScreenToClient(WND, &P)){

				HNDsl = false;
			if (1200 <= P.x && P.x <= 1200+H1Lar-1 && 30 <= P.y && P.y <= 30+H1Alt-1)
				HNDsl = true;

				LPAsl = false;
			if (1200 <= P.x && P.x <= 1200+H2Lar-1 && 110 <= P.y && P.y <= 110+H2Alt-1)
				LPAsl = true;

				DCKsl = false;
			if (1200 <= P.x && P.x <= 1200+H3Lar-1 && 180 <= P.y && P.y <= 180+H3Alt-1)
				DCKsl = true;

				TABsl = false;
			if (1200 <= P.x && P.x <= 1200+H4Lar-1 && 650 <= P.y && P.y <= 650+H4Alt-1)
				TABsl = true;				

			if (GetKeyState(VK_LBUTTON)&0x80) {
							
				if (HND && 772 <= P.x && P.x <= 772+18 && 427 <= P.y && P.y <= 427+79){
					SCENE41();
					END = true;
				}
				
					HND = false;
				if (1200 <= P.x && P.x <= 1200+H1Lar-1 && 30 <= P.y && P.y <= 30+H1Alt-1){
					HND = true;

				}
					
					LPA = false;
				if (1200 <= P.x && P.x <= 1200+H2Lar-1 && 110 <= P.y && P.y <= 110+H2Alt-1){
					LPA = true;

				}
					
				if (1200 <= P.x && P.x <= 1200+H4Lar-1 && 650 <= P.y && P.y <= 650+H4Alt-1){
					mciSendString("close beco", NULL, 0, 0);
					TAB();
					END = true;
				}							
			}			
			}
		}
   	
    	
    	setvisualpage(pg);
        	
    	if (GetKeyState(0x1B)&0x80){
		//
    	}	
	}
}

void SCENE41(){

	POINT P;
  	HWND WND;
  	bool HNDsl = false;
  	bool HND = false;
  	bool LPAsl = false;
  	bool LPA = false;
  	bool DCKsl = false;
  	bool TABsl = false;;
	bool CARD7 = false;
	bool END = false;
	
	int pg = 1;
	char tecla;
	int RES, i;
	void *bkSCENE41, *hPLRD0, *hPLRD1, *hPLRD2, *hPLRD3, *hPLRD4, *cdCARD0;
	void *hHUD1, *hHUD2, *hHUD3, *hHUD4, *hHUD1m, *hHUD2m, *hHUD3m, *hHUD4m, *hHUD1a, *hHUD2a, *hHUD3a, *hHUD4a;
	void *cCARD7, *cCARD0m, *chPST4;
	
  RES = imagesize(0, 0, RLar-1, RAlt-1);
  bkSCENE41 = malloc(RES);
  readimagefile(".\\scene\\SCENE4-1.bmp", 0, 0, JLar-1, JAlt-1);
  getimage(0, 0, JLar-1, JAlt-1, bkSCENE41);
  
  RES = imagesize(0, 0, H0Lar-1, H0Alt-1);
  hPLRD0 = malloc(RES);
  readimagefile(".\\bttn\\PLRD0.bmp", 0, 0, H0Lar-1, H0Alt-1);
  getimage(0, 0, H0Lar-1, H0Alt-1, hPLRD0);
	  RES = imagesize(0, 0, H0Lar-1, H0Alt-1);
	  hPLRD1 = malloc(RES);
	  readimagefile(".\\bttn\\PLRDH1.bmp", 0, 0, H0Lar-1, H0Alt-1);
	  getimage(0, 0, H0Lar-1, H0Alt-1, hPLRD1);
	  
	  RES = imagesize(0, 0, H0Lar-1, H0Alt-1);
	  hPLRD2 = malloc(RES);
	  readimagefile(".\\bttn\\PLRDH2.bmp", 0, 0, H0Lar-1, H0Alt-1);
	  getimage(0, 0, H0Lar-1, H0Alt-1, hPLRD2);
	  
	  RES = imagesize(0, 0, H0Lar-1, H0Alt-1);
	  hPLRD3 = malloc(RES);
	  readimagefile(".\\bttn\\PLRDH3.bmp", 0, 0, H0Lar-1, H0Alt-1);
	  getimage(0, 0, H0Lar-1, H0Alt-1, hPLRD3);
	  
	  RES = imagesize(0, 0, H0Lar-1, H0Alt-1);
	  hPLRD4 = malloc(RES);
	  readimagefile(".\\bttn\\PLRDH4.bmp", 0, 0, H0Lar-1, H0Alt-1);
	  getimage(0, 0, H0Lar-1, H0Alt-1, hPLRD4);
  
  
  RES = imagesize(0, 0, H1Lar-1, H1Alt-1);
  hHUD1 = malloc(RES);
  readimagefile(".\\bttn\\HUD1.bmp", 0, 0, H1Lar-1, H1Alt-1);
  getimage(0, 0, H1Lar-1, H1Alt-1, hHUD1);
		RES = imagesize(0, 0, H1Lar-1, H1Alt-1);
		hHUD1m = malloc(RES);
		readimagefile(".\\bttn\\HUD1m.bmp", 0, 0, H1Lar-1, H1Alt-1);
		getimage(0, 0, H1Lar-1, H1Alt-1, hHUD1m);
		RES = imagesize(0, 0, H1Lar-1, H1Alt-1);
		hHUD1a = malloc(RES);
		readimagefile(".\\bttn\\HUD1a.bmp", 0, 0, H1Lar-1, H1Alt-1);
		getimage(0, 0, H1Lar-1, H1Alt-1, hHUD1a);

  RES = imagesize(0, 0, H2Lar-1, H2Alt-1);
  hHUD2 = malloc(RES);
  readimagefile(".\\bttn\\HUD2.bmp", 0, 0, H2Lar-1, H2Alt-1);
  getimage(0, 0, H2Lar-1, H2Alt-1, hHUD2);
	  RES = imagesize(0, 0, H2Lar-1, H2Alt-1);
	  hHUD2m = malloc(RES);
	  readimagefile(".\\bttn\\HUD2m.bmp", 0, 0, H2Lar-1, H2Alt-1);
	  getimage(0, 0, H2Lar-1, H2Alt-1, hHUD2m);
	  RES = imagesize(0, 0, H2Lar-1, H2Alt-1);
	  hHUD2a = malloc(RES);
	  readimagefile(".\\bttn\\HUD2a.bmp", 0, 0, H2Lar-1, H2Alt-1);
	  getimage(0, 0, H2Lar-1, H2Alt-1, hHUD2a);
	
  RES = imagesize(0, 0, H3Lar-1, H3Alt-1);
  hHUD3 = malloc(RES);
  readimagefile(".\\bttn\\HUD3.bmp", 0, 0, H3Lar-1, H3Alt-1);
  getimage(0, 0, H3Lar-1, H3Alt-1, hHUD3);
	  RES = imagesize(0, 0, H3Lar-1, H3Alt-1);
	  hHUD3m = malloc(RES);
	  readimagefile(".\\bttn\\HUD3m.bmp", 0, 0, H3Lar-1, H3Alt-1);
	  getimage(0, 0, H3Lar-1, H3Alt-1, hHUD3m);
	  RES = imagesize(0, 0, H3Lar-1, H3Alt-1);
	  hHUD3a = malloc(RES);
	  readimagefile(".\\bttn\\HUD3a.bmp", 0, 0, H3Lar-1, H3Alt-1);
	  getimage(0, 0, H3Lar-1, H3Alt-1, hHUD3a);

  RES = imagesize(0, 0, H4Lar-1, H4Alt-1);
  hHUD4 = malloc(RES);
  readimagefile(".\\bttn\\HUD4.bmp", 0, 0, H4Lar-1, H4Alt-1);
  getimage(0, 0, H4Lar-1, H4Alt-1, hHUD4);
	  RES = imagesize(0, 0, H4Lar-1, H4Alt-1);
	  hHUD4m = malloc(RES);
	  readimagefile(".\\bttn\\HUD4m.bmp", 0, 0, H4Lar-1, H4Alt-1);
	  getimage(0, 0, H4Lar-1, H4Alt-1, hHUD4m);
	  RES = imagesize(0, 0, H4Lar-1, H4Alt-1);
	  hHUD4a = malloc(RES);
	  readimagefile(".\\bttn\\HUD4a.bmp", 0, 0, H4Lar-1, H4Alt-1);
	  getimage(0, 0, H4Lar-1, H4Alt-1, hHUD4a);
	  
  RES = imagesize(0, 0, CLar-1, CAlt-1);
  cCARD7 = malloc(RES);
  readimagefile(".\\card\\CARD7.bmp", 0, 0, CLar-1, CAlt-1);
  getimage(0, 0, CLar-1, CAlt-1, cCARD7);
  		RES = imagesize(0, 0, CLar-1, CAlt-1);
  		cCARD0m = malloc(RES);
  		readimagefile(".\\card\\CARD0m.bmp", 0, 0, CLar-1, CAlt-1);
  		getimage(0, 0, CLar-1, CAlt-1, cCARD0m);
  		
  RES = imagesize(0, 0, PTLar-1, PTAlt-1);
  chPST4 = malloc(RES);
  readimagefile(".\\bttn\\PST4.bmp", 0, 0, PTLar-1, PTAlt-1);
  getimage(0, 0, PTLar-1, PTAlt-1, chPST4);

	  cleardevice();

  WND = GetForegroundWindow();


 while(!END) {
    if (pg == 1) pg = 2; else pg = 1;
    	setactivepage(pg);
    	putimage(0, 0, bkSCENE41, COPY_PUT);   
    
		if (PLRDH1)
			putimage(30, 30, hPLRD1, COPY_PUT);
		  	
		if (PLRDH2)
			putimage(30, 30, hPLRD2, COPY_PUT);

		if (PLRDH3)
			putimage(30, 30, hPLRD3, COPY_PUT);						

		if (PLRDH4)
			putimage(30, 30, hPLRD4, COPY_PUT);		
							
		else
			putimage(30, 30, hPLRD0, OR_PUT);
																	
		
		if (HNDsl){
			putimage(1200, 30, hHUD1m, AND_PUT);
			putimage(1200, 30, hHUD1a, OR_PUT);
		}
		else{
			putimage(1200, 30, hHUD1m, AND_PUT);
			putimage(1200, 30, hHUD1, OR_PUT);			
		}
		
		if (HND){
			putimage(P.x-25, P.y-31, hHUD1m, AND_PUT);
			putimage(P.x-25, P.y-31, hHUD1, OR_PUT);			
		}
		
		if (LPAsl){
			putimage(1200, 110, hHUD2m, AND_PUT);
			putimage(1200, 110, hHUD2a, OR_PUT);
		}
		else{
			putimage(1200, 110, hHUD2m, AND_PUT);
    		putimage(1200, 110, hHUD2, OR_PUT);
		}
		
		if (LPA){
			putimage(P.x-25, P.y-25, hHUD2m, AND_PUT);
			putimage(P.x-25, P.y-25, hHUD2, OR_PUT);
		}
		
		if (DCKsl){
			putimage(1200, 180, hHUD3m, AND_PUT);
    		putimage(1200, 180, hHUD3a, OR_PUT);
		}
		else{
			putimage(1200, 180, hHUD3m, AND_PUT);
    		putimage(1200, 180, hHUD3, OR_PUT);
		}
				
		if (TABsl){
			putimage(1200, 650, hHUD4m, AND_PUT);
			putimage(1200, 650, hHUD4a, OR_PUT);
		}
		else{
			putimage(1200, 650, hHUD4m, AND_PUT);
			putimage(1200, 650, hHUD4, OR_PUT);
		}
		
		if (CARD7){
			putimage(30, 170, cCARD0m, AND_PUT);
			putimage(30, 170, cCARD7, OR_PUT);
			putimage(120, 30, chPST4, OR_PUT);
		}
		
		if (CARD7S){
			putimage(120, 30, chCLLT[0], OR_PUT);
			CARD7 = false;
		}
			
		if (GetCursorPos(&P)){
		  	if (ScreenToClient(WND, &P)){

				LPAsl = false;
			if (1200 <= P.x && P.x <= 1200+H2Lar-1 && 110 <= P.y && P.y <= 110+H2Alt-1)
				LPAsl = true;

				DCKsl = false;
			if (1200 <= P.x && P.x <= 1200+H3Lar-1 && 180 <= P.y && P.y <= 180+H3Alt-1)
				DCKsl = true;

				TABsl = false;
			if (1200 <= P.x && P.x <= 1200+H4Lar-1 && 650 <= P.y && P.y <= 650+H4Alt-1)
				TABsl = true;				

			if (GetKeyState(VK_LBUTTON)&0x80) {
							
					DCKsl = false;
				if (CARD7 && 1200 <= P.x && P.x <= 1200+H3Lar-1 && 180 <= P.y && P.y <= 180+H3Alt-1){
					DCKsl = true;	
					CARD7S = true;
				}
			
				
				
				if (LPA && 851 <= P.x && P.x <= 851+5 && 557 <= P.y && P.y <= 557+21){
					CARD7 = true;
				}
				
					HND = false;
				if (1200 <= P.x && P.x <= 1200+H1Lar-1 && 30 <= P.y && P.y <= 30+H1Alt-1){
					HND = true;

				}
					
					LPA = false;
				if (1200 <= P.x && P.x <= 1200+H2Lar-1 && 110 <= P.y && P.y <= 110+H2Alt-1){
					LPA = true;

				}
					
				if (1200 <= P.x && P.x <= 1200+H4Lar-1 && 650 <= P.y && P.y <= 650+H4Alt-1){
					mciSendString("close beco", NULL, 0, 0);
					TAB();
					END = true;
				}							
			}			
			}
		}
   	
    	
    	setvisualpage(pg);
        	
    	if (GetKeyState(0x1B)&0x80){
		//
    	}	
	}
}

void SCENE50(){
	
	#define CHAT5	 2
	
	CHLar = 265;
	CHAlt = 95*CHAT5;

	POINT P;
  	HWND WND;
  	bool HNDsl = false;
  	bool HND = false;
  	bool LPAsl = false;
  	bool LPA = false;
  	bool DCKsl = false;
  	bool TABsl = false;
  	bool CHT0 = false;
	bool CHT1 = false;
	bool GLSS = false;
	bool GLSSs = false;
	bool GLSSa = false;
	bool END = false;
	
	int pg = 1;
	char tecla;
	int RES, i;
	void *bkSCENE50, *hPLRD0, *hPLRD1, *hPLRD2, *hPLRD3, *hPLRD4, *cdCARD0;
	void *hHUD1, *hHUD2, *hHUD3, *hHUD4, *hHUD1m, *hHUD2m, *hHUD3m, *hHUD4m, *hHUD1a, *hHUD2a, *hHUD3a, *hHUD4a;
	void *gGLSS, *gGLSSm, *gGLSSa;
	void *chCHAT5[CHAT5];
	
  RES = imagesize(0, 0, RLar-1, RAlt-1);
  bkSCENE50 = malloc(RES);
  readimagefile(".\\scene\\SCENE5-0.bmp", 0, 0, JLar-1, JAlt-1);
  getimage(0, 0, JLar-1, JAlt-1, bkSCENE50);
  
  RES = imagesize(0, 0, H0Lar-1, H0Alt-1);
  hPLRD0 = malloc(RES);
  readimagefile(".\\bttn\\PLRD0.bmp", 0, 0, H0Lar-1, H0Alt-1);
  getimage(0, 0, H0Lar-1, H0Alt-1, hPLRD0);
	  RES = imagesize(0, 0, H0Lar-1, H0Alt-1);
	  hPLRD1 = malloc(RES);
	  readimagefile(".\\bttn\\PLRDH1.bmp", 0, 0, H0Lar-1, H0Alt-1);
	  getimage(0, 0, H0Lar-1, H0Alt-1, hPLRD1);
	  
	  RES = imagesize(0, 0, H0Lar-1, H0Alt-1);
	  hPLRD2 = malloc(RES);
	  readimagefile(".\\bttn\\PLRDH2.bmp", 0, 0, H0Lar-1, H0Alt-1);
	  getimage(0, 0, H0Lar-1, H0Alt-1, hPLRD2);
	  
	  RES = imagesize(0, 0, H0Lar-1, H0Alt-1);
	  hPLRD3 = malloc(RES);
	  readimagefile(".\\bttn\\PLRDH3.bmp", 0, 0, H0Lar-1, H0Alt-1);
	  getimage(0, 0, H0Lar-1, H0Alt-1, hPLRD3);
	  
	  RES = imagesize(0, 0, H0Lar-1, H0Alt-1);
	  hPLRD4 = malloc(RES);
	  readimagefile(".\\bttn\\PLRDH4.bmp", 0, 0, H0Lar-1, H0Alt-1);
	  getimage(0, 0, H0Lar-1, H0Alt-1, hPLRD4);
  
  
  RES = imagesize(0, 0, H1Lar-1, H1Alt-1);
  hHUD1 = malloc(RES);
  readimagefile(".\\bttn\\HUD1.bmp", 0, 0, H1Lar-1, H1Alt-1);
  getimage(0, 0, H1Lar-1, H1Alt-1, hHUD1);
		RES = imagesize(0, 0, H1Lar-1, H1Alt-1);
		hHUD1m = malloc(RES);
		readimagefile(".\\bttn\\HUD1m.bmp", 0, 0, H1Lar-1, H1Alt-1);
		getimage(0, 0, H1Lar-1, H1Alt-1, hHUD1m);
		RES = imagesize(0, 0, H1Lar-1, H1Alt-1);
		hHUD1a = malloc(RES);
		readimagefile(".\\bttn\\HUD1a.bmp", 0, 0, H1Lar-1, H1Alt-1);
		getimage(0, 0, H1Lar-1, H1Alt-1, hHUD1a);

  RES = imagesize(0, 0, H2Lar-1, H2Alt-1);
  hHUD2 = malloc(RES);
  readimagefile(".\\bttn\\HUD2.bmp", 0, 0, H2Lar-1, H2Alt-1);
  getimage(0, 0, H2Lar-1, H2Alt-1, hHUD2);
	  RES = imagesize(0, 0, H2Lar-1, H2Alt-1);
	  hHUD2m = malloc(RES);
	  readimagefile(".\\bttn\\HUD2m.bmp", 0, 0, H2Lar-1, H2Alt-1);
	  getimage(0, 0, H2Lar-1, H2Alt-1, hHUD2m);
	  RES = imagesize(0, 0, H2Lar-1, H2Alt-1);
	  hHUD2a = malloc(RES);
	  readimagefile(".\\bttn\\HUD2a.bmp", 0, 0, H2Lar-1, H2Alt-1);
	  getimage(0, 0, H2Lar-1, H2Alt-1, hHUD2a);
	
  RES = imagesize(0, 0, H3Lar-1, H3Alt-1);
  hHUD3 = malloc(RES);
  readimagefile(".\\bttn\\HUD3.bmp", 0, 0, H3Lar-1, H3Alt-1);
  getimage(0, 0, H3Lar-1, H3Alt-1, hHUD3);
	  RES = imagesize(0, 0, H3Lar-1, H3Alt-1);
	  hHUD3m = malloc(RES);
	  readimagefile(".\\bttn\\HUD3m.bmp", 0, 0, H3Lar-1, H3Alt-1);
	  getimage(0, 0, H3Lar-1, H3Alt-1, hHUD3m);
	  RES = imagesize(0, 0, H3Lar-1, H3Alt-1);
	  hHUD3a = malloc(RES);
	  readimagefile(".\\bttn\\HUD3a.bmp", 0, 0, H3Lar-1, H3Alt-1);
	  getimage(0, 0, H3Lar-1, H3Alt-1, hHUD3a);

  RES = imagesize(0, 0, H4Lar-1, H4Alt-1);
  hHUD4 = malloc(RES);
  readimagefile(".\\bttn\\HUD4.bmp", 0, 0, H4Lar-1, H4Alt-1);
  getimage(0, 0, H4Lar-1, H4Alt-1, hHUD4);
	  RES = imagesize(0, 0, H4Lar-1, H4Alt-1);
	  hHUD4m = malloc(RES);
	  readimagefile(".\\bttn\\HUD4m.bmp", 0, 0, H4Lar-1, H4Alt-1);
	  getimage(0, 0, H4Lar-1, H4Alt-1, hHUD4m);
	  RES = imagesize(0, 0, H4Lar-1, H4Alt-1);
	  hHUD4a = malloc(RES);
	  readimagefile(".\\bttn\\HUD4a.bmp", 0, 0, H4Lar-1, H4Alt-1);
	  getimage(0, 0, H4Lar-1, H4Alt-1, hHUD4a);
	  
  RES = imagesize(0, 0, GLar-1, GAlt-1);
  gGLSS = malloc(RES);
  readimagefile(".\\bttn\\GLSS.bmp", 0, 0, GLar-1, GAlt-1);
  getimage(0, 0, GLar-1, GAlt-1, gGLSS);
	  RES = imagesize(0, 0, GLar-1, GAlt-1);
	  gGLSSm = malloc(RES);
	  readimagefile(".\\bttn\\GLSSm.bmp", 0, 0, GLar-1, GAlt-1);
	  getimage(0, 0, GLar-1, GAlt-1, gGLSSm);
	  RES = imagesize(0, 0, GLar-1, GAlt-1);
	  gGLSSa = malloc(RES);
	  readimagefile(".\\bttn\\GLSSa.bmp", 0, 0, GLar-1, GAlt-1);
	  getimage(0, 0, GLar-1, GAlt-1, gGLSSa);
	  
	  
  RES = imagesize(0, 0, CHLar-1, CHAlt-1);
  for (i = 0; i < CHAT5; i++){
  chCHAT5[i] = malloc(RES);
  }
  readimagefile(".\\bttn\\CHAT5.bmp", 0, 0, CHLar-1, CHAlt-1);
  for (i = 0; i < CHAT5; i++){
  getimage(0, 95*i, CHLar-1, 94+95*i, chCHAT5[i]);
  }

	  cleardevice();

  WND = GetForegroundWindow();


 while(!END) {
    if (pg == 1) pg = 2; else pg = 1;
    	setactivepage(pg);
    	putimage(0, 0, bkSCENE50, COPY_PUT);  
    
		if (PLRDH1)
			putimage(30, 30, hPLRD1, COPY_PUT);
		  	
		if (PLRDH2)
			putimage(30, 30, hPLRD2, COPY_PUT);

		if (PLRDH3)
			putimage(30, 30, hPLRD3, COPY_PUT);						

		if (PLRDH4)
			putimage(30, 30, hPLRD4, COPY_PUT);		
							
		else
			putimage(30, 30, hPLRD0, OR_PUT);
																	
		
		if (HNDsl){
			putimage(1200, 30, hHUD1m, AND_PUT);
			putimage(1200, 30, hHUD1a, OR_PUT);
		}
		else{
			putimage(1200, 30, hHUD1m, AND_PUT);
			putimage(1200, 30, hHUD1, OR_PUT);			
		}
		
		if (HND){
			putimage(P.x-25, P.y-31, hHUD1m, AND_PUT);
			putimage(P.x-25, P.y-31, hHUD1, OR_PUT);			
		}
		
		if (LPAsl){
			putimage(1200, 110, hHUD2m, AND_PUT);
			putimage(1200, 110, hHUD2a, OR_PUT);
		}
		else{
			putimage(1200, 110, hHUD2m, AND_PUT);
    		putimage(1200, 110, hHUD2, OR_PUT);
		}
		
		if (LPA){
			putimage(P.x-25, P.y-25, hHUD2m, AND_PUT);
			putimage(P.x-25, P.y-25, hHUD2, OR_PUT);
		}
		
		if (DCKsl){
			putimage(1200, 180, hHUD3m, AND_PUT);
    		putimage(1200, 180, hHUD3a, OR_PUT);
		}
		else{
			putimage(1200, 180, hHUD3m, AND_PUT);
    		putimage(1200, 180, hHUD3, OR_PUT);
		}
				
		if (TABsl){
			putimage(1200, 650, hHUD4m, AND_PUT);
			putimage(1200, 650, hHUD4a, OR_PUT);
		}
		else{
			putimage(1200, 650, hHUD4m, AND_PUT);
			putimage(1200, 650, hHUD4, OR_PUT);
		}
		
		if (GLSSa){
			if (GLSSs){
				putimage(1200, 270, gGLSSm, AND_PUT);
				putimage(1200, 270, gGLSSa, OR_PUT);
			}
			else{
				putimage(1200, 270, gGLSSm, AND_PUT);
				putimage(1200, 270, gGLSS, OR_PUT);
			}
		}
		
		if (GLSS){
			putimage(P.x-38, P.y-16, gGLSSm, AND_PUT);
			putimage(P.x-38, P.y-16, gGLSS, OR_PUT);
		}
		
		if (CHT0){
			putimage(120, 30, chCHAT5[0], OR_PUT);
		}
		
		if (CHT1){
			putimage(120, 30, chCHAT5[1], OR_PUT);
		}
		
			
		if (GetCursorPos(&P)){
		  	if (ScreenToClient(WND, &P)){

				HNDsl = false;
			if (1200 <= P.x && P.x <= 1200+H1Lar-1 && 30 <= P.y && P.y <= 30+H1Alt-1)
				HNDsl = true;

				LPAsl = false;
			if (1200 <= P.x && P.x <= 1200+H2Lar-1 && 110 <= P.y && P.y <= 110+H2Alt-1)
				LPAsl = true;

				DCKsl = false;
			if (1200 <= P.x && P.x <= 1200+H3Lar-1 && 180 <= P.y && P.y <= 180+H3Alt-1)
				DCKsl = true;

				TABsl = false;
			if (1200 <= P.x && P.x <= 1200+H4Lar-1 && 650 <= P.y && P.y <= 650+H4Alt-1)
				TABsl = true;	
				
				GLSSs = false;
			if (1200 <= P.x && P.x <= 1200+GLar-1 && 270 <= P.y && P.y <= 270+GAlt-1)
				GLSSs = true;			

			if (GetKeyState(VK_LBUTTON)&0x80) {
							
				if (HND && 586 <= P.x && P.x <= 586+125 && 321 <= P.y && P.y <= 321+135){
					CHT0 = true;
				}
				
				if (HND && 369 <= P.x && P.x <= 369+47 && 182 <= P.y && P.y <= 182+157){
					CHT1 = true;
				}
				
				if (HND && 911 <= P.x && P.x <= 911+50 && 498 <= P.y && P.y <= 498+56){
					GLSSa = true;
				}
				
				if (GLSS && 369 <= P.x && P.x <= 369+47 && 182 <= P.y && P.y <= 182+157){
					SCENE51();
					END = true;
				}
				
					GLSS = false;
				if (1200 <= P.x && P.x <= 1200+GLar-1 && 270 <= P.y && P.y <= 270+GAlt-1){
					GLSS = true;
					CHT0 = false;
					CHT1 = false;					
				}	
						
					HND = false;
				if (1200 <= P.x && P.x <= 1200+H1Lar-1 && 30 <= P.y && P.y <= 30+H1Alt-1){
					HND = true;
					CHT0 = false;
					CHT1 = false;
				}
					
					LPA = false;
				if (1200 <= P.x && P.x <= 1200+H2Lar-1 && 110 <= P.y && P.y <= 110+H2Alt-1){
					LPA = true;
					CHT0 = false;
					CHT1 = false;
				}
					
				if (1200 <= P.x && P.x <= 1200+H4Lar-1 && 650 <= P.y && P.y <= 650+H4Alt-1){
					mciSendString("close hospital", NULL, 0, 0);
					TAB();
					END = true;
				}							
			}			
			}
		}
   	
    	
    	setvisualpage(pg);
        	
    	if (GetKeyState(0x1B)&0x80){
		//
    	}	
	}
}

void SCENE51(){

	POINT P;
  	HWND WND;
  	bool HNDsl = false;
  	bool HND = false;
  	bool LPAsl = false;
  	bool LPA = false;
  	bool DCKsl = false;
  	bool TABsl = false;
  	bool CHT0 = false;
	bool CHT1 = false;
	bool CHT2 = false;
	bool CHT3 = false;
	bool CARD16 = false;
	bool END = false;
	
	int pg = 1;
	char tecla;
	int RES, i;
	void *bkSCENE51, *hPLRD0, *hPLRD1, *hPLRD2, *hPLRD3, *hPLRD4, *cdCARD0;
	void *hHUD1, *hHUD2, *hHUD3, *hHUD4, *hHUD1m, *hHUD2m, *hHUD3m, *hHUD4m, *hHUD1a, *hHUD2a, *hHUD3a, *hHUD4a;
	void *cCARD0m, *cCARD16, *chPST5;
	
  RES = imagesize(0, 0, RLar-1, RAlt-1);
  bkSCENE51 = malloc(RES);
  readimagefile(".\\scene\\SCENE5-1.bmp", 0, 0, JLar-1, JAlt-1);
  getimage(0, 0, JLar-1, JAlt-1, bkSCENE51);
  
  RES = imagesize(0, 0, H0Lar-1, H0Alt-1);
  hPLRD0 = malloc(RES);
  readimagefile(".\\bttn\\PLRD0.bmp", 0, 0, H0Lar-1, H0Alt-1);
  getimage(0, 0, H0Lar-1, H0Alt-1, hPLRD0);
	  RES = imagesize(0, 0, H0Lar-1, H0Alt-1);
	  hPLRD1 = malloc(RES);
	  readimagefile(".\\bttn\\PLRDH1.bmp", 0, 0, H0Lar-1, H0Alt-1);
	  getimage(0, 0, H0Lar-1, H0Alt-1, hPLRD1);
	  
	  RES = imagesize(0, 0, H0Lar-1, H0Alt-1);
	  hPLRD2 = malloc(RES);
	  readimagefile(".\\bttn\\PLRDH2.bmp", 0, 0, H0Lar-1, H0Alt-1);
	  getimage(0, 0, H0Lar-1, H0Alt-1, hPLRD2);
	  
	  RES = imagesize(0, 0, H0Lar-1, H0Alt-1);
	  hPLRD3 = malloc(RES);
	  readimagefile(".\\bttn\\PLRDH3.bmp", 0, 0, H0Lar-1, H0Alt-1);
	  getimage(0, 0, H0Lar-1, H0Alt-1, hPLRD3);
	  
	  RES = imagesize(0, 0, H0Lar-1, H0Alt-1);
	  hPLRD4 = malloc(RES);
	  readimagefile(".\\bttn\\PLRDH4.bmp", 0, 0, H0Lar-1, H0Alt-1);
	  getimage(0, 0, H0Lar-1, H0Alt-1, hPLRD4);
  
  
  RES = imagesize(0, 0, H1Lar-1, H1Alt-1);
  hHUD1 = malloc(RES);
  readimagefile(".\\bttn\\HUD1.bmp", 0, 0, H1Lar-1, H1Alt-1);
  getimage(0, 0, H1Lar-1, H1Alt-1, hHUD1);
		RES = imagesize(0, 0, H1Lar-1, H1Alt-1);
		hHUD1m = malloc(RES);
		readimagefile(".\\bttn\\HUD1m.bmp", 0, 0, H1Lar-1, H1Alt-1);
		getimage(0, 0, H1Lar-1, H1Alt-1, hHUD1m);
		RES = imagesize(0, 0, H1Lar-1, H1Alt-1);
		hHUD1a = malloc(RES);
		readimagefile(".\\bttn\\HUD1a.bmp", 0, 0, H1Lar-1, H1Alt-1);
		getimage(0, 0, H1Lar-1, H1Alt-1, hHUD1a);

  RES = imagesize(0, 0, H2Lar-1, H2Alt-1);
  hHUD2 = malloc(RES);
  readimagefile(".\\bttn\\HUD2.bmp", 0, 0, H2Lar-1, H2Alt-1);
  getimage(0, 0, H2Lar-1, H2Alt-1, hHUD2);
	  RES = imagesize(0, 0, H2Lar-1, H2Alt-1);
	  hHUD2m = malloc(RES);
	  readimagefile(".\\bttn\\HUD2m.bmp", 0, 0, H2Lar-1, H2Alt-1);
	  getimage(0, 0, H2Lar-1, H2Alt-1, hHUD2m);
	  RES = imagesize(0, 0, H2Lar-1, H2Alt-1);
	  hHUD2a = malloc(RES);
	  readimagefile(".\\bttn\\HUD2a.bmp", 0, 0, H2Lar-1, H2Alt-1);
	  getimage(0, 0, H2Lar-1, H2Alt-1, hHUD2a);
	
  RES = imagesize(0, 0, H3Lar-1, H3Alt-1);
  hHUD3 = malloc(RES);
  readimagefile(".\\bttn\\HUD3.bmp", 0, 0, H3Lar-1, H3Alt-1);
  getimage(0, 0, H3Lar-1, H3Alt-1, hHUD3);
	  RES = imagesize(0, 0, H3Lar-1, H3Alt-1);
	  hHUD3m = malloc(RES);
	  readimagefile(".\\bttn\\HUD3m.bmp", 0, 0, H3Lar-1, H3Alt-1);
	  getimage(0, 0, H3Lar-1, H3Alt-1, hHUD3m);
	  RES = imagesize(0, 0, H3Lar-1, H3Alt-1);
	  hHUD3a = malloc(RES);
	  readimagefile(".\\bttn\\HUD3a.bmp", 0, 0, H3Lar-1, H3Alt-1);
	  getimage(0, 0, H3Lar-1, H3Alt-1, hHUD3a);

  RES = imagesize(0, 0, H4Lar-1, H4Alt-1);
  hHUD4 = malloc(RES);
  readimagefile(".\\bttn\\HUD4.bmp", 0, 0, H4Lar-1, H4Alt-1);
  getimage(0, 0, H4Lar-1, H4Alt-1, hHUD4);
	  RES = imagesize(0, 0, H4Lar-1, H4Alt-1);
	  hHUD4m = malloc(RES);
	  readimagefile(".\\bttn\\HUD4m.bmp", 0, 0, H4Lar-1, H4Alt-1);
	  getimage(0, 0, H4Lar-1, H4Alt-1, hHUD4m);
	  RES = imagesize(0, 0, H4Lar-1, H4Alt-1);
	  hHUD4a = malloc(RES);
	  readimagefile(".\\bttn\\HUD4a.bmp", 0, 0, H4Lar-1, H4Alt-1);
	  getimage(0, 0, H4Lar-1, H4Alt-1, hHUD4a);
	  
  RES = imagesize(0, 0, CLar-1, CAlt-1);
  cCARD16 = malloc(RES);
  readimagefile(".\\card\\CARD16.bmp", 0, 0, CLar-1, CAlt-1);
  getimage(0, 0, CLar-1, CAlt-1, cCARD16);
  		RES = imagesize(0, 0, CLar-1, CAlt-1);
  		cCARD0m = malloc(RES);
  		readimagefile(".\\card\\CARD0m.bmp", 0, 0, CLar-1, CAlt-1);
  		getimage(0, 0, CLar-1, CAlt-1, cCARD0m);
  		
  RES = imagesize(0, 0, PTLar-1, PTAlt-1);
  chPST5 = malloc(RES);
  readimagefile(".\\bttn\\PST5.bmp", 0, 0, PTLar-1, PTAlt-1);
  getimage(0, 0, PTLar-1, PTAlt-1, chPST5);

	  cleardevice();

  WND = GetForegroundWindow();


 while(!END) {
    if (pg == 1) pg = 2; else pg = 1;
    	setactivepage(pg);
    	putimage(0, 0, bkSCENE51, COPY_PUT);  
    
		if (PLRDH1)
			putimage(30, 30, hPLRD1, COPY_PUT);
		  	
		if (PLRDH2)
			putimage(30, 30, hPLRD2, COPY_PUT);

		if (PLRDH3)
			putimage(30, 30, hPLRD3, COPY_PUT);						

		if (PLRDH4)
			putimage(30, 30, hPLRD4, COPY_PUT);		
							
		else
			putimage(30, 30, hPLRD0, OR_PUT);
																	
		
		if (HNDsl){
			putimage(1200, 30, hHUD1m, AND_PUT);
			putimage(1200, 30, hHUD1a, OR_PUT);
		}
		else{
			putimage(1200, 30, hHUD1m, AND_PUT);
			putimage(1200, 30, hHUD1, OR_PUT);			
		}
		
		if (HND){
			putimage(P.x-25, P.y-31, hHUD1m, AND_PUT);
			putimage(P.x-25, P.y-31, hHUD1, OR_PUT);			
		}
		
		if (LPAsl){
			putimage(1200, 110, hHUD2m, AND_PUT);
			putimage(1200, 110, hHUD2a, OR_PUT);
		}
		else{
			putimage(1200, 110, hHUD2m, AND_PUT);
    		putimage(1200, 110, hHUD2, OR_PUT);
		}
		
		if (LPA){
			putimage(P.x-25, P.y-25, hHUD2m, AND_PUT);
			putimage(P.x-25, P.y-25, hHUD2, OR_PUT);
		}
		
		if (DCKsl){
			putimage(1200, 180, hHUD3m, AND_PUT);
    		putimage(1200, 180, hHUD3a, OR_PUT);
		}
		else{
			putimage(1200, 180, hHUD3m, AND_PUT);
    		putimage(1200, 180, hHUD3, OR_PUT);
		}
				
		if (TABsl){
			putimage(1200, 650, hHUD4m, AND_PUT);
			putimage(1200, 650, hHUD4a, OR_PUT);
		}
		else{
			putimage(1200, 650, hHUD4m, AND_PUT);
			putimage(1200, 650, hHUD4, OR_PUT);
		}
		
		if (CARD16){
			putimage(30, 170, cCARD0m, AND_PUT);
			putimage(30, 170, cCARD16, OR_PUT);
			putimage(120, 30, chPST5, OR_PUT);
		}
		
		if (CARD16S){
			putimage(120, 30, chCLLT[0], OR_PUT);
			CARD16 = false;
		}		
			
		if (GetCursorPos(&P)){
		  	if (ScreenToClient(WND, &P)){

				HNDsl = false;
			if (1200 <= P.x && P.x <= 1200+H1Lar-1 && 30 <= P.y && P.y <= 30+H1Alt-1)
				HNDsl = true;

				LPAsl = false;
			if (1200 <= P.x && P.x <= 1200+H2Lar-1 && 110 <= P.y && P.y <= 110+H2Alt-1)
				LPAsl = true;

				DCKsl = false;
			if (1200 <= P.x && P.x <= 1200+H3Lar-1 && 180 <= P.y && P.y <= 180+H3Alt-1)
				DCKsl = true;

				TABsl = false;
			if (1200 <= P.x && P.x <= 1200+H4Lar-1 && 650 <= P.y && P.y <= 650+H4Alt-1)
				TABsl = true;				

			if (GetKeyState(VK_LBUTTON)&0x80) {							
						
					DCKsl = false;
				if (CARD16 && 1200 <= P.x && P.x <= 1200+H3Lar-1 && 180 <= P.y && P.y <= 180+H3Alt-1){
					DCKsl = true;	
					CARD16S = true;
				}				
				
				if(LPA && 508 <= P.x && P.x <= 508+19 && 266 <= P.y && P.y <= 266+33){
					CARD16 = true;
				}
				
					HND = false;
				if (1200 <= P.x && P.x <= 1200+H1Lar-1 && 30 <= P.y && P.y <= 30+H1Alt-1){
					HND = true;

				}
					
					LPA = false;
				if (1200 <= P.x && P.x <= 1200+H2Lar-1 && 110 <= P.y && P.y <= 110+H2Alt-1){
					LPA = true;

				}
					
				if (1200 <= P.x && P.x <= 1200+H4Lar-1 && 650 <= P.y && P.y <= 650+H4Alt-1){
					mciSendString("close hospital", NULL, 0, 0);
					TAB();
					END = true;
				}							
			}			
			}
		}
   	
    	
    	setvisualpage(pg);
        	
    	if (GetKeyState(0x1B)&0x80){
		//
    	}	
	}
}

void SCENE60(){
	
	#define CHAT6	 2
	
	CHLar = 265;
	CHAlt = 95*CHAT6;

	POINT P;
  	HWND WND;
  	bool HNDsl = false;
  	bool HND = false;
  	bool LPAsl = false;
  	bool LPA = false;
  	bool DCKsl = false;
  	bool TABsl = false;
  	bool CHT0 = false;
	bool CHT1 = false;
	bool END = false;
	
	int pg = 1;
	char tecla;
	int RES, i;
	void *bkSCENE60, *hPLRD0, *hPLRD1, *hPLRD2, *hPLRD3, *hPLRD4, *cdCARD0;
	void *hHUD1, *hHUD2, *hHUD3, *hHUD4, *hHUD1m, *hHUD2m, *hHUD3m, *hHUD4m, *hHUD1a, *hHUD2a, *hHUD3a, *hHUD4a;
	void *chCHAT6[CHAT6];
	
  RES = imagesize(0, 0, RLar-1, RAlt-1);
  bkSCENE60 = malloc(RES);
  readimagefile(".\\scene\\SCENE6-0.bmp", 0, 0, JLar-1, JAlt-1);
  getimage(0, 0, JLar-1, JAlt-1, bkSCENE60);
  
  RES = imagesize(0, 0, H0Lar-1, H0Alt-1);
  hPLRD0 = malloc(RES);
  readimagefile(".\\bttn\\PLRD0.bmp", 0, 0, H0Lar-1, H0Alt-1);
  getimage(0, 0, H0Lar-1, H0Alt-1, hPLRD0);
	  RES = imagesize(0, 0, H0Lar-1, H0Alt-1);
	  hPLRD1 = malloc(RES);
	  readimagefile(".\\bttn\\PLRDH1.bmp", 0, 0, H0Lar-1, H0Alt-1);
	  getimage(0, 0, H0Lar-1, H0Alt-1, hPLRD1);
	  
	  RES = imagesize(0, 0, H0Lar-1, H0Alt-1);
	  hPLRD2 = malloc(RES);
	  readimagefile(".\\bttn\\PLRDH2.bmp", 0, 0, H0Lar-1, H0Alt-1);
	  getimage(0, 0, H0Lar-1, H0Alt-1, hPLRD2);
	  
	  RES = imagesize(0, 0, H0Lar-1, H0Alt-1);
	  hPLRD3 = malloc(RES);
	  readimagefile(".\\bttn\\PLRDH3.bmp", 0, 0, H0Lar-1, H0Alt-1);
	  getimage(0, 0, H0Lar-1, H0Alt-1, hPLRD3);
	  
	  RES = imagesize(0, 0, H0Lar-1, H0Alt-1);
	  hPLRD4 = malloc(RES);
	  readimagefile(".\\bttn\\PLRDH4.bmp", 0, 0, H0Lar-1, H0Alt-1);
	  getimage(0, 0, H0Lar-1, H0Alt-1, hPLRD4);
  
  
  RES = imagesize(0, 0, H1Lar-1, H1Alt-1);
  hHUD1 = malloc(RES);
  readimagefile(".\\bttn\\HUD1.bmp", 0, 0, H1Lar-1, H1Alt-1);
  getimage(0, 0, H1Lar-1, H1Alt-1, hHUD1);
		RES = imagesize(0, 0, H1Lar-1, H1Alt-1);
		hHUD1m = malloc(RES);
		readimagefile(".\\bttn\\HUD1m.bmp", 0, 0, H1Lar-1, H1Alt-1);
		getimage(0, 0, H1Lar-1, H1Alt-1, hHUD1m);
		RES = imagesize(0, 0, H1Lar-1, H1Alt-1);
		hHUD1a = malloc(RES);
		readimagefile(".\\bttn\\HUD1a.bmp", 0, 0, H1Lar-1, H1Alt-1);
		getimage(0, 0, H1Lar-1, H1Alt-1, hHUD1a);

  RES = imagesize(0, 0, H2Lar-1, H2Alt-1);
  hHUD2 = malloc(RES);
  readimagefile(".\\bttn\\HUD2.bmp", 0, 0, H2Lar-1, H2Alt-1);
  getimage(0, 0, H2Lar-1, H2Alt-1, hHUD2);
	  RES = imagesize(0, 0, H2Lar-1, H2Alt-1);
	  hHUD2m = malloc(RES);
	  readimagefile(".\\bttn\\HUD2m.bmp", 0, 0, H2Lar-1, H2Alt-1);
	  getimage(0, 0, H2Lar-1, H2Alt-1, hHUD2m);
	  RES = imagesize(0, 0, H2Lar-1, H2Alt-1);
	  hHUD2a = malloc(RES);
	  readimagefile(".\\bttn\\HUD2a.bmp", 0, 0, H2Lar-1, H2Alt-1);
	  getimage(0, 0, H2Lar-1, H2Alt-1, hHUD2a);
	
  RES = imagesize(0, 0, H3Lar-1, H3Alt-1);
  hHUD3 = malloc(RES);
  readimagefile(".\\bttn\\HUD3.bmp", 0, 0, H3Lar-1, H3Alt-1);
  getimage(0, 0, H3Lar-1, H3Alt-1, hHUD3);
	  RES = imagesize(0, 0, H3Lar-1, H3Alt-1);
	  hHUD3m = malloc(RES);
	  readimagefile(".\\bttn\\HUD3m.bmp", 0, 0, H3Lar-1, H3Alt-1);
	  getimage(0, 0, H3Lar-1, H3Alt-1, hHUD3m);
	  RES = imagesize(0, 0, H3Lar-1, H3Alt-1);
	  hHUD3a = malloc(RES);
	  readimagefile(".\\bttn\\HUD3a.bmp", 0, 0, H3Lar-1, H3Alt-1);
	  getimage(0, 0, H3Lar-1, H3Alt-1, hHUD3a);

  RES = imagesize(0, 0, H4Lar-1, H4Alt-1);
  hHUD4 = malloc(RES);
  readimagefile(".\\bttn\\HUD4.bmp", 0, 0, H4Lar-1, H4Alt-1);
  getimage(0, 0, H4Lar-1, H4Alt-1, hHUD4);
	  RES = imagesize(0, 0, H4Lar-1, H4Alt-1);
	  hHUD4m = malloc(RES);
	  readimagefile(".\\bttn\\HUD4m.bmp", 0, 0, H4Lar-1, H4Alt-1);
	  getimage(0, 0, H4Lar-1, H4Alt-1, hHUD4m);
	  RES = imagesize(0, 0, H4Lar-1, H4Alt-1);
	  hHUD4a = malloc(RES);
	  readimagefile(".\\bttn\\HUD4a.bmp", 0, 0, H4Lar-1, H4Alt-1);
	  getimage(0, 0, H4Lar-1, H4Alt-1, hHUD4a);
	  
	  
  RES = imagesize(0, 0, CHLar-1, CHAlt-1);
  for (i = 0; i < CHAT6; i++){
  chCHAT6[i] = malloc(RES);
  }
  readimagefile(".\\bttn\\CHAT6.bmp", 0, 0, CHLar-1, CHAlt-1);
  for (i = 0; i < CHAT6; i++){
  getimage(0, 95*i, CHLar-1, 94+95*i, chCHAT6[i]);
  }

	  cleardevice();

  WND = GetForegroundWindow();


 while(!END) {
    if (pg == 1) pg = 2; else pg = 1;
    	setactivepage(pg);
    	putimage(0, 0, bkSCENE60, COPY_PUT);  
    
		if (PLRDH1)
			putimage(30, 30, hPLRD1, COPY_PUT);
		  	
		if (PLRDH2)
			putimage(30, 30, hPLRD2, COPY_PUT);

		if (PLRDH3)
			putimage(30, 30, hPLRD3, COPY_PUT);						

		if (PLRDH4)
			putimage(30, 30, hPLRD4, COPY_PUT);		
							
		else
			putimage(30, 30, hPLRD0, OR_PUT);
																	
		
		if (HNDsl){
			putimage(1200, 30, hHUD1m, AND_PUT);
			putimage(1200, 30, hHUD1a, OR_PUT);
		}
		else{
			putimage(1200, 30, hHUD1m, AND_PUT);
			putimage(1200, 30, hHUD1, OR_PUT);			
		}
		
		if (HND){
			putimage(P.x-25, P.y-31, hHUD1m, AND_PUT);
			putimage(P.x-25, P.y-31, hHUD1, OR_PUT);			
		}
		
		if (LPAsl){
			putimage(1200, 110, hHUD2m, AND_PUT);
			putimage(1200, 110, hHUD2a, OR_PUT);
		}
		else{
			putimage(1200, 110, hHUD2m, AND_PUT);
    		putimage(1200, 110, hHUD2, OR_PUT);
		}
		
		if (LPA){
			putimage(P.x-25, P.y-25, hHUD2m, AND_PUT);
			putimage(P.x-25, P.y-25, hHUD2, OR_PUT);
		}
		
		if (DCKsl){
			putimage(1200, 180, hHUD3m, AND_PUT);
    		putimage(1200, 180, hHUD3a, OR_PUT);
		}
		else{
			putimage(1200, 180, hHUD3m, AND_PUT);
    		putimage(1200, 180, hHUD3, OR_PUT);
		}
				
		if (TABsl){
			putimage(1200, 650, hHUD4m, AND_PUT);
			putimage(1200, 650, hHUD4a, OR_PUT);
		}
		else{
			putimage(1200, 650, hHUD4m, AND_PUT);
			putimage(1200, 650, hHUD4, OR_PUT);
		}
		
		if (CHT0){
			putimage(120, 30, chCHAT6[0], OR_PUT);
		}
			
		if (GetCursorPos(&P)){
		  	if (ScreenToClient(WND, &P)){

				HNDsl = false;
			if (1200 <= P.x && P.x <= 1200+H1Lar-1 && 30 <= P.y && P.y <= 30+H1Alt-1)
				HNDsl = true;

				LPAsl = false;
			if (1200 <= P.x && P.x <= 1200+H2Lar-1 && 110 <= P.y && P.y <= 110+H2Alt-1)
				LPAsl = true;

				DCKsl = false;
			if (1200 <= P.x && P.x <= 1200+H3Lar-1 && 180 <= P.y && P.y <= 180+H3Alt-1)
				DCKsl = true;

				TABsl = false;
			if (1200 <= P.x && P.x <= 1200+H4Lar-1 && 650 <= P.y && P.y <= 650+H4Alt-1)
				TABsl = true;				

			if (GetKeyState(VK_LBUTTON)&0x80) {
							
				if (HND && 338 <= P.x && P.x <= 338+93 && 131 <= P.y && P.y <= 131+64){
					CHT0 = true;
				}
				
				if (HND && 535 <= P.x && P.x <= 535+93 && 131 <= P.y && P.y <= 131+64){
					CHT0 = true;
				}
				
				if (HND && 741 <= P.x && P.x <= 741+93 && 131 <= P.y && P.y <= 131+64){
					CHT0 = true;
				}
				
				if (HND && 437 <= P.x && P.x <= 437+93 && 277 <= P.y && P.y <= 277+68){
					CHT0 = true;
				}
				
				if (HND && 741 <= P.x && P.x <= 741+93 && 426 <= P.y && P.y <= 426+64){
					CHT0 = true;
				}
				
				if (HND && 628 <= P.x && P.x <= 628+12 && 310 <= P.y && P.y <= 310+17){
					SCENE61();
					END = true;
					CHT0 = false;
				}
				
					HND = false;
				if (1200 <= P.x && P.x <= 1200+H1Lar-1 && 30 <= P.y && P.y <= 30+H1Alt-1){
					HND = true;
					CHT0 = false;
				}
					
					LPA = false;
				if (1200 <= P.x && P.x <= 1200+H2Lar-1 && 110 <= P.y && P.y <= 110+H2Alt-1){
					LPA = true;
					CHT0 = false;
				}
					
				if (1200 <= P.x && P.x <= 1200+H4Lar-1 && 650 <= P.y && P.y <= 650+H4Alt-1){ 
					mciSendString("close necro", NULL, 0, 0);
					TAB();
					END = true;
				}							
			}			
			}
		}
   	
    	
    	setvisualpage(pg);
        	
    	if (GetKeyState(0x1B)&0x80){
		//
    	}	
	}
}

void SCENE61(){
	
	#define CHAT6	 2
	
	CHLar = 265;
	CHAlt = 95*CHAT6;

	POINT P;
  	HWND WND;
  	bool HNDsl = false;
  	bool HND = false;
  	bool LPAsl = false;
  	bool LPA = false;
  	bool DCKsl = false;
  	bool TABsl = false;
  	bool CHT0 = false;
	bool CHT1 = false;
	bool CARD18 = false;
	bool END = false;
	
	int pg = 1;
	char tecla;
	int RES, i;
	void *bkSCENE61, *hPLRD0, *hPLRD1, *hPLRD2, *hPLRD3, *hPLRD4, *cdCARD0;
	void *hHUD1, *hHUD2, *hHUD3, *hHUD4, *hHUD1m, *hHUD2m, *hHUD3m, *hHUD4m, *hHUD1a, *hHUD2a, *hHUD3a, *hHUD4a;
	void *cCARD0m, *cCARD18;
	void *chCHAT6[CHAT6], *chPST6;
	
  RES = imagesize(0, 0, RLar-1, RAlt-1);
  bkSCENE61 = malloc(RES);
  readimagefile(".\\scene\\SCENE6-1.bmp", 0, 0, JLar-1, JAlt-1);
  getimage(0, 0, JLar-1, JAlt-1, bkSCENE61);
  
  RES = imagesize(0, 0, H0Lar-1, H0Alt-1);
  hPLRD0 = malloc(RES);
  readimagefile(".\\bttn\\PLRD0.bmp", 0, 0, H0Lar-1, H0Alt-1);
  getimage(0, 0, H0Lar-1, H0Alt-1, hPLRD0);
	  RES = imagesize(0, 0, H0Lar-1, H0Alt-1);
	  hPLRD1 = malloc(RES);
	  readimagefile(".\\bttn\\PLRDH1.bmp", 0, 0, H0Lar-1, H0Alt-1);
	  getimage(0, 0, H0Lar-1, H0Alt-1, hPLRD1);
	  
	  RES = imagesize(0, 0, H0Lar-1, H0Alt-1);
	  hPLRD2 = malloc(RES);
	  readimagefile(".\\bttn\\PLRDH2.bmp", 0, 0, H0Lar-1, H0Alt-1);
	  getimage(0, 0, H0Lar-1, H0Alt-1, hPLRD2);
	  
	  RES = imagesize(0, 0, H0Lar-1, H0Alt-1);
	  hPLRD3 = malloc(RES);
	  readimagefile(".\\bttn\\PLRDH3.bmp", 0, 0, H0Lar-1, H0Alt-1);
	  getimage(0, 0, H0Lar-1, H0Alt-1, hPLRD3);
	  
	  RES = imagesize(0, 0, H0Lar-1, H0Alt-1);
	  hPLRD4 = malloc(RES);
	  readimagefile(".\\bttn\\PLRDH4.bmp", 0, 0, H0Lar-1, H0Alt-1);
	  getimage(0, 0, H0Lar-1, H0Alt-1, hPLRD4);
  
  
  RES = imagesize(0, 0, H1Lar-1, H1Alt-1);
  hHUD1 = malloc(RES);
  readimagefile(".\\bttn\\HUD1.bmp", 0, 0, H1Lar-1, H1Alt-1);
  getimage(0, 0, H1Lar-1, H1Alt-1, hHUD1);
		RES = imagesize(0, 0, H1Lar-1, H1Alt-1);
		hHUD1m = malloc(RES);
		readimagefile(".\\bttn\\HUD1m.bmp", 0, 0, H1Lar-1, H1Alt-1);
		getimage(0, 0, H1Lar-1, H1Alt-1, hHUD1m);
		RES = imagesize(0, 0, H1Lar-1, H1Alt-1);
		hHUD1a = malloc(RES);
		readimagefile(".\\bttn\\HUD1a.bmp", 0, 0, H1Lar-1, H1Alt-1);
		getimage(0, 0, H1Lar-1, H1Alt-1, hHUD1a);

  RES = imagesize(0, 0, H2Lar-1, H2Alt-1);
  hHUD2 = malloc(RES);
  readimagefile(".\\bttn\\HUD2.bmp", 0, 0, H2Lar-1, H2Alt-1);
  getimage(0, 0, H2Lar-1, H2Alt-1, hHUD2);
	  RES = imagesize(0, 0, H2Lar-1, H2Alt-1);
	  hHUD2m = malloc(RES);
	  readimagefile(".\\bttn\\HUD2m.bmp", 0, 0, H2Lar-1, H2Alt-1);
	  getimage(0, 0, H2Lar-1, H2Alt-1, hHUD2m);
	  RES = imagesize(0, 0, H2Lar-1, H2Alt-1);
	  hHUD2a = malloc(RES);
	  readimagefile(".\\bttn\\HUD2a.bmp", 0, 0, H2Lar-1, H2Alt-1);
	  getimage(0, 0, H2Lar-1, H2Alt-1, hHUD2a);
	
  RES = imagesize(0, 0, H3Lar-1, H3Alt-1);
  hHUD3 = malloc(RES);
  readimagefile(".\\bttn\\HUD3.bmp", 0, 0, H3Lar-1, H3Alt-1);
  getimage(0, 0, H3Lar-1, H3Alt-1, hHUD3);
	  RES = imagesize(0, 0, H3Lar-1, H3Alt-1);
	  hHUD3m = malloc(RES);
	  readimagefile(".\\bttn\\HUD3m.bmp", 0, 0, H3Lar-1, H3Alt-1);
	  getimage(0, 0, H3Lar-1, H3Alt-1, hHUD3m);
	  RES = imagesize(0, 0, H3Lar-1, H3Alt-1);
	  hHUD3a = malloc(RES);
	  readimagefile(".\\bttn\\HUD3a.bmp", 0, 0, H3Lar-1, H3Alt-1);
	  getimage(0, 0, H3Lar-1, H3Alt-1, hHUD3a);

  RES = imagesize(0, 0, H4Lar-1, H4Alt-1);
  hHUD4 = malloc(RES);
  readimagefile(".\\bttn\\HUD4.bmp", 0, 0, H4Lar-1, H4Alt-1);
  getimage(0, 0, H4Lar-1, H4Alt-1, hHUD4);
	  RES = imagesize(0, 0, H4Lar-1, H4Alt-1);
	  hHUD4m = malloc(RES);
	  readimagefile(".\\bttn\\HUD4m.bmp", 0, 0, H4Lar-1, H4Alt-1);
	  getimage(0, 0, H4Lar-1, H4Alt-1, hHUD4m);
	  RES = imagesize(0, 0, H4Lar-1, H4Alt-1);
	  hHUD4a = malloc(RES);
	  readimagefile(".\\bttn\\HUD4a.bmp", 0, 0, H4Lar-1, H4Alt-1);
	  getimage(0, 0, H4Lar-1, H4Alt-1, hHUD4a);
	  
  RES = imagesize(0, 0, CLar-1, CAlt-1);
  cCARD18 = malloc(RES);
  readimagefile(".\\card\\CARD18.bmp", 0, 0, CLar-1, CAlt-1);
  getimage(0, 0, CLar-1, CAlt-1, cCARD18);
  		RES = imagesize(0, 0, CLar-1, CAlt-1);
  		cCARD0m = malloc(RES);
  		readimagefile(".\\card\\CARD0m.bmp", 0, 0, CLar-1, CAlt-1);
  		getimage(0, 0, CLar-1, CAlt-1, cCARD0m);
  		
  RES = imagesize(0, 0, PTLar-1, PTAlt-1);
  chPST6 = malloc(RES);
  readimagefile(".\\bttn\\PST6.bmp", 0, 0, PTLar-1, PTAlt-1);
  getimage(0, 0, PTLar-1, PTAlt-1, chPST6);
	  
	  
  RES = imagesize(0, 0, CHLar-1, CHAlt-1);
  for (i = 0; i < CHAT6; i++){
  chCHAT6[i] = malloc(RES);
  }
  readimagefile(".\\bttn\\CHAT6.bmp", 0, 0, CHLar-1, CHAlt-1);
  for (i = 0; i < CHAT6; i++){
  getimage(0, 95*i, CHLar-1, 94+95*i, chCHAT6[i]);
  }

	  cleardevice();

  WND = GetForegroundWindow();


 while(!END) {
    if (pg == 1) pg = 2; else pg = 1;
    	setactivepage(pg);
    	putimage(0, 0, bkSCENE61, COPY_PUT);
    
		if (PLRDH1)
			putimage(30, 30, hPLRD1, COPY_PUT);
		  	
		if (PLRDH2)
			putimage(30, 30, hPLRD2, COPY_PUT);

		if (PLRDH3)
			putimage(30, 30, hPLRD3, COPY_PUT);						

		if (PLRDH4)
			putimage(30, 30, hPLRD4, COPY_PUT);		
							
		else
			putimage(30, 30, hPLRD0, OR_PUT);
																	
		
		if (HNDsl){
			putimage(1200, 30, hHUD1m, AND_PUT);
			putimage(1200, 30, hHUD1a, OR_PUT);
		}
		else{
			putimage(1200, 30, hHUD1m, AND_PUT);
			putimage(1200, 30, hHUD1, OR_PUT);			
		}
		
		if (HND){
			putimage(P.x-25, P.y-31, hHUD1m, AND_PUT);
			putimage(P.x-25, P.y-31, hHUD1, OR_PUT);			
		}
		
		if (LPAsl){
			putimage(1200, 110, hHUD2m, AND_PUT);
			putimage(1200, 110, hHUD2a, OR_PUT);
		}
		else{
			putimage(1200, 110, hHUD2m, AND_PUT);
    		putimage(1200, 110, hHUD2, OR_PUT);
		}
		
		if (LPA){
			putimage(P.x-25, P.y-25, hHUD2m, AND_PUT);
			putimage(P.x-25, P.y-25, hHUD2, OR_PUT);
		}
		
		if (DCKsl){
			putimage(1200, 180, hHUD3m, AND_PUT);
    		putimage(1200, 180, hHUD3a, OR_PUT);
		}
		else{
			putimage(1200, 180, hHUD3m, AND_PUT);
    		putimage(1200, 180, hHUD3, OR_PUT);
		}
				
		if (TABsl){
			putimage(1200, 650, hHUD4m, AND_PUT);
			putimage(1200, 650, hHUD4a, OR_PUT);
		}
		else{
			putimage(1200, 650, hHUD4m, AND_PUT);
			putimage(1200, 650, hHUD4, OR_PUT);
		}
				
		if (CHT0){
			putimage(120, 30, chCHAT6[0], OR_PUT);
		}
		
		if (CHT1){
			putimage(120, 30, chCHAT6[1], OR_PUT);
		}
		
		if (CARD18){
			putimage(30, 170, cCARD0m, AND_PUT);
			putimage(30, 170, cCARD18, OR_PUT);
			putimage(120, 30, chPST6, OR_PUT);
		}
		
		if (CARD18S){
			putimage(120, 30, chCLLT[0], OR_PUT);
			CARD18 = false;
		}	
			
		if (GetCursorPos(&P)){
		  	if (ScreenToClient(WND, &P)){

				HNDsl = false;
			if (1200 <= P.x && P.x <= 1200+H1Lar-1 && 30 <= P.y && P.y <= 30+H1Alt-1)
				HNDsl = true;

				LPAsl = false;
			if (1200 <= P.x && P.x <= 1200+H2Lar-1 && 110 <= P.y && P.y <= 110+H2Alt-1)
				LPAsl = true;

				DCKsl = false;
			if (1200 <= P.x && P.x <= 1200+H3Lar-1 && 180 <= P.y && P.y <= 180+H3Alt-1)
				DCKsl = true;

				TABsl = false;
			if (1200 <= P.x && P.x <= 1200+H4Lar-1 && 650 <= P.y && P.y <= 650+H4Alt-1)
				TABsl = true;				

			if (GetKeyState(VK_LBUTTON)&0x80) {							
						
					DCKsl = false;
				if (CARD18 && 1200 <= P.x && P.x <= 1200+H3Lar-1 && 180 <= P.y && P.y <= 180+H3Alt-1){
					DCKsl = true;	
					CARD18S = true;
				}

				if (LPA && 614 <= P.x && P.x <= 614+71 && 568 <= P.y && P.y <= 568+12){
					CARD18 = true;
				}
				
				if (HND && 338 <= P.x && P.x <= 338+93 && 131 <= P.y && P.y <= 131+64){
					CHT0 = true;
				}
				
				if (HND && 535 <= P.x && P.x <= 535+93 && 131 <= P.y && P.y <= 131+64){
					CHT0 = true;
				}
				
				if (HND && 741 <= P.x && P.x <= 741+93 && 131 <= P.y && P.y <= 131+64){
					CHT0 = true;
				}
				
				if (HND && 437 <= P.x && P.x <= 437+93 && 277 <= P.y && P.y <= 277+68){
					CHT0 = true;
				}
				
				if (HND && 741 <= P.x && P.x <= 741+93 && 426 <= P.y && P.y <= 426+64){
					CHT0 = true;
				}
				
				if (HND && 614 <= P.x && P.x <= 614+71 && 568 <= P.y && P.y <= 568+12){
					CHT1 = true;
				}
				
				if (HND && 628 <= P.x && P.x <= 628+12 && 310 <= P.y && P.y <= 310+17){
					SCENE60();
					END = true;
					CHT0 = false;
					CHT1 = false;
				}
							
					HND = false;
				if (1200 <= P.x && P.x <= 1200+H1Lar-1 && 30 <= P.y && P.y <= 30+H1Alt-1){
					HND = true;
					CHT0 = false;
					CHT1 = false;
				}
					
					LPA = false;
				if (1200 <= P.x && P.x <= 1200+H2Lar-1 && 110 <= P.y && P.y <= 110+H2Alt-1){
					LPA = true;
					CHT0 = false;
					CHT1 = false;
				}
					
				if (1200 <= P.x && P.x <= 1200+H4Lar-1 && 650 <= P.y && P.y <= 650+H4Alt-1){
					mciSendString("close necro", NULL, 0, 0);
					TAB();
					END = true;
				}							
			}			
			}
		}
   	
    	
    	setvisualpage(pg);
        	
    	if (GetKeyState(0x1B)&0x80){
		//
    	}	
	}
}

void SCENE70(){
	
	#define CHAT7	3
	
	CHLar = 265;
	CHAlt = 95*CHAT7;

	POINT P;
  	HWND WND;
  	bool HNDsl = false;
  	bool HND = false;
  	bool LPAsl = false;
  	bool LPA = false;
  	bool DCKsl = false;
  	bool TABsl = false;
  	bool CHT0 = false;
	bool CHT1 = false;
	bool CHT2 = false;
	bool RS0 = false;
	bool END = false;
	
	int pg = 1;
	char tecla;
	int RES, i;
	void *bkSCENE70, *hPLRD0, *hPLRD1, *hPLRD2, *hPLRD3, *hPLRD4, *cdCARD0;
	void *hHUD1, *hHUD2, *hHUD3, *hHUD4, *hHUD1m, *hHUD2m, *hHUD3m, *hHUD4m, *hHUD1a, *hHUD2a, *hHUD3a, *hHUD4a;
	void *chCHAT7[CHAT7];
	
  RES = imagesize(0, 0, RLar-1, RAlt-1);
  bkSCENE70 = malloc(RES);
  readimagefile(".\\scene\\SCENE7-0.bmp", 0, 0, JLar-1, JAlt-1);
  getimage(0, 0, JLar-1, JAlt-1, bkSCENE70);
  
  RES = imagesize(0, 0, H0Lar-1, H0Alt-1);
  hPLRD0 = malloc(RES);
  readimagefile(".\\bttn\\PLRD0.bmp", 0, 0, H0Lar-1, H0Alt-1);
  getimage(0, 0, H0Lar-1, H0Alt-1, hPLRD0);
	  RES = imagesize(0, 0, H0Lar-1, H0Alt-1);
	  hPLRD1 = malloc(RES);
	  readimagefile(".\\bttn\\PLRDH1.bmp", 0, 0, H0Lar-1, H0Alt-1);
	  getimage(0, 0, H0Lar-1, H0Alt-1, hPLRD1);
	  
	  RES = imagesize(0, 0, H0Lar-1, H0Alt-1);
	  hPLRD2 = malloc(RES);
	  readimagefile(".\\bttn\\PLRDH2.bmp", 0, 0, H0Lar-1, H0Alt-1);
	  getimage(0, 0, H0Lar-1, H0Alt-1, hPLRD2);
	  
	  RES = imagesize(0, 0, H0Lar-1, H0Alt-1);
	  hPLRD3 = malloc(RES);
	  readimagefile(".\\bttn\\PLRDH3.bmp", 0, 0, H0Lar-1, H0Alt-1);
	  getimage(0, 0, H0Lar-1, H0Alt-1, hPLRD3);
	  
	  RES = imagesize(0, 0, H0Lar-1, H0Alt-1);
	  hPLRD4 = malloc(RES);
	  readimagefile(".\\bttn\\PLRDH4.bmp", 0, 0, H0Lar-1, H0Alt-1);
	  getimage(0, 0, H0Lar-1, H0Alt-1, hPLRD4);
  
  
  RES = imagesize(0, 0, H1Lar-1, H1Alt-1);
  hHUD1 = malloc(RES);
  readimagefile(".\\bttn\\HUD1.bmp", 0, 0, H1Lar-1, H1Alt-1);
  getimage(0, 0, H1Lar-1, H1Alt-1, hHUD1);
		RES = imagesize(0, 0, H1Lar-1, H1Alt-1);
		hHUD1m = malloc(RES);
		readimagefile(".\\bttn\\HUD1m.bmp", 0, 0, H1Lar-1, H1Alt-1);
		getimage(0, 0, H1Lar-1, H1Alt-1, hHUD1m);
		RES = imagesize(0, 0, H1Lar-1, H1Alt-1);
		hHUD1a = malloc(RES);
		readimagefile(".\\bttn\\HUD1a.bmp", 0, 0, H1Lar-1, H1Alt-1);
		getimage(0, 0, H1Lar-1, H1Alt-1, hHUD1a);

  RES = imagesize(0, 0, H2Lar-1, H2Alt-1);
  hHUD2 = malloc(RES);
  readimagefile(".\\bttn\\HUD2.bmp", 0, 0, H2Lar-1, H2Alt-1);
  getimage(0, 0, H2Lar-1, H2Alt-1, hHUD2);
	  RES = imagesize(0, 0, H2Lar-1, H2Alt-1);
	  hHUD2m = malloc(RES);
	  readimagefile(".\\bttn\\HUD2m.bmp", 0, 0, H2Lar-1, H2Alt-1);
	  getimage(0, 0, H2Lar-1, H2Alt-1, hHUD2m);
	  RES = imagesize(0, 0, H2Lar-1, H2Alt-1);
	  hHUD2a = malloc(RES);
	  readimagefile(".\\bttn\\HUD2a.bmp", 0, 0, H2Lar-1, H2Alt-1);
	  getimage(0, 0, H2Lar-1, H2Alt-1, hHUD2a);
	
  RES = imagesize(0, 0, H3Lar-1, H3Alt-1);
  hHUD3 = malloc(RES);
  readimagefile(".\\bttn\\HUD3.bmp", 0, 0, H3Lar-1, H3Alt-1);
  getimage(0, 0, H3Lar-1, H3Alt-1, hHUD3);
	  RES = imagesize(0, 0, H3Lar-1, H3Alt-1);
	  hHUD3m = malloc(RES);
	  readimagefile(".\\bttn\\HUD3m.bmp", 0, 0, H3Lar-1, H3Alt-1);
	  getimage(0, 0, H3Lar-1, H3Alt-1, hHUD3m);
	  RES = imagesize(0, 0, H3Lar-1, H3Alt-1);
	  hHUD3a = malloc(RES);
	  readimagefile(".\\bttn\\HUD3a.bmp", 0, 0, H3Lar-1, H3Alt-1);
	  getimage(0, 0, H3Lar-1, H3Alt-1, hHUD3a);

  RES = imagesize(0, 0, H4Lar-1, H4Alt-1);
  hHUD4 = malloc(RES);
  readimagefile(".\\bttn\\HUD4.bmp", 0, 0, H4Lar-1, H4Alt-1);
  getimage(0, 0, H4Lar-1, H4Alt-1, hHUD4);
	  RES = imagesize(0, 0, H4Lar-1, H4Alt-1);
	  hHUD4m = malloc(RES);
	  readimagefile(".\\bttn\\HUD4m.bmp", 0, 0, H4Lar-1, H4Alt-1);
	  getimage(0, 0, H4Lar-1, H4Alt-1, hHUD4m);
	  RES = imagesize(0, 0, H4Lar-1, H4Alt-1);
	  hHUD4a = malloc(RES);
	  readimagefile(".\\bttn\\HUD4a.bmp", 0, 0, H4Lar-1, H4Alt-1);
	  getimage(0, 0, H4Lar-1, H4Alt-1, hHUD4a);
	  	  
  RES = imagesize(0, 0, CHLar-1, CHAlt-1);
  for (i = 0; i < CHAT7; i++){
  chCHAT7[i] = malloc(RES);
  }
  readimagefile(".\\bttn\\CHAT7.bmp", 0, 0, CHLar-1, CHAlt-1);
  for (i = 0; i < CHAT7; i++){
  getimage(0, 95*i, CHLar-1, 94+95*i, chCHAT7[i]);
  }

	  cleardevice();

  WND = GetForegroundWindow();


 while(!END) {
    if (pg == 1) pg = 2; else pg = 1;
    	setactivepage(pg);
    	putimage(0, 0, bkSCENE70, COPY_PUT);;   
    
		if (PLRDH1)
			putimage(30, 30, hPLRD1, COPY_PUT);
		  	
		if (PLRDH2)
			putimage(30, 30, hPLRD2, COPY_PUT);

		if (PLRDH3)
			putimage(30, 30, hPLRD3, COPY_PUT);						

		if (PLRDH4)
			putimage(30, 30, hPLRD4, COPY_PUT);		
							
		else
			putimage(30, 30, hPLRD0, OR_PUT);
																	
		
		if (HNDsl){
			putimage(1200, 30, hHUD1m, AND_PUT);
			putimage(1200, 30, hHUD1a, OR_PUT);
		}
		else{
			putimage(1200, 30, hHUD1m, AND_PUT);
			putimage(1200, 30, hHUD1, OR_PUT);			
		}
		
		if (HND){
			putimage(P.x-25, P.y-31, hHUD1m, AND_PUT);
			putimage(P.x-25, P.y-31, hHUD1, OR_PUT);			
		}
		
		if (LPAsl){
			putimage(1200, 110, hHUD2m, AND_PUT);
			putimage(1200, 110, hHUD2a, OR_PUT);
		}
		else{
			putimage(1200, 110, hHUD2m, AND_PUT);
    		putimage(1200, 110, hHUD2, OR_PUT);
		}
		
		if (LPA){
			putimage(P.x-25, P.y-25, hHUD2m, AND_PUT);
			putimage(P.x-25, P.y-25, hHUD2, OR_PUT);
		}
		
		if (DCKsl){
			putimage(1200, 180, hHUD3m, AND_PUT);
    		putimage(1200, 180, hHUD3a, OR_PUT);
		}
		else{
			putimage(1200, 180, hHUD3m, AND_PUT);
    		putimage(1200, 180, hHUD3, OR_PUT);
		}
				
		if (TABsl){
			putimage(1200, 650, hHUD4m, AND_PUT);
			putimage(1200, 650, hHUD4a, OR_PUT);
		}
		else{
			putimage(1200, 650, hHUD4m, AND_PUT);
			putimage(1200, 650, hHUD4, OR_PUT);
		}		
				
		if (!CHT0){
			putimage(120, 30, chCHAT7[0], OR_PUT);
		}
		
		if (CHT1){
			putimage(120, 30, chCHAT7[1], OR_PUT);
		}
		
		if (CHT2){
			putimage(120, 30, chCHAT7[2], OR_PUT);
		}	
										
		if (GetCursorPos(&P)){
		  	if (ScreenToClient(WND, &P)){

				HNDsl = false;
			if (1200 <= P.x && P.x <= 1200+H1Lar-1 && 30 <= P.y && P.y <= 30+H1Alt-1)
				HNDsl = true;

				LPAsl = false;
			if (1200 <= P.x && P.x <= 1200+H2Lar-1 && 110 <= P.y && P.y <= 110+H2Alt-1)
				LPAsl = true;

				DCKsl = false;
			if (1200 <= P.x && P.x <= 1200+H3Lar-1 && 180 <= P.y && P.y <= 180+H3Alt-1)
				DCKsl = true;

				TABsl = false;
			if (1200 <= P.x && P.x <= 1200+H4Lar-1 && 650 <= P.y && P.y <= 650+H4Alt-1)
				TABsl = true;				

			if (GetKeyState(VK_LBUTTON)&0x80) {							
																
				if (HND && 562 <= P.x && P.x <= 562+86 && 237 <= P.y && P.y <= 237+45){
					CHT1 = true;
				}
				
				if (HND && 746 <= P.x && P.x <= 746+86 && 237 <= P.y && P.y <= 237+45){
					CHT1 = true;
				}
				
				if (HND && 746 <= P.x && P.x <= 746+86 && 290 <= P.y && P.y <= 290+44){
					CHT1 = true;
				}
				
				if (HND && 746 <= P.x && P.x <= 746+86 && 340 <= P.y && P.y <= 340+38){
					CHT1 = true;
				}
				
				if (HND && 746 <= P.x && P.x <= 746+86 && 384 <= P.y && P.y <= 384+48){
					CHT1 = true;
				}
				
				if (HND && 746 <= P.x && P.x <= 746+86 && 436 <= P.y && P.y <= 436+47){
					CHT1 = true;
				}
				
				if (HND && 653 <= P.x && P.x <= 653+86 && 436 <= P.y && P.y <= 436+47){
					CHT1 = true;
				}
				
				if (HND && 653 <= P.x && P.x <= 653+86 && 237 <= P.y && P.y <= 237+45){
					CHT1 = true;
				}
				
				if (HND && 653 <= P.x && P.x <= 653+86 && 384 <= P.y && P.y <= 384+48){
					CHT1 = true;
				}
				
				if (HND && 674 <= P.x && P.x <= 674+65 && 290 <= P.y && P.y <= 290+44){
					CHT1 = true;
				}
					
				if (HND && 674 <= P.x && P.x <= 674+65 && 340 <= P.y && P.y <= 340+38){
					CHT1 = true;
				}
								
				if (RS0 && HND && 609 <= P.x && P.x <= 609+63 && 299 <= P.y && P.y <= 299+62){
					SCENE71();
					END = true;					
				}

				if (HND && 471 <= P.x && P.x <= 471+86 && 237 <= P.y && P.y <= 237+45){
					RS0 = true;
					CHT2 = true;
					mciSendString("play efeito", NULL, 0, 0);
				}							

					HND = false;
				if (1200 <= P.x && P.x <= 1200+H1Lar-1 && 30 <= P.y && P.y <= 30+H1Alt-1){
					HND = true;
					CHT0 = true;
					CHT1 = false;
					CHT2 = false;
				}
					
					LPA = false;
				if (1200 <= P.x && P.x <= 1200+H2Lar-1 && 110 <= P.y && P.y <= 110+H2Alt-1){
					LPA = true;
					CHT0 = true;
					CHT1 = false;
					CHT2 = false;

				}
					
				if (1200 <= P.x && P.x <= 1200+H4Lar-1 && 650 <= P.y && P.y <= 650+H4Alt-1){
					mciSendString("close mercado", NULL, 0, 0);
					TAB();
					END = true;
				}							
			}									
			}
		}
   	
    	
    	setvisualpage(pg);
        	
    	if (GetKeyState(0x1B)&0x80){
		//
    	}	
	}
}

void SCENE71(){

	POINT P;
  	HWND WND;
  	bool HNDsl = false;
  	bool HND = false;
  	bool LPAsl = false;
  	bool LPA = false;
  	bool DCKsl = false;
  	bool TABsl = false;
	bool CARD14 = false;
	bool END = false;
	
	int pg = 1;
	char tecla;
	int RES, i;
	void *bkSCENE71, *hPLRD0, *hPLRD1, *hPLRD2, *hPLRD3, *hPLRD4, *cdCARD0;
	void *hHUD1, *hHUD2, *hHUD3, *hHUD4, *hHUD1m, *hHUD2m, *hHUD3m, *hHUD4m, *hHUD1a, *hHUD2a, *hHUD3a, *hHUD4a;
	void *cCARD0m, *cCARD14, *chPST7;
	
  RES = imagesize(0, 0, RLar-1, RAlt-1);
  bkSCENE71 = malloc(RES);
  readimagefile(".\\scene\\SCENE7-1.bmp", 0, 0, JLar-1, JAlt-1);
  getimage(0, 0, JLar-1, JAlt-1, bkSCENE71);
  
  RES = imagesize(0, 0, H0Lar-1, H0Alt-1);
  hPLRD0 = malloc(RES);
  readimagefile(".\\bttn\\PLRD0.bmp", 0, 0, H0Lar-1, H0Alt-1);
  getimage(0, 0, H0Lar-1, H0Alt-1, hPLRD0);
	  RES = imagesize(0, 0, H0Lar-1, H0Alt-1);
	  hPLRD1 = malloc(RES);
	  readimagefile(".\\bttn\\PLRDH1.bmp", 0, 0, H0Lar-1, H0Alt-1);
	  getimage(0, 0, H0Lar-1, H0Alt-1, hPLRD1);
	  
	  RES = imagesize(0, 0, H0Lar-1, H0Alt-1);
	  hPLRD2 = malloc(RES);
	  readimagefile(".\\bttn\\PLRDH2.bmp", 0, 0, H0Lar-1, H0Alt-1);
	  getimage(0, 0, H0Lar-1, H0Alt-1, hPLRD2);
	  
	  RES = imagesize(0, 0, H0Lar-1, H0Alt-1);
	  hPLRD3 = malloc(RES);
	  readimagefile(".\\bttn\\PLRDH3.bmp", 0, 0, H0Lar-1, H0Alt-1);
	  getimage(0, 0, H0Lar-1, H0Alt-1, hPLRD3);
	  
	  RES = imagesize(0, 0, H0Lar-1, H0Alt-1);
	  hPLRD4 = malloc(RES);
	  readimagefile(".\\bttn\\PLRDH4.bmp", 0, 0, H0Lar-1, H0Alt-1);
	  getimage(0, 0, H0Lar-1, H0Alt-1, hPLRD4);
  
  
  RES = imagesize(0, 0, H1Lar-1, H1Alt-1);
  hHUD1 = malloc(RES);
  readimagefile(".\\bttn\\HUD1.bmp", 0, 0, H1Lar-1, H1Alt-1);
  getimage(0, 0, H1Lar-1, H1Alt-1, hHUD1);
		RES = imagesize(0, 0, H1Lar-1, H1Alt-1);
		hHUD1m = malloc(RES);
		readimagefile(".\\bttn\\HUD1m.bmp", 0, 0, H1Lar-1, H1Alt-1);
		getimage(0, 0, H1Lar-1, H1Alt-1, hHUD1m);
		RES = imagesize(0, 0, H1Lar-1, H1Alt-1);
		hHUD1a = malloc(RES);
		readimagefile(".\\bttn\\HUD1a.bmp", 0, 0, H1Lar-1, H1Alt-1);
		getimage(0, 0, H1Lar-1, H1Alt-1, hHUD1a);

  RES = imagesize(0, 0, H2Lar-1, H2Alt-1);
  hHUD2 = malloc(RES);
  readimagefile(".\\bttn\\HUD2.bmp", 0, 0, H2Lar-1, H2Alt-1);
  getimage(0, 0, H2Lar-1, H2Alt-1, hHUD2);
	  RES = imagesize(0, 0, H2Lar-1, H2Alt-1);
	  hHUD2m = malloc(RES);
	  readimagefile(".\\bttn\\HUD2m.bmp", 0, 0, H2Lar-1, H2Alt-1);
	  getimage(0, 0, H2Lar-1, H2Alt-1, hHUD2m);
	  RES = imagesize(0, 0, H2Lar-1, H2Alt-1);
	  hHUD2a = malloc(RES);
	  readimagefile(".\\bttn\\HUD2a.bmp", 0, 0, H2Lar-1, H2Alt-1);
	  getimage(0, 0, H2Lar-1, H2Alt-1, hHUD2a);
	
  RES = imagesize(0, 0, H3Lar-1, H3Alt-1);
  hHUD3 = malloc(RES);
  readimagefile(".\\bttn\\HUD3.bmp", 0, 0, H3Lar-1, H3Alt-1);
  getimage(0, 0, H3Lar-1, H3Alt-1, hHUD3);
	  RES = imagesize(0, 0, H3Lar-1, H3Alt-1);
	  hHUD3m = malloc(RES);
	  readimagefile(".\\bttn\\HUD3m.bmp", 0, 0, H3Lar-1, H3Alt-1);
	  getimage(0, 0, H3Lar-1, H3Alt-1, hHUD3m);
	  RES = imagesize(0, 0, H3Lar-1, H3Alt-1);
	  hHUD3a = malloc(RES);
	  readimagefile(".\\bttn\\HUD3a.bmp", 0, 0, H3Lar-1, H3Alt-1);
	  getimage(0, 0, H3Lar-1, H3Alt-1, hHUD3a);

  RES = imagesize(0, 0, H4Lar-1, H4Alt-1);
  hHUD4 = malloc(RES);
  readimagefile(".\\bttn\\HUD4.bmp", 0, 0, H4Lar-1, H4Alt-1);
  getimage(0, 0, H4Lar-1, H4Alt-1, hHUD4);
	  RES = imagesize(0, 0, H4Lar-1, H4Alt-1);
	  hHUD4m = malloc(RES);
	  readimagefile(".\\bttn\\HUD4m.bmp", 0, 0, H4Lar-1, H4Alt-1);
	  getimage(0, 0, H4Lar-1, H4Alt-1, hHUD4m);
	  RES = imagesize(0, 0, H4Lar-1, H4Alt-1);
	  hHUD4a = malloc(RES);
	  readimagefile(".\\bttn\\HUD4a.bmp", 0, 0, H4Lar-1, H4Alt-1);
	  getimage(0, 0, H4Lar-1, H4Alt-1, hHUD4a);
	  
  RES = imagesize(0, 0, CLar-1, CAlt-1);
  cCARD14 = malloc(RES);
  readimagefile(".\\card\\CARD14.bmp", 0, 0, CLar-1, CAlt-1);
  getimage(0, 0, CLar-1, CAlt-1, cCARD14);
  		RES = imagesize(0, 0, CLar-1, CAlt-1);
  		cCARD0m = malloc(RES);
  		readimagefile(".\\card\\CARD0m.bmp", 0, 0, CLar-1, CAlt-1);
  		getimage(0, 0, CLar-1, CAlt-1, cCARD0m);
		  
  RES = imagesize(0, 0, PTLar-1, PTAlt-1);
  chPST7 = malloc(RES);
  readimagefile(".\\bttn\\PST7.bmp", 0, 0, PTLar-1, PTAlt-1);
  getimage(0, 0, PTLar-1, PTAlt-1, chPST7);	  

	  cleardevice();

  WND = GetForegroundWindow();


 while(!END) {
    if (pg == 1) pg = 2; else pg = 1;
    	setactivepage(pg);
    	putimage(0, 0, bkSCENE71, COPY_PUT);
    
		if (PLRDH1)
			putimage(30, 30, hPLRD1, COPY_PUT);
		  	
		if (PLRDH2)
			putimage(30, 30, hPLRD2, COPY_PUT);

		if (PLRDH3)
			putimage(30, 30, hPLRD3, COPY_PUT);						

		if (PLRDH4)
			putimage(30, 30, hPLRD4, COPY_PUT);		
							
		else
			putimage(30, 30, hPLRD0, OR_PUT);
																	
		
		if (HNDsl){
			putimage(1200, 30, hHUD1m, AND_PUT);
			putimage(1200, 30, hHUD1a, OR_PUT);
		}
		else{
			putimage(1200, 30, hHUD1m, AND_PUT);
			putimage(1200, 30, hHUD1, OR_PUT);			
		}
		
		if (HND){
			putimage(P.x-25, P.y-31, hHUD1m, AND_PUT);
			putimage(P.x-25, P.y-31, hHUD1, OR_PUT);			
		}
		
		if (LPAsl){
			putimage(1200, 110, hHUD2m, AND_PUT);
			putimage(1200, 110, hHUD2a, OR_PUT);
		}
		else{
			putimage(1200, 110, hHUD2m, AND_PUT);
    		putimage(1200, 110, hHUD2, OR_PUT);
		}
		
		if (LPA){
			putimage(P.x-25, P.y-25, hHUD2m, AND_PUT);
			putimage(P.x-25, P.y-25, hHUD2, OR_PUT);
		}
		
		if (DCKsl){
			putimage(1200, 180, hHUD3m, AND_PUT);
    		putimage(1200, 180, hHUD3a, OR_PUT);
		}
		else{
			putimage(1200, 180, hHUD3m, AND_PUT);
    		putimage(1200, 180, hHUD3, OR_PUT);
		}
				
		if (TABsl){
			putimage(1200, 650, hHUD4m, AND_PUT);
			putimage(1200, 650, hHUD4a, OR_PUT);
		}
		else{
			putimage(1200, 650, hHUD4m, AND_PUT);
			putimage(1200, 650, hHUD4, OR_PUT);
		}
		
		if (CARD14){
			putimage(30, 170, cCARD0m, AND_PUT);
			putimage(30, 170, cCARD14, OR_PUT);
			putimage(120, 30, chPST7, OR_PUT);
		}
		
		if (CARD14S){
			putimage(120, 30, chCLLT[0], OR_PUT);
			CARD14 = false;
		}	
			
		if (GetCursorPos(&P)){
		  	if (ScreenToClient(WND, &P)){

				HNDsl = false;
			if (1200 <= P.x && P.x <= 1200+H1Lar-1 && 30 <= P.y && P.y <= 30+H1Alt-1)
				HNDsl = true;

				LPAsl = false;
			if (1200 <= P.x && P.x <= 1200+H2Lar-1 && 110 <= P.y && P.y <= 110+H2Alt-1)
				LPAsl = true;

				DCKsl = false;
			if (1200 <= P.x && P.x <= 1200+H3Lar-1 && 180 <= P.y && P.y <= 180+H3Alt-1)
				DCKsl = true;

				TABsl = false;
			if (1200 <= P.x && P.x <= 1200+H4Lar-1 && 650 <= P.y && P.y <= 650+H4Alt-1)
				TABsl = true;				

			if (GetKeyState(VK_LBUTTON)&0x80) {							
									
					DCKsl = false;
				if (CARD14 && 1200 <= P.x && P.x <= 1200+H3Lar-1 && 180 <= P.y && P.y <= 180+H3Alt-1){
					DCKsl = true;;	
					CARD14S = true;
				}
				
				if (LPA && 660 <= P.x && P.x <= 660+17 && 308 <= P.y && P.y <= 308+28){
					CARD14 = true;
				}					
									
					HND = false;
				if (1200 <= P.x && P.x <= 1200+H1Lar-1 && 30 <= P.y && P.y <= 30+H1Alt-1){
					HND = true;

				}
					
					LPA = false;
				if (1200 <= P.x && P.x <= 1200+H2Lar-1 && 110 <= P.y && P.y <= 110+H2Alt-1){
					LPA = true;

				}
					
				if (1200 <= P.x && P.x <= 1200+H4Lar-1 && 650 <= P.y && P.y <= 650+H4Alt-1){
					mciSendString("close mercado", NULL, 0, 0);
					TAB();
					END = true;
				}							
			}			
			}
		}
   	
    	
    	setvisualpage(pg);
        	
    	if (GetKeyState(0x1B)&0x80){
		//
    	}	
	}
}

void SCENE80(){
		
	CHLar = 265;
	CHAlt = 95;

	POINT P;
  	HWND WND;
  	bool HNDsl = false;
  	bool HND = false;
  	bool LPAsl = false;
  	bool LPA = false;
  	bool DCKsl = false;
  	bool TABsl = false;
  	bool CHT0 = false;
	bool END = false;
	
	int pg = 1;
	char tecla;
	int RES, i;
	void *bkSCENE80, *hPLRD0, *hPLRD1, *hPLRD2, *hPLRD3, *hPLRD4, *cdCARD0;
	void *hHUD1, *hHUD2, *hHUD3, *hHUD4, *hHUD1m, *hHUD2m, *hHUD3m, *hHUD4m, *hHUD1a, *hHUD2a, *hHUD3a, *hHUD4a;
	void *chCHAT8;
	
  RES = imagesize(0, 0, RLar-1, RAlt-1);
  bkSCENE80 = malloc(RES);
  readimagefile(".\\scene\\SCENE8-0.bmp", 0, 0, JLar-1, JAlt-1);
  getimage(0, 0, JLar-1, JAlt-1, bkSCENE80);
  
  RES = imagesize(0, 0, H0Lar-1, H0Alt-1);
  hPLRD0 = malloc(RES);
  readimagefile(".\\bttn\\PLRD0.bmp", 0, 0, H0Lar-1, H0Alt-1);
  getimage(0, 0, H0Lar-1, H0Alt-1, hPLRD0);
	  RES = imagesize(0, 0, H0Lar-1, H0Alt-1);
	  hPLRD1 = malloc(RES);
	  readimagefile(".\\bttn\\PLRDH1.bmp", 0, 0, H0Lar-1, H0Alt-1);
	  getimage(0, 0, H0Lar-1, H0Alt-1, hPLRD1);
	  
	  RES = imagesize(0, 0, H0Lar-1, H0Alt-1);
	  hPLRD2 = malloc(RES);
	  readimagefile(".\\bttn\\PLRDH2.bmp", 0, 0, H0Lar-1, H0Alt-1);
	  getimage(0, 0, H0Lar-1, H0Alt-1, hPLRD2);
	  
	  RES = imagesize(0, 0, H0Lar-1, H0Alt-1);
	  hPLRD3 = malloc(RES);
	  readimagefile(".\\bttn\\PLRDH3.bmp", 0, 0, H0Lar-1, H0Alt-1);
	  getimage(0, 0, H0Lar-1, H0Alt-1, hPLRD3);
	  
	  RES = imagesize(0, 0, H0Lar-1, H0Alt-1);
	  hPLRD4 = malloc(RES);
	  readimagefile(".\\bttn\\PLRDH4.bmp", 0, 0, H0Lar-1, H0Alt-1);
	  getimage(0, 0, H0Lar-1, H0Alt-1, hPLRD4);
  
  
  RES = imagesize(0, 0, H1Lar-1, H1Alt-1);
  hHUD1 = malloc(RES);
  readimagefile(".\\bttn\\HUD1.bmp", 0, 0, H1Lar-1, H1Alt-1);
  getimage(0, 0, H1Lar-1, H1Alt-1, hHUD1);
		RES = imagesize(0, 0, H1Lar-1, H1Alt-1);
		hHUD1m = malloc(RES);
		readimagefile(".\\bttn\\HUD1m.bmp", 0, 0, H1Lar-1, H1Alt-1);
		getimage(0, 0, H1Lar-1, H1Alt-1, hHUD1m);
		RES = imagesize(0, 0, H1Lar-1, H1Alt-1);
		hHUD1a = malloc(RES);
		readimagefile(".\\bttn\\HUD1a.bmp", 0, 0, H1Lar-1, H1Alt-1);
		getimage(0, 0, H1Lar-1, H1Alt-1, hHUD1a);

  RES = imagesize(0, 0, H2Lar-1, H2Alt-1);
  hHUD2 = malloc(RES);
  readimagefile(".\\bttn\\HUD2.bmp", 0, 0, H2Lar-1, H2Alt-1);
  getimage(0, 0, H2Lar-1, H2Alt-1, hHUD2);
	  RES = imagesize(0, 0, H2Lar-1, H2Alt-1);
	  hHUD2m = malloc(RES);
	  readimagefile(".\\bttn\\HUD2m.bmp", 0, 0, H2Lar-1, H2Alt-1);
	  getimage(0, 0, H2Lar-1, H2Alt-1, hHUD2m);
	  RES = imagesize(0, 0, H2Lar-1, H2Alt-1);
	  hHUD2a = malloc(RES);
	  readimagefile(".\\bttn\\HUD2a.bmp", 0, 0, H2Lar-1, H2Alt-1);
	  getimage(0, 0, H2Lar-1, H2Alt-1, hHUD2a);
	
  RES = imagesize(0, 0, H3Lar-1, H3Alt-1);
  hHUD3 = malloc(RES);
  readimagefile(".\\bttn\\HUD3.bmp", 0, 0, H3Lar-1, H3Alt-1);
  getimage(0, 0, H3Lar-1, H3Alt-1, hHUD3);
	  RES = imagesize(0, 0, H3Lar-1, H3Alt-1);
	  hHUD3m = malloc(RES);
	  readimagefile(".\\bttn\\HUD3m.bmp", 0, 0, H3Lar-1, H3Alt-1);
	  getimage(0, 0, H3Lar-1, H3Alt-1, hHUD3m);
	  RES = imagesize(0, 0, H3Lar-1, H3Alt-1);
	  hHUD3a = malloc(RES);
	  readimagefile(".\\bttn\\HUD3a.bmp", 0, 0, H3Lar-1, H3Alt-1);
	  getimage(0, 0, H3Lar-1, H3Alt-1, hHUD3a);

  RES = imagesize(0, 0, H4Lar-1, H4Alt-1);
  hHUD4 = malloc(RES);
  readimagefile(".\\bttn\\HUD4.bmp", 0, 0, H4Lar-1, H4Alt-1);
  getimage(0, 0, H4Lar-1, H4Alt-1, hHUD4);
	  RES = imagesize(0, 0, H4Lar-1, H4Alt-1);
	  hHUD4m = malloc(RES);
	  readimagefile(".\\bttn\\HUD4m.bmp", 0, 0, H4Lar-1, H4Alt-1);
	  getimage(0, 0, H4Lar-1, H4Alt-1, hHUD4m);
	  RES = imagesize(0, 0, H4Lar-1, H4Alt-1);
	  hHUD4a = malloc(RES);
	  readimagefile(".\\bttn\\HUD4a.bmp", 0, 0, H4Lar-1, H4Alt-1);
	  getimage(0, 0, H4Lar-1, H4Alt-1, hHUD4a);
	  	  
  RES = imagesize(0, 0, CHLar-1, CHAlt-1);
  chCHAT8 = malloc(RES);
  readimagefile(".\\bttn\\CHAT8.bmp", 0, 0, CHLar-1, CHAlt-1);
  getimage(0, 0, CHLar-1, CHAlt-1, chCHAT8);

	  cleardevice();

  WND = GetForegroundWindow();


 while(!END) {
    if (pg == 1) pg = 2; else pg = 1;
    	setactivepage(pg);
    	putimage(0, 0, bkSCENE80, COPY_PUT);  
    
		if (PLRDH1)
			putimage(30, 30, hPLRD1, COPY_PUT);
		  	
		if (PLRDH2)
			putimage(30, 30, hPLRD2, COPY_PUT);

		if (PLRDH3)
			putimage(30, 30, hPLRD3, COPY_PUT);						

		if (PLRDH4)
			putimage(30, 30, hPLRD4, COPY_PUT);		
							
		else
			putimage(30, 30, hPLRD0, OR_PUT);
																	
		
		if (HNDsl){
			putimage(1200, 30, hHUD1m, AND_PUT);
			putimage(1200, 30, hHUD1a, OR_PUT);
		}
		else{
			putimage(1200, 30, hHUD1m, AND_PUT);
			putimage(1200, 30, hHUD1, OR_PUT);			
		}
		
		if (HND){
			putimage(P.x-25, P.y-31, hHUD1m, AND_PUT);
			putimage(P.x-25, P.y-31, hHUD1, OR_PUT);			
		}
		
		if (LPAsl){
			putimage(1200, 110, hHUD2m, AND_PUT);
			putimage(1200, 110, hHUD2a, OR_PUT);
		}
		else{
			putimage(1200, 110, hHUD2m, AND_PUT);
    		putimage(1200, 110, hHUD2, OR_PUT);
		}
		
		if (LPA){
			putimage(P.x-25, P.y-25, hHUD2m, AND_PUT);
			putimage(P.x-25, P.y-25, hHUD2, OR_PUT);
		}
		
		if (DCKsl){
			putimage(1200, 180, hHUD3m, AND_PUT);
    		putimage(1200, 180, hHUD3a, OR_PUT);
		}
		else{
			putimage(1200, 180, hHUD3m, AND_PUT);
    		putimage(1200, 180, hHUD3, OR_PUT);
		}
				
		if (TABsl){
			putimage(1200, 650, hHUD4m, AND_PUT);
			putimage(1200, 650, hHUD4a, OR_PUT);
		}
		else{
			putimage(1200, 650, hHUD4m, AND_PUT);
			putimage(1200, 650, hHUD4, OR_PUT);
		}
		
		if (!CHT0){
			putimage(120, 30, chCHAT8, OR_PUT);
		}		
															
		if (GetCursorPos(&P)){
		  	if (ScreenToClient(WND, &P)){

				HNDsl = false;
			if (1200 <= P.x && P.x <= 1200+H1Lar-1 && 30 <= P.y && P.y <= 30+H1Alt-1)
				HNDsl = true;

				LPAsl = false;
			if (1200 <= P.x && P.x <= 1200+H2Lar-1 && 110 <= P.y && P.y <= 110+H2Alt-1)
				LPAsl = true;

				DCKsl = false;
			if (1200 <= P.x && P.x <= 1200+H3Lar-1 && 180 <= P.y && P.y <= 180+H3Alt-1)
				DCKsl = true;

				TABsl = false;
			if (1200 <= P.x && P.x <= 1200+H4Lar-1 && 650 <= P.y && P.y <= 650+H4Alt-1)
				TABsl = true;				

			if (GetKeyState(VK_LBUTTON)&0x80) {							
																
				if (HND && 335 <= P.x && P.x <= 335+65 && 431 <= P.y && P.y <= 431+59){
					SCENE81();
					END = true;
				}		

					HND = false;
				if (1200 <= P.x && P.x <= 1200+H1Lar-1 && 30 <= P.y && P.y <= 30+H1Alt-1){
					HND = true;
					CHT0 = true;
				}
					
					LPA = false;
				if (1200 <= P.x && P.x <= 1200+H2Lar-1 && 110 <= P.y && P.y <= 110+H2Alt-1){
					LPA = true;
					CHT0 = true;
				}
					
				if (1200 <= P.x && P.x <= 1200+H4Lar-1 && 650 <= P.y && P.y <= 650+H4Alt-1){
					TAB();
					END = true;
				}							
			}									
			}
		}
   	
    	
    	setvisualpage(pg);
        	
    	if (GetKeyState(0x1B)&0x80){
		//
    	}	
	}
}

void SCENE81(){
		

	POINT P;
  	HWND WND;
  	bool HNDsl = false;
  	bool HND = false;
  	bool LPAsl = false;
  	bool LPA = false;
  	bool DCKsl = false;
  	bool TABsl = false;
	bool CARD10 = false;
	bool END = false;
	
	int pg = 1;
	char tecla;
	int RES, i;
	void *bkSCENE81, *hPLRD0, *hPLRD1, *hPLRD2, *hPLRD3, *hPLRD4, *cdCARD0;
	void *hHUD1, *hHUD2, *hHUD3, *hHUD4, *hHUD1m, *hHUD2m, *hHUD3m, *hHUD4m, *hHUD1a, *hHUD2a, *hHUD3a, *hHUD4a;
	void *cCARD0m, *cCARD10, *chPST8;
	
  RES = imagesize(0, 0, RLar-1, RAlt-1);
  bkSCENE81 = malloc(RES);
  readimagefile(".\\scene\\SCENE8-1.bmp", 0, 0, JLar-1, JAlt-1);
  getimage(0, 0, JLar-1, JAlt-1, bkSCENE81);
  
  RES = imagesize(0, 0, H0Lar-1, H0Alt-1);
  hPLRD0 = malloc(RES);
  readimagefile(".\\bttn\\PLRD0.bmp", 0, 0, H0Lar-1, H0Alt-1);
  getimage(0, 0, H0Lar-1, H0Alt-1, hPLRD0);
	  RES = imagesize(0, 0, H0Lar-1, H0Alt-1);
	  hPLRD1 = malloc(RES);
	  readimagefile(".\\bttn\\PLRDH1.bmp", 0, 0, H0Lar-1, H0Alt-1);
	  getimage(0, 0, H0Lar-1, H0Alt-1, hPLRD1);
	  
	  RES = imagesize(0, 0, H0Lar-1, H0Alt-1);
	  hPLRD2 = malloc(RES);
	  readimagefile(".\\bttn\\PLRDH2.bmp", 0, 0, H0Lar-1, H0Alt-1);
	  getimage(0, 0, H0Lar-1, H0Alt-1, hPLRD2);
	  
	  RES = imagesize(0, 0, H0Lar-1, H0Alt-1);
	  hPLRD3 = malloc(RES);
	  readimagefile(".\\bttn\\PLRDH3.bmp", 0, 0, H0Lar-1, H0Alt-1);
	  getimage(0, 0, H0Lar-1, H0Alt-1, hPLRD3);
	  
	  RES = imagesize(0, 0, H0Lar-1, H0Alt-1);
	  hPLRD4 = malloc(RES);
	  readimagefile(".\\bttn\\PLRDH4.bmp", 0, 0, H0Lar-1, H0Alt-1);
	  getimage(0, 0, H0Lar-1, H0Alt-1, hPLRD4);
  
  
  RES = imagesize(0, 0, H1Lar-1, H1Alt-1);
  hHUD1 = malloc(RES);
  readimagefile(".\\bttn\\HUD1.bmp", 0, 0, H1Lar-1, H1Alt-1);
  getimage(0, 0, H1Lar-1, H1Alt-1, hHUD1);
		RES = imagesize(0, 0, H1Lar-1, H1Alt-1);
		hHUD1m = malloc(RES);
		readimagefile(".\\bttn\\HUD1m.bmp", 0, 0, H1Lar-1, H1Alt-1);
		getimage(0, 0, H1Lar-1, H1Alt-1, hHUD1m);
		RES = imagesize(0, 0, H1Lar-1, H1Alt-1);
		hHUD1a = malloc(RES);
		readimagefile(".\\bttn\\HUD1a.bmp", 0, 0, H1Lar-1, H1Alt-1);
		getimage(0, 0, H1Lar-1, H1Alt-1, hHUD1a);

  RES = imagesize(0, 0, H2Lar-1, H2Alt-1);
  hHUD2 = malloc(RES);
  readimagefile(".\\bttn\\HUD2.bmp", 0, 0, H2Lar-1, H2Alt-1);
  getimage(0, 0, H2Lar-1, H2Alt-1, hHUD2);
	  RES = imagesize(0, 0, H2Lar-1, H2Alt-1);
	  hHUD2m = malloc(RES);
	  readimagefile(".\\bttn\\HUD2m.bmp", 0, 0, H2Lar-1, H2Alt-1);
	  getimage(0, 0, H2Lar-1, H2Alt-1, hHUD2m);
	  RES = imagesize(0, 0, H2Lar-1, H2Alt-1);
	  hHUD2a = malloc(RES);
	  readimagefile(".\\bttn\\HUD2a.bmp", 0, 0, H2Lar-1, H2Alt-1);
	  getimage(0, 0, H2Lar-1, H2Alt-1, hHUD2a);
	
  RES = imagesize(0, 0, H3Lar-1, H3Alt-1);
  hHUD3 = malloc(RES);
  readimagefile(".\\bttn\\HUD3.bmp", 0, 0, H3Lar-1, H3Alt-1);
  getimage(0, 0, H3Lar-1, H3Alt-1, hHUD3);
	  RES = imagesize(0, 0, H3Lar-1, H3Alt-1);
	  hHUD3m = malloc(RES);
	  readimagefile(".\\bttn\\HUD3m.bmp", 0, 0, H3Lar-1, H3Alt-1);
	  getimage(0, 0, H3Lar-1, H3Alt-1, hHUD3m);
	  RES = imagesize(0, 0, H3Lar-1, H3Alt-1);
	  hHUD3a = malloc(RES);
	  readimagefile(".\\bttn\\HUD3a.bmp", 0, 0, H3Lar-1, H3Alt-1);
	  getimage(0, 0, H3Lar-1, H3Alt-1, hHUD3a);

  RES = imagesize(0, 0, H4Lar-1, H4Alt-1);
  hHUD4 = malloc(RES);
  readimagefile(".\\bttn\\HUD4.bmp", 0, 0, H4Lar-1, H4Alt-1);
  getimage(0, 0, H4Lar-1, H4Alt-1, hHUD4);
	  RES = imagesize(0, 0, H4Lar-1, H4Alt-1);
	  hHUD4m = malloc(RES);
	  readimagefile(".\\bttn\\HUD4m.bmp", 0, 0, H4Lar-1, H4Alt-1);
	  getimage(0, 0, H4Lar-1, H4Alt-1, hHUD4m);
	  RES = imagesize(0, 0, H4Lar-1, H4Alt-1);
	  hHUD4a = malloc(RES);
	  readimagefile(".\\bttn\\HUD4a.bmp", 0, 0, H4Lar-1, H4Alt-1);
	  getimage(0, 0, H4Lar-1, H4Alt-1, hHUD4a);
	  
  RES = imagesize(0, 0, CLar-1, CAlt-1);
  cCARD10 = malloc(RES);
  readimagefile(".\\card\\CARD10.bmp", 0, 0, CLar-1, CAlt-1);
  getimage(0, 0, CLar-1, CAlt-1, cCARD10);
  		RES = imagesize(0, 0, CLar-1, CAlt-1);
  		cCARD0m = malloc(RES);
  		readimagefile(".\\card\\CARD0m.bmp", 0, 0, CLar-1, CAlt-1);
  		getimage(0, 0, CLar-1, CAlt-1, cCARD0m);
  		
  RES = imagesize(0, 0, PTLar-1, PTAlt-1);
  chPST8 = malloc(RES);
  readimagefile(".\\bttn\\PST8.bmp", 0, 0, PTLar-1, PTAlt-1);
  getimage(0, 0, PTLar-1, PTAlt-1, chPST8);	

	  cleardevice();

  WND = GetForegroundWindow();


 while(!END) {
    if (pg == 1) pg = 2; else pg = 1;
    	setactivepage(pg);
    	putimage(0, 0, bkSCENE81, COPY_PUT);   
    
		if (PLRDH1)
			putimage(30, 30, hPLRD1, COPY_PUT);
		  	
		if (PLRDH2)
			putimage(30, 30, hPLRD2, COPY_PUT);

		if (PLRDH3)
			putimage(30, 30, hPLRD3, COPY_PUT);						

		if (PLRDH4)
			putimage(30, 30, hPLRD4, COPY_PUT);		
							
		else
			putimage(30, 30, hPLRD0, OR_PUT);
																	
		
		if (HNDsl){
			putimage(1200, 30, hHUD1m, AND_PUT);
			putimage(1200, 30, hHUD1a, OR_PUT);
		}
		else{
			putimage(1200, 30, hHUD1m, AND_PUT);
			putimage(1200, 30, hHUD1, OR_PUT);			
		}
		
		if (HND){
			putimage(P.x-25, P.y-31, hHUD1m, AND_PUT);
			putimage(P.x-25, P.y-31, hHUD1, OR_PUT);			
		}
		
		if (LPAsl){
			putimage(1200, 110, hHUD2m, AND_PUT);
			putimage(1200, 110, hHUD2a, OR_PUT);
		}
		else{
			putimage(1200, 110, hHUD2m, AND_PUT);
    		putimage(1200, 110, hHUD2, OR_PUT);
		}
		
		if (LPA){
			putimage(P.x-25, P.y-25, hHUD2m, AND_PUT);
			putimage(P.x-25, P.y-25, hHUD2, OR_PUT);
		}
		
		if (DCKsl){
			putimage(1200, 180, hHUD3m, AND_PUT);
    		putimage(1200, 180, hHUD3a, OR_PUT);
		}
		else{
			putimage(1200, 180, hHUD3m, AND_PUT);
    		putimage(1200, 180, hHUD3, OR_PUT);
		}
				
		if (TABsl){
			putimage(1200, 650, hHUD4m, AND_PUT);
			putimage(1200, 650, hHUD4a, OR_PUT);
		}
		else{
			putimage(1200, 650, hHUD4m, AND_PUT);
			putimage(1200, 650, hHUD4, OR_PUT);
		}
		
		if (CARD10){
			putimage(30, 170, cCARD0m, AND_PUT);
			putimage(30, 170, cCARD10, OR_PUT);
			putimage(120, 30, chPST8, OR_PUT);
		}
		
		if (CARD10S){
			putimage(120, 30, chCLLT[0], OR_PUT);
			CARD10 = false;
		}
			
		if (GetCursorPos(&P)){
		  	if (ScreenToClient(WND, &P)){

				HNDsl = false;
			if (1200 <= P.x && P.x <= 1200+H1Lar-1 && 30 <= P.y && P.y <= 30+H1Alt-1)
				HNDsl = true;

				LPAsl = false;
			if (1200 <= P.x && P.x <= 1200+H2Lar-1 && 110 <= P.y && P.y <= 110+H2Alt-1)
				LPAsl = true;

				DCKsl = false;
			if (1200 <= P.x && P.x <= 1200+H3Lar-1 && 180 <= P.y && P.y <= 180+H3Alt-1)
				DCKsl = true;

				TABsl = false;
			if (1200 <= P.x && P.x <= 1200+H4Lar-1 && 650 <= P.y && P.y <= 650+H4Alt-1)
				TABsl = true;				

			if (GetKeyState(VK_LBUTTON)&0x80) {							
									
					DCKsl = false;
				if (CARD10 && 1200 <= P.x && P.x <= 1200+H3Lar-1 && 180 <= P.y && P.y <= 180+H3Alt-1){
					DCKsl = true;	
					CARD10S = true;
				}
				
				if (LPA && 493 <= P.x && P.x <= 493+27 && 298 <= P.y && P.y <= 298+15){
					CARD10 = true;
				}					
									
					HND = false;
				if (1200 <= P.x && P.x <= 1200+H1Lar-1 && 30 <= P.y && P.y <= 30+H1Alt-1){
					HND = true;

				}
					
					LPA = false;
				if (1200 <= P.x && P.x <= 1200+H2Lar-1 && 110 <= P.y && P.y <= 110+H2Alt-1){
					LPA = true;

				}
					
				if (1200 <= P.x && P.x <= 1200+H4Lar-1 && 650 <= P.y && P.y <= 650+H4Alt-1){
					TAB();
					END = true;
				}							
			}			
			}
		}
   	
    	
    	setvisualpage(pg);
        	
    	if (GetKeyState(0x1B)&0x80){
		//
    	}	
	}
}

void SCENE90(){

	POINT P;
  	HWND WND;
  	bool HNDsl = false;
  	bool HND = false;
  	bool LPAsl = false;
  	bool LPA = false;
  	bool DCKsl = false;
  	bool TABsl = false;
	bool CARD20 = false;
	bool END = false;
	
	int pg = 1;
	char tecla;
	int RES, i;
	void *bkSCENE90, *hPLRD0, *hPLRD1, *hPLRD2, *hPLRD3, *hPLRD4, *cdCARD0;
	void *hHUD1, *hHUD2, *hHUD3, *hHUD4, *hHUD1m, *hHUD2m, *hHUD3m, *hHUD4m, *hHUD1a, *hHUD2a, *hHUD3a, *hHUD4a;
	void *cCARD0m, *cCARD20;
	void *chPST9;
	
  RES = imagesize(0, 0, RLar-1, RAlt-1);
  bkSCENE90 = malloc(RES);
  readimagefile(".\\scene\\SCENE9-0.bmp", 0, 0, JLar-1, JAlt-1);
  getimage(0, 0, JLar-1, JAlt-1, bkSCENE90);
  
  RES = imagesize(0, 0, H0Lar-1, H0Alt-1);
  hPLRD0 = malloc(RES);
  readimagefile(".\\bttn\\PLRD0.bmp", 0, 0, H0Lar-1, H0Alt-1);
  getimage(0, 0, H0Lar-1, H0Alt-1, hPLRD0);
	  RES = imagesize(0, 0, H0Lar-1, H0Alt-1);
	  hPLRD1 = malloc(RES);
	  readimagefile(".\\bttn\\PLRDH1.bmp", 0, 0, H0Lar-1, H0Alt-1);
	  getimage(0, 0, H0Lar-1, H0Alt-1, hPLRD1);
	  
	  RES = imagesize(0, 0, H0Lar-1, H0Alt-1);
	  hPLRD2 = malloc(RES);
	  readimagefile(".\\bttn\\PLRDH2.bmp", 0, 0, H0Lar-1, H0Alt-1);
	  getimage(0, 0, H0Lar-1, H0Alt-1, hPLRD2);
	  
	  RES = imagesize(0, 0, H0Lar-1, H0Alt-1);
	  hPLRD3 = malloc(RES);
	  readimagefile(".\\bttn\\PLRDH3.bmp", 0, 0, H0Lar-1, H0Alt-1);
	  getimage(0, 0, H0Lar-1, H0Alt-1, hPLRD3);
	  
	  RES = imagesize(0, 0, H0Lar-1, H0Alt-1);
	  hPLRD4 = malloc(RES);
	  readimagefile(".\\bttn\\PLRDH4.bmp", 0, 0, H0Lar-1, H0Alt-1);
	  getimage(0, 0, H0Lar-1, H0Alt-1, hPLRD4);
  
  
  RES = imagesize(0, 0, H1Lar-1, H1Alt-1);
  hHUD1 = malloc(RES);
  readimagefile(".\\bttn\\HUD1.bmp", 0, 0, H1Lar-1, H1Alt-1);
  getimage(0, 0, H1Lar-1, H1Alt-1, hHUD1);
		RES = imagesize(0, 0, H1Lar-1, H1Alt-1);
		hHUD1m = malloc(RES);
		readimagefile(".\\bttn\\HUD1m.bmp", 0, 0, H1Lar-1, H1Alt-1);
		getimage(0, 0, H1Lar-1, H1Alt-1, hHUD1m);
		RES = imagesize(0, 0, H1Lar-1, H1Alt-1);
		hHUD1a = malloc(RES);
		readimagefile(".\\bttn\\HUD1a.bmp", 0, 0, H1Lar-1, H1Alt-1);
		getimage(0, 0, H1Lar-1, H1Alt-1, hHUD1a);

  RES = imagesize(0, 0, H2Lar-1, H2Alt-1);
  hHUD2 = malloc(RES);
  readimagefile(".\\bttn\\HUD2.bmp", 0, 0, H2Lar-1, H2Alt-1);
  getimage(0, 0, H2Lar-1, H2Alt-1, hHUD2);
	  RES = imagesize(0, 0, H2Lar-1, H2Alt-1);
	  hHUD2m = malloc(RES);
	  readimagefile(".\\bttn\\HUD2m.bmp", 0, 0, H2Lar-1, H2Alt-1);
	  getimage(0, 0, H2Lar-1, H2Alt-1, hHUD2m);
	  RES = imagesize(0, 0, H2Lar-1, H2Alt-1);
	  hHUD2a = malloc(RES);
	  readimagefile(".\\bttn\\HUD2a.bmp", 0, 0, H2Lar-1, H2Alt-1);
	  getimage(0, 0, H2Lar-1, H2Alt-1, hHUD2a);
	
  RES = imagesize(0, 0, H3Lar-1, H3Alt-1);
  hHUD3 = malloc(RES);
  readimagefile(".\\bttn\\HUD3.bmp", 0, 0, H3Lar-1, H3Alt-1);
  getimage(0, 0, H3Lar-1, H3Alt-1, hHUD3);
	  RES = imagesize(0, 0, H3Lar-1, H3Alt-1);
	  hHUD3m = malloc(RES);
	  readimagefile(".\\bttn\\HUD3m.bmp", 0, 0, H3Lar-1, H3Alt-1);
	  getimage(0, 0, H3Lar-1, H3Alt-1, hHUD3m);
	  RES = imagesize(0, 0, H3Lar-1, H3Alt-1);
	  hHUD3a = malloc(RES);
	  readimagefile(".\\bttn\\HUD3a.bmp", 0, 0, H3Lar-1, H3Alt-1);
	  getimage(0, 0, H3Lar-1, H3Alt-1, hHUD3a);

  RES = imagesize(0, 0, H4Lar-1, H4Alt-1);
  hHUD4 = malloc(RES);
  readimagefile(".\\bttn\\HUD4.bmp", 0, 0, H4Lar-1, H4Alt-1);
  getimage(0, 0, H4Lar-1, H4Alt-1, hHUD4);
	  RES = imagesize(0, 0, H4Lar-1, H4Alt-1);
	  hHUD4m = malloc(RES);
	  readimagefile(".\\bttn\\HUD4m.bmp", 0, 0, H4Lar-1, H4Alt-1);
	  getimage(0, 0, H4Lar-1, H4Alt-1, hHUD4m);
	  RES = imagesize(0, 0, H4Lar-1, H4Alt-1);
	  hHUD4a = malloc(RES);
	  readimagefile(".\\bttn\\HUD4a.bmp", 0, 0, H4Lar-1, H4Alt-1);
	  getimage(0, 0, H4Lar-1, H4Alt-1, hHUD4a);
	  
  RES = imagesize(0, 0, CLar-1, CAlt-1);
  cCARD20 = malloc(RES);
  readimagefile(".\\card\\CARD20.bmp", 0, 0, CLar-1, CAlt-1);
  getimage(0, 0, CLar-1, CAlt-1, cCARD20);
  		RES = imagesize(0, 0, CLar-1, CAlt-1);
  		cCARD0m = malloc(RES);
  		readimagefile(".\\card\\CARD0m.bmp", 0, 0, CLar-1, CAlt-1);
  		getimage(0, 0, CLar-1, CAlt-1, cCARD0m);
  		
  RES = imagesize(0, 0, PTLar-1, PTAlt-1);
  chPST9 = malloc(RES);
  readimagefile(".\\bttn\\PST9.bmp", 0, 0, PTLar-1, PTAlt-1);
  getimage(0, 0, PTLar-1, PTAlt-1, chPST9);	

	  cleardevice();

  WND = GetForegroundWindow();


 while(!END) {
    if (pg == 1) pg = 2; else pg = 1;
    	setactivepage(pg);
    	putimage(0, 0, bkSCENE90, COPY_PUT);  
    
		if (PLRDH1)
			putimage(30, 30, hPLRD1, COPY_PUT);
		  	
		if (PLRDH2)
			putimage(30, 30, hPLRD2, COPY_PUT);

		if (PLRDH3)
			putimage(30, 30, hPLRD3, COPY_PUT);						

		if (PLRDH4)
			putimage(30, 30, hPLRD4, COPY_PUT);		
							
		else
			putimage(30, 30, hPLRD0, OR_PUT);
																	
		
		if (HNDsl){
			putimage(1200, 30, hHUD1m, AND_PUT);
			putimage(1200, 30, hHUD1a, OR_PUT);
		}
		else{
			putimage(1200, 30, hHUD1m, AND_PUT);
			putimage(1200, 30, hHUD1, OR_PUT);			
		}
		
		if (HND){
			putimage(P.x-25, P.y-31, hHUD1m, AND_PUT);
			putimage(P.x-25, P.y-31, hHUD1, OR_PUT);			
		}
		
		if (LPAsl){
			putimage(1200, 110, hHUD2m, AND_PUT);
			putimage(1200, 110, hHUD2a, OR_PUT);
		}
		else{
			putimage(1200, 110, hHUD2m, AND_PUT);
    		putimage(1200, 110, hHUD2, OR_PUT);
		}
		
		if (LPA){
			putimage(P.x-25, P.y-25, hHUD2m, AND_PUT);
			putimage(P.x-25, P.y-25, hHUD2, OR_PUT);
		}
		
		if (DCKsl){
			putimage(1200, 180, hHUD3m, AND_PUT);
    		putimage(1200, 180, hHUD3a, OR_PUT);
		}
		else{
			putimage(1200, 180, hHUD3m, AND_PUT);
    		putimage(1200, 180, hHUD3, OR_PUT);
		}
				
		if (TABsl){
			putimage(1200, 650, hHUD4m, AND_PUT);
			putimage(1200, 650, hHUD4a, OR_PUT);
		}
		else{
			putimage(1200, 650, hHUD4m, AND_PUT);
			putimage(1200, 650, hHUD4, OR_PUT);
		}
		
		if (CARD20){
			putimage(30, 170, cCARD0m, AND_PUT);
			putimage(30, 170, cCARD20, OR_PUT);
			putimage(120, 30, chPST9, OR_PUT);
		}
		
		if (CARD20S){
			putimage(120, 30, chCLLT[0], OR_PUT);
			CARD20 = false;
		}
			
		if (GetCursorPos(&P)){
		  	if (ScreenToClient(WND, &P)){

				HNDsl = false;
			if (1200 <= P.x && P.x <= 1200+H1Lar-1 && 30 <= P.y && P.y <= 30+H1Alt-1)
				HNDsl = true;

				LPAsl = false;
			if (1200 <= P.x && P.x <= 1200+H2Lar-1 && 110 <= P.y && P.y <= 110+H2Alt-1)
				LPAsl = true;

				DCKsl = false;
			if (1200 <= P.x && P.x <= 1200+H3Lar-1 && 180 <= P.y && P.y <= 180+H3Alt-1)
				DCKsl = true;

				TABsl = false;
			if (1200 <= P.x && P.x <= 1200+H4Lar-1 && 650 <= P.y && P.y <= 650+H4Alt-1)
				TABsl = true;				

			if (GetKeyState(VK_LBUTTON)&0x80) {							
									
					DCKsl = false;
				if (CARD20 && 1200 <= P.x && P.x <= 1200+H3Lar-1 && 180 <= P.y && P.y <= 180+H3Alt-1){
					DCKsl = true;	
					CARD20S = true;
				}	
				
				if (LPA && 329 <= P.x && P.x <= 329+10 && 580 <= P.y && P.y <= 580+10){
					CARD20 = true;
				}					
									
					HND = false;
				if (1200 <= P.x && P.x <= 1200+H1Lar-1 && 30 <= P.y && P.y <= 30+H1Alt-1){
					HND = true;

				}
					
					LPA = false;
				if (1200 <= P.x && P.x <= 1200+H2Lar-1 && 110 <= P.y && P.y <= 110+H2Alt-1){
					LPA = true;

				}
					
				if (1200 <= P.x && P.x <= 1200+H4Lar-1 && 650 <= P.y && P.y <= 650+H4Alt-1){
					mciSendString("close rua", NULL, 0, 0);
					TAB();
					END = true;
				}							
			}			
			}
		}
   	
    	
    	setvisualpage(pg);
        	
    	if (GetKeyState(0x1B)&0x80){
		//
    	}	
	}
}

void SCENE91(){

	POINT P;
  	HWND WND;
  	bool HNDsl = false;
  	bool HND = false;
  	bool LPAsl = false;
  	bool LPA = false;
  	bool DCKsl = false;
  	bool TABsl = false;
	bool END = false;
	
	int pg = 1;
	char tecla;
	int RES, i;
	void *bkSCENE91, *hPLRD0, *hPLRD1, *hPLRD2, *hPLRD3, *hPLRD4, *cdCARD0;
	void *hHUD1, *hHUD2, *hHUD3, *hHUD4, *hHUD1m, *hHUD2m, *hHUD3m, *hHUD4m, *hHUD1a, *hHUD2a, *hHUD3a, *hHUD4a;
	
  RES = imagesize(0, 0, RLar-1, RAlt-1);
  bkSCENE91 = malloc(RES);
  readimagefile(".\\scene\\SCENE9-1.bmp", 0, 0, JLar-1, JAlt-1);
  getimage(0, 0, JLar-1, JAlt-1, bkSCENE91);
  
  RES = imagesize(0, 0, H0Lar-1, H0Alt-1);
  hPLRD0 = malloc(RES);
  readimagefile(".\\bttn\\PLRD0.bmp", 0, 0, H0Lar-1, H0Alt-1);
  getimage(0, 0, H0Lar-1, H0Alt-1, hPLRD0);
	  RES = imagesize(0, 0, H0Lar-1, H0Alt-1);
	  hPLRD1 = malloc(RES);
	  readimagefile(".\\bttn\\PLRDH1.bmp", 0, 0, H0Lar-1, H0Alt-1);
	  getimage(0, 0, H0Lar-1, H0Alt-1, hPLRD1);
	  
	  RES = imagesize(0, 0, H0Lar-1, H0Alt-1);
	  hPLRD2 = malloc(RES);
	  readimagefile(".\\bttn\\PLRDH2.bmp", 0, 0, H0Lar-1, H0Alt-1);
	  getimage(0, 0, H0Lar-1, H0Alt-1, hPLRD2);
	  
	  RES = imagesize(0, 0, H0Lar-1, H0Alt-1);
	  hPLRD3 = malloc(RES);
	  readimagefile(".\\bttn\\PLRDH3.bmp", 0, 0, H0Lar-1, H0Alt-1);
	  getimage(0, 0, H0Lar-1, H0Alt-1, hPLRD3);
	  
	  RES = imagesize(0, 0, H0Lar-1, H0Alt-1);
	  hPLRD4 = malloc(RES);
	  readimagefile(".\\bttn\\PLRDH4.bmp", 0, 0, H0Lar-1, H0Alt-1);
	  getimage(0, 0, H0Lar-1, H0Alt-1, hPLRD4);
  
  
  RES = imagesize(0, 0, H1Lar-1, H1Alt-1);
  hHUD1 = malloc(RES);
  readimagefile(".\\bttn\\HUD1.bmp", 0, 0, H1Lar-1, H1Alt-1);
  getimage(0, 0, H1Lar-1, H1Alt-1, hHUD1);
		RES = imagesize(0, 0, H1Lar-1, H1Alt-1);
		hHUD1m = malloc(RES);
		readimagefile(".\\bttn\\HUD1m.bmp", 0, 0, H1Lar-1, H1Alt-1);
		getimage(0, 0, H1Lar-1, H1Alt-1, hHUD1m);
		RES = imagesize(0, 0, H1Lar-1, H1Alt-1);
		hHUD1a = malloc(RES);
		readimagefile(".\\bttn\\HUD1a.bmp", 0, 0, H1Lar-1, H1Alt-1);
		getimage(0, 0, H1Lar-1, H1Alt-1, hHUD1a);

  RES = imagesize(0, 0, H2Lar-1, H2Alt-1);
  hHUD2 = malloc(RES);
  readimagefile(".\\bttn\\HUD2.bmp", 0, 0, H2Lar-1, H2Alt-1);
  getimage(0, 0, H2Lar-1, H2Alt-1, hHUD2);
	  RES = imagesize(0, 0, H2Lar-1, H2Alt-1);
	  hHUD2m = malloc(RES);
	  readimagefile(".\\bttn\\HUD2m.bmp", 0, 0, H2Lar-1, H2Alt-1);
	  getimage(0, 0, H2Lar-1, H2Alt-1, hHUD2m);
	  RES = imagesize(0, 0, H2Lar-1, H2Alt-1);
	  hHUD2a = malloc(RES);
	  readimagefile(".\\bttn\\HUD2a.bmp", 0, 0, H2Lar-1, H2Alt-1);
	  getimage(0, 0, H2Lar-1, H2Alt-1, hHUD2a);
	
  RES = imagesize(0, 0, H3Lar-1, H3Alt-1);
  hHUD3 = malloc(RES);
  readimagefile(".\\bttn\\HUD3.bmp", 0, 0, H3Lar-1, H3Alt-1);
  getimage(0, 0, H3Lar-1, H3Alt-1, hHUD3);
	  RES = imagesize(0, 0, H3Lar-1, H3Alt-1);
	  hHUD3m = malloc(RES);
	  readimagefile(".\\bttn\\HUD3m.bmp", 0, 0, H3Lar-1, H3Alt-1);
	  getimage(0, 0, H3Lar-1, H3Alt-1, hHUD3m);
	  RES = imagesize(0, 0, H3Lar-1, H3Alt-1);
	  hHUD3a = malloc(RES);
	  readimagefile(".\\bttn\\HUD3a.bmp", 0, 0, H3Lar-1, H3Alt-1);
	  getimage(0, 0, H3Lar-1, H3Alt-1, hHUD3a);

  RES = imagesize(0, 0, H4Lar-1, H4Alt-1);
  hHUD4 = malloc(RES);
  readimagefile(".\\bttn\\HUD4.bmp", 0, 0, H4Lar-1, H4Alt-1);
  getimage(0, 0, H4Lar-1, H4Alt-1, hHUD4);
	  RES = imagesize(0, 0, H4Lar-1, H4Alt-1);
	  hHUD4m = malloc(RES);
	  readimagefile(".\\bttn\\HUD4m.bmp", 0, 0, H4Lar-1, H4Alt-1);
	  getimage(0, 0, H4Lar-1, H4Alt-1, hHUD4m);
	  RES = imagesize(0, 0, H4Lar-1, H4Alt-1);
	  hHUD4a = malloc(RES);
	  readimagefile(".\\bttn\\HUD4a.bmp", 0, 0, H4Lar-1, H4Alt-1);
	  getimage(0, 0, H4Lar-1, H4Alt-1, hHUD4a);
	  	  
	  cleardevice();

  WND = GetForegroundWindow();


 while(!END) {
    if (pg == 1) pg = 2; else pg = 1;
    	setactivepage(pg);
    	putimage(0, 0, bkSCENE91, COPY_PUT);  
    
		if (PLRDH1)
			putimage(30, 30, hPLRD1, COPY_PUT);
		  	
		if (PLRDH2)
			putimage(30, 30, hPLRD2, COPY_PUT);

		if (PLRDH3)
			putimage(30, 30, hPLRD3, COPY_PUT);						

		if (PLRDH4)
			putimage(30, 30, hPLRD4, COPY_PUT);		
							
		else
			putimage(30, 30, hPLRD0, OR_PUT);
																	
		
		if (HNDsl){
			putimage(1200, 30, hHUD1m, AND_PUT);
			putimage(1200, 30, hHUD1a, OR_PUT);
		}
		else{
			putimage(1200, 30, hHUD1m, AND_PUT);
			putimage(1200, 30, hHUD1, OR_PUT);			
		}
		
		if (HND){
			putimage(P.x-25, P.y-31, hHUD1m, AND_PUT);
			putimage(P.x-25, P.y-31, hHUD1, OR_PUT);			
		}
		
		if (LPAsl){
			putimage(1200, 110, hHUD2m, AND_PUT);
			putimage(1200, 110, hHUD2a, OR_PUT);
		}
		else{
			putimage(1200, 110, hHUD2m, AND_PUT);
    		putimage(1200, 110, hHUD2, OR_PUT);
		}
		
		if (LPA){
			putimage(P.x-25, P.y-25, hHUD2m, AND_PUT);
			putimage(P.x-25, P.y-25, hHUD2, OR_PUT);
		}
		
		if (DCKsl){
			putimage(1200, 180, hHUD3m, AND_PUT);
    		putimage(1200, 180, hHUD3a, OR_PUT);
		}
		else{
			putimage(1200, 180, hHUD3m, AND_PUT);
    		putimage(1200, 180, hHUD3, OR_PUT);
		}
				
		if (TABsl){
			putimage(1200, 650, hHUD4m, AND_PUT);
			putimage(1200, 650, hHUD4a, OR_PUT);
		}
		else{
			putimage(1200, 650, hHUD4m, AND_PUT);
			putimage(1200, 650, hHUD4, OR_PUT);
		}
					
		if (GetCursorPos(&P)){
		  	if (ScreenToClient(WND, &P)){

				HNDsl = false;
			if (1200 <= P.x && P.x <= 1200+H1Lar-1 && 30 <= P.y && P.y <= 30+H1Alt-1)
				HNDsl = true;

				LPAsl = false;
			if (1200 <= P.x && P.x <= 1200+H2Lar-1 && 110 <= P.y && P.y <= 110+H2Alt-1)
				LPAsl = true;

				DCKsl = false;
			if (1200 <= P.x && P.x <= 1200+H3Lar-1 && 180 <= P.y && P.y <= 180+H3Alt-1)
				DCKsl = true;

				TABsl = false;
			if (1200 <= P.x && P.x <= 1200+H4Lar-1 && 650 <= P.y && P.y <= 650+H4Alt-1)
				TABsl = true;				

			if (GetKeyState(VK_LBUTTON)&0x80) {							
																							
					HND = false;
				if (1200 <= P.x && P.x <= 1200+H1Lar-1 && 30 <= P.y && P.y <= 30+H1Alt-1){
					HND = true;

				}
					
					LPA = false;
				if (1200 <= P.x && P.x <= 1200+H2Lar-1 && 110 <= P.y && P.y <= 110+H2Alt-1){
					LPA = true;

				}
					
				if (1200 <= P.x && P.x <= 1200+H4Lar-1 && 650 <= P.y && P.y <= 650+H4Alt-1){
					mciSendString("close rua", NULL, 0, 0);
					TAB();
					END = true;
				}							
			}			
			}
		}
   	
    	
    	setvisualpage(pg);
        	
    	if (GetKeyState(0x1B)&0x80){
		//
    	}	
	}
}

void SCENE100(){

	POINT P;
  	HWND WND;
  	bool HNDsl = false;
  	bool HND = false;
  	bool LPAsl = false;
  	bool LPA = false;
  	bool DCKsl = false;
  	bool TABsl = false;
	bool CARD12 = false;
	bool END = false;
	
	int pg = 1;
	char tecla;
	int RES, i;
	void *bkSCENE100, *hPLRD0, *hPLRD1, *hPLRD2, *hPLRD3, *hPLRD4, *cdCARD0;
	void *hHUD1, *hHUD2, *hHUD3, *hHUD4, *hHUD1m, *hHUD2m, *hHUD3m, *hHUD4m, *hHUD1a, *hHUD2a, *hHUD3a, *hHUD4a;
	void *cCARD0m, *cCARD12;
	
  RES = imagesize(0, 0, RLar-1, RAlt-1);
  bkSCENE100 = malloc(RES);
  readimagefile(".\\scene\\SCENE10-0.bmp", 0, 0, JLar-1, JAlt-1);
  getimage(0, 0, JLar-1, JAlt-1, bkSCENE100);
  
  RES = imagesize(0, 0, H0Lar-1, H0Alt-1);
  hPLRD0 = malloc(RES);
  readimagefile(".\\bttn\\PLRD0.bmp", 0, 0, H0Lar-1, H0Alt-1);
  getimage(0, 0, H0Lar-1, H0Alt-1, hPLRD0);
	  RES = imagesize(0, 0, H0Lar-1, H0Alt-1);
	  hPLRD1 = malloc(RES);
	  readimagefile(".\\bttn\\PLRDH1.bmp", 0, 0, H0Lar-1, H0Alt-1);
	  getimage(0, 0, H0Lar-1, H0Alt-1, hPLRD1);
	  
	  RES = imagesize(0, 0, H0Lar-1, H0Alt-1);
	  hPLRD2 = malloc(RES);
	  readimagefile(".\\bttn\\PLRDH2.bmp", 0, 0, H0Lar-1, H0Alt-1);
	  getimage(0, 0, H0Lar-1, H0Alt-1, hPLRD2);
	  
	  RES = imagesize(0, 0, H0Lar-1, H0Alt-1);
	  hPLRD3 = malloc(RES);
	  readimagefile(".\\bttn\\PLRDH3.bmp", 0, 0, H0Lar-1, H0Alt-1);
	  getimage(0, 0, H0Lar-1, H0Alt-1, hPLRD3);
	  
	  RES = imagesize(0, 0, H0Lar-1, H0Alt-1);
	  hPLRD4 = malloc(RES);
	  readimagefile(".\\bttn\\PLRDH4.bmp", 0, 0, H0Lar-1, H0Alt-1);
	  getimage(0, 0, H0Lar-1, H0Alt-1, hPLRD4);
  
  
  RES = imagesize(0, 0, H1Lar-1, H1Alt-1);
  hHUD1 = malloc(RES);
  readimagefile(".\\bttn\\HUD1.bmp", 0, 0, H1Lar-1, H1Alt-1);
  getimage(0, 0, H1Lar-1, H1Alt-1, hHUD1);
		RES = imagesize(0, 0, H1Lar-1, H1Alt-1);
		hHUD1m = malloc(RES);
		readimagefile(".\\bttn\\HUD1m.bmp", 0, 0, H1Lar-1, H1Alt-1);
		getimage(0, 0, H1Lar-1, H1Alt-1, hHUD1m);
		RES = imagesize(0, 0, H1Lar-1, H1Alt-1);
		hHUD1a = malloc(RES);
		readimagefile(".\\bttn\\HUD1a.bmp", 0, 0, H1Lar-1, H1Alt-1);
		getimage(0, 0, H1Lar-1, H1Alt-1, hHUD1a);

  RES = imagesize(0, 0, H2Lar-1, H2Alt-1);
  hHUD2 = malloc(RES);
  readimagefile(".\\bttn\\HUD2.bmp", 0, 0, H2Lar-1, H2Alt-1);
  getimage(0, 0, H2Lar-1, H2Alt-1, hHUD2);
	  RES = imagesize(0, 0, H2Lar-1, H2Alt-1);
	  hHUD2m = malloc(RES);
	  readimagefile(".\\bttn\\HUD2m.bmp", 0, 0, H2Lar-1, H2Alt-1);
	  getimage(0, 0, H2Lar-1, H2Alt-1, hHUD2m);
	  RES = imagesize(0, 0, H2Lar-1, H2Alt-1);
	  hHUD2a = malloc(RES);
	  readimagefile(".\\bttn\\HUD2a.bmp", 0, 0, H2Lar-1, H2Alt-1);
	  getimage(0, 0, H2Lar-1, H2Alt-1, hHUD2a);
	
  RES = imagesize(0, 0, H3Lar-1, H3Alt-1);
  hHUD3 = malloc(RES);
  readimagefile(".\\bttn\\HUD3.bmp", 0, 0, H3Lar-1, H3Alt-1);
  getimage(0, 0, H3Lar-1, H3Alt-1, hHUD3);
	  RES = imagesize(0, 0, H3Lar-1, H3Alt-1);
	  hHUD3m = malloc(RES);
	  readimagefile(".\\bttn\\HUD3m.bmp", 0, 0, H3Lar-1, H3Alt-1);
	  getimage(0, 0, H3Lar-1, H3Alt-1, hHUD3m);
	  RES = imagesize(0, 0, H3Lar-1, H3Alt-1);
	  hHUD3a = malloc(RES);
	  readimagefile(".\\bttn\\HUD3a.bmp", 0, 0, H3Lar-1, H3Alt-1);
	  getimage(0, 0, H3Lar-1, H3Alt-1, hHUD3a);

  RES = imagesize(0, 0, H4Lar-1, H4Alt-1);
  hHUD4 = malloc(RES);
  readimagefile(".\\bttn\\HUD4.bmp", 0, 0, H4Lar-1, H4Alt-1);
  getimage(0, 0, H4Lar-1, H4Alt-1, hHUD4);
	  RES = imagesize(0, 0, H4Lar-1, H4Alt-1);
	  hHUD4m = malloc(RES);
	  readimagefile(".\\bttn\\HUD4m.bmp", 0, 0, H4Lar-1, H4Alt-1);
	  getimage(0, 0, H4Lar-1, H4Alt-1, hHUD4m);
	  RES = imagesize(0, 0, H4Lar-1, H4Alt-1);
	  hHUD4a = malloc(RES);
	  readimagefile(".\\bttn\\HUD4a.bmp", 0, 0, H4Lar-1, H4Alt-1);
	  getimage(0, 0, H4Lar-1, H4Alt-1, hHUD4a);
	  
  RES = imagesize(0, 0, CLar-1, CAlt-1);
  cCARD12 = malloc(RES);
  readimagefile(".\\card\\CARD12.bmp", 0, 0, CLar-1, CAlt-1);
  getimage(0, 0, CLar-1, CAlt-1, cCARD12);
  		RES = imagesize(0, 0, CLar-1, CAlt-1);
  		cCARD0m = malloc(RES);
  		readimagefile(".\\card\\CARD0m.bmp", 0, 0, CLar-1, CAlt-1);
  		getimage(0, 0, CLar-1, CAlt-1, cCARD0m);	  

	  cleardevice();

  WND = GetForegroundWindow();


 while(!END) {
    if (pg == 1) pg = 2; else pg = 1;
    	setactivepage(pg);
    	putimage(0, 0, bkSCENE100, COPY_PUT);   
    
		if (PLRDH1)
			putimage(30, 30, hPLRD1, COPY_PUT);
		  	
		if (PLRDH2)
			putimage(30, 30, hPLRD2, COPY_PUT);

		if (PLRDH3)
			putimage(30, 30, hPLRD3, COPY_PUT);						

		if (PLRDH4)
			putimage(30, 30, hPLRD4, COPY_PUT);		
							
		else
			putimage(30, 30, hPLRD0, OR_PUT);
																	
		
		if (HNDsl){
			putimage(1200, 30, hHUD1m, AND_PUT);
			putimage(1200, 30, hHUD1a, OR_PUT);
		}
		else{
			putimage(1200, 30, hHUD1m, AND_PUT);
			putimage(1200, 30, hHUD1, OR_PUT);			
		}
		
		if (HND){
			putimage(P.x-25, P.y-31, hHUD1m, AND_PUT);
			putimage(P.x-25, P.y-31, hHUD1, OR_PUT);			
		}
		
		if (LPAsl){
			putimage(1200, 110, hHUD2m, AND_PUT);
			putimage(1200, 110, hHUD2a, OR_PUT);
		}
		else{
			putimage(1200, 110, hHUD2m, AND_PUT);
    		putimage(1200, 110, hHUD2, OR_PUT);
		}
		
		if (LPA){
			putimage(P.x-25, P.y-25, hHUD2m, AND_PUT);
			putimage(P.x-25, P.y-25, hHUD2, OR_PUT);
		}
		
		if (DCKsl){
			putimage(1200, 180, hHUD3m, AND_PUT);
    		putimage(1200, 180, hHUD3a, OR_PUT);
		}
		else{
			putimage(1200, 180, hHUD3m, AND_PUT);
    		putimage(1200, 180, hHUD3, OR_PUT);
		}
				
		if (TABsl){
			putimage(1200, 650, hHUD4m, AND_PUT);
			putimage(1200, 650, hHUD4a, OR_PUT);
		}
		else{
			putimage(1200, 650, hHUD4m, AND_PUT);
			putimage(1200, 650, hHUD4, OR_PUT);
		}
		
		if (CARD12){
			putimage(30, 170, cCARD0m, AND_PUT);
			putimage(30, 170, cCARD12, OR_PUT);
		}
		
		if (CARD12S){
			putimage(120, 30, chCLLT[0], OR_PUT);
			CARD12 = false;
		}
			
		if (GetCursorPos(&P)){
		  	if (ScreenToClient(WND, &P)){

				HNDsl = false;
			if (1200 <= P.x && P.x <= 1200+H1Lar-1 && 30 <= P.y && P.y <= 30+H1Alt-1)
				HNDsl = true;

				LPAsl = false;
			if (1200 <= P.x && P.x <= 1200+H2Lar-1 && 110 <= P.y && P.y <= 110+H2Alt-1)
				LPAsl = true;

				DCKsl = false;
			if (1200 <= P.x && P.x <= 1200+H3Lar-1 && 180 <= P.y && P.y <= 180+H3Alt-1)
				DCKsl = true;

				TABsl = false;
			if (1200 <= P.x && P.x <= 1200+H4Lar-1 && 650 <= P.y && P.y <= 650+H4Alt-1)
				TABsl = true;				

			if (GetKeyState(VK_LBUTTON)&0x80) {							
									
					DCKsl = false;
				if (CARD12 && 1200 <= P.x && P.x <= 1200+H3Lar-1 && 180 <= P.y && P.y <= 180+H3Alt-1){
					DCKsl = true;	
					CARD12S = true;
				}
				
				if (LPA && 728 <= P.x && P.x <= 728+18 && 583 <= P.y && P.y <= 583+24){
					CARD12 = true;
				}					
									
					HND = false;
				if (1200 <= P.x && P.x <= 1200+H1Lar-1 && 30 <= P.y && P.y <= 30+H1Alt-1){
					HND = true;

				}
					
					LPA = false;
				if (1200 <= P.x && P.x <= 1200+H2Lar-1 && 110 <= P.y && P.y <= 110+H2Alt-1){
					LPA = true;

				}
					
				if (1200 <= P.x && P.x <= 1200+H4Lar-1 && 650 <= P.y && P.y <= 650+H4Alt-1){
					mciSendString("close parque", NULL, 0, 0);
					TAB();
					END = true;
				}							
			}			
			}
		}
   	
    	
    	setvisualpage(pg);
        	
    	if (GetKeyState(0x1B)&0x80){
		//
    	}	
	}
}

void SCENE101(){

	POINT P;
  	HWND WND;
  	bool HNDsl = false;
  	bool HND = false;
  	bool LPAsl = false;
  	bool LPA = false;
  	bool DCKsl = false;
  	bool TABsl = false;
	bool CARD8 = false;
	bool END = false;
	
	int pg = 1;
	char tecla;
	int RES, i;
	void *bkSCENE101, *hPLRD0, *hPLRD1, *hPLRD2, *hPLRD3, *hPLRD4, *cdCARD0;
	void *hHUD1, *hHUD2, *hHUD3, *hHUD4, *hHUD1m, *hHUD2m, *hHUD3m, *hHUD4m, *hHUD1a, *hHUD2a, *hHUD3a, *hHUD4a;
	void *cCARD0m, *cCARD8;
	void *chPST10;
	
  RES = imagesize(0, 0, RLar-1, RAlt-1);
  bkSCENE101 = malloc(RES);
  readimagefile(".\\scene\\SCENE10-1.bmp", 0, 0, JLar-1, JAlt-1);
  getimage(0, 0, JLar-1, JAlt-1, bkSCENE101);
  
  RES = imagesize(0, 0, H0Lar-1, H0Alt-1);
  hPLRD0 = malloc(RES);
  readimagefile(".\\bttn\\PLRD0.bmp", 0, 0, H0Lar-1, H0Alt-1);
  getimage(0, 0, H0Lar-1, H0Alt-1, hPLRD0);
	  RES = imagesize(0, 0, H0Lar-1, H0Alt-1);
	  hPLRD1 = malloc(RES);
	  readimagefile(".\\bttn\\PLRDH1.bmp", 0, 0, H0Lar-1, H0Alt-1);
	  getimage(0, 0, H0Lar-1, H0Alt-1, hPLRD1);
	  
	  RES = imagesize(0, 0, H0Lar-1, H0Alt-1);
	  hPLRD2 = malloc(RES);
	  readimagefile(".\\bttn\\PLRDH2.bmp", 0, 0, H0Lar-1, H0Alt-1);
	  getimage(0, 0, H0Lar-1, H0Alt-1, hPLRD2);
	  
	  RES = imagesize(0, 0, H0Lar-1, H0Alt-1);
	  hPLRD3 = malloc(RES);
	  readimagefile(".\\bttn\\PLRDH3.bmp", 0, 0, H0Lar-1, H0Alt-1);
	  getimage(0, 0, H0Lar-1, H0Alt-1, hPLRD3);
	  
	  RES = imagesize(0, 0, H0Lar-1, H0Alt-1);
	  hPLRD4 = malloc(RES);
	  readimagefile(".\\bttn\\PLRDH4.bmp", 0, 0, H0Lar-1, H0Alt-1);
	  getimage(0, 0, H0Lar-1, H0Alt-1, hPLRD4);
  
  
  RES = imagesize(0, 0, H1Lar-1, H1Alt-1);
  hHUD1 = malloc(RES);
  readimagefile(".\\bttn\\HUD1.bmp", 0, 0, H1Lar-1, H1Alt-1);
  getimage(0, 0, H1Lar-1, H1Alt-1, hHUD1);
		RES = imagesize(0, 0, H1Lar-1, H1Alt-1);
		hHUD1m = malloc(RES);
		readimagefile(".\\bttn\\HUD1m.bmp", 0, 0, H1Lar-1, H1Alt-1);
		getimage(0, 0, H1Lar-1, H1Alt-1, hHUD1m);
		RES = imagesize(0, 0, H1Lar-1, H1Alt-1);
		hHUD1a = malloc(RES);
		readimagefile(".\\bttn\\HUD1a.bmp", 0, 0, H1Lar-1, H1Alt-1);
		getimage(0, 0, H1Lar-1, H1Alt-1, hHUD1a);

  RES = imagesize(0, 0, H2Lar-1, H2Alt-1);
  hHUD2 = malloc(RES);
  readimagefile(".\\bttn\\HUD2.bmp", 0, 0, H2Lar-1, H2Alt-1);
  getimage(0, 0, H2Lar-1, H2Alt-1, hHUD2);
	  RES = imagesize(0, 0, H2Lar-1, H2Alt-1);
	  hHUD2m = malloc(RES);
	  readimagefile(".\\bttn\\HUD2m.bmp", 0, 0, H2Lar-1, H2Alt-1);
	  getimage(0, 0, H2Lar-1, H2Alt-1, hHUD2m);
	  RES = imagesize(0, 0, H2Lar-1, H2Alt-1);
	  hHUD2a = malloc(RES);
	  readimagefile(".\\bttn\\HUD2a.bmp", 0, 0, H2Lar-1, H2Alt-1);
	  getimage(0, 0, H2Lar-1, H2Alt-1, hHUD2a);
	
  RES = imagesize(0, 0, H3Lar-1, H3Alt-1);
  hHUD3 = malloc(RES);
  readimagefile(".\\bttn\\HUD3.bmp", 0, 0, H3Lar-1, H3Alt-1);
  getimage(0, 0, H3Lar-1, H3Alt-1, hHUD3);
	  RES = imagesize(0, 0, H3Lar-1, H3Alt-1);
	  hHUD3m = malloc(RES);
	  readimagefile(".\\bttn\\HUD3m.bmp", 0, 0, H3Lar-1, H3Alt-1);
	  getimage(0, 0, H3Lar-1, H3Alt-1, hHUD3m);
	  RES = imagesize(0, 0, H3Lar-1, H3Alt-1);
	  hHUD3a = malloc(RES);
	  readimagefile(".\\bttn\\HUD3a.bmp", 0, 0, H3Lar-1, H3Alt-1);
	  getimage(0, 0, H3Lar-1, H3Alt-1, hHUD3a);

  RES = imagesize(0, 0, H4Lar-1, H4Alt-1);
  hHUD4 = malloc(RES);
  readimagefile(".\\bttn\\HUD4.bmp", 0, 0, H4Lar-1, H4Alt-1);
  getimage(0, 0, H4Lar-1, H4Alt-1, hHUD4);
	  RES = imagesize(0, 0, H4Lar-1, H4Alt-1);
	  hHUD4m = malloc(RES);
	  readimagefile(".\\bttn\\HUD4m.bmp", 0, 0, H4Lar-1, H4Alt-1);
	  getimage(0, 0, H4Lar-1, H4Alt-1, hHUD4m);
	  RES = imagesize(0, 0, H4Lar-1, H4Alt-1);
	  hHUD4a = malloc(RES);
	  readimagefile(".\\bttn\\HUD4a.bmp", 0, 0, H4Lar-1, H4Alt-1);
	  getimage(0, 0, H4Lar-1, H4Alt-1, hHUD4a);
	  
  RES = imagesize(0, 0, CLar-1, CAlt-1);
  cCARD8 = malloc(RES);
  readimagefile(".\\card\\CARD8.bmp", 0, 0, CLar-1, CAlt-1);
  getimage(0, 0, CLar-1, CAlt-1, cCARD8);
  		RES = imagesize(0, 0, CLar-1, CAlt-1);
  		cCARD0m = malloc(RES);
  		readimagefile(".\\card\\CARD0m.bmp", 0, 0, CLar-1, CAlt-1);
  		getimage(0, 0, CLar-1, CAlt-1, cCARD0m);
  		
  RES = imagesize(0, 0, PTLar-1, PTAlt-1);
  chPST10 = malloc(RES);
  readimagefile(".\\bttn\\PST10.bmp", 0, 0, PTLar-1, PTAlt-1);
  getimage(0, 0, PTLar-1, PTAlt-1, chPST10);	
	  
	  cleardevice();

  WND = GetForegroundWindow();


 while(!END) {
    if (pg == 1) pg = 2; else pg = 1;
    	setactivepage(pg);
    	putimage(0, 0, bkSCENE101, COPY_PUT);
    
		if (PLRDH1)
			putimage(30, 30, hPLRD1, COPY_PUT);
		  	
		if (PLRDH2)
			putimage(30, 30, hPLRD2, COPY_PUT);

		if (PLRDH3)
			putimage(30, 30, hPLRD3, COPY_PUT);						

		if (PLRDH4)
			putimage(30, 30, hPLRD4, COPY_PUT);		
							
		else
			putimage(30, 30, hPLRD0, OR_PUT);
																	
		
		if (HNDsl){
			putimage(1200, 30, hHUD1m, AND_PUT);
			putimage(1200, 30, hHUD1a, OR_PUT);
		}
		else{
			putimage(1200, 30, hHUD1m, AND_PUT);
			putimage(1200, 30, hHUD1, OR_PUT);			
		}
		
		if (HND){
			putimage(P.x-25, P.y-31, hHUD1m, AND_PUT);
			putimage(P.x-25, P.y-31, hHUD1, OR_PUT);			
		}
		
		if (LPAsl){
			putimage(1200, 110, hHUD2m, AND_PUT);
			putimage(1200, 110, hHUD2a, OR_PUT);
		}
		else{
			putimage(1200, 110, hHUD2m, AND_PUT);
    		putimage(1200, 110, hHUD2, OR_PUT);
		}
		
		if (LPA){
			putimage(P.x-25, P.y-25, hHUD2m, AND_PUT);
			putimage(P.x-25, P.y-25, hHUD2, OR_PUT);
		}
		
		if (DCKsl){
			putimage(1200, 180, hHUD3m, AND_PUT);
    		putimage(1200, 180, hHUD3a, OR_PUT);
		}
		else{
			putimage(1200, 180, hHUD3m, AND_PUT);
    		putimage(1200, 180, hHUD3, OR_PUT);
		}
				
		if (TABsl){
			putimage(1200, 650, hHUD4m, AND_PUT);
			putimage(1200, 650, hHUD4a, OR_PUT);
		}
		else{
			putimage(1200, 650, hHUD4m, AND_PUT);
			putimage(1200, 650, hHUD4, OR_PUT);
		}
		
		if (CARD8){
			putimage(30, 170, cCARD0m, AND_PUT);
			putimage(30, 170, cCARD8, OR_PUT);
			putimage(120, 30, chPST10, OR_PUT);
		}
		
		if (CARD8S){
			putimage(120, 30, chCLLT[0], OR_PUT);
			CARD8 = false;
		}
			
		if (GetCursorPos(&P)){
		  	if (ScreenToClient(WND, &P)){

				HNDsl = false;
			if (1200 <= P.x && P.x <= 1200+H1Lar-1 && 30 <= P.y && P.y <= 30+H1Alt-1)
				HNDsl = true;

				LPAsl = false;
			if (1200 <= P.x && P.x <= 1200+H2Lar-1 && 110 <= P.y && P.y <= 110+H2Alt-1)
				LPAsl = true;

				DCKsl = false;
			if (1200 <= P.x && P.x <= 1200+H3Lar-1 && 180 <= P.y && P.y <= 180+H3Alt-1)
				DCKsl = true;

				TABsl = false;
			if (1200 <= P.x && P.x <= 1200+H4Lar-1 && 650 <= P.y && P.y <= 650+H4Alt-1)
				TABsl = true;				

			if (GetKeyState(VK_LBUTTON)&0x80) {							
									
					DCKsl = false;
				if (CARD8 && 1200 <= P.x && P.x <= 1200+H3Lar-1 && 180 <= P.y && P.y <= 180+H3Alt-1){
					DCKsl = true;	
					CARD8S = true;
				}
				
				if (LPA && sqrt(pow(P.x - 603, 2) + pow(P.y - 580, 2)) <= 12){
					CARD8 = true;
				}					
									
					HND = false;
				if (1200 <= P.x && P.x <= 1200+H1Lar-1 && 30 <= P.y && P.y <= 30+H1Alt-1){
					HND = true;

				}
					
					LPA = false;
				if (1200 <= P.x && P.x <= 1200+H2Lar-1 && 110 <= P.y && P.y <= 110+H2Alt-1){
					LPA = true;

				}
					
				if (1200 <= P.x && P.x <= 1200+H4Lar-1 && 650 <= P.y && P.y <= 650+H4Alt-1){
					mciSendString("close parque", NULL, 0, 0);
					TAB();
					END = true;
				}							
			}			
			}
		}
   	
    	
    	setvisualpage(pg);
        	
    	if (GetKeyState(0x1B)&0x80){
		//
    	}	
	}
}

void EXIT(){
	
	closegraph();
	
}
