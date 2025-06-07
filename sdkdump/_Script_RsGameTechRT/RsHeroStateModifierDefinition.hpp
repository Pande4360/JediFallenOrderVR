#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\DataAsset.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsHeroStateModifierDefinition : public _Script_Engine::DataAsset {
    private: char pad_30[0x88]; public:
    void* get_ValidStates();
    bool get_InvertValidStates();
    void set_InvertValidStates(bool value);
    void* get_DefaultModifications();
    bool get_bAllowPerStateModifications();
    void set_bAllowPerStateModifications(bool value);
    void* get_PerStateModifications();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xb8
#pragma pack(pop)
}
