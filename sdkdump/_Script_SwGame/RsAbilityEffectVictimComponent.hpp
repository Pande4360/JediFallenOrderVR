#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\ActorComponent.hpp"
namespace _Script_SwGame {
struct RsAbilityEffectVictimData;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_RsGameTechRT {
struct RsHero;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct RsAbilityEffectVictimComponent : public _Script_Engine::ActorComponent {
    private: char pad_170[0x88]; public:
    void* get_AbilityPriorityPreset();
    void* get_Priority();
    void* get_VictimType();
    _Script_SwGame::RsAbilityEffectVictimData*& get_VictimData();
    void* get_VictimDataUpgrades();
    void* get_OverrideWeightClass();
    void* get_EffectOverrideList();
    bool get_bOverrideIfNotVulnerable();
    void set_bOverrideIfNotVulnerable(bool value);
    bool get_bRegisterChildAsAdditionalTarget();
    void set_bRegisterChildAsAdditionalTarget(bool value);
    bool get_bRegisterParentAsAdditionalTarget();
    void set_bRegisterParentAsAdditionalTarget(bool value);
    void* get_CanConsiderAdditionalTargets();
    bool get_bAlwaysOverrideResponse();
    void set_bAlwaysOverrideResponse(bool value);
    bool get_bShouldBeConsideredForDirectionAssist();
    void set_bShouldBeConsideredForDirectionAssist(bool value);
    bool get_bCanBeATarget();
    void set_bCanBeATarget(bool value);
    bool get_bCanBeForceHighlighted();
    void set_bCanBeForceHighlighted(bool value);
    bool get_bUseIntenseHighlight();
    void set_bUseIntenseHighlight(bool value);
    float& get_IntenseHighlightBias();
    bool get_bRequiresForceSlow();
    void set_bRequiresForceSlow(bool value);
    bool get_bRequiresForcePush();
    void set_bRequiresForcePush(bool value);
    bool get_bRequiresForcePull();
    void set_bRequiresForcePull(bool value);
    bool get_bRequiresForceTK();
    void set_bRequiresForceTK(bool value);
    bool get_bShouldForceMeterCostBeFree();
    void set_bShouldForceMeterCostBeFree(bool value);
    bool get_bIsAnEnvironmentObject();
    void set_bIsAnEnvironmentObject(bool value);
    static _Script_CoreUObject::Class* static_class();
    bool ShouldConsiderAdditionalTargets(void* EffectType);
    void SetVictimType(void* InVictimType);
    void SetVictimDataUpgrades(void* Level1, void* Level2, void* Level3);
    void SetVictimData(_Script_SwGame::RsAbilityEffectVictimData* InVictimData);
    void SetPriorityPreset(void* InPriority);
    void SetAbilityPriorityPreset(void* Preset);
    void RemoveOverrideForEffect(void* EffectType);
    void RemoveAdditionalTarget(_Script_Engine::Actor* AdditionalTarget);
    void PopulatePresetNameList(_Script_CoreUObject::Object* ContextObject, void*& Options);
    bool K2_HasOverridenEffect(void* EffectType);
    void* GetPriorityPreset();
    void* GetAbilityPriorityPreset();
    bool CanUseStandardHighlight(_Script_RsGameTechRT::RsHero* RawHero);
    void AddOverrideForEffect(void* EffectType);
    void AddAdditionalTarget(_Script_Engine::Actor* AdditionalTarget);
}; // Size: 0x1f8
#pragma pack(pop)
}
