#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_DatasmithContent {
#pragma pack(push, 1)
struct DatasmithReimportOptions {
    private: char pad_0[0x2]; public:
    bool get_bUpdateActors();
    void set_bUpdateActors(bool value);
    bool get_bRespawnDeletedActors();
    void set_bRespawnDeletedActors(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x2
#pragma pack(pop)
}
