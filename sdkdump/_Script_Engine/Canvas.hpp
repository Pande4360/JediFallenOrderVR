#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
namespace _Script_Engine {
struct Texture2D;
}
namespace _Script_Engine {
struct Texture;
}
namespace _Script_Engine {
struct ReporterGraph;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct MaterialInterface;
}
namespace _Script_Engine {
struct Font;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct Canvas : public _Script_CoreUObject::Object {
    private: char pad_28[0x2a8]; public:
    float& get_OrgX();
    float& get_OrgY();
    float& get_ClipX();
    float& get_ClipY();
    void* get_DrawColor();
    bool get_bCenterX();
    void set_bCenterX(bool value);
    bool get_bCenterY();
    void set_bCenterY(bool value);
    bool get_bNoSmooth();
    void set_bNoSmooth(bool value);
    int32_t& get_SizeX();
    int32_t& get_SizeY();
    void* get_ColorModulate();
    _Script_Engine::Texture2D*& get_DefaultTexture();
    _Script_Engine::Texture2D*& get_GradientTexture0();
    _Script_Engine::ReporterGraph*& get_ReporterGraph();
    static _Script_CoreUObject::Class* static_class();
    _Script_CoreUObject::Vector2D K2_TextSize(_Script_Engine::Font* RenderFont, void* RenderText, _Script_CoreUObject::Vector2D Scale);
    _Script_CoreUObject::Vector2D K2_StrLen(_Script_Engine::Font* RenderFont, void* RenderText);
    _Script_CoreUObject::Vector K2_Project(_Script_CoreUObject::Vector WorldLocation);
    void K2_DrawTriangle(_Script_Engine::Texture* RenderTexture, void* Triangles);
    void K2_DrawTexture(_Script_Engine::Texture* RenderTexture, _Script_CoreUObject::Vector2D ScreenPosition, _Script_CoreUObject::Vector2D ScreenSize, _Script_CoreUObject::Vector2D CoordinatePosition, _Script_CoreUObject::Vector2D CoordinateSize, _Script_CoreUObject::LinearColor RenderColor, void* BlendMode, float Rotation, _Script_CoreUObject::Vector2D PivotPoint);
    void K2_DrawText(_Script_Engine::Font* RenderFont, void* RenderText, _Script_CoreUObject::Vector2D ScreenPosition, _Script_CoreUObject::Vector2D Scale, _Script_CoreUObject::LinearColor RenderColor, float Kerning, _Script_CoreUObject::LinearColor ShadowColor, _Script_CoreUObject::Vector2D ShadowOffset, bool bCentreX, bool bCentreY, bool bOutlined, _Script_CoreUObject::LinearColor OutlineColor);
    void K2_DrawPolygon(_Script_Engine::Texture* RenderTexture, _Script_CoreUObject::Vector2D ScreenPosition, _Script_CoreUObject::Vector2D Radius, int32_t NumberOfSides, _Script_CoreUObject::LinearColor RenderColor);
    void K2_DrawMaterialTriangle(_Script_Engine::MaterialInterface* RenderMaterial, void* Triangles);
    void K2_DrawMaterial(_Script_Engine::MaterialInterface* RenderMaterial, _Script_CoreUObject::Vector2D ScreenPosition, _Script_CoreUObject::Vector2D ScreenSize, _Script_CoreUObject::Vector2D CoordinatePosition, _Script_CoreUObject::Vector2D CoordinateSize, float Rotation, _Script_CoreUObject::Vector2D PivotPoint);
    void K2_DrawLine(_Script_CoreUObject::Vector2D ScreenPositionA, _Script_CoreUObject::Vector2D ScreenPositionB, float Thickness, _Script_CoreUObject::LinearColor RenderColor);
    void K2_DrawBox(_Script_CoreUObject::Vector2D ScreenPosition, _Script_CoreUObject::Vector2D ScreenSize, float Thickness, _Script_CoreUObject::LinearColor RenderColor);
    void K2_DrawBorder(_Script_Engine::Texture* BorderTexture, _Script_Engine::Texture* BackgroundTexture, _Script_Engine::Texture* LeftBorderTexture, _Script_Engine::Texture* RightBorderTexture, _Script_Engine::Texture* TopBorderTexture, _Script_Engine::Texture* BottomBorderTexture, _Script_CoreUObject::Vector2D ScreenPosition, _Script_CoreUObject::Vector2D ScreenSize, _Script_CoreUObject::Vector2D CoordinatePosition, _Script_CoreUObject::Vector2D CoordinateSize, _Script_CoreUObject::LinearColor RenderColor, _Script_CoreUObject::Vector2D BorderScale, _Script_CoreUObject::Vector2D BackgroundScale, float Rotation, _Script_CoreUObject::Vector2D PivotPoint, _Script_CoreUObject::Vector2D CornerSize);
    void K2_Deproject(_Script_CoreUObject::Vector2D ScreenPosition, _Script_CoreUObject::Vector& WorldOrigin, _Script_CoreUObject::Vector& WorldDirection);
}; // Size: 0x2d0
#pragma pack(pop)
}
