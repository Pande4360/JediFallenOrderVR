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
struct TextBlock;
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
namespace _Game_UI_UI_HUD_ROOT {
struct UI_HUD_ROOT_C;
}
namespace _Game_UI_Map_UI_MapGreeble_Tutorial {
#pragma pack(push, 1)
struct UI_MapGreeble_Tutorial_C : public _Script_RsGameTechRT::RsUiWindow {
    private: char pad_608[0x50]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_WipeIn();
    _Script_UMG::TextBlock*& get_GreebleTxt();
    _Script_UMG::RetainerBox*& get_LabelContainer();
    _Script_UMG::ScaleBox*& get_Scaler();
    float& get_OrigScale();
    void* get_LabelText();
    _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C*& get_HUD_Ref();
    static _Script_CoreUObject::Class* static_class();
    void Construct();
    void Tick(_Script_SlateCore::Geometry MyGeometry, float InDeltaTime);
    void SetScale();
    void SetLabelText(void* InText);
    void ExecuteUbergraph_UI_MapGreeble_Tutorial(int32_t EntryPoint);
}; // Size: 0x658
#pragma pack(pop)
}
