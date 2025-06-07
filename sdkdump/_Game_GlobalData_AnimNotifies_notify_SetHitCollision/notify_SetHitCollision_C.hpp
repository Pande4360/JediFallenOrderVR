#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_SwGame\SwAnimNotifyState_SetHitCollision.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_GlobalData_AnimNotifies_notify_SetHitCollision {
#pragma pack(push, 1)
struct notify_SetHitCollision_C : public _Script_SwGame::SwAnimNotifyState_SetHitCollision {
    private: char pad_d0[0x1]; public:
    void* get_AttackType();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xd1
#pragma pack(pop)
}
