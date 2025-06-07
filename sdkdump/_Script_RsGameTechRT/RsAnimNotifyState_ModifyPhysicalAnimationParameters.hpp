#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\AnimNotifyState.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsAnimNotifyState_ModifyPhysicalAnimationParameters : public _Script_Engine::AnimNotifyState {
    private: char pad_30[0x28]; public:
    bool get_DoNotActivate();
    void set_DoNotActivate(bool value);
    void* get_ModifyParameters();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x58
#pragma pack(pop)
}
