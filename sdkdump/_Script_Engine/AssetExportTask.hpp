#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_Engine {
struct Exporter;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct AssetExportTask : public _Script_CoreUObject::Object {
    private: char pad_28[0x50]; public:
    _Script_CoreUObject::Object*& get_Object();
    _Script_Engine::Exporter*& get_Exporter();
    void* get_Filename();
    bool get_bSelected();
    void set_bSelected(bool value);
    bool get_bReplaceIdentical();
    void set_bReplaceIdentical(bool value);
    bool get_bPrompt();
    void set_bPrompt(bool value);
    bool get_bAutomated();
    void set_bAutomated(bool value);
    bool get_bUseFileArchive();
    void set_bUseFileArchive(bool value);
    bool get_bWriteEmptyFiles();
    void set_bWriteEmptyFiles(bool value);
    void* get_IgnoreObjectList();
    _Script_CoreUObject::Object*& get_Options();
    void* get_Errors();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x78
#pragma pack(pop)
}
