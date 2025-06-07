#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_EngineSettings {
#pragma pack(push, 1)
struct GameSessionSettings : public _Script_CoreUObject::Object {
    private: char pad_28[0x10]; public:
    int32_t& get_MaxSpectators();
    int32_t& get_MaxPlayers();
    bool get_bRequiresPushToTalk();
    void set_bRequiresPushToTalk(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x38
#pragma pack(pop)
}
