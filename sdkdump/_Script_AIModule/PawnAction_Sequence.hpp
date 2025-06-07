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
struct PawnAction_Sequence : public PawnAction {
    private: char pad_98[0x28]; public:
    void* get_ActionSequence();
    void* get_ChildFailureHandlingMode();
    _Script_AIModule::PawnAction*& get_RecentActionCopy();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc0
#pragma pack(pop)
}
