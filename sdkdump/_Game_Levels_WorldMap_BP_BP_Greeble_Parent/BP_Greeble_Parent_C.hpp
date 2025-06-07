#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_RsGameTechRT\RsWorldMapActor.hpp"
namespace _Script_Engine {
struct BillboardComponent;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Game_Levels_WorldMap_BP_BP_WorldMapHologram {
struct BP_WorldMapHologram_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Levels_WorldMap_BP_BP_Greeble_Parent {
#pragma pack(push, 1)
struct BP_Greeble_Parent_C : public _Script_RsGameTechRT::RsWorldMapActor {
    private: char pad_368[0x30]; public:
    void* get_UberGraphFrame();
    _Script_Engine::BillboardComponent*& get_EditorOnly();
    _Script_Engine::SceneComponent*& get_Scene();
    bool get_AlwaysVisible_();
    void set_AlwaysVisible_(bool value);
    void* get_WidgetType();
    _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C*& get_WorldMapHologram_Ref();
    void* get_Planet();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void SetVisible0();
    void ExecuteUbergraph_BP_Greeble_Parent(int32_t EntryPoint);
}; // Size: 0x398
#pragma pack(pop)
}
