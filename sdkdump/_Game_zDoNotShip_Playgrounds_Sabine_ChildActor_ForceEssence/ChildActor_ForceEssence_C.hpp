#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_Engine {
struct ParticleSystemComponent;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Game_Effects_Particles_ForceAcquire_BPFX_MeterUpgrade_Base {
struct BPFX_MeterUpgrade_Base_C;
}
namespace _Game_Characters_Hero_Logic_BP_Hero {
struct BP_Hero_C;
}
namespace _Game_UI_Items_UI_AcquireText {
struct UI_AcquireText_C;
}
namespace _Game_Characters_Hero_Logic_BP_SwPlayerState {
struct BP_SwPlayerState_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_zDoNotShip_Playgrounds_Sabine_ChildActor_ForceEssence {
#pragma pack(push, 1)
struct ChildActor_ForceEssence_C : public _Script_Engine::Actor {
    private: char pad_360[0x90]; public:
    void* get_UberGraphFrame();
    _Script_Engine::ParticleSystemComponent*& get_ParticleSystem();
    _Script_Engine::SceneComponent*& get_UpgradeCenter();
    _Script_Engine::SceneComponent*& get_Scene();
    void* get_Triggered();
    bool get_Enabled();
    void set_Enabled(bool value);
    void* get_UpgradeType();
    void* get_SecondaryText();
    _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C*& get_BP_Hero();
    _Game_Effects_Particles_ForceAcquire_BPFX_MeterUpgrade_Base::BPFX_MeterUpgrade_Base_C*& get_UpgradeFX();
    void* get_TitleText();
    _Game_UI_Items_UI_AcquireText::UI_AcquireText_C*& get_AcquireWidget();
    _Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C*& get_PlayerState();
    bool get_upgraded();
    void set_upgraded(bool value);
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript0();
    void ReceiveBeginPlay0();
    void AwardCeremonyAndUI();
    void EchoConsumed();
    void OnResume();
    void ExecuteUbergraph_ChildActor_ForceEssence(int32_t EntryPoint);
    void Triggered__DelegateSignature();
}; // Size: 0x3f0
#pragma pack(pop)
}
