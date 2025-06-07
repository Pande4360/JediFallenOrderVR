#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_RsGameTechRT\RsHero.hpp"
namespace _Script_SwGame {
struct SwButtonMashComponent;
}
namespace _Script_SwGame {
struct SwReactionState;
}
namespace _Script_SwGame {
struct SwSaberClashComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
struct SwAIBuddyDroid;
}
namespace _Script_RsGameTechRT {
struct RsCharacterAnimationData;
}
namespace _Script_SwGame {
struct SwDefenseParameters;
}
namespace _Script_RsGameTechRT {
struct RsSyncDefinition;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwHero : public _Script_RsGameTechRT::RsHero {
    private: char pad_2ea0[0x30]; public:
    float& get_ConsecutiveProjectileDamageProtectionTime();
    int32_t& get_CurrentTargetingProfileIndex();
    _Script_SwGame::SwButtonMashComponent*& get_ButtonMashComponent();
    _Script_SwGame::SwSaberClashComponent*& get_SaberClashComponent();
    static _Script_CoreUObject::Class* static_class();
    void SetTargetingProfileIndex(int32_t NewIndex);
    void PlayerReaction(_Script_RsGameTechRT::RsCharacterAnimationData& AnimData, _Script_SwGame::SwReactionState* DescriptionTemplate);
    void PlayerDefendFromDefenseParameters(_Script_SwGame::SwDefenseParameters& DefenseParameters);
    void PlayerDefend(_Script_RsGameTechRT::RsCharacterAnimationData& AnimData, void* DescriptionOverride);
    void PlayerAttackSync(void* DescriptionOverride, _Script_RsGameTechRT::RsSyncDefinition* SyncDef, bool bSwapMasterSlave);
    void PlayerAttack(_Script_RsGameTechRT::RsCharacterAnimationData& AnimData, void* DescriptionOverride);
    bool HasAnyProjectileDamageProtection();
    _Script_SwGame::SwSaberClashComponent* GetSaberClashComponent();
    _Script_SwGame::SwAIBuddyDroid* GetBuddyDroidActor();
    void DetermineSoftLockTargetFromProfile();
    void DeactiveForceMissingOnIncomingProjectiles();
    void AutoActivateZTargeting(_Script_Engine::Actor* AutoTarget);
    void ActiveForceMissingOnIncomingProjectiles(float ChanceToMiss);
}; // Size: 0x2ed0
#pragma pack(pop)
}
