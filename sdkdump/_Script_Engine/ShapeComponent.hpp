#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "PrimitiveComponent.hpp"
namespace _Script_Engine {
struct BodySetup;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct ShapeComponent : public PrimitiveComponent {
    private: char pad_b30[0x50]; public:
    _Script_Engine::BodySetup*& get_ShapeBodySetup();
    void* get_ShapeColor();
    bool get_bDrawOnlyIfSelected();
    void set_bDrawOnlyIfSelected(bool value);
    bool get_bShouldCollideWhenPlacing();
    void set_bShouldCollideWhenPlacing(bool value);
    bool get_bDynamicObstacle();
    void set_bDynamicObstacle(bool value);
    void* get_AreaClass();
    void* get_AutoAttachParent();
    void* get_AutoAttachSocketName();
    void* get_AutoAttachLocationRule();
    void* get_AutoAttachRotationRule();
    void* get_AutoAttachScaleRule();
    bool get_bAutoManageAttachment();
    void set_bAutoManageAttachment(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xb80
#pragma pack(pop)
}
