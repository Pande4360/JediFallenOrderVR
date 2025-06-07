#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_RsGameTechRT\RsCameraBehavior.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct R4CameraBehavior_CollisionTrace : public _Script_RsGameTechRT::RsCameraBehavior {
    private: char pad_30[0x28]; public:
    float& get_TraceRadius();
    float& get_TraceOriginOffsetHeight();
    void* get_TraceOriginOffset();
    float& get_BackupTrackingPercentage();
    float& get_BackupTrackingTime();
    float& get_NavSurfaceOriginOffset();
    bool get_bUseBaseLocationAsTraceOrigin();
    void set_bUseBaseLocationAsTraceOrigin(bool value);
    bool get_bDoObstructionCheck();
    void set_bDoObstructionCheck(bool value);
    bool get_bStayAboveNavSurface();
    void set_bStayAboveNavSurface(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x58
#pragma pack(pop)
}
