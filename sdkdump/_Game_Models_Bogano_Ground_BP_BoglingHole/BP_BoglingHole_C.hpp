#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Models_Bogano_Ground_BP_BoglingHole {
#pragma pack(push, 1)
struct BP_BoglingHole_C : public _Script_Engine::Actor {
    private: char pad_360[0x10]; public:
    _Script_Engine::StaticMeshComponent*& get_StaticMesh();
    _Script_Engine::SceneComponent*& get_DefaultSceneRoot();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript0();
}; // Size: 0x370
#pragma pack(pop)
}
