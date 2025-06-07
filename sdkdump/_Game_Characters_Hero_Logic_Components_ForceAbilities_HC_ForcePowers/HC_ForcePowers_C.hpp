#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_RsGameTechRT\RsHeroComponent.hpp"
namespace _Game_Characters_Hero_Logic_BP_Hero {
struct BP_Hero_C;
}
namespace _Script_SwGame {
struct RsAbilityUserComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Characters_Hero_Logic_Components_ForceAbilities_HC_ForcePowers {
#pragma pack(push, 1)
struct HC_ForcePowers_C : public _Script_RsGameTechRT::RsHeroComponent {
    private: char pad_180[0x60]; public:
    void* get_UberGraphFrame();
    _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C*& get_BP_Hero_REF();
    _Script_SwGame::RsAbilityUserComponent*& get_RsAbilityUser_REF();
    bool get_ForceTKActive();
    void set_ForceTKActive(bool value);
    void* get_ForceFailed();
    void* get_HeroForcePushStarted();
    void* get_HeroForceSlowStarted();
    void* get_HeroForcePullStarted();
    static _Script_CoreUObject::Class* static_class();
    void ReceiveBeginPlay();
    void Activate_Force_Push();
    void Activate_Force_Pull();
    void Activate_Force_Telekinesis();
    void Activate_Force_Slow();
    void Deactivate_Force_Push();
    void Deactivate_Force_Pull();
    void Deactivate_Force_Slow();
    void Force_Empty_During_Slow(void* ResponsibleForceName, float TimeUntilForceRegen);
    void ForcePullDrop_AutoAttack();
    void ExecuteUbergraph_HC_ForcePowers(int32_t EntryPoint);
    void HeroForcePullStarted__DelegateSignature();
    void HeroForceSlowStarted__DelegateSignature();
    void HeroForcePushStarted__DelegateSignature();
    void ForceFailed__DelegateSignature();
}; // Size: 0x1e0
#pragma pack(pop)
}
