#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
namespace _Game_Levels_WorldMap_BP_BP_WorldMapHologram {
struct BP_WorldMapHologram_C;
}
namespace _Game_UI_UI_HUD_ROOT {
struct UI_HUD_ROOT_C;
}
namespace _Script_CoreUObject {
struct Rotator;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_OnMantis {
#pragma pack(push, 1)
struct WMC_OnMantis_C : public _Script_Engine::ActorComponent {
    private: char pad_170[0x68]; public:
    void* get_UberGraphFrame();
    _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C*& get_WorldMapHologram_Ref();
    void* get_MantisLocation();
    bool get_ChangeMapToGalaxy();
    void set_ChangeMapToGalaxy(bool value);
    bool get_IsOnMantis();
    void set_IsOnMantis(bool value);
    bool get_TurnOffMap();
    void set_TurnOffMap(bool value);
    bool get_OnMantisHolotable();
    void set_OnMantisHolotable(bool value);
    bool get_bOnMantisWorldMapOpen();
    void set_bOnMantisWorldMapOpen(bool value);
    bool get_bPlanetChosenOrHyp();
    void set_bPlanetChosenOrHyp(bool value);
    bool get_bLastChanceFortress();
    void set_bLastChanceFortress(bool value);
    bool get_bStartTransform();
    void set_bStartTransform(bool value);
    bool get_bEndTransform();
    void set_bEndTransform(bool value);
    float& get_RotateTo();
    float& get_AnimTo();
    bool get_bToGalaxyStrongAnim();
    void set_bToGalaxyStrongAnim(bool value);
    bool get_bUVAnimationFinished();
    void set_bUVAnimationFinished(bool value);
    bool get_bStartUVAnimation();
    void set_bStartUVAnimation(bool value);
    bool get_bInteractAnimationCompleted();
    void set_bInteractAnimationCompleted(bool value);
    bool get_bInteractAnim();
    void set_bInteractAnim(bool value);
    void* get_CurrentWorldEnum();
    _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C*& get_HUDRoot_Ref();
    bool get_installed_();
    void set_installed_(bool value);
    void* get_MeteorMST();
    bool get_bFortressMessageRan();
    void set_bFortressMessageRan(bool value);
    bool get_bPreventOpening();
    void set_bPreventOpening(bool value);
    void* get_CurrentPlanet();
    bool get_bBeginPlay();
    void set_bBeginPlay(bool value);
    bool get_bBeginPlayHyp();
    void set_bBeginPlayHyp(bool value);
    bool get_bDuringFightClubCine();
    void set_bDuringFightClubCine(bool value);
    static _Script_CoreUObject::Class* static_class();
    void SetRotationAndLocationOnEnter();
    void HideOtherPlanetsForFortCine();
    void GetGalaxyMapRotation(_Script_CoreUObject::Rotator& Rotation);
    void SetWorldMapOnHolotableOpenTransformInHyp();
    void SetWorldMapOnHolotableOpenTransform(bool OnStart);
    void OnEnterMantis(bool BeginPlay_);
    void SetLocationOnMapClose();
    void CustomDelay(float DelayAmount, bool& ReadyToMoveOn);
    void SetMantisLight();
    void ReceiveBeginPlay0();
    void Mantis_SetMapOnMantis(_Script_CoreUObject::Vector MantisLoc, bool BeginPlay_);
    void WalkIntoMantis();
    void OnTickMantis();
    void CloseMantisMap();
    void Mantis_OnMantisExit();
    void OpenMapOnMantisTable(_Script_CoreUObject::Vector Location);
    void CloseFromHolotable();
    void AfterPlanetHopLoad(void* Planet);
    void MAP_planetChosen_Event(void* Planet);
    void SetLocationDuringTakeOff();
    void SetMantisLocation(_Script_CoreUObject::Vector MantisLocation);
    void PlanetChosenUVAnimation();
    void InteractionCompleted();
    void InteractionStarted();
    void InitiateFortressFinalMessage();
    void ResetInstalledMessage();
    void TransformToCenter(bool Immediate_);
    void TransformToPlanet();
    void DismissFortressMessage();
    void SetHolotableForFortressCinematic();
    void FailsafeOpen();
    void CheckFortressUnlocked();
    void OnHypSavePointLoad();
    void InitialOpenMantisMap();
    void ExecuteUbergraph_WMC_OnMantis(int32_t EntryPoint);
}; // Size: 0x1d8
#pragma pack(pop)
}
