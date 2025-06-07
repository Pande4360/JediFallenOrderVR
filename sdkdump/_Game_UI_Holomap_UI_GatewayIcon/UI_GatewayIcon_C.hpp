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
struct TextBlock;
}
namespace _Script_UMG {
struct CanvasPanel;
}
namespace _Game_Levels_WorldMap_BP_BP_WorldMapHologram {
struct BP_WorldMapHologram_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_UI_Holomap_UI_GatewayIcon {
#pragma pack(push, 1)
struct UI_GatewayIcon_C : public _Script_RsGameTechRT::RsUiWindow {
    private: char pad_608[0x108]; public:
    void* get_UberGraphFrame();
    _Script_UMG::Image*& get_Background();
    _Script_UMG::TextBlock*& get_DoorType();
    _Script_UMG::Image*& get_Gateway();
    _Script_UMG::CanvasPanel*& get_MainCanvas();
    _Script_UMG::Image*& get_Stem();
    void* get_IconMats();
    void* get_StemMats();
    void* get_EDoorTypes();
    void* get_StyleSheet();
    _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C*& get_HolomapRef();
    static _Script_CoreUObject::Class* static_class();
    void HandleDoorLabels(void* InText);
    void CreateSavePointIconWidget();
    void CreateMissionObjectiveIconWidtget();
    void CreateDeathLocationIconWidget();
    void CreateOneWay();
    void CreateDroidHack();
    void CreateDroidOvercharge();
    void Construct();
    void CreateWorldMapIconWidget(void* IconType);
    void CustomEvent_0();
    void Tick(_Script_SlateCore::Geometry MyGeometry, float InDeltaTime);
    void CreateForcePush();
    void CreateForcePull();
    void CreateForceTele();
    void CreateForceSlow();
    void ExecuteUbergraph_UI_GatewayIcon(int32_t EntryPoint);
}; // Size: 0x710
#pragma pack(pop)
}
