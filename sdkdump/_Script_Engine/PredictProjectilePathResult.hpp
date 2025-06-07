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
struct PredictProjectilePathResult {
    private: char pad_0[0xc8]; public:
    void* get_PathData();
    void* get_LastTraceDestination();
    void* get_HitResult();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc8
#pragma pack(pop)
}
