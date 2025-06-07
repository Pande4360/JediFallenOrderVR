#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_RsGameTechRT\RsHeroComponent.hpp"
namespace _Game_Characters_Hero_Logic_BP_Hero {
struct BP_Hero_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
struct RsCharacter;
}
namespace _Script_RsGameTechRT {
struct RsHeroStateModifierDefinition;
}
namespace _Game_Characters_Hero_Logic_Components_Navigation_HC_Sprint {
#pragma pack(push, 1)
struct HC_Sprint_C : public _Script_RsGameTechRT::RsHeroComponent {
    private: char pad_180[0x38]; public:
    void* get_UberGraphFrame();
    _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C*& get_BP_Hero_REF();
    void* get_HeroSprint();
    void* get_HeroSprintStop();
    float& get_sprintCameraStickThreshold();
    static _Script_CoreUObject::Class* static_class();
    void ReceiveBeginPlay();
    void SprintInput();
    void SprintStop(bool PauseOnly);
    void ReceiveTick(float DeltaSeconds);
    void OnGroundEntered(void* NewState, void* PrevState);
    void OnGroundExited(void* NewState, void* PrevState);
    void Action_SprintRelease();
    void ReceiveEndPlay(void* EndPlayReason);
    void On_Combat_State_Changed(_Script_RsGameTechRT::RsCharacter* Character, void* PreviousCombatState, void* NewCombatState);
    void PushSprintCameras();
    void Duration(_Script_RsGameTechRT::RsHeroStateModifierDefinition* Modifier);
    void ExecuteUbergraph_HC_Sprint(int32_t EntryPoint);
    void HeroSprintStop__DelegateSignature();
    void HeroSprint__DelegateSignature();
}; // Size: 0x1b8
#pragma pack(pop)
}
