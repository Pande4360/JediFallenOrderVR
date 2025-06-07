#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_SlateCore\Geometry.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_UMG {
struct WidgetAnimation;
}
namespace _Script_UMG {
struct TextBlock;
}
namespace _Script_UMG {
struct Spacer;
}
namespace _Game_UI_Map_MapReticule_UI_mapreticule_triangle {
struct UI_mapreticule_triangle_C;
}
namespace _Script_UMG {
struct Image;
}
namespace _Script_UMG {
struct Border;
}
namespace _Script_UMG {
struct UniformGridPanel;
}
namespace _Script_UMG {
struct RetainerBox;
}
namespace _Script_UMG {
struct CanvasPanelSlot;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_UI_3DMap_UI_MapCursorGalaxy {
#pragma pack(push, 1)
struct UI_MapCursorGalaxy_C : public _Script_UMG::UserWidget {
    private: char pad_208[0x298]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_NewSelection();
    _Script_UMG::WidgetAnimation*& get_ElevationControlsTutorial();
    _Script_UMG::Spacer*& get_BracketSpacer();
    _Script_UMG::Image*& get_DashedRing();
    _Script_UMG::Border*& get_GalaxyTarget();
    _Script_UMG::UniformGridPanel*& get_GalaxyZoomContainer();
    _Script_UMG::Spacer*& get_GalaxyZoomSpacer();
    _Script_UMG::Image*& get_Graphs();
    _Script_UMG::Image*& get_Image_2();
    _Script_UMG::Image*& get_Image_3();
    _Script_UMG::Image*& get_l_bracket();
    _Script_UMG::Image*& get_Medical();
    _Script_UMG::Image*& get_nottoscale();
    _Script_UMG::UniformGridPanel*& get_PlanetFlyoutAurebesh();
    _Script_UMG::TextBlock*& get_PlanetNameAurebesh();
    _Script_UMG::Image*& get_ProgressCircle();
    _Script_UMG::Image*& get_r_bracket();
    _Script_UMG::RetainerBox*& get_RetainerBox_0();
    _Script_UMG::Spacer*& get_TriangleSpacer1();
    _Script_UMG::Spacer*& get_TriangleSpacer2();
    _Game_UI_Map_MapReticule_UI_mapreticule_triangle::UI_mapreticule_triangle_C*& get_UI_mapreticule_triangle();
    _Game_UI_Map_MapReticule_UI_mapreticule_triangle::UI_mapreticule_triangle_C*& get_UI_mapreticule_triangle_1();
    _Game_UI_Map_MapReticule_UI_mapreticule_triangle::UI_mapreticule_triangle_C*& get_UI_mapreticule_triangle_5();
    _Game_UI_Map_MapReticule_UI_mapreticule_triangle::UI_mapreticule_triangle_C*& get_UI_mapreticule_triangle_6();
    float& get_hSpace();
    float& get_vSpace();
    float& get_ZoomScaleMultiplier();
    float& get_InitialZoomValue();
    int32_t& get_TotalLevels();
    int32_t& get_Current_Level();
    float& get_PaddingValue();
    float& get_SpacerSize();
    void* get_StyleSheet();
    void* get_SelectedRegion();
    int32_t& get_RegionCompletionPercent();
    bool get_IsGalaxy();
    void set_IsGalaxy(bool value);
    float& get_GalaxyScaleUpperBound();
    _Script_UMG::CanvasPanelSlot*& get_FlyoutCanvasSlotRef();
    bool get_IsNewPlanetHighlighted();
    void set_IsNewPlanetHighlighted(bool value);
    void* get_PlanetNameUnlocalized();
    static _Script_CoreUObject::Class* static_class();
    void PreConstruct0(bool IsDesignTime);
    void Construct0();
    void Tick0(_Script_SlateCore::Geometry MyGeometry, float InDeltaTime);
    void NewPlanetSelected(void* PlanetNameUnlocalized);
    void UpdateProgressCircle(float Progress);
    void ExecuteUbergraph_UI_MapCursorGalaxy(int32_t EntryPoint);
}; // Size: 0x4a0
#pragma pack(pop)
}
