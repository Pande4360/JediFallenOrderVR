#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_RsTechRT\RsVolumeBlueprintBase.hpp"
namespace _Script_Engine {
struct TextRenderComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Game_WorldInteracts_EventZones_Zone_LoadAreaNEW {
#pragma pack(push, 1)
struct Zone_LoadAreaNEW_C : public _Script_RsTechRT::RsVolumeBlueprintBase {
    private: char pad_398[0xa0]; public:
    void* get_UberGraphFrame();
    _Script_Engine::TextRenderComponent*& get_TextRender();
    void* get_LoadingArea();
    void* get_LoadTokens();
    void* get_Load_Order();
    bool get_TriggerVolume_();
    void set_TriggerVolume_(bool value);
    bool get_isFailSafeZone_();
    void set_isFailSafeZone_(bool value);
    void* get_FailSafeSingleLevel();
    bool get_WaitForNonVisibleLevels_();
    void set_WaitForNonVisibleLevels_(bool value);
    void* get_LVL_Load_Started();
    void* get_LVL_Load_Completed();
    void* get_FailSafe_Zones();
    void* get_Exit_Zones();
    bool get_DidFullyLoad_();
    void set_DidFullyLoad_(bool value);
    bool get_isLinked_();
    void set_isLinked_(bool value);
    bool get_DisableDuringCines_();
    void set_DisableDuringCines_(bool value);
    bool get_PlayerMustBeGrounded_();
    void set_PlayerMustBeGrounded_(bool value);
    static _Script_CoreUObject::Class* static_class();
    void getLoadingArea(void*& LoadingArea);
    void shouldShow_(bool& Show_);
    void getLoadTokens(void*& Load_Tokens);
    void SetupText();
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ReceiveActorBeginOverlap(_Script_Engine::Actor* OtherActor);
    void LVL_Activate_Volume();
    void LVL_Deactivate_Volume();
    void LVL_Trigger_Load();
    void LoadZoneShow(bool Show_);
    void ReceiveTick(float DeltaSeconds);
    void Exiting_Zone();
    void ExecuteUbergraph_Zone_LoadAreaNEW(int32_t EntryPoint);
    void LVL_Load_Completed__DelegateSignature();
    void LVL_Load_Started__DelegateSignature();
}; // Size: 0x438
#pragma pack(pop)
}
