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
struct Character;
}
namespace _Script_Engine {
struct CharacterMovementComponent;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Game_GlobalData_Functions_func_CharacterActions {
#pragma pack(push, 1)
struct func_CharacterActions_C : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    void CollisionImpulse(float Impulse_Amount, _Script_Engine::Character* Impulse_Origin__Actor_, _Script_Engine::CharacterMovementComponent* Target_Impulse, _Script_CoreUObject::Object* __WorldContext);
    void AddTranslation(_Script_Engine::Actor* Actor, float TweenTime, float ForwardTranslationAmount, float UpTranslation, bool isImpulse, _Script_CoreUObject::Object* __WorldContext);
}; // Size: 0x28
#pragma pack(pop)
}
