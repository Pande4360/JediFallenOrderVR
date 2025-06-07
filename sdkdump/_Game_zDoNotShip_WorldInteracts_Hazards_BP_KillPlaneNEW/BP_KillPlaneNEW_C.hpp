#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_RsTechRT\RsVolumeBlueprintBase.hpp"
namespace _Script_Engine {
struct Actor;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_zDoNotShip_WorldInteracts_Hazards_BP_KillPlaneNEW {
#pragma pack(push, 1)
struct BP_KillPlaneNEW_C : public _Script_RsTechRT::RsVolumeBlueprintBase {
    private: char pad_398[0x20]; public:
    void* get_UberGraphFrame();
    bool get_Enabled();
    void set_Enabled(bool value);
    float& get_DelayTime();
    bool get_bAIOnly();
    void set_bAIOnly(bool value);
    _Script_Engine::Actor*& get_Actor();
    static _Script_CoreUObject::Class* static_class();
    void LVL_Disable();
    void LVL_Enable();
    void UserConstructionScript();
    void ReceiveActorBeginOverlap(_Script_Engine::Actor* OtherActor);
    void ReceiveBeginPlay();
    void LVL_DoHeroDeath();
    void ExecuteUbergraph_BP_KillPlaneNEW(int32_t EntryPoint);
}; // Size: 0x3b8
#pragma pack(pop)
}
