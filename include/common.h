#ifndef COMMON_H
#define COMMON_H
#include <stdint.h>
#include <sys/types.h>
#include <libcd.h>
#include <memory.h>
CdlFILE *CdSearchFile(CdlFILE *fp, char *name);

void CreateThread();
void ThreadSleep(uint8_t frames);
void DeleteThread();

void FadeOut();
void FadeIn();

short GetRng();

int printf(const char *fmt, ...);

void *memcpy(uint8_t *dest,uint8_t *src,int n);

extern uint8_t gameMode;
extern uint8_t gameMode2;
extern uint8_t gameMode3;
extern uint8_t gameMode4;

extern uint8_t stageId;

typedef unsigned char   undefined;

typedef struct {
    uint8_t status;
    uint8_t sleepFrames;
    undefined field2_0x2;
    undefined field3_0x3;
    long (* destP)(void);
    long (* returnP)(void);
    undefined field6_0xc;
    undefined field7_0xd;
    undefined field8_0xe;
    undefined field9_0xf;
    undefined field10_0x10;
    undefined field11_0x11;
    undefined field12_0x12;
    undefined field13_0x13;
    undefined field14_0x14;
    undefined field15_0x15;
    undefined field16_0x16;
    undefined field17_0x17;
    undefined field18_0x18;
    undefined field19_0x19;
    undefined field20_0x1a;
    undefined field21_0x1b;
    undefined field22_0x1c;
    undefined field23_0x1d;
    undefined field24_0x1e;
    undefined field25_0x1f;
}Thread;

extern uint16_t buttonsHeld;
extern uint16_t buttonsPressed;

enum PadButtons{
    PAD_CROSS = 0x40,
    PAD_SQUARE = 0x80,
    PAD_SELECT = 0x100,
    PAD_START = 0x800,
    PAD_CIRCLE = 0x20,
    PAD_TRIANGLE = 0x10,
    PAD_R2 = 2,
    PAD_L2 = 1,
    PAD_R1 = 8,
    PAD_L1 = 4
};

#endif