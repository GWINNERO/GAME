#include "ansi_S.h"
#include "joystick.h"
#include "LCD.h"
void startWindow(int x1, int y1, int x2, int y2) {

//TOP
	gotoxy(x1, y1);
	printf("%c", 201);
	for (int i=x1+1;i<x2;i++){
		printf("%c",205);
	}
	printf("%c", 187);

//SIDES
	for(int i = 1; i<y2-1; i++){
		gotoxy(x1, y1+i);
		printf("%c", 186);
		gotoxy(x2, y1+i);
		printf("%c", 186);
	}

//BUTTOM
	printf("%c",200);
	for (int i=x1+1;i<x2;i++){
		printf("%c",205);
	}
	printf("%c", 188);
}

int ani = 0;

void spaceship(int x1, int y1, int x2, int y2) {

	fgcolor(1);
	int ex = 0;
	gotoxy(x1+15, y1);
	for(int i = 0; i <9; i++) {
	printf("%c",219);
	}
	bgcolor(5);
	fgcolor(0);
	if (Bup == 0){
	printf("  UP  ");
	}
	if (Bup == 1) {
		blink(1);
	printf("! ! ! ");
	blink(0);
	}
	bgcolor(0);
	fgcolor(1);
	for(int i = 0; i <20; i++) {
	printf("%c",219);
	}
	bgcolor(6);
	fgcolor(0);
	printf("HATCH");
	bgcolor(0);
	fgcolor(1);
	for(int i = 0; i <29; i++) {
	printf("%c",219);
	}
	gotoxy(x1+15, y1+4);
	for(int i = 0; i <9; i++) {
	printf("%c",219);
	}
	bgcolor(5);
	fgcolor(0);
	printf(" DOWN ");
	bgcolor(0);
	fgcolor(1);
	for(int i = 0; i <20; i++) {
	printf("%c",219);
	}
	bgcolor(6);
	fgcolor(0);
	printf("HATCH");
	bgcolor(0);
	fgcolor(1);
	for(int i = 0; i <29; i++) {
	printf("%c",219);
	}
	int a = 0;
	for (int j = 0; j < 3; j++){
	for(int i = 0; i < 7; i++){
	gotoxy(x1+9+i+a, y1-3+j);
	printf("%c",219);
	gotoxy(x1+9+i+a, y1+7-j);
	printf("%c",219);
	} a+=2;
	}
	for(int i = 1; i < 4; i++) {
	gotoxy(x1+15, y1+i);
	printf("%c",219);
	for(int j = 0; j < 6; j++){
	gotoxy(x2-8+j, y1+i);
	printf("%c",219);
	ex++;
	if (ex < 5){
	gotoxy(x2-3+j, y1+i+1);
	printf("%c",219);
	}
	}
	}
	gotoxy(83,y1+2);
	fgcolor(0);
	bgcolor(7);
	if(Bcanon == 0){
	printf(" CANON   ");
	}
	if(Bcanon == 1){
		blink(1);
		printf("! ! !    ");
		blink(0);
	}
	if(Bship1 == 1){
		bgcolor(1);
		gotoxy(x1+55,y1);
		blink(1);
		printf("! ! ! ");
		blink(0);
	}
	if(Bship2 == 1){
		bgcolor(1);
		gotoxy(x1+44,y1+4);
		blink(1);
		printf("! ! ! ");
		blink(0);
	}
	if(Bship3 == 1){
		bgcolor(1);
		gotoxy(x1+74,y1+4);
		blink(1);
		printf("! ! ! ");
		blink(0);
	}
	resetbgcolor();
}

void spaceshipDelete(int x1, int y1, int x2, int y2) {

	int ex = 0;
	gotoxy(x1+15, y1);
	for(int i = 0; i <69; i++) {
	printf("%c",32);
	}
	gotoxy(x1+15, y1+4);
	for(int i = 0; i <69; i++) {
	printf("%c",32);
	}
	int a = 0;
	for (int j = 0; j < 3; j++){
	for(int i = 0; i < 7; i++){
	gotoxy(x1+9+i+a, y1-3+j);
	printf("%c",32);
	gotoxy(x1+9+i+a, y1+7-j);
	printf("%c",32);
	} a+=2;
	}
	for(int i = 1; i < 4; i++) {
	gotoxy(x1+15, y1+i);
	printf("%c",32);
	for(int j = 0; j < 6; j++){
	gotoxy(x2-8+j, y1+i);
	printf("%c",32);
	ex++;
	if (ex < 5){
	gotoxy(x2-3+j, y1+i+1);
	printf("%c",32);
	}
	}
	}
}

void fire(int x1, int y1, int x2, int y2) {
	int s = 0;
	if (ani < 2) {
	for (int i = 0; i <= 8; i++){
	if (s == 0){
	fgcolor(0);
	gotoxy(7+i,y1);
	printf("%c",219);
	gotoxy(7+i,y2);
	printf("%c",219);
	}
	if (s < 3){
	fgcolor(1);
	}
	if (s < 6 && s >= 3){
	fgcolor(9);
	}
	if (s >= 6){
	fgcolor(11);
	}
	gotoxy(8+i,y1);
	printf("%c",219);
	gotoxy(8+i,y2);
	printf("%c",219);
	s++;
	} s = 0;
	for (int i = 0; i <= 11; i++){
	if (s == 0){
	fgcolor(0);
	gotoxy(4+i,y1+1);
	printf("%c",219);
	gotoxy(4+i,y2-1);
	printf("%c",219);
	}
	if (s < 4){
	fgcolor(1);
	}
	if (s < 7 && s >= 4){
	fgcolor(9);
	}
	if (s < 10 && s >= 7){
	fgcolor(11);
	}
	if (s >= 10){
	fgcolor(15);
	}
	gotoxy(5+i,y1+1);
	printf("%c",219);
	gotoxy(5+i,y2-1);
	printf("%c",219);
	s++;
	} s = 0;
	for (int i = 0; i <= 13; i++){
	if (s == 0){
	fgcolor(0);
	gotoxy(2+i,y1+2);
	printf("%c",219);
	}
	if(s < 3) {
	fgcolor(1);
	}
	if (s < 7 && s >= 3){
	fgcolor(9);
	}
	if (s < 10 && s >=7){
	fgcolor(11);
	}
	if (s < 13 && s >= 10){
	fgcolor(15);
	}
	if (s >= 13) {
	fgcolor(12);
	}
	gotoxy(3+i,y1+2);
	printf("%c",219);
	s++;
	} s = 0;
	ani++;
	}

	if (ani >= 2) {
	for (int i = 0; i <= 9; i++){
	if (s < 3){
	fgcolor(9);
	}
	if (s < 6 && s >= 3){
	fgcolor(11);
	}
	if (s >= 6){
	fgcolor(15);
	}
	gotoxy(7+i,y1);
	printf("%c",219);
	gotoxy(7+i,y2);
	printf("%c",219);
	s++;
	} s = 0;
	for (int i = 0; i <= 12; i++){
	if (s < 4){
	fgcolor(9);
	}
	if (s < 7 && s >= 4){
	fgcolor(11);
	}
	if (s < 10 && s >= 7){
	fgcolor(15);
	}
	if (s >= 10){
	fgcolor(12);
	}
	gotoxy(4+i,y1+1);
	printf("%c",219);
	gotoxy(4+i,y2-1);
	printf("%c",219);
	s++;
	} s = 0;
	for (int i = 0; i <= 14; i++){
	if(s < 3) {
	fgcolor(9);
	}
	if (s < 7 && s >= 3){
	fgcolor(11);
	}
	if (s < 10 && s >=7){
	fgcolor(15);
	}
	if (s < 13 && s >= 10){
	fgcolor(12);
	}
	if (s >= 13) {
	fgcolor(4);
	}
	gotoxy(2+i,y1+2);
	printf("%c",219);
	s++;
	} s = 0;
	ani++;
	if (ani == 3) {
		ani = 0;
	}
	}
	resetbgcolor();
}

void fireDelete(int x1, int y1, int x2, int y2) {
	gotoxy(7,y1);
	for (int i = 0; i <= 9; i++){
	printf("%c",32);
	}
	gotoxy(7,y2);
	for (int i = 0; i <= 9; i++){
	printf("%c",32);
	}
	gotoxy(4,y1+1);
	for (int i = 0; i <= 12; i++){
	printf("%c",32);
	}
	gotoxy(4,y2-1);
	for (int i = 0; i <= 12; i++){
	printf("%c",32);
	}
	gotoxy(2,y1+2);
	for (int i = 0; i <= 14; i++){
	printf("%c",32);
	}
	}


void playerInShipR(int p,int x, int y){

	if (p == 1) {
	fgcolor(15);
	gotoxy(x+2,y);
	printf("%c",254	);

	gotoxy(x,y+1);
	printf("%c",223);
	printf("%c",219);
	printf("%c",219);

	fgcolor(9);
	gotoxy(x+1,y+2);
	printf("%c",192);
	printf("%c",192);

	fat(1);
	fgcolor(9);
	gotoxy(x+3,y);
	printf("%c",60);
	fgcolor(2);
	fat(0);
	}

	if (p == 2) {
	fgcolor(11);
	gotoxy(x+2,y);
	printf("%c",254	);

	gotoxy(x,y+1);
	printf("%c",223);
	printf("%c",219);
	printf("%c",219);

	fgcolor(9);
	gotoxy(x+1,y+2);
	printf("%c",192);
	printf("%c",192);

	fat(1);
	fgcolor(9);
	gotoxy(x+3,y);
	printf("%c",60);
	fgcolor(2);
	fat(0);
	}
	resetbgcolor();
}

void playerInShipL(int p,int x, int y){

	if (p == 1) {
	fgcolor(15);
	gotoxy(x+1,y);
	printf("%c",254	);

	gotoxy(x+1,y+1);
	printf("%c",219);
	printf("%c",219);
	printf("%c",223);

	fgcolor(9);
	gotoxy(x+1,y+2);
	printf("%c",217);
	printf("%c",217);

	fat(1);
	fgcolor(9);
	gotoxy(x,y);
	printf("%c",62);
	fgcolor(2);
	fat(0);
	}

	if (p == 2) {
	fgcolor(11);
	gotoxy(x+1,y);
	printf("%c",254	);

	gotoxy(x+1,y+1);
	printf("%c",219);
	printf("%c",219);
	printf("%c",223);

	fgcolor(9);
	gotoxy(x+1,y+2);
	printf("%c",217);
	printf("%c",217);

	fat(1);
	fgcolor(9);
	gotoxy(x,y);
	printf("%c",62);
	fgcolor(2);
	fat(0);
	}
	resetbgcolor();
}

void playerInSpaceR(int p, int x, int y){   //duck

	if (p == 1) {
	fgcolor(15);
	bgcolor(7);
	gotoxy(x+2,y);
	printf("%c",254	);
	bgcolor(0);

	gotoxy(x,y+1);
	printf("%c",223);
	printf("%c",219);
	printf("%c",219);

	fgcolor(9);
	gotoxy(x+1,y+2);
	printf("%c",192);
	printf("%c",192);

	fat(1);
	fgcolor(9);
	bgcolor(7);
	gotoxy(x+3,y);
	printf("%c",60);
	bgcolor(0);
	fgcolor(2);
	fat(0);
	}

	if (p == 2) {
	fgcolor(11);
	bgcolor(7);
	gotoxy(x+2,y);
	printf("%c",254	);
	bgcolor(0);

	gotoxy(x,y+1);
	printf("%c",223);
	printf("%c",219);
	printf("%c",219);

	fgcolor(9);
	gotoxy(x+1,y+2);
	printf("%c",192);
	printf("%c",192);

	fat(1);
	fgcolor(9);
	bgcolor(7);
	gotoxy(x+3,y);
	printf("%c",60);
	bgcolor(0);
	fgcolor(2);
	fat(0);
	}
	resetbgcolor();
}

void playerInSpaceL(int p, int x, int y){

	if (p == 1) {
	fgcolor(15);
	bgcolor(7);
	gotoxy(x+1,y);
	printf("%c",254	);
	bgcolor(0);

	gotoxy(x+1,y+1);
	printf("%c",219);
	printf("%c",219);
	printf("%c",223);

	fgcolor(9);
	gotoxy(x+1,y+2);
	printf("%c",217);
	printf("%c",217);

	fat(1);
	fgcolor(9);
	bgcolor(7);
	gotoxy(x,y);
	printf("%c",62);
	bgcolor(0);
	fgcolor(2);
	fat(0);
	}

	if (p == 2) {
	fgcolor(11);
	bgcolor(7);
	gotoxy(x+1,y);
	printf("%c",254	);
	bgcolor(0);

	gotoxy(x+1,y+1);
	printf("%c",219);
	printf("%c",219);
	printf("%c",223);

	fgcolor(9);
	gotoxy(x+1,y+2);
	printf("%c",217);
	printf("%c",217);

	fat(1);
	fgcolor(9);
	bgcolor(7);
	gotoxy(x,y);
	printf("%c",62);
	bgcolor(0);
	fgcolor(2);
	fat(0);
	}
	resetbgcolor();
}

void playerInSpaceUSDL(int p, int x, int y){

	if (p == 1) {
	fgcolor(15);
	bgcolor(7);
	gotoxy(x+1,y+2);
	printf("%c",254	);
	bgcolor(0);

	gotoxy(x+1,y+1);
	printf("%c",219);
	printf("%c",219);
	printf("%c",220);

	fgcolor(9);
	gotoxy(x+1,y);
	printf("%c",191);
	printf("%c",191);

	fat(1);
	fgcolor(9);
	bgcolor(7);
	gotoxy(x,y+2);
	printf("%c",62);
	bgcolor(0);
	fgcolor(2);
	fat(0);
	}

	if (p == 2) {
	fgcolor(11);
	bgcolor(7);
	gotoxy(x+1,y+2);
	printf("%c",254	);
	bgcolor(0);

	gotoxy(x+1,y+1);
	printf("%c",219);
	printf("%c",219);
	printf("%c",220);

	fgcolor(9);
	gotoxy(x+1,y);
	printf("%c",191);
	printf("%c",191);

	fat(1);
	fgcolor(9);
	bgcolor(7);
	gotoxy(x,y+2);
	printf("%c",62);
	bgcolor(0);
	fgcolor(2);
	fat(0);
	}
	resetbgcolor();
}

void playerInSpaceUSDR(int p, int x, int y){

	if (p == 1) {
	fgcolor(15);
	bgcolor(7);
	gotoxy(x+2,y+2);
	printf("%c",254	);
	bgcolor(0);

	gotoxy(x,y+1);
	printf("%c",220);
	printf("%c",219);
	printf("%c",219);

	fgcolor(9);
	gotoxy(x+1,y);
	printf("%c",218);
	printf("%c",218);

	fat(1);
	fgcolor(9);
	bgcolor(7);
	gotoxy(x+3,y+2);
	printf("%c",60);
	bgcolor(0);
	fgcolor(2);
	fat(0);
	}

	if (p == 2) {
	fgcolor(11);
	bgcolor(7);
	gotoxy(x+2,y+2);
	printf("%c",254	);
	bgcolor(0);

	gotoxy(x,y+1);
	printf("%c",220);
	printf("%c",219);
	printf("%c",219);

	fgcolor(9);
	gotoxy(x+1,y);
	printf("%c",218);
	printf("%c",218);

	fat(1);
	fgcolor(9);
	bgcolor(7);
	gotoxy(x+3,y+2);
	printf("%c",60);
	bgcolor(0);
	fgcolor(2);
	fat(0);
	}
	resetbgcolor();
}

void goDuckUP1(int play,int x, int y, int *ud, int *rl,duck_t * D){

	if (joy.up && !CJoy.up && D->ud >-21){
	playerInSpaceR(play,x+*rl,y+*ud);
	playerDelete(play,x+*rl,y+*ud);
	(*ud)--;
	playerInSpaceR(play,x+1+*rl,y+*ud);
	}
	if (joy.left && !CJoy.left && D->rl >0){
	playerInSpaceL(play,x+*rl,y+*ud);
	playerDelete(play,x+*rl,y+*ud);
	(*rl)-=5;
	playerInSpaceL(play,x+1+*rl,y+*ud);
	}
	if (joy.right && !CJoy.right && D->rl <65){
	playerInSpaceR(play,x+*rl,y+*ud);
	playerDelete(play,x+*rl,y+*ud);
	(*rl)+=5;
	playerInSpaceR(play,x+1+*rl,y+*ud);
	}
	if (joy.center && !CJoy.center && D->rl == 30){
	playerInSpaceR(play,x+*rl,y+*ud);
	playerDelete(1,x+*rl,y+*ud);
	(*ud)+=4;
	playerInShipR(play,x+1+*rl,y+*ud);
	}
	D->ud = *ud;
	D->rl = x+1+*rl-23;
}

void goDuckUPMove1(int play,int x, int y, int *ud, int *rl,duck_t * D) {
	if (joy.up){
		playerInSpaceR(play,x+*rl,y+*ud);
		playerDelete(play,x+*rl,y+*ud);
		(*ud)--;
		playerInSpaceR(play,x+1+*rl,y+*ud);
		}
	if (joy.down){
		playerInSpaceR(play,x+*rl,y+*ud);
		playerDelete(play,x+*rl,y+*ud);
		(*ud)++;
		playerInSpaceR(play,x+1+*rl,y+*ud);
		}
	D->ud = *ud;
}


void goDuckUP2(int play,int x, int y, int *ud, int *rl,duck_t * D){

	if (key.up && D->ud >-21){
	playerInSpaceR(play,x+*rl,y+*ud);
	playerDelete(play,x+*rl,y+*ud);
	(*ud)--;
	playerInSpaceR(play,x+1+*rl,y+*ud);
	}
	if (key.left && D->rl >0){
	playerInSpaceL(play,x+*rl,y+*ud);
	playerDelete(play,x+*rl,y+*ud);
	(*rl)-=5;
	playerInSpaceL(play,x+1+*rl,y+*ud);
	}
	if (key.right && D->rl <65){
	playerInSpaceR(play,x+*rl,y+*ud);
	playerDelete(play,x+*rl,y+*ud);
	(*rl)+=5;
	playerInSpaceR(play,x+1+*rl,y+*ud);
	}
	if (key.center && D->rl == 30){
	playerInSpaceR(play,x+*rl,y+*ud);
	playerDelete(1,x+*rl,y+*ud);
	(*ud)+=4;
	playerInShipR(play,x+1+*rl,y+*ud);
	}
	D->ud = *ud;
	D->rl = x+1+*rl-23;
}
void goDuckUPMove2(int play,int x, int y, int *ud, int *rl,duck_t * D){
	if (key.down || joy.down){
	playerInSpaceR(play,x+*rl,y+*ud);
	playerDelete(play,x+*rl,y+*ud);
	(*ud)++;
	playerInSpaceR(play,x+1+*rl,y+*ud);
	}
	D->ud = *ud;
}

void goDuckMID1(int play,int x, int y, int *ud, int *rl,duck_t * D){

	if (joy.up && !CJoy.up && D->rl == 30){
	playerInShipR(play,x+*rl,y+*ud);
	playerDelete(play,x+*rl,y+*ud);
	(*ud)-= 4;
	playerInSpaceR(play,x+1+*rl,y+*ud);
	}
	if (joy.down && !CJoy.down  && D->rl == 30){
	playerInShipR(play,x+*rl,y+*ud);
	playerDelete(play,x+*rl,y+*ud);
	(*ud)+= 4;
	playerInSpaceUSDR(play,x+1+*rl,y+*ud);
	}
	if (joy.left && !CJoy.left && D->rl >0){
	playerInShipL(play,x+*rl,y+*ud);
	playerDelete(play,x+*rl,y+*ud);
	(*rl)-=5;
	playerInShipL(play,x+1+*rl,y+*ud);
	}
	if (joy.right && !CJoy.right && D->rl <55){
	playerInShipR(play,x+*rl,y+*ud);
	playerDelete(play,x+*rl,y+*ud);
	(*rl)+=5;
	playerInShipR(play,x+1+*rl,y+*ud);
	}
	D->ud = *ud;
	D->rl = x+1+*rl-23;
}

void goDuckMID2(int play,int x, int y, int *ud, int *rl,duck_t * D){

	if (key.up && D->rl == 30){
	playerInShipR(play,x+*rl,y+*ud);
	playerDelete(play,x+*rl,y+*ud);
	(*ud)-= 4;
	playerInSpaceR(play,x+1+*rl,y+*ud);
	}
	if (key.down && D->rl == 30){
	playerInShipR(play,x+*rl,y+*ud);
	playerDelete(play,x+*rl,y+*ud);
	(*ud)+= 4;
	playerInSpaceUSDR(play,x+1+*rl,y+*ud);
	}
	if (key.left && D->rl >0){
	playerInShipL(play,x+*rl,y+*ud);
	playerDelete(play,x+*rl,y+*ud);
	(*rl)-=5;
	playerInShipL(play,x+1+*rl,y+*ud);
	}
	if (key.right && D->rl <55){
	playerInShipR(play,x+*rl,y+*ud);
	playerDelete(play,x+*rl,y+*ud);
	(*rl)+=5;
	playerInShipR(play,x+1+*rl,y+*ud);
	}
	D->ud = *ud;
	D->rl = x+1+*rl-23;
}
void goDuckMIDMove2(int play,int x, int y, int *ud, int *rl,duck_t * D){
	if (key.up && !(key.down || joy.down)){
	playerInShipR(play,x+*rl,y+*ud);
	playerDelete(play,x+*rl,y+*ud);
	(*ud)--;
	playerInShipR(play,x+1+*rl,y+*ud);
	}
	if (key.down || joy.down){
	playerInShipR(play,x+*rl,y+*ud);
	playerDelete(play,x+*rl,y+*ud);
	(*ud)++;
	playerInShipR(play,x+1+*rl,y+*ud);
	}
	D->ud = *ud;
}

void goDuckUSD1(int play,int x, int y, int *ud, int *rl,duck_t * D){

	if (joy.up && !CJoy.up && D->ud <30){
	playerInSpaceUSDR(play,x+*rl,y+*ud);
	playerDelete(play,x+*rl,y+*ud);
	(*ud)++;
	playerInSpaceUSDR(play,x+1+*rl,y+*ud);
	}
	if (joy.right && !CJoy.right && D->rl >0){
	playerInSpaceUSDL(play,x+*rl,y+*ud);
	playerDelete(play,x+*rl,y+*ud);
	(*rl)-=5;
	playerInSpaceUSDL(play,x+1+*rl,y+*ud);
	}
	if (joy.left && !CJoy.left && D->rl <65){
	playerInSpaceUSDR(play,x+*rl,y+*ud);
	playerDelete(play,x+*rl,y+*ud);
	(*rl)+=5;
	playerInSpaceUSDR(play,x+1+*rl,y+*ud);
	}
	if (joy.center && !CJoy.center && D->rl == 30){
	playerInSpaceUSDR(play,x+*rl,y+*ud);
	playerDelete(play,x+*rl,y+*ud);
	(*ud)-=4;
	playerInShipR(play,x+1+*rl,y+*ud);
	}
	D->ud = *ud;
	D->rl = x+1+*rl-23;
}

void goDuckUSD2(int play,int x, int y, int *ud, int *rl,duck_t * D){

	if (key.up && D->ud <30){
	playerInSpaceUSDR(play,x+*rl,y+*ud);
	playerDelete(play,x+*rl,y+*ud);
	(*ud)++;
	playerInSpaceUSDR(play,x+1+*rl,y+*ud);
	}
	if (key.right && D->rl >0){
	playerInSpaceUSDL(play,x+*rl,y+*ud);
	playerDelete(play,x+*rl,y+*ud);
	(*rl)-=5;
	playerInSpaceUSDL(play,x+1+*rl,y+*ud);
	}
	if (key.left && D->rl <65){
	playerInSpaceUSDR(play,x+*rl,y+*ud);
	playerDelete(play,x+*rl,y+*ud);
	(*rl)+=5;
	playerInSpaceUSDR(play,x+1+*rl,y+*ud);
	}
	if (key.center && D->rl == 30){
	playerInSpaceUSDR(play,x+*rl,y+*ud);
	playerDelete(play,x+*rl,y+*ud);
	(*ud)-=4;
	playerInShipR(play,x+1+*rl,y+*ud);
	}
	D->ud = *ud;
	D->rl = x+1+*rl-23;
}
void goDuckUSDMove2(int play,int x, int y, int *ud, int *rl,duck_t * D){
	if ((key.up || joy.up) && !(key.down || joy.down)){
	playerInSpaceUSDR(play,x+*rl,y+*ud);
	playerDelete(play,x+*rl,y+*ud);
	(*ud)--;
	playerInSpaceUSDR(play,x+1+*rl,y+*ud);
	}
	if (key.down || joy.down){
	playerInSpaceUSDR(play,x+*rl,y+*ud);
	playerDelete(play,x+*rl,y+*ud);
	(*ud)++;
	playerInSpaceUSDR(play,x+1+*rl,y+*ud);
	}
	D->ud = *ud;
}

void fat(int state) {
	if (state) {
		printf("%c[%d%c", ESC, 01, 'm');
	} else {
		printf("%c[%d%c", ESC, 22, 'm');
	}
}


void playerDelete(int p,int x, int y){

	gotoxy(x,y);
	for (int i = 0; i < 5; i++){
		printf("%c",32);
	}
	gotoxy(x,y+1);
	for (int i = 0; i < 5; i++){
		printf("%c",32);
	}
	gotoxy(x,y+2);
	for (int i = 0; i < 5; i++){
		printf("%c",32);
	}
}

void canonFire(int b,int SS){
	bgcolor(0);

	if (b == 1){
	fat(1);
	bgcolor(2);
	for(int i = 0; i<88 ;i++){
	gotoxy(92+i,29+SS);
	printf("%c",205);
	printf("%c",205);
	printf("%c",205);
	printf("%c",205);
	printf("%c",205);
	bgcolor(0);
	gotoxy(92+i-1,29+SS);
	printf("%c",32);
}
	gotoxy(178,29+SS);
	fgcolor(10);
	fat(0);
	for(int i = 0; i<6; i++){
	printf("%c",32);
	}
}
if (b == 2){
fat(1);
bgcolor(1);
for(int i = 0; i<88 ;i++){
gotoxy(92+i,29+SS);
printf("%c",178);
printf("%c",178);
printf("%c",178);
printf("%c",178);
printf("%c",178);
bgcolor(0);
gotoxy(92+i-1,29+SS);
printf("%c",32);
}
gotoxy(178,29+SS);
fgcolor(10);
fat(0);
for(int i = 0; i<6; i++){
printf("%c",32);
}
}
resetbgcolor();
}


void Broken(int rand_UP,int rand_OBJ, int x1, int y1){
	fat(1);
	blink(1);

	if (rand_OBJ == 1){
	bgcolor(5);
	gotoxy(x1+24,y1);
	Bup = 1;
	}
	if (rand_OBJ == 2){
	bgcolor(5);
	gotoxy(x1+24,y1+4);
	Bdown= 1;
	}
	if (rand_OBJ == 3) {
	bgcolor(7);
	gotoxy(x1+81,y1+2);
	Bcanon = 1;
	}
	if (rand_OBJ == 4) {
	bgcolor(1);
	gotoxy(x1+55,y1);
	Bship1 = 1;
	}
	if (rand_OBJ == 5) {
	bgcolor(1);
	gotoxy(x1+44,y1+4);
	Bship2 = 1;
	}
	if (rand_OBJ == 6) {
	bgcolor(1);
	gotoxy(x1+74,y1+4);
	Bship3 = 1;
	}


	if (rand_UP == 1) {
	fgcolor(0);
	for(int i = 0; i<3; i++) {
	printf("%c ",33);
	}
	}
	if (rand_UP == 2) {
	fgcolor(11);
	for(int i = 0; i<3; i++) {
	printf("%c ",33);
	}
	}






	fat(0);
	blink(0);
	resetbgcolor();
	}

void duckExplotion(int x, int y, int *ud, int *rl){

//1
	fgcolor(15);
	gotoxy(x+2+*rl,y+1+*ud);
		printf("%c",219);
//2

	fgcolor(11);
	gotoxy(x+1+*rl,y+*ud);
	for (int i = 0; i < 3; i++){
		printf("%c",219);
	}
	gotoxy(x+1+*rl,y+1+*ud);
	for (int i = 0; i < 3; i++){
		printf("%c",219);
	}
	gotoxy(x+1+*rl,y+2+*ud);
	for (int i = 0; i < 3; i++){
		printf("%c",219);
	}



//3
	fgcolor(9);
	gotoxy(x+1+*rl,y-1+*ud);
	for (int i = 0; i < 3; i++){
	printf("%c",219);
	}
	gotoxy(x+*rl,y+*ud);
	for (int i = 0; i < 5; i++){
		printf("%c",219);
	}
	gotoxy(x+*rl,y+1+*ud);
	for (int i = 0; i < 5; i++){
		printf("%c",219);
	}
	gotoxy(x+*rl,y+2+*ud);
	for (int i = 0; i < 5; i++){
		printf("%c",219);
	}
	gotoxy(x+1+*rl,y+3+*ud);
	for (int i = 0; i < 3; i++){
	printf("%c",219);
	}


//4
	fgcolor(1);
	gotoxy(x+1+*rl,y-1+*ud);
	for (int i = 0; i < 3; i++){
	printf("%c",219);
	}
	gotoxy(x+*rl,y+*ud);
	for (int i = 0; i < 5; i++){
	printf("%c",219);
	}
	gotoxy(x-1+*rl,y+1+*ud);
	for (int i = 0; i < 7; i++){
	printf("%c",219);
	}
	gotoxy(x+*rl,y+2+*ud);
	for (int i = 0; i < 5; i++){
	printf("%c",219);
	}
	gotoxy(x+1+*rl,y+3+*ud);
	for (int i = 0; i < 3; i++){
	printf("%c",219);
	}



//DELETE
	gotoxy(x+1+*rl,y-1+*ud);
	for (int i = 0; i < 3; i++){
	printf("%c",32);
	}
	gotoxy(x+*rl,y+*ud);
	for (int i = 0; i < 5; i++){
	printf("%c",32);
	}
	gotoxy(x-1+*rl,y+1+*ud);
	for (int i = 0; i < 7; i++){
	printf("%c",32);
	}
	gotoxy(x+*rl,y+2+*ud);
	for (int i = 0; i < 5; i++){
	printf("%c",32);
	}
	gotoxy(x+1+*rl,y+3+*ud);
	for (int i = 0; i < 3; i++){
	printf("%c",32);
	}
	resetbgcolor();
	score -= 50;
	}



