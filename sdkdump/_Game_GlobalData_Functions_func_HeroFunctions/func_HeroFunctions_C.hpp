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
namespace _Script_SwGame {
struct SwStreamingAreaPlayerStart;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Game_GlobalData_Functions_func_HeroFunctions {
#pragma pack(push, 1)
struct func_HeroFunctions_C : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    void UXR_InitTelemetry(_Script_CoreUObject::Object* __WorldContext);
    void UXR_StartSection(void* SectionName, _Script_CoreUObject::Object* __WorldContext);
    void UXR_SurveyScreen(_Script_CoreUObject::Object* __WorldContext);
    void LVL_SaveWithHeal(_Script_SwGame::SwStreamingAreaPlayerStart* PlayerStart, _Script_CoreUObject::Object* __WorldContext);
    void IsHeroAbilityUnlocked(void* Ability, _Script_CoreUObject::Object* __WorldContext, bool& Result);
    void GetHeroAbilityTarget(void* AbilityName, _Script_CoreUObject::Object* __WorldContext, _Script_Engine::Actor*& AbilityTarget);
    void LVL_HeroCinematicWalks(void* Walk_Type, float Blend_Time, _Script_CoreUObject::Object* __WorldContext);
}; // Size: 0x28
#pragma pack(pop)
}
