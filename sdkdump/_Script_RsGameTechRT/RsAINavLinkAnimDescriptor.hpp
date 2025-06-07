#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct BlendSpaceBase;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsAINavLinkAnimDescriptor {
    private: char pad_0[0x38]; public:
    void* get_BlendSpaceAssetPtr();
    float& get_BlendInTime();
    float& get_BlendOutTime();
    _Script_Engine::BlendSpaceBase*& get_BlendSpace();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x38
#pragma pack(pop)
}
