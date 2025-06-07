#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_OnlineSubsystemUtils {
#pragma pack(push, 1)
struct PartyReservation {
    private: char pad_0[0x40]; public:
    int32_t& get_TeamNum();
    void* get_PartyLeader();
    void* get_PartyMembers();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x40
#pragma pack(pop)
}
