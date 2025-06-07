#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AIModule {
#pragma pack(push, 1)
struct EnvTraceData {
    private: char pad_0[0x30]; public:
    int32_t& get_VersionNum();
    void* get_NavigationFilter();
    float& get_ProjectDown();
    float& get_ProjectUp();
    float& get_ExtentX();
    float& get_ExtentY();
    float& get_ExtentZ();
    float& get_PostProjectionVerticalOffset();
    void* get_TraceChannel();
    void* get_SerializedChannel();
    void* get_TraceShape();
    void* get_TraceMode();
    bool get_bTraceComplex();
    void set_bTraceComplex(bool value);
    bool get_bOnlyBlockingHits();
    void set_bOnlyBlockingHits(bool value);
    bool get_bCanTraceOnNavMesh();
    void set_bCanTraceOnNavMesh(bool value);
    bool get_bCanTraceOnGeometry();
    void set_bCanTraceOnGeometry(bool value);
    bool get_bCanDisableTrace();
    void set_bCanDisableTrace(bool value);
    bool get_bCanProjectDown();
    void set_bCanProjectDown(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x30
#pragma pack(pop)
}
