#ifndef _IR_H
#define _IR_H

#define RECEIVER 11

#define KEY_POWER (0x45)
#define KEY_FUNC_STOP (0x47)
#define KEY_VOL_ADD (0x46)
#define KEY_FAST_BACK (0x44)
#define KEY_PAUSE (0x40)
#define KEY_FAST_FORWARD (0x43)
#define KEY_DOWN (0x7)
#define KEY_VOL_DE (0x15)
#define KEY_UP (0x9)
#define KEY_EQ (0x19)
#define KEY_ST_REPT (0xD)
#define KEY_0 (0x16)
#define KEY_1 (0xC)
#define KEY_2 (0x18)
#define KEY_3 (0xFF7A85)
#define KEY_4 (0xFF10EF)
#define KEY_5 (0xFF38C7)
#define KEY_6 (0xFF5AA5)
#define KEY_7 (0xFF42BD)
#define KEY_8 (0xFF4AB5)
#define KEY_9 (0xFF52AD)
#define KEY_REPEAT (0xFFFFFFFF)
#define KEY_NUM 21
#define REPEAT 22

unsigned long keyValue[]={KEY_POWER,KEY_FUNC_STOP,KEY_VOL_ADD,KEY_FAST_BACK,KEY_PAUSE,KEY_FAST_FORWARD,
                KEY_DOWN,KEY_VOL_DE,KEY_UP,KEY_EQ,KEY_ST_REPT,KEY_0,KEY_1,KEY_2,KEY_3,KEY_4,KEY_5,
                KEY_6,KEY_7,KEY_8,KEY_9,KEY_REPEAT};

char keyBuf[][23]={"POWER","FUNC/STOP","VOL+","FAST BACK","PAUSE","FAST FORWARD","DOWN","VOL-",
                  "UP","EQ","ST/REPT","0","1","2","3","4","5","6","7","8","9"};
#endif
