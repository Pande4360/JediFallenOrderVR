#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AnimationCore {
#pragma pack(push, 1)
struct ConstraintDescription {
    private: char pad_0[0xd]; public:
    bool get_bTranslation();
    void set_bTranslation(bool value);
    bool get_bRotation();
    void set_bRotation(bool value);
    bool get_bScale();
    void set_bScale(bool value);
    bool get_bParent();
    void set_bParent(bool value);
    void* get_TranslationAxes();
    void* get_RotationAxes();
    void* get_ScaleAxes();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xd
#pragma pack(pop)
}
