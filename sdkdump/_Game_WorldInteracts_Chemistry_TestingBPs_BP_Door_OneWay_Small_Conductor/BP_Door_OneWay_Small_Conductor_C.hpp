#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_WorldInteracts_Doors_BP_Door\BP_Door_C.hpp"
namespace _Game_WorldInteracts_Chemistry_Utilities_BPC_Conductor {
struct BPC_Conductor_C;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_Engine {
struct SpotLightComponent;
}
namespace _Script_AkAudio {
struct AkAudioEvent;
}
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_Engine {
struct TimelineComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_WorldInteracts_Chemistry_TestingBPs_BP_Door_OneWay_Small_Conductor {
#pragma pack(push, 1)
struct BP_Door_OneWay_Small_Conductor_C : public _Game_WorldInteracts_Doors_BP_Door::BP_Door_C {
    private: char pad_6c0[0x90]; public:
    void* get_UberGraphFrame();
    _Game_WorldInteracts_Chemistry_Utilities_BPC_Conductor::BPC_Conductor_C*& get_BPC_Conductor();
    _Script_Engine::SpotLightComponent*& get_SpotLight();
    _Script_Engine::StaticMeshComponent*& get_Panel();
    _Script_Engine::StaticMeshComponent*& get_Door();
    _Script_Engine::StaticMeshComponent*& get_lightB();
    _Script_Engine::StaticMeshComponent*& get_Light();
    _Script_Engine::SceneComponent*& get_Sync();
    _Script_Engine::StaticMeshComponent*& get_Frame();
    float& get_PulsingLightOn_LightPulseIntensity_7975F17D4461E4C93F76449913458007();
    void* get_PulsingLightOn__Direction_7975F17D4461E4C93F76449913458007();
    _Script_Engine::TimelineComponent*& get_PulsingLightOn();
    float& get_rattle_x_70EB55B3410F1FC7D6622E83340A30BA();
    void* get_rattle__Direction_70EB55B3410F1FC7D6622E83340A30BA();
    _Script_Engine::TimelineComponent*& get_rattle();
    void* get_spotLightGreen();
    void* get_spotLightRed();
    _Script_AkAudio::AkAudioEvent*& get_HackPanelBeep();
    static _Script_CoreUObject::Class* static_class();
    void HandleUnlockVFXUpdate(bool Unlocked);
    void UserConstructionScript0();
    void PulsingLightOn__FinishedFunc();
    void PulsingLightOn__UpdateFunc();
    void PulsingLightOn__PlaySound__EventFunc();
    void rattle__FinishedFunc();
    void rattle__UpdateFunc();
    void PlayDoorLockedCantOpenVisuals0();
    void UpdateCustomUnlockFX0(bool Unlocked);
    void UpdateLockAndLightPulses(bool Locked);
    void ReceiveBeginPlay0();
    void PlayUnlockVisuals_Door0();
    void BndEvt__BPC_Conductor_K2Node_ComponentBoundEvent_7_OnElectrify__DelegateSignature();
    void BndEvt__BPC_Conductor_K2Node_ComponentBoundEvent_8_OnUnElectrify__DelegateSignature();
    void ExecuteUbergraph_BP_Door_OneWay_Small_Conductor(int32_t EntryPoint);
}; // Size: 0x750
#pragma pack(pop)
}
