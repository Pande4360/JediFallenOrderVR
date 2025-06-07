#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\DataAsset.hpp"
namespace _Script_RsGameTechRT {
struct RsDefenseDefinition;
}
namespace _Script_RsGameTechRT {
struct RsHitCountTrackingDefinition;
}
namespace _Script_RsGameTechRT {
struct RsCharacterDeathDefinition;
}
namespace _Script_Engine {
struct DataTable;
}
namespace _Script_RsGameTechRT {
struct RsAISoundEvents;
}
namespace _Script_RsGameTechRT {
struct RsCharacterReactionDefinition;
}
namespace _Script_RsGameTechRT {
struct RsRagdollSoundEvents;
}
namespace _Script_RsGameTechRT {
struct RsPhysicsAssetCustomization;
}
namespace _Script_Engine {
struct ParticleSystem;
}
namespace _Script_AkAudio {
struct AkAudioEvent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsCharacterDefinition : public _Script_Engine::DataAsset {
    private: char pad_30[0x1d0]; public:
    void* get_CharacterType();
    float& get_DamageReceiveMultiplier();
    float& get_DamageValues();
    float& get_BlockDepleteValues();
    _Script_RsGameTechRT::RsCharacterDeathDefinition*& get_DeathDefinition();
    _Script_RsGameTechRT::RsCharacterDeathDefinition*& get_AirDeathDefinition();
    _Script_RsGameTechRT::RsCharacterReactionDefinition*& get_ReactionDefinition();
    _Script_RsGameTechRT::RsCharacterReactionDefinition*& get_AirReactionDefinition();
    _Script_RsGameTechRT::RsHitCountTrackingDefinition*& get_HitCountTrackingDefinition();
    _Script_RsGameTechRT::RsDefenseDefinition*& get_DefenseDefinition();
    int32_t& get_ParriedBlockCountIncrement();
    void* get_BlockConditions();
    void* get_ParryConditions();
    bool get_BlockMeterResetOnDepletedDamage();
    void set_BlockMeterResetOnDepletedDamage(bool value);
    bool get_BlockDuringReaction();
    void set_BlockDuringReaction(bool value);
    bool get_ParryDuringReaction();
    void set_ParryDuringReaction(bool value);
    bool get_EvadeDuringReaction();
    void set_EvadeDuringReaction(bool value);
    bool get_CanBlock();
    void set_CanBlock(bool value);
    bool get_CanParry();
    void set_CanParry(bool value);
    bool get_CanEvade();
    void set_CanEvade(bool value);
    void* get_BlockResponse();
    void* get_DefenseMap();
    void* get_DefenseContactMap();
    float& get_GlancingBlowDistance();
    _Script_RsGameTechRT::RsAISoundEvents*& get_AISoundEvents();
    _Script_RsGameTechRT::RsRagdollSoundEvents*& get_RagdollSoundEvents();
    void* get_SurfaceTypeOverrides();
    _Script_RsGameTechRT::RsPhysicsAssetCustomization*& get_PhysicsAssetCustomization();
    _Script_Engine::DataTable*& get_FootstepDataTable();
    _Script_Engine::DataTable*& get_SlideDataTable();
    void* get_HitFXColor();
    void* get_TrailSocketStart();
    void* get_TrailSocketEnd();
    _Script_Engine::ParticleSystem*& get_TrailParticle();
    _Script_AkAudio::AkAudioEvent*& get_FootstepEvent();
    _Script_AkAudio::AkAudioEvent*& get_FoliageFootstepEvent();
    bool get_OcclusionEnabled();
    void set_OcclusionEnabled(bool value);
    bool get_Follow();
    void set_Follow(bool value);
    float& get_JogSpeed();
    float& get_RunSpeed();
    float& get_FoliageTypeUpdateRate();
    float& get_FoliageTypeSearchRadius();
    void* get_WeaponIkWeaponEndSocket();
    void* get_WeaponIkWeaponOtherEndSocket();
    float& get_DistanceToCancelActiveFightBehaviorIfTargetIsInSync();
    bool get_bUseCapsulePercentage();
    void set_bUseCapsulePercentage(bool value);
    float& get_CapsulePercentageForTargetAim();
    float& get_TargetAimLowerThreshold();
    float& get_TargetAimUpperThreshold();
    float& get_TargetAimPitchYawTimeout();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x200
#pragma pack(pop)
}
