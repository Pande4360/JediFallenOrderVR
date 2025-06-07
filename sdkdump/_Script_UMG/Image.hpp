#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "..\_Script_SlateCore\SlateColor.hpp"
#include "Widget.hpp"
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
struct Texture2DDynamic;
}
namespace _Script_SlateCore {
struct SlateBrush;
}
namespace _Script_Engine {
struct Texture2D;
}
namespace _Script_Engine {
struct MaterialInstanceDynamic;
}
namespace _Script_UMG {
#pragma pack(push, 1)
struct Image : public Widget {
    private: char pad_100[0xe8]; public:
    void* get_Brush();
    void* get_BrushDelegate();
    void* get_ColorAndOpacity();
    void* get_ColorAndOpacityDelegate();
    void* get_OnMouseButtonDownEvent();
    static _Script_CoreUObject::Class* static_class();
    void SetOpacity(float InOpacity);
    void SetColorAndOpacity(_Script_CoreUObject::LinearColor InColorAndOpacity);
    void SetBrushTintColor(_Script_SlateCore::SlateColor TintColor);
    void SetBrushSize(_Script_CoreUObject::Vector2D DesiredSize);
    void SetBrushFromTextureDynamic(_Script_Engine::Texture2DDynamic* Texture, bool bMatchSize);
    void SetBrushFromTexture(_Script_Engine::Texture2D* Texture, bool bMatchSize);
    void SetBrushFromSoftTexture(void* SoftTexture, bool bMatchSize);
    void SetBrushFromMaterial(_Script_Engine::MaterialInterface* Material);
    void SetBrushFromAtlasInterface(void* AtlasRegion, bool bMatchSize);
    void SetBrushFromAsset(_Script_Engine::SlateBrushAsset* Asset);
    void SetBrush(_Script_SlateCore::SlateBrush& InBrush);
    _Script_Engine::MaterialInstanceDynamic* GetDynamicMaterial();
}; // Size: 0x1e8
#pragma pack(pop)
}
