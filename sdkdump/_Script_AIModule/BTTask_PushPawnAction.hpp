#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "BTTask_PawnActionBase.hpp"
namespace _Script_AIModule {
struct PawnAction;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AIModule {
#pragma pack(push, 1)
struct BTTask_PushPawnAction : public BTTask_PawnActionBase {
    private: char pad_70[0x8]; public:
    _Script_AIModule::PawnAction*& get_Action();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x78
#pragma pack(pop)
}
