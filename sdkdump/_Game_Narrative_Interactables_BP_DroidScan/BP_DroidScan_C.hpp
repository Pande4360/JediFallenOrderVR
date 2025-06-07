#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_WorldInteracts_AI_BP_POI\BP_POI_C.hpp"
#include "..\_Script_GameplayTags\GameplayTag.hpp"
namespace _Game_WorldInteracts_EventZones_Interact_Zone_Interact {
struct Zone_Interact_C;
}
namespace _Script_Engine {
struct SphereComponent;
}
namespace _Script_RsGameTechRT {
struct RsWorldMapCollectableComponent;
}
namespace _Script_Engine {
struct BillboardComponent;
}
namespace _Script_Engine {
struct ChildActorComponent;
}
namespace _Game_UI_Debug_UI_MessageText {
struct UI_MessageText_C;
}
namespace _Script_CoreUObject {
struct Vector;
}
namespace _Game_GlobalData_Economy_BPC_RewardComponent {
struct BPC_RewardComponent_C;
}
namespace _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid {
struct BP_BuddyDroid_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Color;
}
namespace _Script_RsGameTechRT {
struct RsAIPOI;
}
namespace _Script_RsGameTechRT {
struct RsAIController;
}
namespace _Script_RsGameTechRT {
struct RsAIGameStateManager;
}
namespace _Game_Narrative_Interactables_BP_DroidScan {
#pragma pack(push, 1)
struct BP_DroidScan_C : public _Game_WorldInteracts_AI_BP_POI::BP_POI_C {
    private: char pad_5a8[0x168]; public:
    void* get_UberGraphFrame0();
    _Script_RsGameTechRT::RsWorldMapCollectableComponent*& get_RsWorldMapCollectable();
    _Script_Engine::SphereComponent*& get_UsabilityTrigger();
    _Script_Engine::ChildActorComponent*& get_NarrativeLabelComponent();
    _Game_GlobalData_Economy_BPC_RewardComponent::BPC_RewardComponent_C*& get_BPC_RewardComponent();
    _Script_Engine::BillboardComponent*& get_Target_Object();
    _Script_Engine::ChildActorComponent*& get_Zone_Interact_Component();
    _Game_WorldInteracts_EventZones_Interact_Zone_Interact::Zone_Interact_C*& get_Zone_Interact_Actor();
    _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C*& get_BuddyDroid_REF();
    bool get_ScanStarted();
    void set_ScanStarted(bool value);
    bool get_StartEnabled();
    void set_StartEnabled(bool value);
    bool get_WaitForButtonPress();
    void set_WaitForButtonPress(bool value);
    bool get_WaitForScriptEvent();
    void set_WaitForScriptEvent(bool value);
    int32_t& get_ScanAttractDistance();
    int32_t& get_ScanInteractDistance();
    void* get_Deprecated_Type();
    void* get_Scan_Reaction();
    void* get_ScanTargetLocations();
    bool get_IsCurrentlyAtPOI();
    void set_IsCurrentlyAtPOI(bool value);
    bool get_HasButtonBeenPressed();
    void set_HasButtonBeenPressed(bool value);
    bool get_IsDroidAvailable();
    void set_IsDroidAvailable(bool value);
    bool get_DebugMode();
    void set_DebugMode(bool value);
    int32_t& get_ScanTargetLocationsIndex();
    bool get_CanRetryFailedPOI();
    void set_CanRetryFailedPOI(bool value);
    void* get_CustomSystemicVOFlags_Alert();
    void* get_CustomSystemicVOFlags_Start();
    void* get_CustomSystemicVOFlags_Done();
    void* get_NarrativeLabel();
    void* get_NarrativeLabelOffset();
    void* get_NarrativeLabelColor();
    bool get_NarrativeLabelHiddenInGame();
    void set_NarrativeLabelHiddenInGame(bool value);
    _Game_UI_Debug_UI_MessageText::UI_MessageText_C*& get_DatabankMessageWidget();
    bool get_POI_available_in_Pre_combat_state();
    void set_POI_available_in_Pre_combat_state(bool value);
    bool get_POI_available_in_Combat_state();
    void set_POI_available_in_Combat_state(bool value);
    bool get_POI_available_in_Post_combat_state();
    void set_POI_available_in_Post_combat_state(bool value);
    void* get_ScanUnlockableTag();
    void* get_LVL_ScanCompleted();
    bool get_LevelEnabledOverride();
    void set_LevelEnabledOverride(bool value);
    void* get_EventContext_ScanStart();
    void* get_EventContext_ScanAlert();
    void* get_EventContext_ScanDone();
    float& get_ScanTimePerTarget();
    void* get_LVL_ScanStarted();
    bool get_WaitingForScriptEvent();
    void set_WaitingForScriptEvent(bool value);
    bool get_ScriptEventQueued();
    void set_ScriptEventQueued(bool value);
    static _Script_CoreUObject::Class* static_class();
    void GetNarrativeLabelHiddenInGame(bool& Hidden);
    void GetNarrativeLabel(void*& Label);
    void GetNarrativeLabelOffset(_Script_CoreUObject::Vector& Offset);
    void GetNarrativeLabelColor(_Script_CoreUObject::Color& Result);
    void HasValidUnscannedUnlockableTag(bool& Result);
    void LVL_SetEnabled(bool SetEnabled);
    void UpdateUsability();
    void CheckAgainstAIGameState(bool& Result);
    void CheckScanConditionsMet(bool& Result);
    void UserConstructionScript0();
    void ReceiveBeginPlay0();
    void ApproachingScanPoint(_Script_RsGameTechRT::RsAIPOI* POI, _Script_RsGameTechRT::RsAIController* AIController);
    void LeavingScanPoint(_Script_RsGameTechRT::RsAIPOI* POI, _Script_RsGameTechRT::RsAIController* AIController);
    void ButtonPressed();
    void ArrivedAtPOI(_Script_RsGameTechRT::RsAIPOI* POI, _Script_RsGameTechRT::RsAIController* AIController);
    void Start_Scan_Sequence();
    void Reset_Scan();
    void Disable_Scan();
    void Enable_Scan();
    void OnAIGameStateChangedEvent(_Script_RsGameTechRT::RsAIGameStateManager* GameStateManager, void* PreviousGameState, void* NewGameState);
    void AnUnlockOccurred(_Script_GameplayTags::GameplayTag UnlockableTag);
    void ScanSuccessActions();
    void LVL_ScriptedScanStart();
    void StartWaitingForScriptEvent();
    void QueuedScriptEvent();
    void ExecuteUbergraph_BP_DroidScan(int32_t EntryPoint);
    void LVL_ScanStarted__DelegateSignature();
    void LVL_ScanCompleted__DelegateSignature();
}; // Size: 0x710
#pragma pack(pop)
}
