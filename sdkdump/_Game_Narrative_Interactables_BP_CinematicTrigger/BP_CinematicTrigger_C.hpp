#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_LevelSequence {
struct LevelSequenceActor;
}
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_LevelSequence {
struct LevelSequencePlayer;
}
namespace _Script_MediaAssets {
struct FileMediaSource;
}
namespace _Script_Engine {
struct ChildActorComponent;
}
namespace _Game_WorldInteracts_EventZones_Interact_Zone_Interact {
struct Zone_Interact_C;
}
namespace _Game_UI_Narrative_UI_CinematicPlaceholder_Black_Screen {
struct UI_CinematicPlaceholder_Black_Screen_C;
}
namespace _Game_UI_UI_SkipCinematic {
struct UI_SkipCinematic_C;
}
namespace _Script_AkAudio {
struct AkAudioEvent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Vector;
}
namespace _Script_CoreUObject {
struct Color;
}
namespace _Script_RsGameTechRT {
struct RsAIEncounterGroup;
}
namespace _Script_Engine {
struct PrimitiveComponent;
}
namespace _Script_Engine {
struct HitResult;
}
namespace _Game_Narrative_Interactables_BP_CinematicTrigger {
#pragma pack(push, 1)
struct BP_CinematicTrigger_C : public _Script_Engine::Actor {
    private: char pad_360[0x1f8]; public:
    void* get_UberGraphFrame();
    _Script_Engine::SceneComponent*& get_Root();
    _Script_Engine::StaticMeshComponent*& get_DefaultTriggerZoneBox();
    _Script_Engine::ChildActorComponent*& get_NarrativeLabelComponent();
    _Script_Engine::SceneComponent*& get_TriggerVolumes();
    void* get_CinematicAssetName();
    bool get_ShowAssetNameAsCinematicTitle();
    void set_ShowAssetNameAsCinematicTitle(bool value);
    void* get_PlaceholderScreenText();
    void* get_NarrativeLabel();
    void* get_NarrativeLabelOffset();
    void* get_NarrativeLabelColor();
    void* get_LVL_CinematicTriggerCompleted();
    bool get_UseProximityTriggers();
    void set_UseProximityTriggers(bool value);
    bool get_Debug_ShowZoneInGame();
    void set_Debug_ShowZoneInGame(bool value);
    _Game_WorldInteracts_EventZones_Interact_Zone_Interact::Zone_Interact_C*& get_ZoneInteractTrigger();
    bool get_Active();
    void set_Active(bool value);
    void* get_LVL_CinematicFadedIn();
    bool get_NarrativeLabelHiddenInGame();
    void set_NarrativeLabelHiddenInGame(bool value);
    bool get_SolidBackground();
    void set_SolidBackground(bool value);
    _Game_UI_Narrative_UI_CinematicPlaceholder_Black_Screen::UI_CinematicPlaceholder_Black_Screen_C*& get_CinematicScreen();
    float& get_FadeInDuration();
    float& get_FadeOutDuration();
    float& get_CinematicLength();
    bool get_CloseOnTimerCompleted();
    void set_CloseOnTimerCompleted(bool value);
    _Script_Engine::Actor*& get_TeleportToActorDuringScene();
    _Script_MediaAssets::FileMediaSource*& get_StoryboardMovieVideo();
    bool get_PauseGameDuringCinematic();
    void set_PauseGameDuringCinematic(bool value);
    void* get_LVL_CinematicFadeOutStarted();
    _Script_LevelSequence::LevelSequenceActor*& get_Sequence();
    bool get_AllowSkipping();
    void set_AllowSkipping(bool value);
    float& get_SkipToPosition();
    bool get_PlayerCineMode();
    void set_PlayerCineMode(bool value);
    bool get_RestoreHUD();
    void set_RestoreHUD(bool value);
    _Game_UI_UI_SkipCinematic::UI_SkipCinematic_C*& get_skipScreen();
    bool get_InstantSheatheSaber();
    void set_InstantSheatheSaber(bool value);
    void* get_LVL_Triggered();
    _Script_LevelSequence::LevelSequencePlayer*& get_CurrentSequencePlayer();
    bool get_DisableAfterUse();
    void set_DisableAfterUse(bool value);
    float& get_DisableSkipTime();
    void* get_LVL_FinishedOrAlreadyPlayed();
    bool get_AutoFade();
    void set_AutoFade(bool value);
    bool get_BlendOutSkip();
    void set_BlendOutSkip(bool value);
    bool get_StopOngoingConversations();
    void set_StopOngoingConversations(bool value);
    bool get_DisableSkipWhileStreaming();
    void set_DisableSkipWhileStreaming(bool value);
    bool get_ShowTimer();
    void set_ShowTimer(bool value);
    bool get_SkippingQuitsGame();
    void set_SkippingQuitsGame(bool value);
    bool get_DisableVODuringScene();
    void set_DisableVODuringScene(bool value);
    bool get_DidSkip();
    void set_DidSkip(bool value);
    void* get_RequiredSetTags();
    void* get_RequiredUnsetTags();
    void* get_LVL_AlreadyPlayed();
    void* get_LVL_OnCinematicAIFinishedSpawning();
    void* get_SpawnedAICharacters();
    void* get_LVL_CinematicSkipInitiated();
    void* get_skipFunctionCalled();
    void* get_CinePlayedTag();
    bool get_HideSavePoints();
    void set_HideSavePoints(bool value);
    void* get_RTPC_Cinematic_Skip();
    _Script_AkAudio::AkAudioEvent*& get_Mus_On_End_Cinematic();
    float& get_Mus_On_End_Cinematic_Delay();
    bool get_ShouldStopExistingMusicOnEnteringCinematic_();
    void set_ShouldStopExistingMusicOnEnteringCinematic_(bool value);
    bool get_CineTakesCameraControl();
    void set_CineTakesCameraControl(bool value);
    bool get_PauseUntilStreamingComplete();
    void set_PauseUntilStreamingComplete(bool value);
    bool get_SetPostCineHeroIkOffset();
    void set_SetPostCineHeroIkOffset(bool value);
    void* get_PostCineHeroIkOffset();
    bool get_DeferStart();
    void set_DeferStart(bool value);
    static _Script_CoreUObject::Class* static_class();
    void GetNarrativeLabelHiddenInGame(bool& Hidden);
    void GetNarrativeLabel(void*& Label);
    void GetNarrativeLabelOffset(_Script_CoreUObject::Vector& Offset);
    void GetNarrativeLabelColor(_Script_CoreUObject::Color& Result);
    void CineLog(void* Message);
    void hasAlreadyPlayed_(bool& AlreadyPlayed_);
    void PerformSkipCinematicToEnd();
    void LVL_SpawnEncounterGroupAIs_FromCinematic(_Script_RsGameTechRT::RsAIEncounterGroup* EncounterGroup);
    void LVL_SpawnSpecificAIs_FromCinematic(void*& Spawners);
    void SpawnAIs_FromCinematic(void*& SpecificSpawners, _Script_RsGameTechRT::RsAIEncounterGroup* SpecificEncounterGroup);
    void LVL_SpawnAllAIs_FromCinematic();
    void ValidateTagRequirements(bool& Success);
    void PollForDisableSkip();
    void CinematicSkipped();
    void LVL_TriggerCinematic(bool& Played);
    void DisplayMessage();
    void DisableTriggers();
    void RegisterTriggersForOverlaps();
    void UserConstructionScript0();
    void Completed_2422152443230B6C763E15A44AF5940B(void*& SpawnedAIs, void* SpawnResult);
    void ReceiveBeginPlay0();
    void TriggerOverlapped(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult);
    void OnCinematicDone();
    void FadedIn();
    void FadeOutStarted();
    void Interacted();
    void DelayAndSetupSkipWidget();
    void OneFrameFinishedFiringDelay();
    void SpawnCinematicAI_Internal(void*& Spawners);
    void MainGraphLogic();
    void LVL_FadeToGame();
    void ReceiveEndPlay0(void* EndPlayReason);
    void ExecuteCinematic();
    void ExecuteUbergraph_BP_CinematicTrigger(int32_t EntryPoint);
    void skipFunctionCalled__DelegateSignature();
    void LVL_CinematicSkipInitiated__DelegateSignature();
    void LVL_OnCinematicAIFinishedSpawning__DelegateSignature(void*& SpawnedAICharacters);
    void LVL_AlreadyPlayed__DelegateSignature();
    void LVL_FinishedOrAlreadyPlayed__DelegateSignature(bool UsedSkip);
    void LVL_Triggered__DelegateSignature();
    void LVL_CinematicFadeOutStarted__DelegateSignature();
    void LVL_CinematicFadedIn__DelegateSignature();
    void LVL_CinematicTriggerCompleted__DelegateSignature(bool UsedSkip);
}; // Size: 0x558
#pragma pack(pop)
}
