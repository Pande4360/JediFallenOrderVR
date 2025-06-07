#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_RsGameTechRT {
struct RsZiplinePointComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsZiplinePointActor : public _Script_Engine::Actor {
    private: char pad_360[0x8]; public:
    _Script_RsGameTechRT::RsZiplinePointComponent*& get_ZiplinePointComponent();
    static _Script_CoreUObject::Class* static_class();
    _Script_RsGameTechRT::RsZiplinePointComponent* GetZiplinePointComponent();
}; // Size: 0x368
#pragma pack(pop)
}
