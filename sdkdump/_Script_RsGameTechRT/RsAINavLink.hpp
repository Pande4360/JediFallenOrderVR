#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_RsGameTechRT {
struct RsAINavLinkDefinition;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsAINavLink : public _Script_Engine::Actor {
    private: char pad_360[0x88]; public:
    void* get_LinkDescriptor();
    _Script_RsGameTechRT::RsAINavLinkDefinition*& get_NavLinkDefinition();
    void* get_EndpointDescriptors();
    bool get_bIsValidLink();
    void set_bIsValidLink(bool value);
    bool get_bIsEnabled();
    void set_bIsEnabled(bool value);
    static _Script_CoreUObject::Class* static_class();
    void SetLinkEnabled(bool bEnabled);
    bool IsLinkEnabled();
}; // Size: 0x3e8
#pragma pack(pop)
}
