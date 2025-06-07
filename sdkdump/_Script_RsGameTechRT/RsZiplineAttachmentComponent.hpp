#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RsCharacterNavigationComponent.hpp"
namespace _Script_RsGameTechRT {
struct RsZiplineAttachmentSettings;
}
namespace _Script_RsGameTechRT {
struct RsZiplineManager;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
struct RsHeroStateModifierDefinition;
}
namespace _Script_RsGameTechRT {
struct RsCharacter;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsZiplineAttachmentComponent : public RsCharacterNavigationComponent {
    private: char pad_188[0x108]; public:
    _Script_RsGameTechRT::RsZiplineAttachmentSettings*& get_m_settings();
    _Script_RsGameTechRT::RsZiplineManager*& get_m_ziplineManager();
    static _Script_CoreUObject::Class* static_class();
    void ZiplineJumpInputPressed();
    void ZiplineEntryComplete();
    void ShowGripInputUI();
    bool ShouldUseGrip();
    void SetDesiredMovementDirection(void* MovementDirection);
    void ReleaseZipline();
    void OnZiplineJumpModifierRemoved(_Script_RsGameTechRT::RsHeroStateModifierDefinition* HeroStateModifier);
    void OnZiplineDisableModifierRemoved(_Script_RsGameTechRT::RsHeroStateModifierDefinition* HeroStateModifier);
    bool OnPlayerJumpToZiplineInputPressed();
    void OnNavStateChanged(void* NewState, void* PrevState);
    void OnMovementDirectionChanged(void* MovementDirection);
    void OnExitZipline();
    void OnEnterZipline();
    void OnCharacterInterrupted(_Script_RsGameTechRT::RsCharacter* Character);
    bool IsInState(void* State);
    bool IsAttached();
    void HideGripInputUI();
    bool GripIsConfirm();
    float GetZiplineMaxSpeed();
    float GetZiplineCurrentSpeed();
    void* GetCurrentState();
    float GetCurrentProgressionAlongZipline();
    void* GetCurrentMovementDirection();
    void* GetCurrentAnimState();
    void DoZiplineJump();
    bool CanZipline();
    void BP_ZiplineAttachedTick(float Dt);
}; // Size: 0x290
#pragma pack(pop)
}
