#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_WorldInteracts_EventZones_Interact_Zone_Interact_Animated\Zone_Interact_Animated_C.hpp"
namespace _Script_Engine {
struct ArrowComponent;
}
namespace _Script_Engine {
struct TextRenderComponent;
}
namespace _Game_WorldInteracts_VoidTears_BP_VoidTearEntrance {
struct BP_VoidTearEntrance_C;
}
namespace _Script_Engine {
struct AnimMontage;
}
namespace _Game_GlobalData_Economy_BPC_RewardComponent {
struct BPC_RewardComponent_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_WorldInteracts_VoidTears_BP_VoidTearAccessPt {
#pragma pack(push, 1)
struct BP_VoidTearAccessPt_C : public _Game_WorldInteracts_EventZones_Interact_Zone_Interact_Animated::Zone_Interact_Animated_C {
    private: char pad_4a8[0x48]; public:
    void* get_UberGraphFrame();
    _Script_Engine::ArrowComponent*& get_Arrow();
    _Game_GlobalData_Economy_BPC_RewardComponent::BPC_RewardComponent_C*& get_BPC_RewardComponent();
    _Script_Engine::TextRenderComponent*& get_Text();
    _Script_Engine::ArrowComponent*& get_PlayerSpawnLocation();
    _Game_WorldInteracts_VoidTears_BP_VoidTearEntrance::BP_VoidTearEntrance_C*& get_VoidTearEntrance();
    void* get_VoidID();
    void* get_LVL_FadeInComplete();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript0();
    void ExitVoid();
    void LVL_ChallengeCompleted();
    void SyncEnded0(_Script_Engine::AnimMontage* Montage, bool bInterrupted);
    void Interacted();
    void FadeInComplete();
    void ExecuteUbergraph_BP_VoidTearAccessPt(int32_t EntryPoint);
    void LVL_FadeInComplete__DelegateSignature();
}; // Size: 0x4f0
#pragma pack(pop)
}
