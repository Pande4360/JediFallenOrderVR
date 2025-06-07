#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_RsGameTechRT\RsHeroComponent.hpp"
namespace _Game_Characters_Hero_Logic_BP_SwPlayerState {
struct BP_SwPlayerState_C;
}
namespace _Script_RsGameTechRT {
struct RsAISpawner;
}
namespace _Game_Characters__Shared_Logic_BP_BaseAI {
struct BP_BaseAI_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Characters_Hero_Logic_Components_Combat_HC_Health {
struct HC_Health_C;
}
namespace _Game_Characters_Hero_Logic_Components_Combat_HC_Revenge {
#pragma pack(push, 1)
struct HC_Revenge_C : public _Script_RsGameTechRT::RsHeroComponent {
    private: char pad_180[0x60]; public:
    void* get_UberGraphFrame();
    _Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C*& get_SwPlayerState();
    _Script_RsGameTechRT::RsAISpawner*& get_AISpawner();
    _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C*& get_AIStore();
    float& get_ClosestDistance();
    _Script_RsGameTechRT::RsAISpawner*& get_ClosestAIsSpawner();
    float& get_MaximumSearchDistanceForAI();
    _Game_Characters_Hero_Logic_Components_Combat_HC_Health::HC_Health_C*& get_HC_Health();
    float& get_CurrentDistance();
    bool get_IsRevengeXP();
    void set_IsRevengeXP(bool value);
    float& get_HeightCap();
    _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C*& get_TutorialAI();
    float& get_TargetTimeDilation();
    static _Script_CoreUObject::Class* static_class();
    void ReceiveBeginPlay();
    void OnRevenge();
    void OnTrueDeath();
    void RunRevengeTutorial();
    void ReceiveTick(float DeltaSeconds);
    void SetTimeDilation(float TargetTimeDilation);
    void FireTutorialMessage();
    void FadeOutComplete();
    void DismissRevengeTutorial();
    void ExecuteUbergraph_HC_Revenge(int32_t EntryPoint);
}; // Size: 0x1e0
#pragma pack(pop)
}
