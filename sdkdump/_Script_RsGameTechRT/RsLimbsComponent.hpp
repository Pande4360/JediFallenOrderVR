#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\ActorComponent.hpp"
#include "..\_Script_GameplayTags\GameplayTag.hpp"
#include "RsDamageInfo.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
struct RsDamageParams;
}
namespace _Script_RsGameTechRT {
struct RsLimbDismembermentData;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_Engine {
struct PrimitiveComponent;
}
namespace _Script_RsGameTechRT {
struct RsLimbInfo;
}
namespace _Script_Engine {
struct Controller;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsLimbsComponent : public _Script_Engine::ActorComponent {
    private: char pad_170[0x1a0]; public:
    void* get_OnLimbOverlapped();
    void* get_OnLimbDestroyed();
    void* get_OnAnyLimbDamage();
    void* get_Limbs();
    static _Script_CoreUObject::Class* static_class();
    void SpawnDismemberedLimb(_Script_GameplayTags::GameplayTag LimbTag);
    void SetLimbVisibility(_Script_GameplayTags::GameplayTag LimbTag, bool bVisible);
    void SetLimbDismembermentData(_Script_GameplayTags::GameplayTag LimbTag, _Script_RsGameTechRT::RsLimbDismembermentData& DismembermentData);
    void SetLimbCollision(_Script_GameplayTags::GameplayTag LimbTag, void* CollisionType);
    void RegisterLimb(_Script_RsGameTechRT::RsLimbInfo& LimbInfo);
    float ReduceLimbHealth(_Script_GameplayTags::GameplayTag LimbTag, _Script_RsGameTechRT::RsDamageInfo& DamageInfo);
    float KillLimb(_Script_GameplayTags::GameplayTag LimbTag, void* DamageTypeClass, _Script_Engine::Actor* DamageCauser, _Script_Engine::Controller* DamageInstigator, _Script_RsGameTechRT::RsDamageParams& DamageParams);
    bool IsLimbAlive(_Script_GameplayTags::GameplayTag LimbTag);
    void* GetRegisteredLimbTags();
    float GetLimbHealth(_Script_GameplayTags::GameplayTag LimbTag);
    _Script_Engine::Controller* GetLastDamageInstigator();
    _Script_RsGameTechRT::RsDamageInfo GetLastDamageInfo();
    _Script_Engine::Actor* GetLastDamageCauser();
    _Script_GameplayTags::GameplayTag FindLimbWithCollider(_Script_Engine::PrimitiveComponent* Collider);
}; // Size: 0x310
#pragma pack(pop)
}
