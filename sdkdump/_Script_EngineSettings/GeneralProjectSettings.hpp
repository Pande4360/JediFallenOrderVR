#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_EngineSettings {
#pragma pack(push, 1)
struct GeneralProjectSettings : public _Script_CoreUObject::Object {
    private: char pad_28[0xf0]; public:
    void* get_CompanyName();
    void* get_CompanyDistinguishedName();
    void* get_CopyrightNotice();
    void* get_Description();
    void* get_Homepage();
    void* get_LicensingTerms();
    void* get_PrivacyPolicy();
    void* get_ProjectID();
    void* get_ProjectName();
    void* get_ProjectVersion();
    void* get_SupportContact();
    void* get_ProjectDisplayedTitle();
    void* get_ProjectDebugTitleInfo();
    bool get_bShouldWindowPreserveAspectRatio();
    void set_bShouldWindowPreserveAspectRatio(bool value);
    bool get_bUseBorderlessWindow();
    void set_bUseBorderlessWindow(bool value);
    bool get_bStartInVR();
    void set_bStartInVR(bool value);
    bool get_bStartInAR();
    void set_bStartInAR(bool value);
    bool get_bSupportAR();
    void set_bSupportAR(bool value);
    bool get_bAllowWindowResize();
    void set_bAllowWindowResize(bool value);
    bool get_bAllowClose();
    void set_bAllowClose(bool value);
    bool get_bAllowMaximize();
    void set_bAllowMaximize(bool value);
    bool get_bAllowMinimize();
    void set_bAllowMinimize(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x118
#pragma pack(pop)
}
