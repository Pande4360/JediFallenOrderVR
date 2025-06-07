#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_RsGameTechRT\RsHeroComponent.hpp"
namespace _Game_Characters_Hero_Logic_BP_Hero {
struct BP_Hero_C;
}
namespace _Script_Engine {
struct AnimMontage;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct AnimationAsset;
}
namespace _Script_RsGameTechRT {
struct RsBitfield_HeroLoadoutFlags;
}
namespace _Script_RsGameTechRT {
struct RsAIGameStateManager;
}
namespace _Game_Characters_Hero_Logic_Components_Combat_HC_Sheathe {
#pragma pack(push, 1)
struct HC_Sheathe_C : public _Script_RsGameTechRT::RsHeroComponent {
    private: char pad_180[0x78]; public:
    void* get_UberGraphFrame();
    _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C*& get_BP_Hero();
    float& get_Timeout();
    float& get_timerLength();
    void* get_Lightsaber();
    void* get_AttachSocketName();
    bool get_Unsheathed();
    void set_Unsheathed(bool value);
    _Script_Engine::AnimMontage*& get_Sheathe_Animation();
    void* get_OnSheathingDone();
    bool get_Immobilize();
    void set_Immobilize(bool value);
    bool get_CombinedHilt();
    void set_CombinedHilt(bool value);
    void* get_OnUnsheathingDone();
    void* get_AutoSheatheTags();
    static _Script_CoreUObject::Class* static_class();
    void ChooseVictoryAnim(_Script_Engine::AnimMontage*& Animation);
    bool DidLoadoutUnlock(_Script_RsGameTechRT::RsBitfield_HeroLoadoutFlags& OldFlags, _Script_RsGameTechRT::RsBitfield_HeroLoadoutFlags& NewFlags, void* Flag);
    void ChooseSheatheAnim(_Script_Engine::AnimationAsset*& UnsheatheAnim);
    void IsSheathed(bool& Sheathed);
    void ChooseUnsheatheAnim(_Script_Engine::AnimationAsset*& UnsheatheAnim);
    void ReceiveBeginPlay();
    void PlayUnSheatheAnim();
    void SheatheSaber(bool Timeout);
    void LightsaberAttach(bool hip, bool Force);
    void InstantSheathe(bool Unsheathe, bool ignoreFlashlight, bool saveFlashlightState);
    void ReceiveTick(float DeltaSeconds);
    void Action_SheatheLightsaber();
    void Sheathing_Interrupted();
    void RequestSheathe(bool ImmobilizeUntilDone);
    void AnimNotify_SheathingDone(bool Unsheathe);
    void UnsheatheSwitch(void* New_Type);
    void CheckScriptedSheatheInterrupted();
    void Flourish();
    void Player_Victory(_Script_RsGameTechRT::RsAIGameStateManager* GameStateManager);
    void Post_Victory(_Script_Engine::AnimMontage* Montage, bool bInterrupted);
    void OnThrowReturned();
    void ExecuteUbergraph_HC_Sheathe(int32_t EntryPoint);
    void OnUnsheathingDone__DelegateSignature();
    void OnSheathingDone__DelegateSignature();
}; // Size: 0x1f8
#pragma pack(pop)
}
