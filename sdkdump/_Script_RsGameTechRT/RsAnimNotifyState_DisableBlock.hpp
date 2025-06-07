#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\RsConditionalAnimNotifyState.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsAnimNotifyState_DisableBlock : public _Script_Engine::RsConditionalAnimNotifyState {
    private: char pad_78[0x8]; public:
    bool get_AllowGlancingBlow();
    void set_AllowGlancingBlow(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x80
#pragma pack(pop)
}
