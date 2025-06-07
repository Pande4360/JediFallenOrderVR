#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "Actor.hpp"
namespace _Script_Engine {
struct SkeletalMeshComponent;
}
namespace _Script_Engine {
struct SkeletalMesh;
}
namespace _Script_Engine {
struct PhysicsAsset;
}
namespace _Script_Engine {
struct MaterialInterface;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct SkeletalMeshActor : public Actor {
    private: char pad_360[0x88]; public:
    bool get_bShouldDoAnimNotifies();
    void set_bShouldDoAnimNotifies(bool value);
    bool get_bWakeOnLevelStart();
    void set_bWakeOnLevelStart(bool value);
    _Script_Engine::SkeletalMeshComponent*& get_SkeletalMeshComponent();
    _Script_Engine::SkeletalMesh*& get_ReplicatedMesh();
    _Script_Engine::PhysicsAsset*& get_ReplicatedPhysAsset();
    _Script_Engine::MaterialInterface*& get_ReplicatedMaterial0();
    _Script_Engine::MaterialInterface*& get_ReplicatedMaterial1();
    static _Script_CoreUObject::Class* static_class();
    void OnRep_ReplicatedPhysAsset();
    void OnRep_ReplicatedMesh();
    void OnRep_ReplicatedMaterial1();
    void OnRep_ReplicatedMaterial0();
}; // Size: 0x3e8
#pragma pack(pop)
}
