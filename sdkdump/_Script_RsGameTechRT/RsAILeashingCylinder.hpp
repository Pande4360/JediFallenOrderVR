#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RsAILeashingActor.hpp"
namespace _Script_RsGameTechRT {
struct RsCylinderComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsAILeashingCylinder : public RsAILeashingActor {
    private: char pad_360[0x8]; public:
    _Script_RsGameTechRT::RsCylinderComponent*& get_CylinderComponent();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x368
#pragma pack(pop)
}
