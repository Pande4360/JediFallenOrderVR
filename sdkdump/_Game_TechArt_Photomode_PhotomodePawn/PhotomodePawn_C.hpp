#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\SpectatorPawn.hpp"
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_TechArt_Photomode_PhotomodePawn {
#pragma pack(push, 1)
struct PhotomodePawn_C : public _Script_Engine::SpectatorPawn {
    private: char pad_3e8[0x28]; public:
    void* get_UberGraphFrame();
    _Script_Engine::StaticMeshComponent*& get_FocusPlaneMesh();
    _Script_Engine::SceneComponent*& get_RotationComponent();
    float& get_MaxCameraDistance();
    void* get_BaseLocation();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_PhotomodePawn(int32_t EntryPoint);
}; // Size: 0x410
#pragma pack(pop)
}
