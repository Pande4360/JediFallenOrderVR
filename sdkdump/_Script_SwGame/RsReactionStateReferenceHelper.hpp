#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_SwGame {
struct SwReactionState;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct RsReactionStateReferenceHelper {
    private: char pad_0[0x8]; public:
    _Script_SwGame::SwReactionState*& get_CombatState();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x8
#pragma pack(pop)
}
