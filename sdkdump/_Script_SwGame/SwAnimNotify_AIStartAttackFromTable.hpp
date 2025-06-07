#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\AnimNotify.hpp"
namespace _Script_SwGame {
struct SwAIAttackTableState;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwAnimNotify_AIStartAttackFromTable : public _Script_Engine::AnimNotify {
    private: char pad_38[0x8]; public:
    _Script_SwGame::SwAIAttackTableState*& get_AttackState();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x40
#pragma pack(pop)
}
