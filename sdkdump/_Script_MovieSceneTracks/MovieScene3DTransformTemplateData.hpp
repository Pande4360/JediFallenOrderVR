#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieSceneTracks {
#pragma pack(push, 1)
struct MovieScene3DTransformTemplateData {
    private: char pad_0[0x660]; public:
    void* get_TranslationCurve();
    void* get_RotationCurve();
    void* get_ScaleCurve();
    void* get_ManualWeight();
    void* get_BlendType();
    void* get_Mask();
    bool get_bUseQuaternionInterpolation();
    void set_bUseQuaternionInterpolation(bool value);
    void* get_TeleportationTypes();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x660
#pragma pack(pop)
}
