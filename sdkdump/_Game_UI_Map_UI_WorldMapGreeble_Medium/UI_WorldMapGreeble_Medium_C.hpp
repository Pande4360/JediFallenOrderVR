#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_RsGameTechRT\RsUiWindow.hpp"
#include "..\_Script_SlateCore\Geometry.hpp"
namespace _Script_UMG {
struct Image;
}
namespace _Script_UMG {
struct ScaleBox;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
struct RsWorldMapHologramBase;
}
namespace _Game_UI_Map_UI_WorldMapGreeble_Medium {
#pragma pack(push, 1)
struct UI_WorldMapGreeble_Medium_C : public _Script_RsGameTechRT::RsUiWindow {
    private: char pad_608[0x30]; public:
    void* get_UberGraphFrame();
    _Script_UMG::Image*& get_Greeble();
    _Script_UMG::ScaleBox*& get_Scaler();
    _Script_RsGameTechRT::RsWorldMapHologramBase*& get_HologramActor();
    float& get_OrigScale();
    float& get_OrigX();
    float& get_OrigScale2();
    static _Script_CoreUObject::Class* static_class();
    void Construct();
    void Tick(_Script_SlateCore::Geometry MyGeometry, float InDeltaTime);
    void SetScale();
    void ExecuteUbergraph_UI_WorldMapGreeble_Medium(int32_t EntryPoint);
}; // Size: 0x638
#pragma pack(pop)
}
