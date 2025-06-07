#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_SwGame\SwAnimNotifyState_SetMultiHitCollision.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_GlobalData_AnimNotifies_notify_SetMultiHitCollision {
#pragma pack(push, 1)
struct notify_SetMultiHitCollision_C : public _Script_SwGame::SwAnimNotifyState_SetMultiHitCollision {
    private: char pad_120[0x1]; public:
    void* get_AttackType();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x121
#pragma pack(pop)
}
