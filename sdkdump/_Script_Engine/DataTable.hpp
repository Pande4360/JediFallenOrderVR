#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct ScriptStruct;
}
namespace _Script_CoreUObject {
struct Enum;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct DataTable : public _Script_CoreUObject::Object {
    private: char pad_28[0x88]; public:
    _Script_CoreUObject::ScriptStruct*& get_RowStruct();
    _Script_CoreUObject::Enum*& get_KeyEnum();
    bool get_bGameplayTagKey();
    void set_bGameplayTagKey(bool value);
    bool get_bStripFromClientBuilds();
    void set_bStripFromClientBuilds(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xb0
#pragma pack(pop)
}
