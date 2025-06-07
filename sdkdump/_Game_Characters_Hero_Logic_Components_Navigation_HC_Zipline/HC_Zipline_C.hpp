#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_RsGameTechRT\RsZiplineAttachmentComponent.hpp"
namespace _Script_AkAudio {
struct AkAudioEvent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Characters_Hero_Logic_Components_Navigation_HC_Zipline {
#pragma pack(push, 1)
struct HC_Zipline_C : public _Script_RsGameTechRT::RsZiplineAttachmentComponent {
    private: char pad_290[0x58]; public:
    void* get_UberGraphFrame();
    void* get_Sound_Zipline_Speed();
    _Script_AkAudio::AkAudioEvent*& get_Sound_Zipline_Activate();
    _Script_AkAudio::AkAudioEvent*& get_Sound_Zipline_Deactivate();
    void* get_Sound_Zipline_Progression();
    void* get_FeedbackName();
    void* get_LVL_HeroOnZipline();
    void* get_LVL_HeroOffZipline();
    bool get_LVL_AllowDropOff();
    void set_LVL_AllowDropOff(bool value);
    static _Script_CoreUObject::Class* static_class();
    void JumpToZiplineInput(void* Action_Name, bool& Attached_To_Zipline);
    void CanReleaseFromCancelButton(void* Action_Name, bool& Can_Release);
    void ZiplineJump();
    void StopAscendZipline();
    void ShowGripInputUI0();
    void HideGripInputUI0();
    void OnEnterZipline0();
    void OnExitZipline0();
    void OnMovementDirectionChanged0(void* MovementDirection);
    void Anim_ZiplineJumpTriggered();
    void BP_ZiplineAttachedTick0(float Dt);
    void StartAscendZipline();
    void Anim_OnZiplineEntryComplete();
    void Release();
    void ExecuteUbergraph_HC_Zipline(int32_t EntryPoint);
    void LVL_HeroOffZipline__DelegateSignature();
    void LVL_HeroOnZipline__DelegateSignature();
}; // Size: 0x2e8
#pragma pack(pop)
}
