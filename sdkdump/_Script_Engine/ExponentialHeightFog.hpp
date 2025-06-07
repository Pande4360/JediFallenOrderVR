#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "Info.hpp"
namespace _Script_Engine {
struct ExponentialHeightFogComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct ExponentialHeightFog : public Info {
    private: char pad_360[0x10]; public:
    _Script_Engine::ExponentialHeightFogComponent*& get_Component();
    bool get_bEnabled();
    void set_bEnabled(bool value);
    static _Script_CoreUObject::Class* static_class();
    void OnRep_bEnabled();
}; // Size: 0x370
#pragma pack(pop)
}
