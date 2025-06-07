#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_RsGameTechRT\RsHeroComponent.hpp"
namespace _Game_Characters_Hero_Logic_BP_Hero {
struct BP_Hero_C;
}
namespace _Script_RsGameTechRT {
struct RsCharacter;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct AnimMontage;
}
namespace _Game_Characters_Hero_Logic_Components_Combat_HC_Evade {
#pragma pack(push, 1)
struct HC_Evade_C : public _Script_RsGameTechRT::RsHeroComponent {
    private: char pad_180[0x88]; public:
    void* get_UberGraphFrame();
    _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C*& get_BP_Hero();
    float& get_evadeFBMin();
    void* get_evadeF();
    void* get_evadeB();
    void* get_evadeL();
    void* get_evadeR();
    bool get_evading();
    void set_evading(bool value);
    void* get_evadeAttackDir();
    float& get_evadeAttackTime();
    void* get_HeroEvaded();
    void* get_HeroRolled();
    _Script_RsGameTechRT::RsCharacter*& get_PerfectEvadedAttacker();
    static _Script_CoreUObject::Class* static_class();
    void ShowStaminaBar();
    bool DetermineEvadeType();
    void DetermineEvadeBlendDirection(float& X, float& Y);
    void ReceiveBeginPlay();
    void Evade_Input();
    void QuickRecover();
    void Evade();
    void BruteSlide();
    void Montage_End(_Script_Engine::AnimMontage* Montage, bool bInterrupted);
    void zTarget_Evade();
    void OnStartEvade(_Script_RsGameTechRT::RsCharacter* Attacker);
    void Backwards_Roll();
    void Forward_Roll();
    void DashEvade(float BlendSpace_X);
    void PerfectDodge();
    void Put_Out_Flames();
    void NeutralEvade();
    void Perfect_Evade_Ended(_Script_Engine::AnimMontage* Montage, bool bInterrupted);
    void ExecuteUbergraph_HC_Evade(int32_t EntryPoint);
    void HeroRolled__DelegateSignature();
    void HeroEvaded__DelegateSignature();
    void evadeR__DelegateSignature();
    void evadeL__DelegateSignature();
    void evadeB__DelegateSignature();
    void evadeF__DelegateSignature();
}; // Size: 0x208
#pragma pack(pop)
}
