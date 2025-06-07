#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct MaterialInterface;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct Texture2D;
}
namespace _Script_Landscape {
#pragma pack(push, 1)
struct LandscapeEditToolRenderData {
    private: char pad_0[0x30]; public:
    _Script_Engine::MaterialInterface*& get_ToolMaterial();
    _Script_Engine::MaterialInterface*& get_GizmoMaterial();
    int32_t& get_SelectedType();
    int32_t& get_DebugChannelR();
    int32_t& get_DebugChannelG();
    int32_t& get_DebugChannelB();
    _Script_Engine::Texture2D*& get_DataTexture();
    bool get_CheckboardMask();
    void set_CheckboardMask(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x30
#pragma pack(pop)
}
