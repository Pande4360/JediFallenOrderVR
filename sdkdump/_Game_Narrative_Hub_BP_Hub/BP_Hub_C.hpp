#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_Narrative_Hub_Structs_ST_HubChumpSpawnData\ST_HubChumpSpawnData.hpp"
#include "..\_Game_Narrative_Hub_Structs_ST_HubDebugTagConfiguration\ST_HubDebugTagConfiguration.hpp"
#include "..\_Game_Narrative_Hub_Structs_ST_HubDialogueInfo\ST_HubDialogueInfo.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_InputCore\Key.hpp"
#include "..\_Script_RsGameTechRT\RAPLineStartedEventData.hpp"
namespace _Script_RsGameTechRT {
struct RsConversation;
}
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_RsGameTechRT {
struct RsAICharacter;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Narrative_Hub_Chumps_BP_ChumpBase {
struct BP_ChumpBase_C;
}
namespace _Script_Engine {
struct PrimitiveComponent;
}
namespace _Script_Engine {
struct HitResult;
}
namespace _Script_DialoguePlugin {
struct Dialogue;
}
namespace _Game_Narrative_Hub_BP_Hub {
#pragma pack(push, 1)
struct BP_Hub_C : public _Script_Engine::Actor {
    private: char pad_360[0x4b8]; public:
    void* get_UberGraphFrame();
    _Script_Engine::StaticMeshComponent*& get_HubZoneMesh();
    _Script_Engine::SceneComponent*& get_DefaultSceneRoot();
    bool get_StartActive();
    void set_StartActive(bool value);
    void* get_HubChumps();
    void* get_SpawnersToUse();
    void* get_SpawnedChumps();
    bool get_InHubEngagementConversation();
    void set_InHubEngagementConversation(bool value);
    void* get_ProxyVOCooldownTimes();
    float& get_DefaultProxyVOCooldown();
    float& get_DefaultConversationContinueCooldown();
    void* get_ValidConversationContinueCooldowns();
    _Game_Narrative_Hub_Chumps_BP_ChumpBase::BP_ChumpBase_C*& get_CurrentConversationChump();
    _Script_RsGameTechRT::RsConversation*& get_CurrentConversation();
    bool get_DebugMode();
    void set_DebugMode(bool value);
    void* get_NearbyNPCs();
    void* get_DebugButtonGametagConfigurations();
    int32_t& get_CurrentDebugGametagIndex();
    void* get_ResetButtonNukeTags();
    float& get_ProxyVODistance();
    float& get_VoEngagementDistance();
    float& get_VOAbandonmentDistance();
    void* get_PotentialEngagementNPCs();
    bool get_CameraModeActive();
    void set_CameraModeActive(bool value);
    void* get_NearNPCCameraModeName();
    void* get_ChumpSelectedDialogues();
    void* get_ChumpPreviousConversations();
    int32_t& get_MaxConversationsPerChumpPerHubVisit();
    float& get_VoEngagementDistanceForLockingAuto();
    _Script_Engine::Actor*& get_ConversationCenterActor();
    void* get_HubTempContentTag();
    void* get_CurrentConversationSpeakers();
    float& get_LastCooldownTickTime();
    void* get_LVL_OnHubActivate();
    void* get_LVL_OnHubDeactivate();
    void* get_SpawnersWithProxyDistanceOverrides();
    bool get_HubCurrentlyActive();
    void set_HubCurrentlyActive(bool value);
    void* get_LVL_HubDialogueFinishedPlaying();
    void* get_LastDebugConfig();
    bool get_HUDRequestedHidden();
    void set_HUDRequestedHidden(bool value);
    void* get_LVL_HubDialogueStartedPlaying();
    void* get_ChumpsWhoPlayedGoAwayLines();
    float& get_MaxActiveDistanceFromHero();
    void* get_HubMantisStates();
    void* get_SpawnersToChumpData();
    void* get_VOTickTimer();
    float& get_MantisAbandonmentDistance();
    float& get_MantisProxyDistance();
    void* get_ActiveChumpIDs();
    static _Script_CoreUObject::Class* static_class();
    void hasRequiredLevelTags(_Game_Narrative_Hub_Structs_ST_HubChumpSpawnData::ST_HubChumpSpawnData& HubChump, bool& True_);
    void getTagsAsString(void*& Array, void*& Array1, void*& Tags);
    void HeroLeftChump(_Game_Narrative_Hub_Chumps_BP_ChumpBase::BP_ChumpBase_C* Chump);
    void HeroNearChump(_Game_Narrative_Hub_Chumps_BP_ChumpBase::BP_ChumpBase_C* Chump);
    void DebugPrintDebugSpawner(_Script_RsGameTechRT::RsAICharacter* Character);
    void SetDebugHubTicking(bool Ticking);
    void ChumpInLOS(_Script_Engine::Actor* Chump, bool& Result);
    void LVL_UpdateMantisRamp(void* NewState, bool& Success);
    void UpdateMantisDoorState();
    void Timer_CheckHeroDistance();
    void SetDebugHubTagSet(_Game_Narrative_Hub_Structs_ST_HubDebugTagConfiguration::ST_HubDebugTagConfiguration Config);
    void SetDebugHubUID(int32_t State);
    void SetDebugHubDialogue(void* Dialogue);
    void SetDebugHubState(void* State);
    void ProxyDone(_Script_RsGameTechRT::RsConversation* Conversation);
    void UpdateConversationActorLookats(_Script_RsGameTechRT::RAPLineStartedEventData LineData);
    void UpdateChumpConversationType(_Game_Narrative_Hub_Chumps_BP_ChumpBase::BP_ChumpBase_C* Chump, _Game_Narrative_Hub_Structs_ST_HubDialogueInfo::ST_HubDialogueInfo Info);
    void ChumpInEngagement(_Game_Narrative_Hub_Chumps_BP_ChumpBase::BP_ChumpBase_C* Chump);
    void Chump_TriggerVO();
    void RefreshChumpConversationSelection();
    void LVL_SetHubActive(bool Active);
    void SetDialogueCameraActive(bool Enabled);
    void InitializeSpawnedChumps(_Script_RsGameTechRT::RsAICharacter* SpawnedAI, void* SpawnResult);
    void EvaluateSpecificChumpSpawner(_Game_Narrative_Hub_Structs_ST_HubChumpSpawnData::ST_HubChumpSpawnData SpawnData);
    void DoneTalking(_Script_RsGameTechRT::RsConversation* Conversation, void*& Actors, int32_t ConversationId);
    void TryTriggerEngagementVO(_Game_Narrative_Hub_Chumps_BP_ChumpBase::BP_ChumpBase_C* Chump, bool Auto, bool& Result);
    void ChumpLeftEngagement(_Game_Narrative_Hub_Chumps_BP_ChumpBase::BP_ChumpBase_C* Chump);
    void DebugSetConfigurationGametags(int32_t Index);
    void DebugButtonPush();
    void StartHub();
    void ResetHub_ClearVars();
    void ResetHub(bool Restart);
    void ChumpLeftProximity(_Game_Narrative_Hub_Chumps_BP_ChumpBase::BP_ChumpBase_C* Chump);
    void TickVO();
    void TryTriggerProxyVO(_Game_Narrative_Hub_Chumps_BP_ChumpBase::BP_ChumpBase_C* Chump, bool& Result);
    void ChumpInProximity(_Game_Narrative_Hub_Chumps_BP_ChumpBase::BP_ChumpBase_C* Chump);
    void TickCooldownMap(void*& CooldownMap);
    void SelectAndSpawnChumps();
    void UserConstructionScript0();
    void Completed_AAFF10334FD215F1A342F6A3C5E77E61(void*& SpawnedAIs, void* SpawnResult);
    void InpActEvt_L_K2Node_InputKeyEvent_0(_Script_InputCore::Key Key);
    void ReceiveBeginPlay0();
    void InterruptedConversation_LineEnded(_Script_RsGameTechRT::RsConversation* Conversation, int32_t CurrrentConversationLine);
    void SpawnChumps();
    void UpdateHeroOverlap();
    void EndConversationAndRefreshDialogueAfterDelay(bool ResetInConversationBool);
    void ReceiveEndPlay0(void* EndPlayReason);
    void BndEvt__HubZoneMesh_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult);
    void BndEvt__HubZoneMesh_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
    void LVL_ShowDebugTags(bool On_);
    void ExecuteUbergraph_BP_Hub(int32_t EntryPoint);
    void LVL_HubDialogueStartedPlaying__DelegateSignature(_Script_DialoguePlugin::Dialogue* Dialogue);
    void LVL_HubDialogueFinishedPlaying__DelegateSignature(_Script_DialoguePlugin::Dialogue* Dialogue);
    void LVL_OnHubDeactivate__DelegateSignature();
    void LVL_OnHubActivate__DelegateSignature();
}; // Size: 0x818
#pragma pack(pop)
}
