#include "RakServerInterface.h"
#include "../main.h"

//__attribute__((aligned(4)))

#pragma pack(push, 4)
struct RakServerInterfaceVTBL
{
  int vftable_0;
  int vftable_4;
  int Start;
  int vftable_C;
  int vftable_10;
  int SetPassword;
  int vftable_18;
  int Disconnect;
  int vftable_20;
  int vftable_24;
  int vftable_28;
  int Receive;
  int vftable_30;
  int DeallocatePacket;
  int SetAllowedPlayers;
  int GetAllowedPlayers;
  int GetConnectedPlayers;
  int vftable_44;
  int vftable_48;
  int vftable_4C;
  int GetLastPing;
  int vftable_54;
  int StartOccasionalPing;
  int vftable_5C;
  int vftable_60;
  int vftable_64;
  int vftable_68;
  int vftable_6C;
  int vftable_70;
  int vftable_74;
  void (*RegisterAsRemoteProcedureCall)(RakServerInterface *server, char *, void(*)(RPCParameters*));
  int RegisterClassMemberRPC;
  void (*UnregisterAsRemoteProcedureCall)(RakServerInterface *server, char *uniqueID);
  int vftable_84;
  int vftable_88;
  int vftable_8C;
  int vftable_90;
  int vftable_94;
  int vftable_98;
  int vftable_9C;
  int vftable_A0;
  int vftable_A4;
  int vftable_A8;
  int vftable_AC;
  int vftable_B0;
  int vftable_B4;
  int vftable_B8;
  int vftable_BC;
  int vftable_C0;
  int vftable_C4;
  int vftable_C8;
  int vftable_CC;
  int vftable_D0;
  int vftable_D4;
  int vftable_D8;
  int vftable_DC;
  int vftable_E0;
  int vftable_E4;
  int vftable_E8;
  int GetPlayerIDFromIndex;
  int vftable_F0;
  int AddToBanList;
  int RemoveFromBanList;
  int ClearBanList;
  int vftable_100;
  int vftable_104;
  int vftable_108;
  int vftable_10C;
  int vftable_110;
  int vftable_114;
  int vftable_118;
  int vftable_11C;
  int vftable_120;
  int vftable_124;
};
#pragma pack(pop)
