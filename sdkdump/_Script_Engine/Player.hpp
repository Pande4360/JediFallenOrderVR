#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_Engine {
struct PlayerController;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct Player : public _Script_CoreUObject::Object {
    private: char pad_28[0x20]; public:
    _Script_Engine::PlayerController*& get_PlayerController();
    int32_t& get_CurrentNetSpeed();
    int32_t& get_ConfiguredInternetSpeed();
    int32_t& get_ConfiguredLanSpeed();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x48
#pragma pack(pop)
}
