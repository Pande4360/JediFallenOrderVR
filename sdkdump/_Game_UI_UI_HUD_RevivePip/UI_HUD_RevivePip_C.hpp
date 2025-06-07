#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_UMG {
struct Image;
}
namespace _Script_UMG {
struct CanvasPanel;
}
namespace _Script_UMG {
struct TextBlock;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_UI_UI_HUD_RevivePip {
#pragma pack(push, 1)
struct UI_HUD_RevivePip_C : public _Script_UMG::UserWidget {
    private: char pad_208[0x38]; public:
    void* get_UberGraphFrame();
    _Script_UMG::Image*& get_base();
    _Script_UMG::Image*& get_Fill();
    _Script_UMG::CanvasPanel*& get_ReviveCanvas();
    _Script_UMG::Image*& get_Rim();
    _Script_UMG::TextBlock*& get_TotalRevivesText();
    int32_t& get_TotalRevives();
    static _Script_CoreUObject::Class* static_class();
    void* Get_TotalRevives_Text_0();
    void SetEquipped(bool IsEquipped, int32_t TotalRevives);
    void Collapse();
    void ExecuteUbergraph_UI_HUD_RevivePip(int32_t EntryPoint);
}; // Size: 0x240
#pragma pack(pop)
}
