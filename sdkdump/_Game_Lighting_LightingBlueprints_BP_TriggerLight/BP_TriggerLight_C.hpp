#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\TriggerBox.hpp"
namespace _Script_Engine {
struct SkyLight;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Game_Lighting_LightingBlueprints_BP_TriggerLight {
#pragma pack(push, 1)
struct BP_TriggerLight_C : public _Script_Engine::TriggerBox {
    private: char pad_368[0x68]; public:
    void* get_UberGraphFrame();
    bool get_Enter_Visibility();
    void set_Enter_Visibility(bool value);
    float& get_Enter_Light_Intensity_Scale();
    float& get_Enter_Scattering_Intensity_Scale();
    bool get_Use_End_Overlap_Trigger();
    void set_Use_End_Overlap_Trigger(bool value);
    bool get_Restore_Initial_Values();
    void set_Restore_Initial_Values(bool value);
    bool get_Exit_Visibility();
    void set_Exit_Visibility(bool value);
    float& get_Exit_Light_Intensity();
    float& get_Exit_Scattering_Intensity();
    void* get_Lights();
    _Script_Engine::SkyLight*& get_SkyLight();
    void* get_Initial_Visibility();
    void* get_Initial_Light_Intensities();
    void* get_Initial_Scattering_Intensities();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
    void ReceiveActorBeginOverlap(_Script_Engine::Actor* OtherActor);
    void ReceiveActorEndOverlap(_Script_Engine::Actor* OtherActor);
    void ReceiveBeginPlay();
    void CE_ResetDoOnce();
    void ExecuteUbergraph_BP_TriggerLight(int32_t EntryPoint);
}; // Size: 0x3d0
#pragma pack(pop)
}
