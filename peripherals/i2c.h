/**
 * \file i2c.h
 * \brief Header for i2c.cpp
 * \author grochu
 * \date 2012-09-06
 */

#ifndef I2C_H_
#define I2C_H_

#include <cstdint>
#include <cstddef>

/*---------------------------------------------------------------------------------------------------------------------+
| global functions' prototypes
+---------------------------------------------------------------------------------------------------------------------*/

void i2cInitialize(void);
uint8_t* i2cRead(uint8_t address, uint8_t *data, size_t length);
void i2cWrite(uint8_t address, const uint8_t *data, size_t length);

#endif /* I2C_H_ */
