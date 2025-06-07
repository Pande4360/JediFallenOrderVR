#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct StaticMesh;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Landscape {
#pragma pack(push, 1)
struct LandscapeSplineMeshEntry {
    private: char pad_0[0x38]; public:
    _Script_Engine::StaticMesh*& get_Mesh();
    void* get_MaterialOverrides();
    bool get_bCenterH();
    void set_bCenterH(bool value);
    void* get_CenterAdjust();
    bool get_bScaleToWidth();
    void set_bScaleToWidth(bool value);
    void* get_Scale();
    void* get_Orientation();
    void* get_ForwardAxis();
    void* get_UpAxis();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x38
#pragma pack(pop)
}
