#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Game_GlobalData_Functions_func_isHero {
#pragma pack(push, 1)
struct func_isHero_C : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    void isHero(_Script_Engine::Actor* Actor, _Script_CoreUObject::Object* __WorldContext, bool& isHero);
}; // Size: 0x28
#pragma pack(pop)
}
