#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Game_GlobalData_Functions_func_OnScreen {
#pragma pack(push, 1)
struct func_OnScreen_C : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    void OnScreenCheckSimple(_Script_CoreUObject::Vector ActorLocation, _Script_CoreUObject::Object* __WorldContext, bool& OnScreen);
}; // Size: 0x28
#pragma pack(pop)
}
