#include "Animate.h"
#include "config.h"
#include <TJpg_Decoder.h>

#if Animate_Choice == 1
#include "img/astronaut.h"
#elif Animate_Choice == 2
#include "img/hutao.h"
#endif

int Animate_key = 0;//参数初始化
void imgAnim()
{
    TJpgDec.drawJpg(160, 160, astronaut[Animate_key], astronaut_size[Animate_key]);
    if (Animate_key >= 9) Animate_key = -1;
    Animate_key++;
}