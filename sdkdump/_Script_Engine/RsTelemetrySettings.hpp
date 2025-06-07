#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "DeveloperSettings.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct RsTelemetrySettings : public DeveloperSettings {
    private: char pad_38[0x28]; public:
    bool get_bTelemetryLoggingEnabled();
    void set_bTelemetryLoggingEnabled(bool value);
    bool get_bTelemetryLoggingEnabledInPIE();
    void set_bTelemetryLoggingEnabledInPIE(bool value);
    bool get_bUploadTelemetryLogs();
    void set_bUploadTelemetryLogs(bool value);
    void* get_TelemetryUploadLocation();
    void* get_TelemetryLogExtension();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x60
#pragma pack(pop)
}
