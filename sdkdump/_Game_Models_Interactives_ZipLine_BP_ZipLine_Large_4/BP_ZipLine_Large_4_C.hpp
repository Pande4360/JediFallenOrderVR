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
namespace _Game_Models_Interactives_ZipLine_BP_ZipLine_Large_4 {
#pragma pack(push, 1)
struct BP_ZipLine_Large_4_C : public _Script_Engine::Actor {
    private: char pad_360[0x30]; public:
    _Script_Engine::StaticMeshComponent*& get_Zipline_polySurface541();
    _Script_Engine::StaticMeshComponent*& get_Zipline_polySurface542();
    _Script_Engine::StaticMeshComponent*& get_Zipline_polySurface492();
    _Script_Engine::StaticMeshComponent*& get_Zipline_polySurface571();
    _Script_Engine::StaticMeshComponent*& get_Zipline_polySurface608();
    _Script_Engine::SceneComponent*& get_DefaultSceneRoot();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript0();
}; // Size: 0x390
#pragma pack(pop)
}
