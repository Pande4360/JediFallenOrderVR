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
namespace _Game_Models_FightClub_Props_containers_Container_Blueprint_Var4 {
#pragma pack(push, 1)
struct Container_Blueprint_Var4_C : public _Script_Engine::Actor {
    private: char pad_360[0x58]; public:
    _Script_Engine::StaticMeshComponent*& get_StaticMeshComponent09();
    _Script_Engine::StaticMeshComponent*& get_StaticMeshComponent08();
    _Script_Engine::StaticMeshComponent*& get_StaticMeshComponent07();
    _Script_Engine::StaticMeshComponent*& get_StaticMeshComponent06();
    _Script_Engine::StaticMeshComponent*& get_StaticMeshComponent05();
    _Script_Engine::StaticMeshComponent*& get_StaticMeshComponent04();
    _Script_Engine::StaticMeshComponent*& get_StaticMeshComponent03();
    _Script_Engine::StaticMeshComponent*& get_StaticMeshComponent02();
    _Script_Engine::StaticMeshComponent*& get_StaticMeshComponent01();
    _Script_Engine::StaticMeshComponent*& get_StaticMeshComponent0();
    _Script_Engine::SceneComponent*& get_SharedRoot();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript0();
}; // Size: 0x3b8
#pragma pack(pop)
}
