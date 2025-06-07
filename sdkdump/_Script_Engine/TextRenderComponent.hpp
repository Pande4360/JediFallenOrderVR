#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Color.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "PrimitiveComponent.hpp"
namespace _Script_Engine {
struct MaterialInterface;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct Font;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct TextRenderComponent : public PrimitiveComponent {
    private: char pad_b30[0x50]; public:
    void* get_Text();
    _Script_Engine::MaterialInterface*& get_TextMaterial();
    _Script_Engine::Font*& get_Font();
    void* get_HorizontalAlignment();
    void* get_VerticalAlignment();
    void* get_TextRenderColor();
    float& get_XScale();
    float& get_YScale();
    float& get_WorldSize();
    float& get_InvDefaultSize();
    float& get_HorizSpacingAdjust();
    float& get_VertSpacingAdjust();
    bool get_bAlwaysRenderAsText();
    void set_bAlwaysRenderAsText(bool value);
    static _Script_CoreUObject::Class* static_class();
    void SetYScale(float Value);
    void SetXScale(float Value);
    void SetWorldSize(float Value);
    void SetVertSpacingAdjust(float Value);
    void SetVerticalAlignment(void* Value);
    void SetTextRenderColor(_Script_CoreUObject::Color Value);
    void SetTextMaterial(_Script_Engine::MaterialInterface* Material);
    void SetText(void* Value);
    void SetHorizSpacingAdjust(float Value);
    void SetHorizontalAlignment(void* Value);
    void SetFont(_Script_Engine::Font* Value);
    void K2_SetText(void*& Value);
    _Script_CoreUObject::Vector GetTextWorldSize();
    _Script_CoreUObject::Vector GetTextLocalSize();
}; // Size: 0xb80
#pragma pack(pop)
}
