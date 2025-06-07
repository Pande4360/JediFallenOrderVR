#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_Engine {
struct BoxComponent;
}
namespace _Script_Engine {
struct SceneCaptureComponent2D;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct MaterialInstanceDynamic;
}
namespace _Game_TechArt_Heightmaps_HeightmapCapture {
#pragma pack(push, 1)
struct HeightmapCapture_C : public _Script_Engine::Actor {
    private: char pad_360[0x60]; public:
    _Script_Engine::BoxComponent*& get_Box();
    _Script_Engine::SceneCaptureComponent2D*& get_SceneCaptureComponent2D();
    _Script_Engine::SceneComponent*& get_ScaleRoot();
    _Script_Engine::SceneComponent*& get_DefaultSceneRoot();
    void* get_M0();
    void* get_M1();
    void* get_M2();
    void* get_M3();
    static _Script_CoreUObject::Class* static_class();
    void SetMaterialParameters(_Script_Engine::MaterialInstanceDynamic* NewParam);
    void UserConstructionScript0();
}; // Size: 0x3c0
#pragma pack(pop)
}
