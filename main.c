
#include <ioCC2530.h> //ͷ�ļ�
#define LED1 P1_0     // P1_0����ΪP1.0
#define LED2 P1_1     // P1_1����ΪP1.1
unsigned int temp = 0;//1ms��ȷ��ʱ
void delay (unsigned int time) //�趨�ӳٺ���
{ 
  unsigned int i = 0;
  unsigned int j;
  for(i = 0; i < time; i++)
 {
    for(j = 0; j < 475; j++)
 {  asm("NOP");   
          asm("NOP");
          asm("NOP");
       }  
  } 
}

void main(void)
{
    P1SEL &= ~(0x03);
    P1DIR |= 0x03 ;   
    while(1)
{
      LED1 = 1;    //��1��
      LED2 = 0;    //��2��
      delay(1000); //��ʱһ��
      LED1 = 0;    //��1��
      LED2 = 1;    //��2��
      delay(1000); //�ӳ�һ��
}    
}
