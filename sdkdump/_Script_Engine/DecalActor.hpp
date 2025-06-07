#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "Actor.hpp"
namespace _Script_Engine {
struct DecalComponent;
}
namespace _Script_Engine {
struct MaterialInstanceDynamic;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct MaterialInterface;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct DecalActor : public Actor {
    private: char pad_360[0x8]; public:
    _Script_Engine::DecalComponent*& get_Decal();
    static _Script_CoreUObject::Class* static_class();
    void SetDecalMaterial(_Script_Engine::MaterialInterface* NewDecalMaterial);
    _Script_Engine::MaterialInterface* GetDecalMaterial();
    _Script_Engine::MaterialInstanceDynamic* CreateDynamicMaterialInstance();
}; // Size: 0x368
#pragma pack(pop)
}
