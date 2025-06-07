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
namespace _Script_Engine {
struct Actor;
}
namespace _Game_GlobalData_Functions_func_Math {
#pragma pack(push, 1)
struct func_Math_C : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    void AngleToWorldLocationFromCameraForward(_Script_CoreUObject::Vector WorldLoc, _Script_CoreUObject::Object* __WorldContext, float& AngleDegrees);
    void AngleToActorFromCameraForward(_Script_Engine::Actor* Actor, _Script_CoreUObject::Object* __WorldContext, float& AngleDegrees);
    void Saturate(float Value, _Script_CoreUObject::Object* __WorldContext, float& Saturated);
}; // Size: 0x28
#pragma pack(pop)
}
