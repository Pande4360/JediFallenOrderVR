#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\DataAsset.hpp"
namespace _Script_RsGameTechRT {
struct RsCameraModeSet;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsCameraModeSetDefinition : public _Script_Engine::DataAsset {
    private: char pad_30[0x8]; public:
    _Script_RsGameTechRT::RsCameraModeSet*& get_ModeSet();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x38
#pragma pack(pop)
}
