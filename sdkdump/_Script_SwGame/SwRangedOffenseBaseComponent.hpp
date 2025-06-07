#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_RsGameTechRT\RsOffenseComponent.hpp"
namespace _Script_SwGame {
struct SwProjectileSpreadingData;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
struct RsAICharacter;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_SwGame {
struct SwProjectile;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwRangedOffenseBaseComponent : public _Script_RsGameTechRT::RsOffenseComponent {
    private: char pad_170[0x30]; public:
    int32_t& get_OffScreenShotsNum();
    int32_t& get_MissingShotsNum();
    int32_t& get_AccurateShotsNum();
    _Script_SwGame::SwProjectileSpreadingData*& get_AccurateSpreadingData();
    _Script_SwGame::SwProjectileSpreadingData*& get_MissedSpreadingData();
    _Script_SwGame::SwProjectileSpreadingData*& get_ExtendedMissedSpreadingData();
    static _Script_CoreUObject::Class* static_class();
    _Script_SwGame::SwProjectile* SpawnAIProjectile(void* ProjectileClass, _Script_RsGameTechRT::RsAICharacter* Shooter, _Script_Engine::SceneComponent* MuzzleComponent, void* AccuracyOverrideMode);
    void RestartShotAccuracyCycle();
    bool IsFriendlyBlockingLOS(_Script_Engine::SceneComponent* MuzzleComponent);
    void* GetAccuracyCycleStateDebugString();
    bool CheckAttackTargetWithinShootingCone(float AngleInDegree, bool bIgnoreTargetElevation, _Script_Engine::SceneComponent* OverrideAimTransform);
}; // Size: 0x1a0
#pragma pack(pop)
}
