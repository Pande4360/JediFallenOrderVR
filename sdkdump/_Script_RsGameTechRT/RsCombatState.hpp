#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RsSoftStateObject.hpp"
namespace _Script_Engine {
struct DamageType;
}
namespace _Script_Engine {
struct AnimMontage;
}
namespace _Script_RsGameTechRT {
struct RsSyncDefinition;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
struct RsCharacter;
}
namespace _Script_Engine {
struct Controller;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_RsGameTechRT {
struct RsCharacterAnimationData;
}
namespace _Script_RsGameTechRT {
struct RsDamageParams;
}
namespace _Script_Engine {
struct AnimationAsset;
}
namespace _Script_RsGameTechRT {
struct RsSyncInstance;
}
namespace _Script_CoreUObject {
struct Vector2D;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsCombatState : public RsSoftStateObject {
    private: char pad_80[0x98]; public:
    void* get_InstancedAnimData();
    _Script_RsGameTechRT::RsSyncDefinition*& get_ActiveSyncDefinition();
    bool get_bHasTakeDamageImplementation();
    void set_bHasTakeDamageImplementation(bool value);
    static _Script_CoreUObject::Class* static_class();
    void SetStopAnimOnAbort(bool StopAnimOnAbort);
    bool RsShouldTakeDamage(_Script_RsGameTechRT::RsCharacter* DamageTaker, float Damage, _Script_Engine::DamageType* DamageType, _Script_Engine::Controller* EventInstigator, _Script_Engine::Actor* DamageCauser);
    void PopulateActionNameList(_Script_CoreUObject::Object* ContextObject, void*& Options);
    void OverrideSyncData(_Script_RsGameTechRT::RsCharacter* TheAttacker, _Script_RsGameTechRT::RsSyncDefinition* CurrentSyncDefinition, _Script_Engine::Actor* CurrentMaster, void*& CurrentSlaves, _Script_RsGameTechRT::RsSyncDefinition*& NewSyncDefinition, _Script_Engine::Actor*& NewMaster, void*& NewSlaves);
    void OverrideAnimationData(_Script_RsGameTechRT::RsCharacter* TheAttacker, _Script_RsGameTechRT::RsCharacterAnimationData& CurrentAnimationData, _Script_RsGameTechRT::RsCharacterAnimationData& NewAnimationData);
    void OnTakeDamage(_Script_RsGameTechRT::RsCharacter* TheDefender, float Damage, _Script_RsGameTechRT::RsDamageParams& DamageInfo, _Script_Engine::Controller* InstigatedBy, _Script_Engine::Actor* DamageCauser);
    void OnActionAnimationEnded(_Script_RsGameTechRT::RsCharacter* ActionOwner);
    void CompleteThisActionButContinueAnimation();
    void CompleteThisAction();
    void ChainToSyncAnimation(_Script_RsGameTechRT::RsSyncDefinition* SyncDefinition, void*& Slaves, _Script_Engine::AnimationAsset* OverrideAnimation, int32_t& NewSyncGroupdID, _Script_RsGameTechRT::RsSyncInstance*& MasterInstance, void*& SlaveInstanceArray, _Script_CoreUObject::Vector2D& MasterBlendSpaceInput, void*& SlaveBlendSpaceinputs);
    _Script_Engine::AnimMontage* ChainAnimation(_Script_RsGameTechRT::RsCharacterAnimationData& InAnimData);
    void CancelThisActionButContinueAnimation();
    void CancelThisAction();
}; // Size: 0x118
#pragma pack(pop)
}
