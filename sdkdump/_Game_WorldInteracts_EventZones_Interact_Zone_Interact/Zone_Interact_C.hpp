#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_RsGameTechRT {
struct RsDistanceTriggerComponent;
}
namespace _Script_Engine {
struct SphereComponent;
}
namespace _Script_UMG {
struct WidgetComponent;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_Engine {
struct DataTable;
}
namespace _Game_UI_UI_ButtonScreenSpace {
struct UI_ButtonScreenSpace_C;
}
namespace _Game_UI_InWorld_UI_interact_icon {
struct UI_interact_icon_C;
}
namespace _Script_RsGameTechRT {
struct RsHero;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_WorldInteracts_EventZones_Interact_Zone_Interact {
#pragma pack(push, 1)
struct Zone_Interact_C : public _Script_Engine::Actor {
    private: char pad_360[0xb8]; public:
    void* get_UberGraphFrame();
    _Script_RsGameTechRT::RsDistanceTriggerComponent*& get_RsDistanceTrigger_Hint();
    _Script_RsGameTechRT::RsDistanceTriggerComponent*& get_RsDistanceTrigger_Interact();
    _Script_Engine::StaticMeshComponent*& get_ClickableSphere_EditorOnly();
    _Script_Engine::SphereComponent*& get_VisibilityTraceCollider();
    _Script_UMG::WidgetComponent*& get_InteractWidget();
    _Script_Engine::SceneComponent*& get_Anchor();
    _Script_Engine::SceneComponent*& get_syncSpot();
    _Script_Engine::SceneComponent*& get_Scene();
    void* get_LVL_InteractedEvent();
    bool get_StartEnabled();
    void set_StartEnabled(bool value);
    bool get_OnlyOnce();
    void set_OnlyOnce(bool value);
    bool get_HideButtonWhenUsed();
    void set_HideButtonWhenUsed(bool value);
    float& get_ReuseCooldown();
    int32_t& get_InteractDistance();
    int32_t& get_HintIconDistance();
    int32_t& get_InteractZoneState_Bitmask();
    int32_t& get_PrevInteractZoneState_Bitmask();
    _Game_UI_InWorld_UI_interact_icon::UI_interact_icon_C*& get_UIInteractIcon();
    _Game_UI_UI_ButtonScreenSpace::UI_ButtonScreenSpace_C*& get_UIButtonScreenSpace();
    bool get_Don_tUpdateTillStateChange();
    void set_Don_tUpdateTillStateChange(bool value);
    bool get_HideIconIfActorNotVisible();
    void set_HideIconIfActorNotVisible(bool value);
    bool get_OnlyInteractWhenIconVisible();
    void set_OnlyInteractWhenIconVisible(bool value);
    float& get_LastValidLOSTime();
    void* get_IconUpdateTimer();
    _Script_RsGameTechRT::RsHero*& get_Hero();
    bool get_UseAnyPartOfActorForVisibleTests();
    void set_UseAnyPartOfActorForVisibleTests(bool value);
    void* get_InteractType();
    bool get_RemoteInteractAvailable();
    void set_RemoteInteractAvailable(bool value);
    void* get_InteractText();
    bool get_UsableDuringCombat();
    void set_UsableDuringCombat(bool value);
    bool get_UsableInAir();
    void set_UsableInAir(bool value);
    bool get_SaveSelfAfterUse();
    void set_SaveSelfAfterUse(bool value);
    bool get_SheatheOnApproach();
    void set_SheatheOnApproach(bool value);
    bool get_CurrentlyEnabled_INTERNALUSEONLY();
    void set_CurrentlyEnabled_INTERNALUSEONLY(bool value);
    _Script_Engine::DataTable*& get_InteractTextTable();
    int32_t& get_Priority();
    bool get_PooledWidgetInUse();
    void set_PooledWidgetInUse(bool value);
    bool get_DelegateOnlyOnceBehavior();
    void set_DelegateOnlyOnceBehavior(bool value);
    static _Script_CoreUObject::Class* static_class();
    void DroidButtonPress(bool& Handled);
    void UpdatePooledWidgetResource();
    void Tmp_ActorWithinTrigger(_Script_Engine::Actor* Actor, _Script_RsGameTechRT::RsDistanceTriggerComponent* Trigger, bool& Result);
    void UpdateCollisionEnabled();
    void CreateScreenSpaceButton();
    void HandleInteract(bool ForceHandle, bool& Handled);
    void LVL_Disable();
    void LVL_Enable();
    void UpdateSheatheSaberTag();
    void LVL_HideIconUntilNextStateChange();
    void IsRemoteInteract(bool& Result);
    void IsInteractionCurrentlyPossible(bool WouldShowIcon, bool& Result);
    void UpdateRemoteInteractState(bool Available);
    void IsCurrentlyValidRemoteInteract(bool& Result);
    void RecentlyRendered(bool& Result);
    void LVL_GetEnabled(bool& Result);
    void UpdateBitmaskAndIcon();
    void ShouldAllowInteract__OverrideMe(bool& Result);
    void HandleSphereOverlap(_Script_Engine::Actor* Player);
    void InitializeTriggerSphere(_Script_RsGameTechRT::RsDistanceTriggerComponent* DistanceTrigger, int32_t TriggerDistance);
    void InitializeValues();
    void LVL_SetEnabled(bool NewEnabled, bool Temporary);
    void UpdateIcon(bool UpdateIsDueToStateChange);
    void UserConstructionScript0();
    void Interacted();
    void BndEvt__RsDistanceTrigger_Interact_K2Node_ComponentBoundEvent_2_DistanceTriggerSignature__DelegateSignature(_Script_Engine::Actor* Actor);
    void BndEvt__RsDistanceTrigger_Interact_K2Node_ComponentBoundEvent_3_DistanceTriggerSignature__DelegateSignature(_Script_Engine::Actor* Actor);
    void BndEvt__RsDistanceTrigger_Hint_K2Node_ComponentBoundEvent_4_DistanceTriggerSignature__DelegateSignature(_Script_Engine::Actor* Actor);
    void BndEvt__RsDistanceTrigger_Hint_K2Node_ComponentBoundEvent_5_DistanceTriggerSignature__DelegateSignature(_Script_Engine::Actor* Actor);
    void ReceiveEndPlay0(void* EndPlayReason);
    void InteractAnimationDone();
    void Timer_UpdateIcon();
    void CancelToNav();
    void ReceiveBeginPlay0();
    void ButtonPress();
    void ExecuteUbergraph_Zone_Interact(int32_t EntryPoint);
    void LVL_InteractedEvent__DelegateSignature();
}; // Size: 0x418
#pragma pack(pop)
}
