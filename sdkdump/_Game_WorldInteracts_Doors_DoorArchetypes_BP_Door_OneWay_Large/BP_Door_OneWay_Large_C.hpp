#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_WorldInteracts_Doors_BP_Door\BP_Door_C.hpp"
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_Engine {
struct SpotLightComponent;
}
namespace _Script_AkAudio {
struct AkAudioEvent;
}
namespace _Script_Engine {
struct TimelineComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_WorldInteracts_Doors_DoorArchetypes_BP_Door_OneWay_Large {
#pragma pack(push, 1)
struct BP_Door_OneWay_Large_C : public _Game_WorldInteracts_Doors_BP_Door::BP_Door_C {
    private: char pad_6c0[0xb0]; public:
    void* get_UberGraphFrame();
    _Script_Engine::StaticMeshComponent*& get_lockSlideClosed();
    _Script_Engine::StaticMeshComponent*& get_LeftDoor();
    _Script_Engine::StaticMeshComponent*& get_RightDoor();
    _Script_Engine::StaticMeshComponent*& get_hangerDoorLockOpen();
    _Script_Engine::StaticMeshComponent*& get_StaticMesh1();
    _Script_Engine::StaticMeshComponent*& get_OneWay_Light_01();
    _Script_Engine::SpotLightComponent*& get_SpotLight();
    _Script_Engine::SpotLightComponent*& get_OneWay_Big_red_Spot_01();
    _Script_Engine::StaticMeshComponent*& get_OneWay_Light_011();
    _Script_Engine::StaticMeshComponent*& get_hangerDoorLockOpen1();
    _Script_Engine::StaticMeshComponent*& get_hangerDoorLockclosed();
    float& get_DoorUnlockPieceLerp_NewTrack_0_E289321A4E3C60067C0B0180D721C914();
    void* get_DoorUnlockPieceLerp__Direction_E289321A4E3C60067C0B0180D721C914();
    _Script_Engine::TimelineComponent*& get_DoorUnlockPieceLerp();
    float& get_PulsingLightOn_LightPulseIntensity_C510168F41A4F8223A9FB59BF9C3C280();
    void* get_PulsingLightOn__Direction_C510168F41A4F8223A9FB59BF9C3C280();
    _Script_Engine::TimelineComponent*& get_PulsingLightOn();
    void* get_spotLightGreen();
    bool get_PlayerInConsoleZone();
    void set_PlayerInConsoleZone(bool value);
    void* get_spotLightRed();
    _Script_AkAudio::AkAudioEvent*& get_HackPanelBeep();
    static _Script_CoreUObject::Class* static_class();
    void ShouldAllowInteract__OverrideMe(bool& Result);
    void HandleUnlockVFXUpdate(bool Unlocked);
    void GetPlayerDoorOpenSide0(bool& LeftSide);
    void UserConstructionScript0();
    void DoorUnlockPieceLerp__FinishedFunc();
    void DoorUnlockPieceLerp__UpdateFunc();
    void PulsingLightOn__FinishedFunc();
    void PulsingLightOn__UpdateFunc();
    void PulsingLightOn__PlaySound__EventFunc();
    void PlayUnlockVisuals_Door0();
    void UpdateCustomUnlockFX0(bool Unlocked);
    void UpdateLockAndLightPulses(bool Locked);
    void ReceiveBeginPlay0();
    void ExecuteUbergraph_BP_Door_OneWay_Large(int32_t EntryPoint);
}; // Size: 0x770
#pragma pack(pop)
}
