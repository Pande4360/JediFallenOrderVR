#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\LevelScriptActor.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Levels_Bogano_BOG900_BOG900 {
#pragma pack(push, 1)
struct BOG900_C : public _Script_Engine::LevelScriptActor {
    private: char pad_368[0xc]; public:
    void* get_Door_Starting_Loc();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x374
#pragma pack(pop)
}
