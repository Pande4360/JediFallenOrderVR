#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_RsTechRT {
struct RsBoneMask;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsTechRT {
#pragma pack(push, 1)
struct RsLayeredBlend_LayerInfo {
    private: char pad_0[0x58]; public:
    void* get_LayerName();
    _Script_RsTechRT::RsBoneMask*& get_PerBoneBlendWeights();
    void* get_BlendIn();
    void* get_BlendOut();
    bool get_bIsAdditive();
    void set_bIsAdditive(bool value);
    bool get_bBlendRotationInMeshSpace();
    void set_bBlendRotationInMeshSpace(bool value);
    bool get_bBlockNotifiesInLowerLayers();
    void set_bBlockNotifiesInLowerLayers(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x58
#pragma pack(pop)
}
