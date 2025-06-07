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
struct EditorImportExportTestDefinition {
    private: char pad_0[0x38]; public:
    void* get_ImportFilePath();
    void* get_ExportFileExtension();
    bool get_bSkipExport();
    void set_bSkipExport(bool value);
    void* get_FactorySettings();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x38
#pragma pack(pop)
}
