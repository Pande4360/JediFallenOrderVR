#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\ActorComponent.hpp"
namespace _Script_RsGameTechRT {
struct RsHero;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
struct RsPlayerAnimInstance;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsHeroComponent : public _Script_Engine::ActorComponent {
    private: char pad_170[0x10]; public:
    _Script_RsGameTechRT::RsHero*& get_Hero();
    static _Script_CoreUObject::Class* static_class();
    _Script_RsGameTechRT::RsPlayerAnimInstance* GetPlayerAnimInstance();
    bool DebugGetHeroComponentInfo(void*& ComponentInfoString);
}; // Size: 0x180
#pragma pack(pop)
}
