
#include <ioCC2530.h> //头文件
#define LED1 P1_0     // P1_0定义为P1.0
#define LED2 P1_1     // P1_1定义为P1.1
unsigned int temp = 0;//1ms精确定时
void delay (unsigned int time) //设定延迟函数
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
      LED1 = 1;    //灯1亮
      LED2 = 0;    //灯2灭
      delay(1000); //延时一秒
      LED1 = 0;    //灯1灭
      LED2 = 1;    //灯2亮
      delay(1000); //延迟一秒
}    
}
