#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\DamageEvent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsDamageEvent : public _Script_Engine::DamageEvent {
    private: char pad_10[0x130]; public:
    void* get_DamageParams();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x140
#pragma pack(pop)
}
