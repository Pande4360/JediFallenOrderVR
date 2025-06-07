#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
#pragma pack(push, 1)
struct JoinabilitySettings {
    private: char pad_0[0x18]; public:
    void* get_SessionName();
    bool get_bPublicSearchable();
    void set_bPublicSearchable(bool value);
    bool get_bAllowInvites();
    void set_bAllowInvites(bool value);
    bool get_bJoinViaPresence();
    void set_bJoinViaPresence(bool value);
    bool get_bJoinViaPresenceFriendsOnly();
    void set_bJoinViaPresenceFriendsOnly(bool value);
    int32_t& get_MaxPlayers();
    int32_t& get_MaxPartySize();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x18
#pragma pack(pop)
}
