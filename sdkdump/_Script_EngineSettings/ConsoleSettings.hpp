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
struct ConsoleSettings : public _Script_CoreUObject::Object {
    private: char pad_28[0x48]; public:
    int32_t& get_MaxScrollbackSize();
    void* get_ManualAutoCompleteList();
    void* get_AutoCompleteMapPaths();
    float& get_BackgroundOpacityPercentage();
    bool get_bOrderTopToBottom();
    void set_bOrderTopToBottom(bool value);
    void* get_InputColor();
    void* get_HistoryColor();
    void* get_AutoCompleteCommandColor();
    void* get_AutoCompleteCVarColor();
    void* get_AutoCompleteFadedColor();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x70
#pragma pack(pop)
}
