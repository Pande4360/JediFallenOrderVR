#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RsHeroComponent.hpp"
namespace _Script_RsGameTechRT {
struct RsCharacterNavigationManagementComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsCharacterNavigationComponent : public RsHeroComponent {
    private: char pad_180[0x8]; public:
    _Script_RsGameTechRT::RsCharacterNavigationManagementComponent*& get_m_navManagementComponent();
    static _Script_CoreUObject::Class* static_class();
    _Script_RsGameTechRT::RsCharacterNavigationManagementComponent* GetNavigationManagementComponentPointer();
}; // Size: 0x188
#pragma pack(pop)
}
