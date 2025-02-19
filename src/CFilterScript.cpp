#include "basics/CFilterscripts.h"
#include "main.h"

int CFilterScripts::OnPlayerKeyStateChange(cell playerid, cell newkeys, cell oldkeys)
{
    #if ISLINUX
        return reinterpret_cast<int(*)(CFilterScripts*, cell, cell, cell)>(0x80A2390)(this, playerid, newkeys, oldkeys);
    #elif ISWIN32
        return reinterpret_cast<int(__thiscall*)(CFilterScripts*, cell, cell, cell)>(0x46B660)(this, playerid, newkeys, oldkeys);
    #endif
}