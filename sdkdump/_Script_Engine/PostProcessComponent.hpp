#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "SceneComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct PostProcessComponent : public SceneComponent {
    private: char pad_2d0[0x520]; public:
    void* get_Settings();
    float& get_Priority();
    float& get_BlendRadius();
    float& get_BlendWeight();
    bool get_bEnabled();
    void set_bEnabled(bool value);
    bool get_bUnbound();
    void set_bUnbound(bool value);
    static _Script_CoreUObject::Class* static_class();
    void AddOrUpdateBlendable(void* InBlendableObject, float InWeight);
}; // Size: 0x7f0
#pragma pack(pop)
}
