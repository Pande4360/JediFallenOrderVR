#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_RsGameTechRT\RsAIPOI.hpp"
namespace _Script_RsGameTechRT {
struct RsAIPOIRenderComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct BillboardComponent;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_Engine {
struct SphereComponent;
}
namespace _Script_Engine {
struct ArrowComponent;
}
namespace _Game_WorldInteracts_AI_BP_POI {
#pragma pack(push, 1)
struct BP_POI_C : public _Script_RsGameTechRT::RsAIPOI {
    private: char pad_570[0x38]; public:
    void* get_UberGraphFrame();
    _Script_RsGameTechRT::RsAIPOIRenderComponent*& get_RsAIPOIRender();
    _Script_Engine::BillboardComponent*& get_Billboard_Broadcast();
    _Script_Engine::SceneComponent*& get_Scene();
    _Script_Engine::SphereComponent*& get_Radius_EditorOnly();
    _Script_Engine::ArrowComponent*& get_SyncLocation();
    _Script_Engine::BillboardComponent*& get_Billboard();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_POI(int32_t EntryPoint);
}; // Size: 0x5a8
#pragma pack(pop)
}
