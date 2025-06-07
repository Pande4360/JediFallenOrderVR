#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_RsGameTechRT\RsAISystem.hpp"
namespace _Script_SwGame {
struct SwAIFightSystem;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwAISystem : public _Script_RsGameTechRT::RsAISystem {
    private: char pad_580[0x8]; public:
    _Script_SwGame::SwAIFightSystem*& get_FightSystem();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x588
#pragma pack(pop)
}
