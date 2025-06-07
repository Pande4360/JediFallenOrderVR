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
namespace _Script_RsTechRT {
struct rsAnimInstance;
}
namespace _Script_RsGameTechRT {
struct RsAIAnimInstance;
}
namespace _Game_GlobalData_Functions_func_GetAnimBlueprints {
#pragma pack(push, 1)
struct func_GetAnimBlueprints_C : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    void GetRsAnimInstance(_Script_Engine::Actor* Actor, _Script_CoreUObject::Object* __WorldContext, _Script_RsTechRT::rsAnimInstance*& AnimInstance);
    void GetRsAIAnimInstance(_Script_Engine::Actor* Actor, _Script_CoreUObject::Object* __WorldContext, _Script_RsGameTechRT::RsAIAnimInstance*& AI_AnimInstance);
}; // Size: 0x28
#pragma pack(pop)
}
