#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\DataAsset.hpp"
namespace _Script_Engine {
struct SkeletalMesh;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsRopeMeshDefinition : public _Script_Engine::DataAsset {
    private: char pad_30[0x28]; public:
    _Script_Engine::SkeletalMesh*& get_TopMesh();
    void* get_MiddleMeshes();
    _Script_Engine::SkeletalMesh*& get_BottomMesh();
    int32_t& get_Version();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x58
#pragma pack(pop)
}
