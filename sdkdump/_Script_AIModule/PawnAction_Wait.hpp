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
struct PawnAction_Wait : public PawnAction {
    private: char pad_98[0x10]; public:
    float& get_TimeToWait();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xa8
#pragma pack(pop)
}
