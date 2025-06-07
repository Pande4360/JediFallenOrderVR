#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_Engine {
struct BillboardComponent;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_Engine {
struct SkyLight;
}
namespace _Script_Engine {
struct TriggerVolume;
}
namespace _Script_Engine {
struct TriggerBox;
}
namespace _Script_Engine {
struct TriggerSphere;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Characters_Hero_Logic_BP_Hero {
struct BP_Hero_C;
}
namespace _Game_WorldInteracts_EventZones_Zone_Flashlight {
#pragma pack(push, 1)
struct Zone_Flashlight_C : public _Script_Engine::Actor {
    private: char pad_360[0x80]; public:
    void* get_UberGraphFrame();
    _Script_Engine::BillboardComponent*& get_Flashlight_icon();
    _Script_Engine::SceneComponent*& get_Scene();
    bool get_Enabled();
    void set_Enabled(bool value);
    _Script_Engine::SkyLight*& get_SkyLight();
    void* get_LVL_entered();
    void* get_LVL_exited();
    _Script_Engine::TriggerVolume*& get_TriggerVolume();
    void* get_LVL_turnOff();
    void* get_LVL_turnOn();
    _Script_Engine::TriggerBox*& get_TriggerBox();
    _Script_Engine::TriggerSphere*& get_TriggerSphere();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript0();
    void ReceiveBeginPlay0();
    void FlashlightVolEnter(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void FlashlightVolExit(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void LVL_turnOn_Event();
    void LVL_turnOff_Event();
    void ToggleCollisionEnabled(bool Enabled);
    void SetTriggerEventBindings(_Script_Engine::Actor* Trigger);
    void ExecuteUbergraph_Zone_Flashlight(int32_t EntryPoint);
    void LVL_turnOn__DelegateSignature();
    void LVL_turnOff__DelegateSignature();
    void LVL_exited__DelegateSignature(_Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C* Hero);
    void LVL_entered__DelegateSignature(_Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C* Hero);
}; // Size: 0x3e0
#pragma pack(pop)
}
