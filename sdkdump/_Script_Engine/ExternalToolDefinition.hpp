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
struct ExternalToolDefinition {
    private: char pad_0[0x60]; public:
    void* get_ToolName();
    void* get_ExecutablePath();
    void* get_CommandLineOptions();
    void* get_WorkingDirectory();
    void* get_ScriptExtension();
    void* get_ScriptDirectory();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x60
#pragma pack(pop)
}
