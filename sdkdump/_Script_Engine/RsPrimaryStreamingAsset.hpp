#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "PrimaryDataAsset.hpp"
namespace _Script_Engine {
struct RsStreamingDefinition;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct RsPrimaryStreamingAsset : public PrimaryDataAsset {
    private: char pad_30[0x18]; public:
    _Script_Engine::RsStreamingDefinition*& get_RootStreamingDefinitionPtr();
    void* get_Rules();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x48
#pragma pack(pop)
}
