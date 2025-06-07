#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsEditorSettings : public _Script_CoreUObject::Object {
    private: char pad_28[0x8]; public:
    float& get_POICullingDistance();
    bool get_bLoadHeroAssetsOnEditorStart();
    void set_bLoadHeroAssetsOnEditorStart(bool value);
    bool get_bLoadAIAssetsOnEditorStart();
    void set_bLoadAIAssetsOnEditorStart(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x30
#pragma pack(pop)
}
