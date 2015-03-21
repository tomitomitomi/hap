////////////////////////////////////////////////////////////////////////////////
// Projekt:              Home-Automation                                      //
// Modul:                Delay                                                //
// Version:              1.0 (0)                                              //
////////////////////////////////////////////////////////////////////////////////
// Erstellt am:          05.02.2007                                           //
// Erstellt von:         Holger Heuser                                        //
// Zuletzt ge�ndert am:  05.02.2007                                           //
// Zuletzt ge�ndert von: Holger Heuser                                        //
////////////////////////////////////////////////////////////////////////////////

#ifndef HADELAY
#define HADELAY


////////////////////////////////////////////////////////////////////////////////
// Module einbinden                                                           //
////////////////////////////////////////////////////////////////////////////////

#include <hagl.h>


////////////////////////////////////////////////////////////////////////////////
// Precompiler Konstanten                                                     //
////////////////////////////////////////////////////////////////////////////////

#define Delay100NS (CPUFrequenz / 40000000)
#define DelayUS (CPUFrequenz / 4000000)
#define DelayMS (CPUFrequenz / 4000)


////////////////////////////////////////////////////////////////////////////////
// Deklarationen                                                              //
////////////////////////////////////////////////////////////////////////////////

void Delay(tWord tCount);


#endif
