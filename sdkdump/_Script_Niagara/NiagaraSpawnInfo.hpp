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
struct NiagaraSpawnInfo {
    private: char pad_0[0x10]; public:
    int32_t& get_Count();
    float& get_InterpStartDt();
    float& get_IntervalDt();
    int32_t& get_SpawnGroup();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x10
#pragma pack(pop)
}
