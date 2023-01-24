#include<reg51.h>
#include<stdio.h>
sbit rs=P3^0;
sbit rw=P3^1;
sbit en=P3^2;

void lcdcmd(unsigned char);
void lcddata(unsigned char);
void delay();

void main(){
    P2=0x00;
    while(1)
    {
        lcdcmd(0x38);delay();
        lcdcmd(0x80);delay();
				lcdcmd(0x0C);delay();
        lcddata('F');delay();
        lcddata('A');delay();
        lcddata('H');delay(); 
        lcddata('I');delay();
        lcddata('M');delay();
				lcddata(' ');delay();
        lcddata('A');delay();
				lcddata('H');delay();
        lcddata('A');delay(); 
        lcddata('M');delay();
        lcddata('M');delay();
        lcddata('A');delay();
				lcddata('D');delay();
				lcddata(' ');delay();
        lcddata('2');delay();
        lcddata('0');delay();
        lcddata('1');delay(); 
        lcddata('9');delay();
        lcddata('0');delay();
        lcddata('0');delay();
        lcddata('0');delay();
        lcddata('0');delay();
        lcddata('1');delay(); 
        lcddata('0');delay();
        lcddata('1');delay();
        lcddata('0');delay();
        lcddata('3');delay();
				delay();delay();
				lcdcmd(0xC0);delay();
				lcddata('C');delay();
        lcddata('S');delay(); 
        lcddata('E');delay();
        lcddata(' ');delay();
				lcddata('D');delay();
				lcddata('P');delay();
				lcddata('T');delay();
				lcddata('.');delay();
				lcddata(' ');delay();
        lcddata('S');delay();
        lcddata('O');delay();
				lcddata('U');delay();
				lcddata('T');delay();
				lcddata('H');delay();
				lcddata('E');delay();
				lcddata('A');delay();
				lcddata('S');delay();
				lcddata('T');delay();
				lcddata(' ');delay();
				lcddata('U');delay();
				lcddata('N');delay();
				lcddata('I');delay();
				lcddata('V');delay();
				lcddata('E');delay();
				lcddata('R');delay();	
				lcddata('S');delay();
				lcddata('I');delay();
				lcddata('T');delay();
				lcddata('Y');delay();
    }
}
void lcdcmd(unsigned char val){
    P2=val;
    rs=0;
    rw=0;
    en=1;
    delay();
    en=0;
}

void lcddata(unsigned char val){
    P2=val;
    rs=1;
    rw=0;
    en=1;
    delay();
    en=0;
}

void delay(){
    unsigned int i;
    for(i=0;i<5000;i++);
}