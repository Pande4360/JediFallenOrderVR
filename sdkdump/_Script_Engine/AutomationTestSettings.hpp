#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct AutomationTestSettings : public _Script_CoreUObject::Object {
    private: char pad_28[0x300]; public:
    void* get_EngineTestModules();
    void* get_EditorTestModules();
    void* get_AutomationTestmap();
    void* get_EditorPerformanceTestMaps();
    void* get_AssetsToOpen();
    void* get_BuildPromotionTest();
    void* get_MaterialEditorPromotionTest();
    void* get_ParticleEditorPromotionTest();
    void* get_BlueprintEditorPromotionTest();
    void* get_TestLevelFolders();
    void* get_ExternalTools();
    void* get_ImportExportTestDefinitions();
    void* get_LaunchOnSettings();
    void* get_DefaultScreenshotResolution();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x328
#pragma pack(pop)
}
