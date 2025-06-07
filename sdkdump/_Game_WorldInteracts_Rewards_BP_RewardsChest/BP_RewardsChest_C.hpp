#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_WorldInteracts_Rewards_BP_RewardsHolder\BP_RewardsHolder_C.hpp"
namespace _Game_WorldInteracts_LevelObjects_BP_HackPanel {
struct BP_HackPanel_C;
}
namespace _Script_Engine {
struct ChildActorComponent;
}
namespace _Script_Engine {
struct BoxComponent;
}
namespace _Script_AkAudio {
struct AkBankLoadComponent;
}
namespace _Script_Engine {
struct SkeletalMeshComponent;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_Engine {
struct TimelineComponent;
}
namespace _Game_Items_Reward_Chest_Animations_AB_RewardChest {
struct AB_RewardChest_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_GlobalData_Economy_ST_ChestRewards {
struct ST_ChestRewards;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_Engine {
struct AnimMontage;
}
namespace _Script_RsGameTechRT {
struct RsAIPOI;
}
namespace _Script_RsGameTechRT {
struct RsAIController;
}
namespace _Game_WorldInteracts_Rewards_BP_RewardsChest {
#pragma pack(push, 1)
struct BP_RewardsChest_C : public _Game_WorldInteracts_Rewards_BP_RewardsHolder::BP_RewardsHolder_C {
    private: char pad_500[0xd8]; public:
    void* get_UberGraphFrame0();
    _Script_Engine::ChildActorComponent*& get_BP_HackPanel();
    _Script_AkAudio::AkBankLoadComponent*& get_AkBankLoad();
    _Script_Engine::SceneComponent*& get_HackPanelLocation();
    _Script_Engine::BoxComponent*& get_BoxCollision();
    _Script_Engine::SkeletalMeshComponent*& get_RewardChest_rig();
    float& get_Timeline_0_LightIntensity_6F7113BC419A0F878EBAF7B131D547C3();
    void* get_Timeline_0__Direction_6F7113BC419A0F878EBAF7B131D547C3();
    _Script_Engine::TimelineComponent*& get_Timeline_0();
    bool get_IsHighTier();
    void set_IsHighTier(bool value);
    void* get_DEPRECATED_ID();
    void* get_OnInteracted();
    void* get_HighTierChestSkelMesh();
    void* get_HackChestSkelMesh();
    bool get_HasInteracted();
    void set_HasInteracted(bool value);
    _Game_WorldInteracts_LevelObjects_BP_HackPanel::BP_HackPanel_C*& get_HackPanel();
    _Game_Items_Reward_Chest_Animations_AB_RewardChest::AB_RewardChest_C*& get_AnimBP();
    void* get_M_Emissives();
    static _Script_CoreUObject::Class* static_class();
    void DestroyHackPanel();
    void HasInteractedOrGotInNewGamePlus(bool& Result);
    void PopulateChestStruct();
    void SetIsHighTier(_Game_GlobalData_Economy_ST_ChestRewards::ST_ChestRewards& ST_ChestRewards);
    void UserConstructionScript();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void OnLoaded_B7D529BB46FAF3590FA5ECA2E2AE949F(_Script_CoreUObject::Object* Loaded);
    void OnLoaded_6EA8D8704BFF135D4E28D78F2226344E(_Script_CoreUObject::Object* Loaded);
    void ReceiveBeginPlay();
    void ContinueInteractSyncAnim();
    void Interacted();
    void OnHacked();
    void SyncEnded(_Script_Engine::AnimMontage* Montage, bool bInterrupted);
    void AddTag(_Script_RsGameTechRT::RsAIPOI* POI, _Script_RsGameTechRT::RsAIController* AIController);
    void RemoveTag(_Script_RsGameTechRT::RsAIPOI* POI, _Script_RsGameTechRT::RsAIController* AIController);
    void InitializeHackChest();
    void InitializeGoldChest();
    void InitializeNormalChest();
    void UpdateChestsOnCosmeticsRefreshed();
    void OnRefresh_UpdateInteractState();
    void OnRefresh_UpdateHackChest();
    void ExecuteUbergraph_BP_RewardsChest(int32_t EntryPoint);
    void OnInteracted__DelegateSignature();
}; // Size: 0x5d8
#pragma pack(pop)
}
