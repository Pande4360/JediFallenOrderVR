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
struct ConstraintProfileProperties {
    private: char pad_0[0x104]; public:
    float& get_ProjectionLinearTolerance();
    float& get_ProjectionAngularTolerance();
    float& get_LinearBreakThreshold();
    float& get_AngularBreakThreshold();
    void* get_LinearLimit();
    void* get_ConeLimit();
    void* get_TwistLimit();
    void* get_LinearDrive();
    void* get_AngularDrive();
    bool get_bDisableCollision();
    void set_bDisableCollision(bool value);
    bool get_bParentDominates();
    void set_bParentDominates(bool value);
    bool get_bEnableProjection();
    void set_bEnableProjection(bool value);
    bool get_bAngularBreakable();
    void set_bAngularBreakable(bool value);
    bool get_bLinearBreakable();
    void set_bLinearBreakable(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x104
#pragma pack(pop)
}
