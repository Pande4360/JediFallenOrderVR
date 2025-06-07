#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Interface.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Game_GlobalData_Interfaces_INT_ScriptedAnim {
#pragma pack(push, 1)
struct INT_ScriptedAnim_C : public _Script_CoreUObject::Interface {
    static _Script_CoreUObject::Class* static_class();
    void ScriptedAnimNotify(void* NotifyName);
    void ScriptedAnimEnd();
    void ScriptedAnimStart(_Script_Engine::Actor* ScriptingActor);
}; // Size: 0x28
#pragma pack(pop)
}
