#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RsSimpleAnimationDataBase.hpp"
namespace _Script_Engine {
struct BlendSpaceBase;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsSimpleBlendspaceData : public RsSimpleAnimationDataBase {
    private: char pad_8[0x8]; public:
    _Script_Engine::BlendSpaceBase*& get_Animation();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x10
#pragma pack(pop)
}
