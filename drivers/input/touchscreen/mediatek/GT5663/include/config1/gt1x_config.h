/* drivers/input/touchscreen/gt1x_generic.h
 *
 * 2010 - 2014 Goodix Technology.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be a reference
 * to you, when you are integrating the GOODiX's CTP IC into your system,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * Version: 1.0
 * Revision Record:
 *      V1.0:  first release. 2014/09/28.
 *
 */

#ifndef _GT1X_CONFIG_H_
#define _GT1X_CONFIG_H_

/***************************PART2:TODO define**********************************/
/*TODO: puts the config info corresponded to your TP here, the following is just
		a sample config, send this config should cause the chip can not work normally*/

/* TODO define your config for Sensor_ID == 0 here, if needed */
//FOR BYD & HeliTech
#define GTP_CFG_GROUP0 {\
0x82,0xE0,0x01,0x56,0x03,0x05,0x45,0x80,0x01,0x41,0x00,0x0A, \
0x50,0x28,0x53,0x01,0x00,0x00,0x24,0x01,0x14,0x14,0x14,0x1A, \
0x0A,0x16,0x71,0x82,0x18,0x4B,0x96,0x00,0x55,0x18,0x20,0x00, \
0x00,0x00,0x00,0x00,0x3C,0x19,0x19,0x3C,0x19,0x19,0x88,0x28, \
0x0A,0x2A,0x2C,0xDF,0x07,0x00,0x00,0x60,0x32,0x03,0x24,0x00, \
0x00,0x1E,0x98,0x80,0x14,0x52,0x0F,0x00,0x00,0xCB,0x32,0x92, \
0x46,0x76,0x5A,0x64,0x6F,0x5C,0x83,0x56,0x0F,0x00,0x00,0x00, \
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0D,0x06,0x0C,0x05, \
0x0B,0x04,0x0A,0x03,0x09,0x02,0x00,0x00,0x00,0x00,0x08,0x09, \
0x0A,0x0B,0x0C,0x0D,0x0E,0x0F,0x00,0x01,0x02,0x03,0x04,0x05, \
0x06,0x07,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x17,0x79,0x01 \
}
/* TODO define your config for Sensor_ID == 1 here, if needed */
//For KOTL
#define GTP_CFG_GROUP1 {\
0x81,0xE0,0x01,0x56,0x03,0x05,0x45,0x40,0x01,0x41,0x00,0x05, \
0x50,0x28,0x53,0x01,0x00,0x00,0x13,0x00,0x14,0x14,0x14,0x22, \
0x0A,0x16,0x71,0x82,0x18,0x4B,0x96,0x00,0x55,0x18,0x20,0x00, \
0x00,0x00,0x00,0x00,0x3C,0x19,0x19,0x41,0x1C,0x19,0x8A,0x28, \
0x0A,0x3C,0x3E,0xDF,0x07,0x20,0x10,0x60,0x32,0x03,0x24,0x00, \
0x00,0x1E,0x98,0x80,0x14,0x52,0x0F,0x00,0x00,0xD2,0x32,0x94, \
0x46,0x76,0x5A,0x65,0x6F,0x58,0x83,0x54,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0D,0x06,0x0C,0x05, \
0x0B,0x04,0x0A,0x03,0x09,0x02,0x00,0x00,0x00,0x00,0x08,0x0C, \
0x07,0x0B,0x06,0x0A,0x05,0x04,0x09,0x00,0x11,0x10,0x01,0x0F, \
0x02,0x0E,0x03,0x0D,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x00,0x10,0x00,0x00,0x00, \
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFB,0x59,0x01 \
}
/* TODO define your config for Sensor_ID == 2 here, if needed */
//For TopTouch
#define GTP_CFG_GROUP2 {\
0x42,0xE0,0x01,0x56,0x03,0x05,0x75,0x80,0x00,0x00,0x00,0x0A, \
0x50,0x32,0x53,0x11,0x00,0x00,0x00,0x00,0x14,0x18,0x1A,0x1E, \
0x08,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x64,0x1E,0x23,0x88,0x28, \
0x0A,0x30,0x32,0xDF,0x07,0x60,0xB4,0x30,0x9A,0x03,0x24,0x00, \
0x00,0x19,0x4B,0xC0,0x02,0x02,0x00,0x00,0x53,0xD4,0x21,0xAC, \
0x29,0x93,0x31,0x80,0x3A,0x73,0x42,0x6A,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x57,0x50,0x35,0xAA,0xAF,0x57,0x00,0x00,0x00, \
0x00,0x14,0x14,0x03,0x03,0x01,0x42,0x86,0x0E,0x00,0x00,0x00, \
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xD3,0x07,0x32,0x20, \
0x46,0x3C,0x1E,0x00,0x00,0x00,0x00,0x00,0x0D,0x06,0x0C,0x05, \
0x0B,0x04,0x0A,0x03,0x09,0x02,0x00,0x00,0x00,0x00,0x08,0x09, \
0x0A,0x0B,0x0C,0x0D,0x0E,0x0F,0x00,0x01,0x02,0x03,0x04,0x05, \
0x06,0x07,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x00,0x05,0x1E,0x14,0x02,0x15,0x1E,0x19,0x14, \
0x02,0x00,0x03,0x5A,0x05,0x32,0xA0,0x00,0x00,0x00,0x03,0x00, \
0x00,0x00,0x00,0x00,0x33,0x02,0x12,0x0C,0x02,0x7F,0x19,0x7F, \
0x40,0x20,0x46,0x32,0x50,0x00,0x00,0x00,0xB2,0x57,0x01 \
    }
/* TODO define your config for Sensor_ID == 3 here, if needed */
#define GTP_CFG_GROUP3 {\
    }
/* TODO define your config for Sensor_ID == 4 here, if needed */
#define GTP_CFG_GROUP4 {\
    }
/* TODO define your config for Sensor_ID == 5 here, if needed */
#define GTP_CFG_GROUP5 {\
    }

/*
  *         Charger Configs 
*/
/* TODO define your config for Sensor_ID == 0 here, if needed */
#define GTP_CHARGER_CFG_GROUP0 {\
0x82,0xE0,0x01,0x56,0x03,0x05,0x45,0x80,0x01,0x41,0x00,0x0A, \
0x50,0x28,0x53,0x01,0x00,0x00,0x24,0x01,0x14,0x14,0x14,0x1A, \
0x0A,0x16,0x71,0x82,0x18,0x4B,0x96,0x00,0x55,0x18,0x20,0x00, \
0x00,0x00,0x00,0x00,0x3C,0x19,0x19,0x3C,0x19,0x19,0x88,0x28, \
0x0A,0x2A,0x2C,0xDF,0x07,0x00,0x00,0x60,0x32,0x03,0x24,0x00, \
0x00,0x1E,0x98,0x80,0x14,0x52,0x0F,0x00,0x00,0xCB,0x32,0x92, \
0x46,0x76,0x5A,0x64,0x6F,0x5C,0x83,0x56,0x0F,0x00,0x00,0x00, \
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0D,0x06,0x0C,0x05, \
0x0B,0x04,0x0A,0x03,0x09,0x02,0x00,0x00,0x00,0x00,0x08,0x09, \
0x0A,0x0B,0x0C,0x0D,0x0E,0x0F,0x00,0x01,0x02,0x03,0x04,0x05, \
0x06,0x07,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x17,0x79,0x01 \
}
/* TODO define your config for Sensor_ID == 1 here, if needed */
#define GTP_CHARGER_CFG_GROUP1 {\
0x81,0xE0,0x01,0x56,0x03,0x05,0x45,0x40,0x01,0x41,0x00,0x05, \
0x50,0x28,0x53,0x01,0x00,0x00,0x13,0x00,0x14,0x14,0x14,0x22, \
0x0A,0x16,0x71,0x82,0x18,0x4B,0x96,0x00,0x55,0x18,0x20,0x00, \
0x00,0x00,0x00,0x00,0x3C,0x19,0x19,0x41,0x1C,0x19,0x8A,0x28, \
0x0A,0x3C,0x3E,0xDF,0x07,0x20,0x10,0x60,0x32,0x03,0x24,0x00, \
0x00,0x1E,0x98,0x80,0x14,0x52,0x0F,0x00,0x00,0xD2,0x32,0x94, \
0x46,0x76,0x5A,0x65,0x6F,0x58,0x83,0x54,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0D,0x06,0x0C,0x05, \
0x0B,0x04,0x0A,0x03,0x09,0x02,0x00,0x00,0x00,0x00,0x08,0x0C, \
0x07,0x0B,0x06,0x0A,0x05,0x04,0x09,0x00,0x11,0x10,0x01,0x0F, \
0x02,0x0E,0x03,0x0D,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x00,0x10,0x00,0x00,0x00, \
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFB,0x59,0x01 \
}
/* TODO define your config for Sensor_ID == 2 here, if needed */
#define GTP_CHARGER_CFG_GROUP2 {\
0x42,0xE0,0x01,0x56,0x03,0x05,0x75,0x80,0x00,0x00,0x00,0x0A, \
0x50,0x32,0x53,0x11,0x00,0x00,0x00,0x00,0x14,0x18,0x1A,0x1E, \
0x08,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x64,0x1E,0x23,0x88,0x28, \
0x0A,0x30,0x32,0xDF,0x07,0x60,0xB4,0x30,0x9A,0x03,0x24,0x00, \
0x00,0x19,0x4B,0xC0,0x02,0x02,0x00,0x00,0x53,0xD4,0x21,0xAC, \
0x29,0x93,0x31,0x80,0x3A,0x73,0x42,0x6A,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x57,0x50,0x35,0xAA,0xAF,0x57,0x00,0x00,0x00, \
0x00,0x14,0x14,0x03,0x03,0x01,0x42,0x86,0x0E,0x00,0x00,0x00, \
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xD3,0x07,0x32,0x20, \
0x46,0x3C,0x1E,0x00,0x00,0x00,0x00,0x00,0x0D,0x06,0x0C,0x05, \
0x0B,0x04,0x0A,0x03,0x09,0x02,0x00,0x00,0x00,0x00,0x08,0x09, \
0x0A,0x0B,0x0C,0x0D,0x0E,0x0F,0x00,0x01,0x02,0x03,0x04,0x05, \
0x06,0x07,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x00,0x05,0x1E,0x14,0x02,0x15,0x1E,0x19,0x14, \
0x02,0x00,0x03,0x5A,0x05,0x32,0xA0,0x00,0x00,0x00,0x03,0x00, \
0x00,0x00,0x00,0x00,0x33,0x02,0x12,0x0C,0x02,0x7F,0x19,0x7F, \
0x40,0x20,0x46,0x32,0x50,0x00,0x00,0x00,0xB2,0x57,0x01 \
}
/* TODO define your config for Sensor_ID == 3 here, if needed */
#define GTP_CHARGER_CFG_GROUP3 {\
}
/* TODO define your config for Sensor_ID == 4 here, if needed */
#define GTP_CHARGER_CFG_GROUP4 {\
}
/* TODO define your config for Sensor_ID == 5 here, if needed */
#define GTP_CHARGER_CFG_GROUP5 {\
}

/*
  *         Smart Cover Configs 
*/
/* TODO define your config for Sendor_ID == 0 here, if needed */
#define GTP_SMART_COVER_CFG_GROUP0 {\
0x80,0xE0,0x01,0x56,0x03,0x05,0x35,0x80,0x00,0x40,0x00,0x0A, \
0x50,0x3C,0x53,0x11,0x00,0x00,0x11,0x01,0x14,0x15,0x16,0x1C, \
0x08,0x06,0x00,0x00,0x00,0x00,0x96,0x00,0x00,0x0A,0x80,0x00, \
0x00,0x00,0x00,0x00,0x3C,0x19,0x19,0x64,0x1E,0x28,0x88,0x28, \
0x0A,0x3C,0x3E,0xDF,0x07,0x00,0x00,0x60,0x32,0x03,0x24,0x00, \
0x00,0x1E,0x7A,0x80,0x14,0xF3,0x14,0x00,0x00,0xEF,0x2D,0xB4, \
0x3C,0x93,0x4B,0x7F,0x5B,0x72,0x6A,0x69,0x0F,0x00,0x00,0x00, \
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0D,0x06,0x0C,0x05, \
0x0B,0x04,0x0A,0x03,0x09,0x02,0x00,0x00,0x00,0x00,0x08,0x09, \
0x0A,0x0B,0x0C,0x0D,0x0E,0x0F,0x00,0x01,0x02,0x03,0x04,0x05, \
0x06,0x07,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0xAD,0x01 \
}/* TODO define your config for Sendor_ID == 0 here, if needed */
#define GTP_SMART_COVER_CFG_GROUP1 {\
}
/* TODO define your config for Sendor_ID == 0 here, if needed */
#define GTP_SMART_COVER_CFG_GROUP2 {\
0x42,0xE0,0x01,0x56,0x03,0x05,0x75,0x80,0x00,0x00,0x00,0x0A, \
0x50,0x32,0x53,0x11,0x00,0x00,0x00,0x00,0x14,0x18,0x1A,0x1E, \
0x08,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x64,0x1E,0x23,0x88,0x28, \
0x0A,0x30,0x32,0xDF,0x07,0x60,0xB4,0x30,0x9A,0x03,0x24,0x00, \
0x00,0x19,0x4B,0xC0,0x02,0x02,0x00,0x00,0x53,0xD4,0x21,0xAC, \
0x29,0x93,0x31,0x80,0x3A,0x73,0x42,0x6A,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x57,0x50,0x35,0xAA,0xAF,0x57,0x00,0x00,0x00, \
0x00,0x14,0x14,0x03,0x03,0x01,0x42,0x86,0x0E,0x00,0x00,0x00, \
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xD3,0x07,0x32,0x20, \
0x46,0x3C,0x1E,0x00,0x00,0x00,0x00,0x00,0x0D,0x06,0x0C,0x05, \
0x0B,0x04,0x0A,0x03,0x09,0x02,0x00,0x00,0x00,0x00,0x08,0x09, \
0x0A,0x0B,0x0C,0x0D,0x0E,0x0F,0x00,0x01,0x02,0x03,0x04,0x05, \
0x06,0x07,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x00,0x05,0x1E,0x14,0x02,0x15,0x1E,0x19,0x14, \
0x02,0x00,0x03,0x5A,0x05,0x32,0xA0,0x00,0x00,0x00,0x03,0x00, \
0x00,0x00,0x00,0x00,0x33,0x02,0x12,0x0C,0x02,0x7F,0x19,0x7F, \
0x40,0x20,0x46,0x32,0x50,0x00,0x00,0x00,0xB2,0x57,0x01 \
}
/* TODO define your config for Sendor_ID == 0 here, if needed */
#define GTP_SMART_COVER_CFG_GROUP3 {\
}
/* TODO define your config for Sendor_ID == 0 here, if needed */
#define GTP_SMART_COVER_CFG_GROUP4 {\
}
/* TODO define your config for Sendor_ID == 0 here, if needed */
#define GTP_SMART_COVER_CFG_GROUP5 {\
}


#endif				/* _GT1X_CONFIG_H_ */
