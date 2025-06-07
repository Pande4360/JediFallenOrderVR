#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_Engine {
struct TextRenderComponent;
}
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_Engine {
struct PrimitiveComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct HitResult;
}
namespace _Game_WorldInteracts_CameraPOI_BP_CameraPOITrigger {
#pragma pack(push, 1)
struct BP_CameraPOITrigger_C : public _Script_Engine::Actor {
    private: char pad_360[0x88]; public:
    void* get_UberGraphFrame();
    _Script_Engine::TextRenderComponent*& get_TextRender();
    _Script_Engine::StaticMeshComponent*& get_Cube();
    void* get_OnEndPOI();
    bool get_IsEnabled();
    void set_IsEnabled(bool value);
    bool get_IsActive();
    void set_IsActive(bool value);
    bool get_EndOnExit();
    void set_EndOnExit(bool value);
    bool get_DisableOnEnd();
    void set_DisableOnEnd(bool value);
    bool get_DoOnce_Persistent();
    void set_DoOnce_Persistent(bool value);
    bool get_DoOnce_Persistent_SaveImmediately();
    void set_DoOnce_Persistent_SaveImmediately(bool value);
    void* get_POIVariables();
    void* get_OnStartPOI();
    bool get_PlayerHeadTrackTarget();
    void set_PlayerHeadTrackTarget(bool value);
    bool get_PlayerFaceTarget();
    void set_PlayerFaceTarget(bool value);
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript0();
    void BndEvt__Cube_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult);
    void BndEvt__Cube_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
    void LVL_EnableTrigger(bool Enabled);
    void ReceiveBeginPlay0();
    void LVL_ActivatePOI();
    void LVL_DeactivatePOI();
    void ReceiveTick0(float DeltaSeconds);
    void LVL_SetFocusActor(_Script_Engine::Actor* FocusActor);
    void ExecuteUbergraph_BP_CameraPOITrigger(int32_t EntryPoint);
    void OnStartPOI__DelegateSignature();
    void OnEndPOI__DelegateSignature();
}; // Size: 0x3e8
#pragma pack(pop)
}
