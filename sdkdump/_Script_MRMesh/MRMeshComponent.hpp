#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\PrimitiveComponent.hpp"
namespace _Script_Engine {
struct MaterialInterface;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MRMesh {
#pragma pack(push, 1)
struct MRMeshComponent : public _Script_Engine::PrimitiveComponent {
    private: char pad_b30[0x40]; public:
    _Script_Engine::MaterialInterface*& get_Material();
    bool get_bCreateMeshProxySections();
    void set_bCreateMeshProxySections(bool value);
    bool get_bUpdateNavMeshOnMeshUpdate();
    void set_bUpdateNavMeshOnMeshUpdate(bool value);
    void* get_BodySetups();
    static _Script_CoreUObject::Class* static_class();
    bool IsConnected();
    void ForceNavMeshUpdate();
    void Clear();
}; // Size: 0xb70
#pragma pack(pop)
}
