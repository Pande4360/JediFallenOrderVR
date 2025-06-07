#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_SwGame\SwAnimNotify_HeroSoftLock.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_GlobalData_AnimNotifies_notify_HERO_SoftLock {
#pragma pack(push, 1)
struct notify_HERO_SoftLock_C : public _Script_SwGame::SwAnimNotify_HeroSoftLock {
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x50
#pragma pack(pop)
}
