#include "basics/CGameMode.h"
#include "main.h"

int CGameMode::OnPlayerKeyStateChange(cell playerid, cell newkeys, cell oldkeys)
{
    #if ISLINUX
        return reinterpret_cast<int(*)(CGameMode*, cell, cell, cell)>(0x80A5C80)(this, playerid, newkeys, oldkeys);
    #elif ISWIN32
        return reinterpret_cast<int(__thiscall*)(CGameMode*, cell, cell, cell)>(0x46E250)(this, playerid, newkeys, oldkeys);
    #endif
}