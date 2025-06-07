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
struct GameSession : public Info {
    private: char pad_360[0x18]; public:
    int32_t& get_MaxSpectators();
    int32_t& get_MaxPlayers();
    int32_t& get_MaxPartySize();
    void* get_MaxSplitscreensPerConnection();
    bool get_bRequiresPushToTalk();
    void set_bRequiresPushToTalk(bool value);
    void* get_SessionName();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x378
#pragma pack(pop)
}
