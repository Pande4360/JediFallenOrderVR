#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_WorldInteracts_EventZones_Interact_Zone_Interact\Zone_Interact_C.hpp"
namespace _Script_SwGame {
struct RsAbilityEffectVictimComponent;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_RsGameTechRT {
struct RsAISenseComponent;
}
namespace _Script_Engine {
struct BoxComponent;
}
namespace _Script_AkAudio {
struct AkBankLoadComponent;
}
namespace _Script_Engine {
struct TextRenderComponent;
}
namespace _Script_RsGameTechRT {
struct RsWorldMapDoorComponent;
}
namespace _Script_Engine {
struct ChildActorComponent;
}
namespace _Script_RsGameTechRT {
struct RsNavModifierComponent;
}
namespace _Script_Engine {
struct TimelineComponent;
}
namespace _Script_AkAudio {
struct AkAudioEvent;
}
namespace _Script_Engine {
struct AnimSequence;
}
namespace _Game_Narrative_Interactables_BP_DroidScan_LocationMarker {
struct BP_DroidScan_LocationMarker_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Vector;
}
namespace _Script_Engine {
struct PrimitiveComponent;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_Engine {
struct HitResult;
}
namespace _Script_Engine {
struct AnimMontage;
}
namespace _Game_WorldInteracts_Doors_BP_Door {
#pragma pack(push, 1)
struct BP_Door_C : public _Game_WorldInteracts_EventZones_Interact_Zone_Interact::Zone_Interact_C {
    private: char pad_418[0x2a8]; public:
    void* get_UberGraphFrame0();
    _Script_Engine::SceneComponent*& get_DoorButtonFingerPushLocation_LockedSide();
    _Script_Engine::SceneComponent*& get_DoorButtonFingerPushLocation_UnlockSide();
    _Script_Engine::SceneComponent*& get_AnimSyncsParent();
    _Script_AkAudio::AkBankLoadComponent*& get_AkBankLoad();
    _Script_Engine::BoxComponent*& get_DefaultDoorAutoCloseTrigger();
    _Script_SwGame::RsAbilityEffectVictimComponent*& get_RsAbilityEffectVictim();
    _Script_Engine::TextRenderComponent*& get_EditorHint_YAxis();
    _Script_Engine::TextRenderComponent*& get_EditorHint_DoorBounds();
    _Script_Engine::TextRenderComponent*& get_EditorHint_DoorName();
    _Script_Engine::SceneComponent*& get_AutomaticCloseTriggers_Parent();
    _Script_RsGameTechRT::RsAISenseComponent*& get_RsAISense();
    _Script_RsGameTechRT::RsWorldMapDoorComponent*& get_SwWorldMapDoor();
    _Script_Engine::ChildActorComponent*& get_HackPanelChildActor_2();
    _Script_Engine::ChildActorComponent*& get_HackPanelChildActor_1();
    _Script_Engine::SceneComponent*& get_DebugText_Parent();
    _Script_Engine::SceneComponent*& get_MalfunctionParticles_Parent_RightOrBottom();
    _Script_Engine::SceneComponent*& get_MalfunctionParticles_Parent_LeftOrTop();
    _Script_Engine::BoxComponent*& get_DefaultBoxNavBlocker();
    _Script_Engine::SceneComponent*& get_NavBlockingColliders_Parent();
    _Script_RsGameTechRT::RsNavModifierComponent*& get_RsNavModifier();
    _Script_Engine::BoxComponent*& get_DefaultDoorAutoTrigger();
    _Script_Engine::SceneComponent*& get_AutomaticOpenTriggers_Parent();
    _Script_Engine::SceneComponent*& get_AnimSync_LockedSide();
    _Script_Engine::SceneComponent*& get_AnimSync_UnlockSide();
    _Script_Engine::SceneComponent*& get_DoorMesh_Double_RightOrBottom();
    _Script_Engine::SceneComponent*& get_DoorMesh_Single_LeftOrTop();
    float& get_MalfunctioningWhileOpenAndPowered_DoorOpenPercentage_9C7E759D45282CE939A2E7A618437333();
    void* get_MalfunctioningWhileOpenAndPowered__Direction_9C7E759D45282CE939A2E7A618437333();
    _Script_Engine::TimelineComponent*& get_MalfunctioningWhileOpenAndPowered();
    float& get_DoorOpeningClosing_NewPositionPercentage_12DB378046C21E257F5A94A5FAA44F7F();
    void* get_DoorOpeningClosing__Direction_12DB378046C21E257F5A94A5FAA44F7F();
    _Script_Engine::TimelineComponent*& get_DoorOpeningClosing();
    bool get_Unlocked();
    void set_Unlocked(bool value);
    bool get_DoorCurrentlyUsable();
    void set_DoorCurrentlyUsable(bool value);
    bool get_DoorPoweredOn();
    void set_DoorPoweredOn(bool value);
    bool get_StartOpen();
    void set_StartOpen(bool value);
    bool get_OpenWhenUnlocked();
    void set_OpenWhenUnlocked(bool value);
    bool get_StartPoweredOn();
    void set_StartPoweredOn(bool value);
    bool get_OpenWhenPoweredOn();
    void set_OpenWhenPoweredOn(bool value);
    bool get_CloseWhenPoweredOff();
    void set_CloseWhenPoweredOff(bool value);
    bool get_IsDoubleDoor();
    void set_IsDoubleDoor(bool value);
    bool get_VerticalDoor();
    void set_VerticalDoor(bool value);
    bool get_AutomaticOpenOnEnterTrigger();
    void set_AutomaticOpenOnEnterTrigger(bool value);
    bool get_AutomaticCloseOnLeaveTrigger();
    void set_AutomaticCloseOnLeaveTrigger(bool value);
    bool get_OnlyPlayerTriggersAutoDoor();
    void set_OnlyPlayerTriggersAutoDoor(bool value);
    bool get_OnlyPlayerTriggersAutoDoor_FirstTime();
    void set_OnlyPlayerTriggersAutoDoor_FirstTime(bool value);
    bool get_MalfunctionWhileOpenAndPowered();
    void set_MalfunctionWhileOpenAndPowered(bool value);
    void* get_HackPanels();
    bool get_HackPanelsStartDisabled();
    void set_HackPanelsStartDisabled(bool value);
    void* get_HackPanelDoorParenting();
    void* get_HackPanelClass();
    bool get_LockWhenClosed();
    void set_LockWhenClosed(bool value);
    bool get_ExpandInteractZoneToHintOnUnlock();
    void set_ExpandInteractZoneToHintOnUnlock(bool value);
    float& get_DoorOpeningPercentage();
    float& get_DoorOpeningTime();
    float& get_DoorClosingTime();
    float& get_DoorStayOpenTime();
    float& get_DoorUnlockDelay();
    _Script_AkAudio::AkAudioEvent*& get_DoorOpeningSFX();
    _Script_AkAudio::AkAudioEvent*& get_DoorClosingSFX();
    _Script_AkAudio::AkAudioEvent*& get_DoorLockedSFX();
    float& get_DoorLockedPreDelay();
    _Script_AkAudio::AkAudioEvent*& get_DoorUnlockSFX();
    _Script_Engine::AnimSequence*& get_DoorUnlockAnim_Player();
    float& get_DoorUnlockAnim_Player_PostDelay();
    _Script_Engine::AnimSequence*& get_DoorOpenAnim_Player_UnlockedSide();
    _Script_Engine::AnimSequence*& get_DoorOpenAnim_Player_LockedSide();
    void* get_Door1Dimension_LeftOrTop();
    void* get_Door2Dimension_RightOrBottom();
    _Script_Engine::AnimSequence*& get_LockedDoorCantOpenAnim_Player();
    bool get_LockedDoorCantOpenAnim_Player_UseUpperBodyMontage();
    void set_LockedDoorCantOpenAnim_Player_UseUpperBodyMontage(bool value);
    void* get_Door1StartPosition_LeftOrTop();
    void* get_Door2StartPosition_RightOrBottom();
    void* get_AutoOpenTriggers();
    void* get_AutoCloseTriggers();
    void* get_DoorOpeningState();
    void* get_LastOneWayUnlockDirection();
    bool get_RelativePositionsUninitialized();
    void set_RelativePositionsUninitialized(bool value);
    void* get_LVL_DoorOpening();
    void* get_LVL_DoorOpened();
    void* get_LVL_DoorClosing();
    void* get_LVL_DoorClosed();
    void* get_LVL_DoorUnlocked();
    void* get_LVL_DoorLocked();
    void* get_LVL_DoorPoweredOn();
    void* get_LVL_DoorPoweredOff();
    bool get_ShowDoorDebugEditorText();
    void set_ShowDoorDebugEditorText(bool value);
    float& get_DebugDoorHeight();
    float& get_DebugDoorWidth();
    void* get_LVL_DoorHacked();
    bool get_PlayerTriggeredDoorFirstTime();
    void set_PlayerTriggeredDoorFirstTime(bool value);
    bool get_BeginPlayPowerUninitialized();
    void set_BeginPlayPowerUninitialized(bool value);
    void* get_UnlockDirection();
    bool get_ReopenOnceClosed();
    void set_ReopenOnceClosed(bool value);
    _Game_Narrative_Interactables_BP_DroidScan_LocationMarker::BP_DroidScan_LocationMarker_C*& get_DroidScanLocationActor();
    bool get_SuppressOneWayDoorUnlockMessages();
    void set_SuppressOneWayDoorUnlockMessages(bool value);
    bool get_Occlusion();
    void set_Occlusion(bool value);
    bool get_CurrentlyPlayingUnlockAnim();
    void set_CurrentlyPlayingUnlockAnim(bool value);
    static _Script_CoreUObject::Class* static_class();
    void GetDoorUnlockButtonLocation(_Script_CoreUObject::Vector& WorldLocation);
    void Construction_UpdateDoorDirectionSyncs();
    void SetPowered_Internal(bool NewPoweredOn, bool IsBeginPlay);
    void UpdateAutomaticTriggerOverlaps(_Script_Engine::PrimitiveComponent* Component);
    void IsDoorReallyNavigableForAI(bool& Result);
    void LVL_TogglePower();
    void LVL_SetHackPanelsState(void* NewState);
    void InitializeHackPanels();
    void HackPanelUsed();
    void Construction_CalculateDebugDisplayBounds();
    void SetDoorOpenState(void* NewDoorOpenState);
    void PlayMalfunctionVFX();
    void Construction_InitializeNavModifierPrimitives();
    void LVL_HasPower_(bool& Result);
    void LVL_SetPoweredOn(bool NewPoweredOn);
    void PlayLockedDoorCantOpenAnim_Player();
    void PlayDoorLockedCantOpenVisuals();
    void UpdateCustomUnlockFX(bool Unlocked);
    void PlayDoorOpeningSFX();
    void PlayDoorClosingSFX();
    void InitializeDoorDimensionValues(_Script_Engine::SceneComponent* ParentComponent, _Script_CoreUObject::Vector& StoredDimensionVector, bool IsLeftOrTop);
    void ModifyOpenPercentageAccordingToSettings(_Script_Engine::SceneComponent* DoorComponent, float OpenPercentage, bool IsLeftOrTop);
    void UpdateDoorPositions(float OpenPercentage);
    void GetPlayerDoorOpenSide(bool& LeftSide);
    void PlayUnlockVisuals_Door();
    void PlayUnlockAnim_Player();
    void DoesPlayerSatisfyUnlockConditions(bool& Result);
    void LVL_SetDoorUnlockState(bool NewUnlocked, bool IsInitialization);
    void ShouldAllowInteract__OverrideMe0(bool& Result);
    void UserConstructionScript();
    void DoorOpeningClosing__FinishedFunc();
    void DoorOpeningClosing__UpdateFunc();
    void MalfunctioningWhileOpenAndPowered__FinishedFunc();
    void MalfunctioningWhileOpenAndPowered__UpdateFunc();
    void MalfunctioningWhileOpenAndPowered__SparksVFX__EventFunc();
    void MalfunctioningWhileOpenAndPowered__OpenSound__EventFunc();
    void MalfunctioningWhileOpenAndPowered__CloseSound__EventFunc();
    void ReceiveBeginPlay();
    void ButtonPress0();
    void Event_DoorUnlockPlayerAnim_Stopped(bool interrupted);
    void LVL_CloseDoor();
    void LVL_OpenDoor();
    void DoCustomPostPlayerUnlockAnimDelay();
    void AutomaticTrigger(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult);
    void AutomaticLeaveTrigger(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
    void UpdateMalfunctionState();
    void PoweredOn(bool BeginPlay);
    void PoweredOff(bool BeginPlay);
    void LVL_UnlockDoor();
    void LVL_OpenDoorInstant();
    void LVL_LockDoor();
    void DoorUnlockAnimDelayDone();
    void Interacted0();
    void TimelineOverride_Update(float NewDoorPositionPercentage);
    void TimelineOverride_Finished(void* Direction);
    void TimelineOverride_Play();
    void TimelineOverride_Reverse();
    void LVL_ToggleLocked();
    void LVL_CloseDoorInstant();
    void TimelineOverride_SetPlayRate_Opening(_Script_Engine::TimelineComponent* OverriddenTimeline);
    void TimelineOverride_SetPlayRate_Closing(_Script_Engine::TimelineComponent* OverriddenTimeline);
    void Event_DoorUnlockPlayerAnim_Ended(_Script_Engine::AnimMontage* AnimMontage, bool interrupted);
    void AnimNotify_PlayDoorUnlockSFX();
    void ExecuteUbergraph_BP_Door(int32_t EntryPoint);
    void LVL_DoorHacked__DelegateSignature();
    void LVL_DoorPoweredOff__DelegateSignature();
    void LVL_DoorPoweredOn__DelegateSignature();
    void LVL_DoorLocked__DelegateSignature();
    void LVL_DoorUnlocked__DelegateSignature();
    void LVL_DoorClosed__DelegateSignature();
    void LVL_DoorClosing__DelegateSignature();
    void LVL_DoorOpened__DelegateSignature();
    void LVL_DoorOpening__DelegateSignature();
}; // Size: 0x6c0
#pragma pack(pop)
}
