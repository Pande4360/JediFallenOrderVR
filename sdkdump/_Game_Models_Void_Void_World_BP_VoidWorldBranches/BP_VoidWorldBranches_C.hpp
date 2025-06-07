#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_RsGameTechRT\RsBitfield_HeroUpgradeFlags.hpp"
namespace _Script_Engine {
struct DecalComponent;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Models_Void_Void_World_BP_VoidWorldBranches {
#pragma pack(push, 1)
struct BP_VoidWorldBranches_C : public _Script_Engine::Actor {
    private: char pad_360[0x140]; public:
    void* get_UberGraphFrame();
    _Script_Engine::DecalComponent*& get_204ForceGain();
    _Script_Engine::DecalComponent*& get_QuarterCircle();
    _Script_Engine::DecalComponent*& get_TopCircles();
    _Script_Engine::DecalComponent*& get_BigCircle3();
    _Script_Engine::DecalComponent*& get_BigCircle2();
    _Script_Engine::DecalComponent*& get_BigCircle1();
    _Script_Engine::DecalComponent*& get_309JediEvade();
    _Script_Engine::DecalComponent*& get_307AutoDeflect();
    _Script_Engine::DecalComponent*& get_306BlockUp();
    _Script_Engine::DecalComponent*& get_305EffectiveHeal2();
    _Script_Engine::DecalComponent*& get_304EffectiveHeal1();
    _Script_Engine::DecalComponent*& get_303Health3();
    _Script_Engine::DecalComponent*& get_302Health2();
    _Script_Engine::DecalComponent*& get_301Health1();
    _Script_Engine::DecalComponent*& get_212FocusHeal();
    _Script_Engine::DecalComponent*& get_211Pull2();
    _Script_Engine::DecalComponent*& get_210Pull1();
    _Script_Engine::DecalComponent*& get_208Push2();
    _Script_Engine::DecalComponent*& get_207Push1();
    _Script_Engine::DecalComponent*& get_206Slow2();
    _Script_Engine::DecalComponent*& get_205Slow1();
    _Script_Engine::DecalComponent*& get_203Focus3();
    _Script_Engine::DecalComponent*& get_202Focus2();
    _Script_Engine::DecalComponent*& get_201Focus1();
    _Script_Engine::DecalComponent*& get_116UpgradeDmg();
    _Script_Engine::DecalComponent*& get_114ThrowInc();
    _Script_Engine::DecalComponent*& get_113SaberThrow();
    _Script_Engine::DecalComponent*& get_112Transform();
    _Script_Engine::DecalComponent*& get_111UpgradeStaff();
    _Script_Engine::DecalComponent*& get_110UpgradeFocus();
    _Script_Engine::DecalComponent*& get_108AirFocus();
    _Script_Engine::DecalComponent*& get_107DelayStaff();
    _Script_Engine::DecalComponent*& get_106DelayAtk();
    _Script_Engine::DecalComponent*& get_105EvadeAtk();
    _Script_Engine::DecalComponent*& get_104SprintAtk();
    _Script_Engine::DecalComponent*& get_102LeapInc();
    _Script_Engine::DecalComponent*& get_101Leap();
    _Script_Engine::DecalComponent*& get_origin();
    _Script_Engine::SceneComponent*& get_DefaultSceneRoot();
    static _Script_CoreUObject::Class* static_class();
    void ResetBranches();
    void UserConstructionScript0();
    void ReceiveBeginPlay0();
    void OnHeroUpgradeChanged(_Script_RsGameTechRT::RsBitfield_HeroUpgradeFlags OldFlags, _Script_RsGameTechRT::RsBitfield_HeroUpgradeFlags NewFlags);
    void UpdateBranchVisibility();
    void ExecuteUbergraph_BP_VoidWorldBranches(int32_t EntryPoint);
}; // Size: 0x4a0
#pragma pack(pop)
}
