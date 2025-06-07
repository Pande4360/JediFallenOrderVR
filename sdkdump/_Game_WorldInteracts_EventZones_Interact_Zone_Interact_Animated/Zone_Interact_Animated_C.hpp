#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_WorldInteracts_EventZones_Interact_Zone_Interact\Zone_Interact_C.hpp"
namespace _Script_Engine {
struct AnimSequence;
}
namespace _Script_AkAudio {
struct AkAudioEvent;
}
namespace _Script_RsGameTechRT {
struct RsSyncDefinition;
}
namespace _Game_Characters_Hero_Logic_Components_Combat_HC_Sheathe {
struct HC_Sheathe_C;
}
namespace _Script_Engine {
struct AnimMontage;
}
namespace _Script_RsGameTechRT {
struct RsSlaveSyncInstance;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_WorldInteracts_EventZones_Interact_Zone_Interact_Animated {
#pragma pack(push, 1)
struct Zone_Interact_Animated_C : public _Game_WorldInteracts_EventZones_Interact_Zone_Interact::Zone_Interact_C {
    private: char pad_418[0x90]; public:
    void* get_UberGraphFrame0();
    _Script_Engine::AnimSequence*& get_PlayerAnimation();
    _Script_RsGameTechRT::RsSyncDefinition*& get_SyncDefinition();
    void* get_LVL_InteractAnimationCompleted();
    _Script_AkAudio::AkAudioEvent*& get_AnimationSFX();
    bool get_SheatheSaberFirst();
    void set_SheatheSaberFirst(bool value);
    void* get_PoweredActors();
    bool get_CurrentlyPowered();
    void set_CurrentlyPowered(bool value);
    _Script_RsGameTechRT::RsSlaveSyncInstance*& get_SyncInstance();
    _Game_Characters_Hero_Logic_Components_Combat_HC_Sheathe::HC_Sheathe_C*& get_HC_Sheathe();
    void* get_LVL_InteractAnimationStarted();
    void* get_LVL_InteractAnimationAborted();
    bool get_IgnoreNextInterrupt();
    void set_IgnoreNextInterrupt(bool value);
    bool get_ReenableOnAnimInterrupted();
    void set_ReenableOnAnimInterrupted(bool value);
    _Script_Engine::AnimMontage*& get_SoloAnimMontage();
    static _Script_CoreUObject::Class* static_class();
    void AnimatedSheathe(bool Solo);
    void PlaySyncAnim();
    void PlaySFX();
    void UpdatePoweredActors(bool BeginPlay);
    void UserConstructionScript();
    void Interacted0();
    void SyncEnded(_Script_Engine::AnimMontage* Montage, bool bInterrupted);
    void InteractSoloAnim();
    void InteractSyncAnim();
    void ReceiveBeginPlay();
    void CheckDoneSheathing();
    void ContinueInteractSyncAnim();
    void SoloSheatheDone();
    void SyncSheatheDone();
    void SyncStopped(bool bInterrupted);
    void ExecuteUbergraph_Zone_Interact_Animated(int32_t EntryPoint);
    void LVL_InteractAnimationAborted__DelegateSignature();
    void LVL_InteractAnimationStarted__DelegateSignature();
    void LVL_InteractAnimationCompleted__DelegateSignature();
}; // Size: 0x4a8
#pragma pack(pop)
}
