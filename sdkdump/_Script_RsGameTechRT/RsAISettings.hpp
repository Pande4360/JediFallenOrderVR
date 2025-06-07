#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\DeveloperSettings.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsAISettings : public _Script_Engine::DeveloperSettings {
    private: char pad_38[0x228]; public:
    void* get_CharacterAttributesDataTable();
    float& get_TimeToIgnorePlayerAfterTeleport();
    int32_t& get_MaxAISpawnsPerFramePS();
    int32_t& get_MaxAISpawnsPerFrameXB();
    int32_t& get_MaxAISpawnsPerFramePC();
    void* get_SoundRanges();
    float& get_MinAmbientAwarenessStateChangeLockout();
    float& get_MaxAmbientAwarenessStateChangeLockout();
    float& get_MinAlertAwarenessStateChangeLockout();
    float& get_MaxAlertAwarenessStateChangeLockout();
    float& get_MinAggroAwarenessStateChangeLockout();
    float& get_MaxAggroAwarenessStateChangeLockout();
    float& get_FightIdleMeleeDelay();
    void* get_RootBehaviorAsset();
    void* get_WaitBehaviorAsset();
    void* get_ScriptedMoveToBehaviorAsset();
    void* get_AmbientIdleBehaviorAsset();
    void* get_ConversationBehaviorAsset();
    void* get_PatrolBehaviorAsset();
    void* get_WanderBehaviorAsset();
    void* get_ReturnHomeBehaviorAsset();
    void* get_InvestigateBehaviorAsset();
    void* get_FightIdleBehaviorAsset();
    void* get_AmbientToAlertTransitionBehaviorAsset();
    void* get_AlertToAggroTransitionBehaviorAsset();
    void* get_AggroToAlertTransitionBehaviorAsset();
    void* get_AlertToAmbientTransitionBehaviorAsset();
    void* get_CombatReactionBehaviorAsset();
    void* get_POIRootBehaviorAsset();
    void* get_POIDefaultBehaviorAsset();
    void* get_POIDefaultDefinitionAsset();
    void* get_GameStateSettings();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x260
#pragma pack(pop)
}
