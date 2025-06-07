#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Game_Characters_Hero_Logic_Components_Combat_HC_Sheathe {
struct HC_Sheathe_C;
}
namespace _Script_RsGameTechRT {
struct RsSyncDefinition;
}
namespace _Script_Engine {
struct ArrowComponent;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_Engine {
struct AnimSequence;
}
namespace _Script_RsGameTechRT {
struct RsHero;
}
namespace _Script_RsGameTechRT {
struct RsSlaveSyncInstance;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct AnimMontage;
}
namespace _Game_WorldInteracts_EventZones_Interact_BP_AnimSync {
#pragma pack(push, 1)
struct BP_AnimSync_C : public _Script_Engine::Actor {
    private: char pad_360[0x80]; public:
    void* get_UberGraphFrame();
    _Script_Engine::ArrowComponent*& get_SyncLocation();
    _Script_Engine::SceneComponent*& get_Scene();
    _Script_RsGameTechRT::RsSyncDefinition*& get_SyncDefinition();
    _Game_Characters_Hero_Logic_Components_Combat_HC_Sheathe::HC_Sheathe_C*& get_HC_Sheathe();
    _Script_RsGameTechRT::RsHero*& get_Hero();
    _Script_Engine::AnimSequence*& get_OverrideAnimation();
    bool get_WaitForGroundState();
    void set_WaitForGroundState(bool value);
    bool get_NavOnly();
    void set_NavOnly(bool value);
    _Script_RsGameTechRT::RsSlaveSyncInstance*& get_SyncInstance();
    void* get_LVL_OnSyncAnimStarted();
    void* get_LVL_OnSyncEnding();
    void* get_LVL_OnNavOnlyCompleted();
    bool get_WaitForSaberSheathe();
    void set_WaitForSaberSheathe(bool value);
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript0();
    void LVL_StartSync();
    void CheckDoneSheathing();
    void ContinueSync();
    void SyncEnding(_Script_Engine::AnimMontage* Montage, bool bInterrupted);
    void SheathingDone();
    void LVL_StopSync();
    void Grounded(void* NewState, void* PrevState);
    void ExecuteUbergraph_BP_AnimSync(int32_t EntryPoint);
    void LVL_OnNavOnlyCompleted__DelegateSignature();
    void LVL_OnSyncEnding__DelegateSignature(_Script_Engine::AnimMontage* Montage, bool bInterrupted);
    void LVL_OnSyncAnimStarted__DelegateSignature();
}; // Size: 0x3e0
#pragma pack(pop)
}
