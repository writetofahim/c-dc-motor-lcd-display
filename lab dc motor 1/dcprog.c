#include<reg51.h>
sbit motor1Pin1=P1^0;
sbit motor1Pin2=P1^1;

sbit motor2Pin1=P1^2;
sbit motor2Pin2=P1^3;

void main(){
	unsigned int i;
	motor1Pin1=motor1Pin2=motor2Pin1=motor2Pin2=0;

	while(1){
		motor1Pin1=1;
		motor1Pin2=0;
		motor2Pin1=0;
		motor2Pin2=1;
	}
}