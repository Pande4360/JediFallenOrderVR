#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Transform.hpp"
#include "..\_Script_SwGame\SwStreamingAreaPlayerStart.hpp"
namespace _Script_Engine {
struct ChildActorComponent;
}
namespace _Game_Audio_Component_Comp_SW_Amb_Overlap {
struct Comp_SW_Amb_Overlap_C;
}
namespace _Script_Engine {
struct SpotLightComponent;
}
namespace _Script_RsGameTechRT {
struct RsWorldMapStateTransitionGatewayComponent;
}
namespace _Script_Engine {
struct ParticleSystemComponent;
}
namespace _Script_Engine {
struct ArrowComponent;
}
namespace _Script_RsGameTechRT {
struct RsDistanceTriggerComponent;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_Engine {
struct DecalComponent;
}
namespace _Script_Engine {
struct MaterialInstanceDynamic;
}
namespace _Script_Engine {
struct TimelineComponent;
}
namespace _Game_WorldInteracts_EventZones_Interact_Zone_Interact_Animated {
struct Zone_Interact_Animated_C;
}
namespace _Game_WorldInteracts_AI_BP_POI {
struct BP_POI_C;
}
namespace _Script_AkAudio {
struct AkAudioEvent;
}
namespace _Game_UI_UI_SavePointShell {
struct UI_SavePointShell_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_WorldInteracts_EventZones_BP_SavePointVOID {
#pragma pack(push, 1)
struct BP_SavePointVOID_C : public _Script_SwGame::SwStreamingAreaPlayerStart {
    private: char pad_3d8[0x1a8]; public:
    void* get_UberGraphFrame();
    _Game_Audio_Component_Comp_SW_Amb_Overlap::Comp_SW_Amb_Overlap_C*& get_Comp_SW_Amb_Overlap();
    _Script_RsGameTechRT::RsWorldMapStateTransitionGatewayComponent*& get_RsWorldMapStateTransitionGateway();
    _Script_Engine::ParticleSystemComponent*& get_ParticleSystem();
    _Script_Engine::ArrowComponent*& get_AltSpawnTransform();
    _Script_RsGameTechRT::RsDistanceTriggerComponent*& get_Trigger();
    _Script_Engine::ArrowComponent*& get_SpawnTransform();
    _Script_Engine::SceneComponent*& get_HandLocation();
    _Script_Engine::SpotLightComponent*& get_SpotLight();
    _Script_Engine::ChildActorComponent*& get_BD_1_POI();
    _Script_Engine::DecalComponent*& get_Decal_Save();
    _Script_Engine::ParticleSystemComponent*& get_P_Save_Smoulder();
    _Script_Engine::ParticleSystemComponent*& get_P_SavePoint_Glow();
    _Script_Engine::ChildActorComponent*& get_Interact();
    float& get_FadeUp_NewTrack_0_67D122B14B7894BFA5A775AF146A238D();
    void* get_FadeUp__Direction_67D122B14B7894BFA5A775AF146A238D();
    _Script_Engine::TimelineComponent*& get_FadeUp();
    float& get_Timeline_1_FadeOff_DDB1590D4CBAB649B48D1F9B8EB78EBD();
    float& get_Timeline_1_Pulse_DDB1590D4CBAB649B48D1F9B8EB78EBD();
    void* get_Timeline_1__Direction_DDB1590D4CBAB649B48D1F9B8EB78EBD();
    _Script_Engine::TimelineComponent*& get_Timeline_1();
    float& get_Timeline_0_Reveal_51B10C92491D556ABA4AF39F3C212879();
    void* get_Timeline_0__Direction_51B10C92491D556ABA4AF39F3C212879();
    _Script_Engine::TimelineComponent*& get_Timeline_0();
    bool get_lanternOn();
    void set_lanternOn(bool value);
    void* get_LVL_saveInteract();
    void* get_LVL_saveDone();
    _Script_Engine::MaterialInstanceDynamic*& get_MID_Decal();
    _Game_WorldInteracts_AI_BP_POI::BP_POI_C*& get_BD_1_POI_Actor();
    _Game_WorldInteracts_EventZones_Interact_Zone_Interact_Animated::Zone_Interact_Animated_C*& get_InteractZone();
    _Script_AkAudio::AkAudioEvent*& get_Audio_Music_Start();
    _Script_AkAudio::AkAudioEvent*& get_Audio_Music_Stop();
    _Script_AkAudio::AkAudioEvent*& get_Audio_Ceremony_Start();
    _Script_AkAudio::AkAudioEvent*& get_Audio_Sound_Stop();
    _Script_AkAudio::AkAudioEvent*& get_Audio_Ambient_Begin_Overlap();
    _Script_AkAudio::AkAudioEvent*& get_Audio_Ambient_End_Overlap();
    bool get_mantisSave();
    void set_mantisSave(bool value);
    _Script_AkAudio::AkAudioEvent*& get_Audio_Pre_Save_Loop();
    _Script_AkAudio::AkAudioEvent*& get_Audio_Post_Save_Loop();
    _Script_AkAudio::AkAudioEvent*& get_Audio_Ceremony_Stop();
    _Script_AkAudio::AkAudioEvent*& get_Audio_SaveStone_Complete();
    _Game_UI_UI_SavePointShell::UI_SavePointShell_C*& get_SaveUI();
    void* get_SkyLights();
    void* get_DirectionalLights();
    bool get_SupressAutoReenabling();
    void set_SupressAutoReenabling(bool value);
    void* get_LVL_LandingPadSave();
    float& get_Beacon_FX_Brightness();
    float& get_Beacon_FX_Height();
    bool get_UseAlternateSpawnTransform();
    void set_UseAlternateSpawnTransform(bool value);
    bool get_IsEnabled();
    void set_IsEnabled(bool value);
    bool get_DisableLeaveVoidFX();
    void set_DisableLeaveVoidFX(bool value);
    _Script_AkAudio::AkAudioEvent*& get_Sound_Idle_Loop();
    void* get_LVL_TeleportBD1();
    static _Script_CoreUObject::Class* static_class();
    void UpdateBeaconFX(float Brightness, float Height);
    void TeleportHero();
    void EnterAudioEvents();
    void ExitAudioEvents();
    _Script_CoreUObject::Transform GetSpawnTransform();
    void UserConstructionScript();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void FadeUp__FinishedFunc();
    void FadeUp__UpdateFunc();
    void FXlogic();
    void EndSave();
    void OpenSaveUI();
    void HideAllLights();
    void EnterVoidFX();
    void SaveLogic();
    void SetLanternOnInstant();
    void LVL_Enable();
    void LVL_Disable();
    void AnimComplete();
    void ScriptedAnimNotify(void* NotifyName);
    void ScriptedAnimEnd();
    void ScriptedAnimStart(_Script_Engine::Actor* ScriptingActor);
    void EnterVoidTear();
    void LeaveVoidFX();
    void ReturnFromVoidTear();
    void BndEvt__Trigger_K2Node_ComponentBoundEvent_0_RsTriggerSignature__DelegateSignature(_Script_Engine::Actor* Actor);
    void Rest();
    void OnHideSavePoint();
    void OnUnhideSavePoint();
    void SwitchToAltSpawnTransform();
    void EnterSaveAnimationStart();
    void InVoidAnimSetup();
    void SaveGame_Interaction();
    void VoidExitSequence();
    void ReceiveBeginPlay();
    void OnStartAtPlayerStart_Event_0(void* LoadType);
    void LVL_FadeUp();
    void LVL_FadeDown();
    void OnOverlapHeroBegin_Event_1();
    void OnOverlapHeroEnd_Event_0();
    void ReceiveEndPlay(void* EndPlayReason);
    void ExecuteUbergraph_BP_SavePointVOID(int32_t EntryPoint);
    void LVL_TeleportBD1__DelegateSignature();
    void LVL_LandingPadSave__DelegateSignature();
    void LVL_saveDone__DelegateSignature();
    void LVL_saveInteract__DelegateSignature();
}; // Size: 0x580
#pragma pack(pop)
}
