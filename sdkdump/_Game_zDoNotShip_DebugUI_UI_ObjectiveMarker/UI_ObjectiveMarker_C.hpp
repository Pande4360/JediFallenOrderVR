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
struct Image;
}
namespace _Script_UMG {
struct TextBlock;
}
namespace _Game_UI_Map_MapObjective {
struct MapObjective_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_zDoNotShip_DebugUI_UI_ObjectiveMarker {
#pragma pack(push, 1)
struct UI_ObjectiveMarker_C : public _Script_UMG::UserWidget {
    private: char pad_208[0x28]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_NewAnimation_2();
    _Script_UMG::Image*& get_Image_83();
    _Script_UMG::TextBlock*& get_TextBlock_265();
    _Game_UI_Map_MapObjective::MapObjective_C*& get_objective();
    static _Script_CoreUObject::Class* static_class();
    void* GetText_1();
    void Tick0(_Script_SlateCore::Geometry MyGeometry, float InDeltaTime);
    void Activate(_Game_UI_Map_MapObjective::MapObjective_C* objective);
    void ExecuteUbergraph_UI_ObjectiveMarker(int32_t EntryPoint);
}; // Size: 0x230
#pragma pack(pop)
}
