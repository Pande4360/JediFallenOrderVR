#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Vector.hpp"
#include "SceneComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct PhysicsSpringComponent : public SceneComponent {
    private: char pad_2d0[0x20]; public:
    float& get_SpringStiffness();
    float& get_SpringDamping();
    float& get_SpringLengthAtRest();
    float& get_SpringRadius();
    void* get_SpringChannel();
    bool get_bIgnoreSelf();
    void set_bIgnoreSelf(bool value);
    float& get_SpringCompression();
    static _Script_CoreUObject::Class* static_class();
    _Script_CoreUObject::Vector GetSpringRestingPoint();
    _Script_CoreUObject::Vector GetSpringDirection();
    _Script_CoreUObject::Vector GetSpringCurrentEndPoint();
    float GetNormalizedCompressionScalar();
}; // Size: 0x2f0
#pragma pack(pop)
}
