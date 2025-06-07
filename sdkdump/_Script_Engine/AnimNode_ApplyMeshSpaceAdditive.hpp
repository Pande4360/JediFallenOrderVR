#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "AnimNode_Base.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct AnimNode_ApplyMeshSpaceAdditive : public AnimNode_Base {
    private: char pad_30[0x38]; public:
    void* get_base();
    void* get_Additive();
    float& get_Alpha();
    void* get_AlphaScaleBias();
    int32_t& get_LODThreshold();
    float& get_ActualAlpha();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x68
#pragma pack(pop)
}
