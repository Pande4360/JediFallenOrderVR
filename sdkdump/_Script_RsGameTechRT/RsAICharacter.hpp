#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Transform.hpp"
#include "..\_Script_GameplayTags\GameplayTag.hpp"
#include "RsCharacter.hpp"
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_CoreUObject {
struct Vector;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_RsGameTechRT {
struct RsAISpawner;
}
namespace _Script_Engine {
struct AnimMontage;
}
namespace _Script_Engine {
struct AnimSequence;
}
namespace _Script_RsGameTechRT {
struct RsNavVolume;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsAICharacter : public RsCharacter {
    private: char pad_28d0[0xe0]; public:
    _Script_Engine::SceneComponent*& get_AlwaysUpdateTransformComponent();
    bool get_bDontSetDeathCollisionTweak();
    void set_bDontSetDeathCollisionTweak(bool value);
    bool get_bIsDismembered();
    void set_bIsDismembered(bool value);
    int32_t& get_NumberOfAiSpawnedOnDeath();
    bool get_bEnableRagdoll();
    void set_bEnableRagdoll(bool value);
    bool get_bKillOnEnterWater();
    void set_bKillOnEnterWater(bool value);
    static _Script_CoreUObject::Class* static_class();
    void SetWeaponUnsheathed(bool bIsUnsheathed);
    void SetClampToNavMesh_BluePrint(bool Clamp);
    void SetCanBeKilledByWater(bool bEnable);
    void SetAIToBusy(bool bIsBusy);
    void PlaceOnNavMeshOnHitGroundEvent_Internal(void* previousMode, void* newMode, float Proximity);
    bool PlaceOnNavMesh_Blueprint(_Script_CoreUObject::Vector& extentMargin);
    void OnTopologyChangedPrivate(void* previousMode, void* newMode, float Proximity);
    void OnRequestAmbientToAlertDialogue(_Script_Engine::Actor* Source, void* AwarenessKind, void* ReactionRole);
    void OnRequestAlertToAmbientDialogue();
    void OnPostDeath();
    void OnNotifyAISpawned(_Script_RsGameTechRT::RsAISpawner* Spawner);
    void OnBeforeKillingAIWhenEnteredWater();
    bool IsWeaponUnsheathed();
    _Script_GameplayTags::GameplayTag GetSpeakerTagOverride();
    _Script_CoreUObject::Transform GetSpawnTransform();
    _Script_RsGameTechRT::RsAISpawner* GetSpawner();
    bool GetCanBeKilledByWater();
    bool CanPlayMontageOnNavMesh(_Script_Engine::AnimMontage* Montage);
    bool CanPlayAnimSequenceOnNavMesh(_Script_Engine::AnimSequence* Animation);
    void AICharacterIsInWaterStateChanged(_Script_RsGameTechRT::RsCharacter* RsCharacter, _Script_RsGameTechRT::RsNavVolume* Volume, bool bIsAICharacterInWater, bool bWasInWater);
}; // Size: 0x29b0
#pragma pack(pop)
}
