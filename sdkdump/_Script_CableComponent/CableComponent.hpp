#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\MeshComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_CableComponent {
#pragma pack(push, 1)
struct CableComponent : public _Script_Engine::MeshComponent {
    private: char pad_b60[0x80]; public:
    bool get_bAttachStart();
    void set_bAttachStart(bool value);
    bool get_bAttachEnd();
    void set_bAttachEnd(bool value);
    void* get_AttachEndTo();
    void* get_AttachEndToSocketName();
    void* get_EndLocation();
    float& get_CableLength();
    int32_t& get_NumSegments();
    float& get_SubstepTime();
    int32_t& get_SolverIterations();
    bool get_bEnableStiffness();
    void set_bEnableStiffness(bool value);
    bool get_bEnableCollision();
    void set_bEnableCollision(bool value);
    float& get_CollisionFriction();
    void* get_CableForce();
    float& get_CableGravityScale();
    float& get_CableWidth();
    int32_t& get_NumSides();
    float& get_TileMaterial();
    static _Script_CoreUObject::Class* static_class();
    void SetAttachEndTo(_Script_Engine::Actor* Actor, void* ComponentProperty, void* SocketName);
    void GetCableParticleLocations(void*& Locations);
    _Script_Engine::SceneComponent* GetAttachedComponent();
    _Script_Engine::Actor* GetAttachedActor();
}; // Size: 0xbe0
#pragma pack(pop)
}
