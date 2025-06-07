#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_RsGameTechRT\RsUiWindow.hpp"
#include "..\_Script_SlateCore\Geometry.hpp"
namespace _Script_UMG {
struct Border;
}
namespace _Script_UMG {
struct Image;
}
namespace _Script_UMG {
struct RetainerBox;
}
namespace _Script_UMG {
struct ScaleBox;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_UI_Map_UI_WorldMapGreeble_Workbench {
#pragma pack(push, 1)
struct UI_WorldMapGreeble_Workbench_C : public _Script_RsGameTechRT::RsUiWindow {
    private: char pad_608[0xc0]; public:
    void* get_UberGraphFrame();
    _Script_UMG::Border*& get_BorderColor();
    _Script_UMG::Image*& get_Image_1();
    _Script_UMG::Image*& get_Img_Additive();
    _Script_UMG::RetainerBox*& get_RetainerBox_0();
    _Script_UMG::ScaleBox*& get_ScaleBox_0();
    _Script_UMG::ScaleBox*& get_Scaler();
    float& get_OrigScale();
    void* get_UnlockableColor();
    void* get_LockedColor();
    bool get_ShouldScale();
    void set_ShouldScale(bool value);
    void* get_UnlockedColor();
    static _Script_CoreUObject::Class* static_class();
    void Construct();
    void Tick(_Script_SlateCore::Geometry MyGeometry, float InDeltaTime);
    void SetScale();
    void SetType_Workbench();
    void ExecuteUbergraph_UI_WorldMapGreeble_Workbench(int32_t EntryPoint);
}; // Size: 0x6c8
#pragma pack(pop)
}
