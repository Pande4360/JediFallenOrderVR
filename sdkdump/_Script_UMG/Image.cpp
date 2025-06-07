#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "..\_Script_Engine\MaterialInstanceDynamic.hpp"
#include "..\_Script_Engine\MaterialInterface.hpp"
#include "..\_Script_Engine\SlateBrushAsset.hpp"
#include "..\_Script_Engine\Texture2D.hpp"
#include "..\_Script_Engine\Texture2DDynamic.hpp"
#include "..\_Script_SlateCore\SlateBrush.hpp"
#include "..\_Script_SlateCore\SlateColor.hpp"
#include "Image.hpp"
#include "Widget.hpp"
void _Script_UMG::Image::SetOpacity(float InOpacity) {
    return;
}
void* _Script_UMG::Image::get_Brush() {
    return (void*)((uintptr_t)this + 0x100);
}
void* _Script_UMG::Image::get_ColorAndOpacity() {
    return (void*)((uintptr_t)this + 0x198);
}
void* _Script_UMG::Image::get_BrushDelegate() {
    return (void*)((uintptr_t)this + 0x188);
}
void* _Script_UMG::Image::get_ColorAndOpacityDelegate() {
    return (void*)((uintptr_t)this + 0x1a8);
}
void* _Script_UMG::Image::get_OnMouseButtonDownEvent() {
    return (void*)((uintptr_t)this + 0x1b8);
}
_Script_CoreUObject::Class* _Script_UMG::Image::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.Image");
    return result;
}
void _Script_UMG::Image::SetColorAndOpacity(_Script_CoreUObject::LinearColor InColorAndOpacity) {
    return;
}
void _Script_UMG::Image::SetBrushTintColor(_Script_SlateCore::SlateColor TintColor) {
    return;
}
void _Script_UMG::Image::SetBrushSize(_Script_CoreUObject::Vector2D DesiredSize) {
    return;
}
void _Script_UMG::Image::SetBrushFromTextureDynamic(_Script_Engine::Texture2DDynamic* Texture, bool bMatchSize) {
    return;
}
void _Script_UMG::Image::SetBrushFromTexture(_Script_Engine::Texture2D* Texture, bool bMatchSize) {
    return;
}
void _Script_UMG::Image::SetBrushFromSoftTexture(void* SoftTexture, bool bMatchSize) {
    return;
}
void _Script_UMG::Image::SetBrushFromMaterial(_Script_Engine::MaterialInterface* Material) {
    return;
}
void _Script_UMG::Image::SetBrushFromAtlasInterface(void* AtlasRegion, bool bMatchSize) {
    return;
}
void _Script_UMG::Image::SetBrushFromAsset(_Script_Engine::SlateBrushAsset* Asset) {
    return;
}
void _Script_UMG::Image::SetBrush(_Script_SlateCore::SlateBrush& InBrush) {
    return;
}
_Script_Engine::MaterialInstanceDynamic* _Script_UMG::Image::GetDynamicMaterial() {
    return;
}
