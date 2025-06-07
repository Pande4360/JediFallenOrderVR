#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_SwGame\SwPhotomodeCameraController.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_TechArt_Photomode_PhotoModeController {
#pragma pack(push, 1)
struct PhotoModeController_C : public _Script_SwGame::SwPhotomodeCameraController {
    private: char pad_1550[0x8]; public:
    void* get_UberGraphFrame();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ReceiveEndPlay(void* EndPlayReason);
    void PhotomodeSelectionChanged0();
    void PhotomodeToggleSpotlight0(bool bEnabled);
    void PhotomodeValueChanged0(float Delta);
    void PhotomodeHideHUD0(bool bHUDHidden);
    void PhotomodePhotoTaken0();
    void ExecuteUbergraph_PhotoModeController(int32_t EntryPoint);
}; // Size: 0x1558
#pragma pack(pop)
}
