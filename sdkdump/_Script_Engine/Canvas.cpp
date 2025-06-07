#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "Canvas.hpp"
#include "Font.hpp"
#include "MaterialInterface.hpp"
#include "ReporterGraph.hpp"
#include "Texture.hpp"
#include "Texture2D.hpp"
float& _Script_Engine::Canvas::get_OrgX() {
    return *(float*)((uintptr_t)this + 0x28);
}
bool _Script_Engine::Canvas::get_bCenterX() {
    return (*(uint8_t*)((uintptr_t)this + 0x3c + 0)) & 1 != 0;
}
void _Script_Engine::Canvas::K2_DrawTexture(_Script_Engine::Texture* RenderTexture, _Script_CoreUObject::Vector2D ScreenPosition, _Script_CoreUObject::Vector2D ScreenSize, _Script_CoreUObject::Vector2D CoordinatePosition, _Script_CoreUObject::Vector2D CoordinateSize, _Script_CoreUObject::LinearColor RenderColor, void* BlendMode, float Rotation, _Script_CoreUObject::Vector2D PivotPoint) {
    return;
}
float& _Script_Engine::Canvas::get_OrgY() {
    return *(float*)((uintptr_t)this + 0x2c);
}
float& _Script_Engine::Canvas::get_ClipX() {
    return *(float*)((uintptr_t)this + 0x30);
}
float& _Script_Engine::Canvas::get_ClipY() {
    return *(float*)((uintptr_t)this + 0x34);
}
bool _Script_Engine::Canvas::get_bCenterY() {
    return (*(uint8_t*)((uintptr_t)this + 0x3c + 0)) & 2 != 0;
}
void* _Script_Engine::Canvas::get_DrawColor() {
    return (void*)((uintptr_t)this + 0x38);
}
void _Script_Engine::Canvas::set_bCenterX(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3c + 0);
    *(uint8_t*)((uintptr_t)this + 0x3c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::Canvas::set_bCenterY(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3c + 0);
    *(uint8_t*)((uintptr_t)this + 0x3c + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::Canvas::get_bNoSmooth() {
    return (*(uint8_t*)((uintptr_t)this + 0x3c + 0)) & 4 != 0;
}
void _Script_Engine::Canvas::set_bNoSmooth(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3c + 0);
    *(uint8_t*)((uintptr_t)this + 0x3c + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
int32_t& _Script_Engine::Canvas::get_SizeX() {
    return *(int32_t*)((uintptr_t)this + 0x40);
}
int32_t& _Script_Engine::Canvas::get_SizeY() {
    return *(int32_t*)((uintptr_t)this + 0x44);
}
void* _Script_Engine::Canvas::get_ColorModulate() {
    return (void*)((uintptr_t)this + 0x50);
}
_Script_Engine::Texture2D*& _Script_Engine::Canvas::get_DefaultTexture() {
    return *(_Script_Engine::Texture2D**)((uintptr_t)this + 0x60);
}
_Script_Engine::Texture2D*& _Script_Engine::Canvas::get_GradientTexture0() {
    return *(_Script_Engine::Texture2D**)((uintptr_t)this + 0x68);
}
_Script_Engine::ReporterGraph*& _Script_Engine::Canvas::get_ReporterGraph() {
    return *(_Script_Engine::ReporterGraph**)((uintptr_t)this + 0x70);
}
_Script_CoreUObject::Class* _Script_Engine::Canvas::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.Canvas");
    return result;
}
_Script_CoreUObject::Vector2D _Script_Engine::Canvas::K2_StrLen(_Script_Engine::Font* RenderFont, void* RenderText) {
    return;
}
_Script_CoreUObject::Vector2D _Script_Engine::Canvas::K2_TextSize(_Script_Engine::Font* RenderFont, void* RenderText, _Script_CoreUObject::Vector2D Scale) {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::Canvas::K2_Project(_Script_CoreUObject::Vector WorldLocation) {
    return;
}
void _Script_Engine::Canvas::K2_DrawTriangle(_Script_Engine::Texture* RenderTexture, void* Triangles) {
    return;
}
void _Script_Engine::Canvas::K2_DrawText(_Script_Engine::Font* RenderFont, void* RenderText, _Script_CoreUObject::Vector2D ScreenPosition, _Script_CoreUObject::Vector2D Scale, _Script_CoreUObject::LinearColor RenderColor, float Kerning, _Script_CoreUObject::LinearColor ShadowColor, _Script_CoreUObject::Vector2D ShadowOffset, bool bCentreX, bool bCentreY, bool bOutlined, _Script_CoreUObject::LinearColor OutlineColor) {
    return;
}
void _Script_Engine::Canvas::K2_DrawPolygon(_Script_Engine::Texture* RenderTexture, _Script_CoreUObject::Vector2D ScreenPosition, _Script_CoreUObject::Vector2D Radius, int32_t NumberOfSides, _Script_CoreUObject::LinearColor RenderColor) {
    return;
}
void _Script_Engine::Canvas::K2_DrawMaterialTriangle(_Script_Engine::MaterialInterface* RenderMaterial, void* Triangles) {
    return;
}
void _Script_Engine::Canvas::K2_DrawMaterial(_Script_Engine::MaterialInterface* RenderMaterial, _Script_CoreUObject::Vector2D ScreenPosition, _Script_CoreUObject::Vector2D ScreenSize, _Script_CoreUObject::Vector2D CoordinatePosition, _Script_CoreUObject::Vector2D CoordinateSize, float Rotation, _Script_CoreUObject::Vector2D PivotPoint) {
    return;
}
void _Script_Engine::Canvas::K2_DrawLine(_Script_CoreUObject::Vector2D ScreenPositionA, _Script_CoreUObject::Vector2D ScreenPositionB, float Thickness, _Script_CoreUObject::LinearColor RenderColor) {
    return;
}
void _Script_Engine::Canvas::K2_DrawBox(_Script_CoreUObject::Vector2D ScreenPosition, _Script_CoreUObject::Vector2D ScreenSize, float Thickness, _Script_CoreUObject::LinearColor RenderColor) {
    return;
}
void _Script_Engine::Canvas::K2_DrawBorder(_Script_Engine::Texture* BorderTexture, _Script_Engine::Texture* BackgroundTexture, _Script_Engine::Texture* LeftBorderTexture, _Script_Engine::Texture* RightBorderTexture, _Script_Engine::Texture* TopBorderTexture, _Script_Engine::Texture* BottomBorderTexture, _Script_CoreUObject::Vector2D ScreenPosition, _Script_CoreUObject::Vector2D ScreenSize, _Script_CoreUObject::Vector2D CoordinatePosition, _Script_CoreUObject::Vector2D CoordinateSize, _Script_CoreUObject::LinearColor RenderColor, _Script_CoreUObject::Vector2D BorderScale, _Script_CoreUObject::Vector2D BackgroundScale, float Rotation, _Script_CoreUObject::Vector2D PivotPoint, _Script_CoreUObject::Vector2D CornerSize) {
    return;
}
void _Script_Engine::Canvas::K2_Deproject(_Script_CoreUObject::Vector2D ScreenPosition, _Script_CoreUObject::Vector& WorldOrigin, _Script_CoreUObject::Vector& WorldDirection) {
    return;
}
