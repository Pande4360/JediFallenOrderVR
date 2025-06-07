#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\DeveloperSettings.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RenderDocPlugin {
#pragma pack(push, 1)
struct RenderDocPluginSettings : public _Script_Engine::DeveloperSettings {
    private: char pad_38[0x18]; public:
    bool get_bEnableRenderDoc();
    void set_bEnableRenderDoc(bool value);
    bool get_bCaptureAllActivity();
    void set_bCaptureAllActivity(bool value);
    bool get_bCaptureAllCallstacks();
    void set_bCaptureAllCallstacks(bool value);
    bool get_bReferenceAllResources();
    void set_bReferenceAllResources(bool value);
    bool get_bSaveAllInitials();
    void set_bSaveAllInitials(bool value);
    bool get_bShowHelpOnStartup();
    void set_bShowHelpOnStartup(bool value);
    bool get_bEnableRenderDocCrashHandler();
    void set_bEnableRenderDocCrashHandler(bool value);
    void* get_RenderDocBinaryPath();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x50
#pragma pack(pop)
}
