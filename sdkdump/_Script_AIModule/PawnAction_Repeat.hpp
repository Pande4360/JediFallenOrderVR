#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "PawnAction.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AIModule {
#pragma pack(push, 1)
struct PawnAction_Repeat : public PawnAction {
    private: char pad_98[0x20]; public:
    _Script_AIModule::PawnAction*& get_ActionToRepeat();
    _Script_AIModule::PawnAction*& get_RecentActionCopy();
    void* get_ChildFailureHandlingMode();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xb8
#pragma pack(pop)
}
