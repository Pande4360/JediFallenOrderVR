#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "SwReactionState.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwPlayerReactionState : public SwReactionState {
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x130
#pragma pack(pop)
}
