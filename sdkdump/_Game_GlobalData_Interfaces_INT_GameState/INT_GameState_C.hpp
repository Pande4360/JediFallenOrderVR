#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Interface.hpp"
#include "..\_Script_GameplayTags\GameplayTag.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Game_GlobalData_Interfaces_INT_GameState {
#pragma pack(push, 1)
struct INT_GameState_C : public _Script_CoreUObject::Interface {
    static _Script_CoreUObject::Class* static_class();
    void UpdateHUDScaling(int32_t Value);
    void GetHUDScaling(int32_t& Value);
    void CHEAT_UnlockNewGamePlus();
    void WriteAllAchievements();
    void OnQuitToTitle();
    void RemoveBountyHunterID(void* CharacterType, int32_t ID);
    void RefundBountyHunterID(void* CharacterType, int32_t ID);
    void BountyHunterEncounterFinished();
    void InitializeBountyHunterEncounter();
    void ClaimBountyHunterID(void* CharacterType, int32_t& BountyHunterID);
    void SetCircleIsConfirm(bool IsConfirm);
    void GetSubtitleScale(int32_t& Value);
    void UpdateSubtitleScale(int32_t Value);
    void GetLetterBoxOpacity(int32_t& Value);
    void UpdateSubtitleLetterBoxing(int32_t Value);
    void GetMantis(_Script_Engine::Actor*& BP_Mantis);
    void RegisterMantis(_Script_Engine::Actor* BP_Mantis);
    void UXR_ResetSectionTimer(void* Name);
    void GetCurrentPlanet(void*& Planet);
    void UpdateCurrentPlanet(void* Planet);
    void iHandleGameSaving();
    void FadeFromVoid(bool IsWhite_, float FadeTime);
    void FadeToVoid(bool IsWhite_, float FadeTime);
    void SaveAudioLanguage(void* AudioLanguage);
    void SaveLanguage(void* LanguageString);
    void GetSavedDynamicRange(void*& DynamicRange);
    void UpdateDynamicRange(void* DynamicRange);
    void GetSavedSpeakerOutput(void*& SpeakerOutput);
    void UpdateSpeakerOutput(void* SpekaerOutput);
    void SetGameMenuPageViewed(_Script_GameplayTags::GameplayTag URL);
    void HasGameMenuPageBeenViewed(_Script_GameplayTags::GameplayTag URL, bool& Viewed);
}; // Size: 0x28
#pragma pack(pop)
}
