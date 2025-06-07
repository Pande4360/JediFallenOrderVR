#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct AssetEditorOrbitCameraPosition {
    private: char pad_0[0x28]; public:
    bool get_bIsSet();
    void set_bIsSet(bool value);
    void* get_CamOrbitPoint();
    void* get_CamOrbitZoom();
    void* get_CamOrbitRotation();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
