#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RsCharacterNavigationComponent.hpp"
namespace _Script_RsGameTechRT {
struct RsSwimSettingsDefinition;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
struct RsCharacter;
}
namespace _Script_RsGameTechRT {
struct RsNavVolume;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsSwimComponent : public RsCharacterNavigationComponent {
    private: char pad_188[0x90]; public:
    void* get_OnSwimStateChangedEvent();
    _Script_RsGameTechRT::RsSwimSettingsDefinition*& get_SwimDefinition();
    static _Script_CoreUObject::Class* static_class();
    void SwitchDirectlyToDivingInNextVolume();
    void StartPlayingUnderwaterBoostAnimation();
    void StartDivingButtonReleased();
    void StartDivingButtonPushed();
    void StartDivingButtonHeld();
    void StartDiving();
    bool ShouldExitSwimmingInVolume();
    bool SetDesiredState(void* DesiredState);
    void RemoveOverrideForDownwardAndUpwardSpeed();
    void OverrideDownwardAndUpwardSpeed(float newDownwardSpeed, float newUpwardSpeed);
    void OnSwimStateChanged(void* previousSwimState, void* newSwimState);
    void OnNavStateExited(void* NewState, void* PrevState);
    void OnIsInWaterStateChanged(_Script_RsGameTechRT::RsCharacter* RsCharacter, _Script_RsGameTechRT::RsNavVolume* Volume, bool bIsInWater, bool bWasInWater);
    bool IsUnderwaterBoostAllowed();
    float GetWaterVolumeSurfaceZ();
    void* GetCurrentState();
    bool GetAnticipateSwimAfterCinematic();
    void DiveUpwardButtonReleased();
    void DiveUpwardButtonPushed();
    void DiveDownwardButtonReleased();
    void DiveDownwardButtonPushed();
    void AnticipateSwimAfterCinematic();
}; // Size: 0x218
#pragma pack(pop)
}
