#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct LightmassDebugOptions {
    private: char pad_0[0x10]; public:
    bool get_bDebugMode();
    void set_bDebugMode(bool value);
    bool get_bStatsEnabled();
    void set_bStatsEnabled(bool value);
    bool get_bGatherBSPSurfacesAcrossComponents();
    void set_bGatherBSPSurfacesAcrossComponents(bool value);
    float& get_CoplanarTolerance();
    bool get_bUseImmediateImport();
    void set_bUseImmediateImport(bool value);
    bool get_bImmediateProcessMappings();
    void set_bImmediateProcessMappings(bool value);
    bool get_bSortMappings();
    void set_bSortMappings(bool value);
    bool get_bDumpBinaryFiles();
    void set_bDumpBinaryFiles(bool value);
    bool get_bDebugMaterials();
    void set_bDebugMaterials(bool value);
    bool get_bPadMappings();
    void set_bPadMappings(bool value);
    bool get_bDebugPaddings();
    void set_bDebugPaddings(bool value);
    bool get_bOnlyCalcDebugTexelMappings();
    void set_bOnlyCalcDebugTexelMappings(bool value);
    bool get_bUseRandomColors();
    void set_bUseRandomColors(bool value);
    bool get_bColorBordersGreen();
    void set_bColorBordersGreen(bool value);
    bool get_bColorByExecutionTime();
    void set_bColorByExecutionTime(bool value);
    float& get_ExecutionTimeDivisor();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x10
#pragma pack(pop)
}
