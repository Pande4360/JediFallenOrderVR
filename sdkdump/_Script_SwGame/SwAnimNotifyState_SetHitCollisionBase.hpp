#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\RsConditionalAnimNotifyState.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwAnimNotifyState_SetHitCollisionBase : public _Script_Engine::RsConditionalAnimNotifyState {
    private: char pad_78[0x48]; public:
    void* get_HitEvent();
    bool get_SwingDirectionCameraOffset();
    void set_SwingDirectionCameraOffset(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc0
#pragma pack(pop)
}
