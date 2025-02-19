#include "../math.h"
#include "CnetGame.h"

CNetGame* CNetGame::RefCNetGame()
{
    #if ISLINUX
        return *reinterpret_cast<CNetGame**>(0x81CA4BC);
    #elif ISWIN32
        return *reinterpret_cast<CNetGame**>();
    #endif
}

void CNetGame::KickPlayer(PLAYERID playerid)
{
    #if ISLINUX
        reinterpret_cast<void(*)(CNetGame* ,uint16_t)>(0x80AE8C0)(this, playerid);
    #elif ISWIN32
        reinterpret_cast<void(__thiscall*)(CNetGame* ,uint16_t)>(0x48E870)(this, playerid);
    #endif
}

void CNetGame::SendToPlayer(char* uniqueID, RakNet::BitStream* stream, unsigned short playerid, char orderingchannel)
{
    #if ISLINUX
        reinterpret_cast<void(*)(CNetGame*, char*, RakNet::BitStream*, uint16_t, char)>(0x80AC1D0)(this, uniqueID, stream, playerid, orderingchannel);
    #elif ISWIN32
        reinterpret_cast<void(__thiscall*)(CNetGame*, char*, RakNet::BitStream*, uint16_t, char)>(0x48E440)(this, uniqueID, stream, playerid, orderingchannel);
    #endif
}

RakServerInterfaceVTBL* CNetGame::GetRakServerVTable()
{
    return *reinterpret_cast<RakServerInterfaceVTBL**>(this->m_pRak);
}