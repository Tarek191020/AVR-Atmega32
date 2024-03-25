/*
 * I2C_private.h
 *
 * Created: 3/23/2024 8:43:22 PM
 *  Author: Tarek Alaa
 */ 


#ifndef I2C_PRIVATE_H_
#define I2C_PRIVATE_H_

//Prescalers
#define	I2C_1_PRESCALER					 0
#define	I2C_4_PRESCALER					 1
#define	I2C_16_PRESCALER				 2
#define	I2C_64_PRESCALER				 3


//Master staus 
#define I2C_STATUS_VALUE				 (TWSR_REG&0xF8)

#define I2C_START_CONDITION_ACK          0x08
#define I2C_REP_START_CONDITION_ACK      0x10
#define I2C_SLAVE_ADDRESS_WRITE_ACK      0x18
#define I2C_SLAVE_ADDRESS_READ_ACK       0x40
#define I2C_MASTER_DATA_TRANSMIT_ACK     0x28
#define I2C_MASTER_DATA_RECIEVE_ACK      0x50
#define I2C_MASTER_DATA_RECIEVE_NACK     0x58


//Slave staus
#define I2C_SLAVE_DATA_TRANSMIT_ACK		 0xB8
#define I2C_SLAVE_DATA_RECEIVE_ACK		 0x80
#define I2C_SLAVE_DATA_RECEIVE_NACK		 0x88


#endif /* I2C_PRIVATE_H_ */