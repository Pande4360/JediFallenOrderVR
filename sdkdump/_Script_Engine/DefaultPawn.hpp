#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "Pawn.hpp"
namespace _Script_Engine {
struct PawnMovementComponent;
}
namespace _Script_Engine {
struct SphereComponent;
}
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct DefaultPawn : public Pawn {
    private: char pad_3c0[0x28]; public:
    float& get_BaseTurnRate();
    float& get_BaseLookUpRate();
    _Script_Engine::PawnMovementComponent*& get_MovementComponent();
    _Script_Engine::SphereComponent*& get_CollisionComponent();
    _Script_Engine::StaticMeshComponent*& get_MeshComponent();
    bool get_bAddDefaultMovementBindings();
    void set_bAddDefaultMovementBindings(bool value);
    static _Script_CoreUObject::Class* static_class();
    void TurnAtRate(float Rate);
    void MoveUp_World(float Val);
    void MoveRight(float Val);
    void MoveForward(float Val);
    void LookUpAtRate(float Rate);
}; // Size: 0x3e8
#pragma pack(pop)
}
