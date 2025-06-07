#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Niagara {
#pragma pack(push, 1)
struct NiagaraCollisionEventPayload {
    private: char pad_0[0x2c]; public:
    void* get_CollisionPos();
    void* get_CollisionNormal();
    void* get_CollisionVelocity();
    int32_t& get_ParticleIndex();
    int32_t& get_PhysicalMaterialIndex();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x2c
#pragma pack(pop)
}
