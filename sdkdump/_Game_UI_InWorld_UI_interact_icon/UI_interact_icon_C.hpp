#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_UMG {
struct WidgetAnimation;
}
namespace _Script_UMG {
struct CanvasPanel;
}
namespace _Script_UMG {
struct Image;
}
namespace _Script_UMG {
struct Overlay;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_UI_InWorld_UI_interact_icon {
#pragma pack(push, 1)
struct UI_interact_icon_C : public _Script_UMG::UserWidget {
    private: char pad_208[0x1c8]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_Pulse2();
    _Script_UMG::WidgetAnimation*& get_Transition();
    _Script_UMG::WidgetAnimation*& get_Pulse();
    _Script_UMG::CanvasPanel*& get_CanvasPanel_0();
    _Script_UMG::Image*& get_CenterSmall();
    _Script_UMG::Image*& get_DistancePrompt();
    _Script_UMG::Overlay*& get_Far();
    _Script_UMG::Image*& get_Image_0();
    _Script_UMG::Image*& get_Image_1();
    _Script_UMG::Image*& get_Image_2();
    _Script_UMG::Image*& get_Image_3();
    _Script_UMG::Image*& get_InteractPrompt();
    _Script_UMG::Overlay*& get_Near();
    _Script_UMG::Image*& get_Ring();
    void* get_InteractType();
    void* get_TypeToIconMapping();
    void* get_IconMappings();
    int32_t& get_InteractState();
    static _Script_CoreUObject::Class* static_class();
    void* GetVisibility_0();
    void UpdateInteractIconSet(void* NewInteractType);
    void UpdateIcon(int32_t NewState, void* NewInteractType);
    void Construct0();
    void TransitionEvent();
    void ExecuteUbergraph_UI_interact_icon(int32_t EntryPoint);
}; // Size: 0x3d0
#pragma pack(pop)
}
