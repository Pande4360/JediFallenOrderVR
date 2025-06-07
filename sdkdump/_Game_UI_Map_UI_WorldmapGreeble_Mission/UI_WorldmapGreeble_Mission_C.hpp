#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_RsGameTechRT\RsUiWindow.hpp"
#include "..\_Script_SlateCore\Geometry.hpp"
namespace _Script_UMG {
struct WidgetAnimation;
}
namespace _Script_UMG {
struct Image;
}
namespace _Script_UMG {
struct ScaleBox;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Levels_WorldMap_BP_BP_WorldMapHologram {
struct BP_WorldMapHologram_C;
}
namespace _Game_UI_Map_UI_WorldmapGreeble_Mission {
#pragma pack(push, 1)
struct UI_WorldmapGreeble_Mission_C : public _Script_RsGameTechRT::RsUiWindow {
    private: char pad_608[0x30]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_Blink();
    _Script_UMG::Image*& get_Greeble();
    _Script_UMG::ScaleBox*& get_Scaler();
    float& get_OrigScale();
    _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C*& get_HologramActor();
    static _Script_CoreUObject::Class* static_class();
    void PreConstruct(bool IsDesignTime);
    void Tick(_Script_SlateCore::Geometry MyGeometry, float InDeltaTime);
    void SetScale();
    void ExecuteUbergraph_UI_WorldmapGreeble_Mission(int32_t EntryPoint);
}; // Size: 0x638
#pragma pack(pop)
}
