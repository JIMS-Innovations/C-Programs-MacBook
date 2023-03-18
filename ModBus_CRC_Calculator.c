#include <stdio.h>
#include <inttypes.h>

unsigned short calc_crc(int n,unsigned char *outbound_message) 
  { 
    unsigned char carry_flag; 
    unsigned short crc=0xFFFF; 

    for (int i = 0; i < n; i++) 
    { 
      crc = crc ^ outbound_message[i]; 

      for (int j = 0; j < 8; j++) 
      { 
        carry_flag = crc & 0x01; 
        crc = crc >> 1; 

        if (carry_flag == 1) 
        { 
          crc = crc ^ 0xA001; 
        } 
      } 
    } 

    return crc; 
  } 

int main (void)
{
    // unsigned char ControlFrame_12[10] = { 0x7E, 0xFF, 0x11, 0x06, 0x06, 0x0C, 0x00, 0x4E, 0x2E, 0xE0 }; 

    // u_int16_t CRC = calc_crc(10, ControlFrame_12);

    // u_int8_t CRC_HI = (u_int8_t)((CRC >> 8)& 0xFF);
    // u_int8_t CRC_LO = (u_int8_t)(CRC & 0x00FF);


    // printf("CRC: %x \n CRC High Byte: %x \n CRC Low Byte: %x \n", CRC, CRC_HI, CRC_LO);

  int i = 201;
  printf("%d \n", i/100);
}