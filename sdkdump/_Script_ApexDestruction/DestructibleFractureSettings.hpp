#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ApexDestruction {
#pragma pack(push, 1)
struct DestructibleFractureSettings : public _Script_CoreUObject::Object {
    private: char pad_28[0x90]; public:
    int32_t& get_CellSiteCount();
    void* get_FractureMaterialDesc();
    int32_t& get_RandomSeed();
    void* get_VoronoiSites();
    int32_t& get_OriginalSubmeshCount();
    void* get_Materials();
    void* get_ChunkParameters();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xb8
#pragma pack(pop)
}
