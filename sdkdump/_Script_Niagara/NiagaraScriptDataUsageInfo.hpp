#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Niagara {
#pragma pack(push, 1)
struct NiagaraScriptDataUsageInfo {
    private: char pad_0[0x1]; public:
    bool get_bReadsAttributeData();
    void set_bReadsAttributeData(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x1
#pragma pack(pop)
}
