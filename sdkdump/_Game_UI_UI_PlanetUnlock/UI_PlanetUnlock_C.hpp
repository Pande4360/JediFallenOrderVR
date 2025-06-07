#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_RsGameTechRT\RsUiWindow.hpp"
namespace _Script_UMG {
struct WidgetAnimation;
}
namespace _Script_UMG {
struct Image;
}
namespace _Script_UMG {
struct CanvasPanel;
}
namespace _Script_UMG {
struct RetainerBox;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_UMG {
struct TextBlock;
}
namespace _Game_UI_UI_PlanetUnlock {
#pragma pack(push, 1)
struct UI_PlanetUnlock_C : public _Script_RsGameTechRT::RsUiWindow {
    private: char pad_608[0x90]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_FadeIn();
    _Script_UMG::Image*& get_Backing();
    _Script_UMG::Image*& get_Backing2();
    _Script_UMG::Image*& get_BottomHoriz();
    _Script_UMG::CanvasPanel*& get_CanvasPanel_0();
    _Script_UMG::Image*& get_FullCircle();
    _Script_UMG::Image*& get_InnerCircle();
    _Script_UMG::Image*& get_MidCircle();
    _Script_UMG::RetainerBox*& get_RetainerBox_0();
    _Script_UMG::Image*& get_TopHoriz();
    _Script_UMG::TextBlock*& get_TxtAbility();
    _Script_UMG::TextBlock*& get_TxtYouAcquired();
    void* get_PlanetName();
    void* get_LVL_PlanetUnlock_Done();
    static _Script_CoreUObject::Class* static_class();
    void AnimFinished();
    void OnWindowOpened0();
    void ExecuteUbergraph_UI_PlanetUnlock(int32_t EntryPoint);
    void LVL_PlanetUnlock_Done__DelegateSignature();
}; // Size: 0x698
#pragma pack(pop)
}
