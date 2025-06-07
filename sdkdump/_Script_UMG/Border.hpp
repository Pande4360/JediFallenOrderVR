#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "..\_Script_SlateCore\Margin.hpp"
#include "ContentWidget.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct MaterialInterface;
}
namespace _Script_Engine {
struct SlateBrushAsset;
}
namespace _Script_Engine {
struct Texture2D;
}
namespace _Script_SlateCore {
struct SlateBrush;
}
namespace _Script_Engine {
struct MaterialInstanceDynamic;
}
namespace _Script_UMG {
#pragma pack(push, 1)
struct Border : public ContentWidget {
    private: char pad_118[0x148]; public:
    void* get_HorizontalAlignment();
    void* get_VerticalAlignment();
    bool get_bShowEffectWhenDisabled();
    void set_bShowEffectWhenDisabled(bool value);
    void* get_ContentColorAndOpacity();
    void* get_ContentColorAndOpacityDelegate();
    void* get_Padding();
    void* get_Background();
    void* get_BackgroundDelegate();
    void* get_BrushColor();
    void* get_BrushColorDelegate();
    void* get_DesiredSizeScale();
    void* get_OnMouseButtonDownEvent();
    void* get_OnMouseButtonUpEvent();
    void* get_OnMouseMoveEvent();
    void* get_OnMouseDoubleClickEvent();
    static _Script_CoreUObject::Class* static_class();
    void SetVerticalAlignment(void* InVerticalAlignment);
    void SetPadding(_Script_SlateCore::Margin InPadding);
    void SetHorizontalAlignment(void* InHorizontalAlignment);
    void SetDesiredSizeScale(_Script_CoreUObject::Vector2D InScale);
    void SetContentColorAndOpacity(_Script_CoreUObject::LinearColor InContentColorAndOpacity);
    void SetBrushFromTexture(_Script_Engine::Texture2D* Texture);
    void SetBrushFromMaterial(_Script_Engine::MaterialInterface* Material);
    void SetBrushFromAsset(_Script_Engine::SlateBrushAsset* Asset);
    void SetBrushColor(_Script_CoreUObject::LinearColor InBrushColor);
    void SetBrush(_Script_SlateCore::SlateBrush& InBrush);
    _Script_Engine::MaterialInstanceDynamic* GetDynamicMaterial();
}; // Size: 0x260
#pragma pack(pop)
}
