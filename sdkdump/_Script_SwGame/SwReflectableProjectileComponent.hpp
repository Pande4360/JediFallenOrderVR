#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Vector.hpp"
#include "SwProjectileComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
struct RsCharacter;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwReflectableProjectileComponent : public SwProjectileComponent {
    private: char pad_178[0x28]; public:
    bool get_bReflected();
    void set_bReflected(bool value);
    void* get_OnProjectileReflected();
    void* get_OnProjectileDeflected();
    static _Script_CoreUObject::Class* static_class();
    void ReflectTowardsOwner(_Script_RsGameTechRT::RsCharacter* ReflectionInstigator, float InNewSpeed, void* InSocketName, _Script_CoreUObject::Vector DefaultTrackingOffset);
    void ReflectTowardsCamera(_Script_RsGameTechRT::RsCharacter* ReflectionInstigator, float InNewSpeed);
}; // Size: 0x1a0
#pragma pack(pop)
}
