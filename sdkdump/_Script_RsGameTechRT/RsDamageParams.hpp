#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsDamageParams {
    private: char pad_0[0x130]; public:
    void* get_DamagedActorCollider();
    void* get_SwingDirection();
    void* get_AttackerDirection();
    void* get_AttackerDirectionVector();
    void* get_HitLocation();
    void* get_HitVelocity();
    void* get_HitNormal();
    void* get_HitBone();
    void* get_HitPhysMaterial();
    void* get_HitEvent();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x130
#pragma pack(pop)
}
