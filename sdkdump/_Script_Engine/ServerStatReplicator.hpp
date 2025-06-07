#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "Info.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct ServerStatReplicator : public Info {
    private: char pad_360[0xc8]; public:
    bool get_bUpdateStatNet();
    void set_bUpdateStatNet(bool value);
    bool get_bOverwriteClientStats();
    void set_bOverwriteClientStats(bool value);
    void* get_Channels();
    void* get_InRate();
    void* get_OutRate();
    void* get_OutSaturation();
    void* get_MaxPacketOverhead();
    void* get_InRateClientMax();
    void* get_InRateClientMin();
    void* get_InRateClientAvg();
    void* get_InPacketsClientMax();
    void* get_InPacketsClientMin();
    void* get_InPacketsClientAvg();
    void* get_OutRateClientMax();
    void* get_OutRateClientMin();
    void* get_OutRateClientAvg();
    void* get_OutPacketsClientMax();
    void* get_OutPacketsClientMin();
    void* get_OutPacketsClientAvg();
    void* get_NetNumClients();
    void* get_InPackets();
    void* get_OutPackets();
    void* get_InBunches();
    void* get_OutBunches();
    void* get_OutLoss();
    void* get_InLoss();
    void* get_VoiceBytesSent();
    void* get_VoiceBytesRecv();
    void* get_VoicePacketsSent();
    void* get_VoicePacketsRecv();
    void* get_PercentInVoice();
    void* get_PercentOutVoice();
    void* get_NumActorChannels();
    void* get_NumConsideredActors();
    void* get_PrioritizedActors();
    void* get_NumRelevantActors();
    void* get_NumRelevantDeletedActors();
    void* get_NumReplicatedActorAttempts();
    void* get_NumReplicatedActors();
    void* get_NumActors();
    void* get_NumNetActors();
    void* get_NumDormantActors();
    void* get_NumInitiallyDormantActors();
    void* get_NumNetGUIDsAckd();
    void* get_NumNetGUIDsPending();
    void* get_NumNetGUIDsUnAckd();
    void* get_ObjPathBytes();
    void* get_NetGUIDOutRate();
    void* get_NetGUIDInRate();
    void* get_NetSaturated();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x428
#pragma pack(pop)
}
