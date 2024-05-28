#ifndef GPU_H
#define GPU_H
#include <sys/types.h>
#include <libgte.h>
#include <libgpu.h>

void AddPrim(void *ot,void *p);
void AddPrims(void *ot,void *p0,void *p1);
void CatPrim(void *p0,void *p1);

u_long *ClearOTagR(u_long *ot, int n);
u_long *ClearOTag(u_long *ot, int n);

void DrawOTag(u_long *p);
int DrawSync(int mode);

int VSync(int mode);

int ClearImage(RECT *rect,u_char  r,u_char g,u_char b);

int LoadImage(RECT *rect,u_long *p);
int StoreImage(RECT *rect,u_long *p);
int MoveImage(RECT * rect,int x,int y);

DISPENV *PutDispEnv(DISPENV *env);
DRAWENV *PutDrawEnv(DRAWENV *env);


void SetPolyF4(POLY_F4 *p);
void SetPolyFT4(POLY_FT4 *p);
void SetPolyGT3(POLY_GT3 *p);
void SetPolyG4(POLY_G4 *p);
void SetPolyGT4(POLY_GT4 *p);
void SetSemiTrans(void *p,int abe);
void SetSprt8(SPRT_8 *p);
void SetSprt16(SPRT_16 *p);
void SetSprt(SPRT *p);
void SetTile1(TILE_1 * p);
void SetTile8(TILE_8 * p);
void SetTile16(TILE_16 * p);
void SetTile(TILE * p);
void SetLineF2(LINE_F2 * p);
void SetLineG2(LINE_G2 * p);
void SetLineF3(LINE_F3 * p);
void SetLineG3(LINE_G3 * p);
void SetLineF4(LINE_F4 * p);
void SetLineG4(LINE_G4 * p);

#endif