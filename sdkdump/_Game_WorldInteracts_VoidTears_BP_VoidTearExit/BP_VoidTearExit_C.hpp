#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_Engine {
struct ArrowComponent;
}
namespace _Game_WorldInteracts_VoidTears_BP_VoidTearEntrance {
struct BP_VoidTearEntrance_C;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_WorldInteracts_VoidTears_BP_VoidTearExit {
#pragma pack(push, 1)
struct BP_VoidTearExit_C : public _Script_Engine::Actor {
    private: char pad_360[0x30]; public:
    void* get_UberGraphFrame();
    _Script_Engine::ArrowComponent*& get_TeleportLocation();
    _Script_Engine::SceneComponent*& get_DefaultSceneRoot();
    _Game_WorldInteracts_VoidTears_BP_VoidTearEntrance::BP_VoidTearEntrance_C*& get_VoidTearEntrance();
    void* get_LVL_FadeInComplete();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript0();
    void ExitVoid();
    void FadeInComplete();
    void LVL_Enable();
    void LVL_Disable();
    void ExecuteUbergraph_BP_VoidTearExit(int32_t EntryPoint);
    void LVL_FadeInComplete__DelegateSignature();
}; // Size: 0x390
#pragma pack(pop)
}
