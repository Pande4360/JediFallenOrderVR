#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "..\_Script_SlateCore\Geometry.hpp"
#include "..\_Script_SlateCore\SlateBrush.hpp"
#include "SlateBlueprintLibrary.hpp"
_Script_CoreUObject::Class* _Script_UMG::SlateBlueprintLibrary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.SlateBlueprintLibrary");
    return result;
}
void _Script_UMG::SlateBlueprintLibrary::ScreenToWidgetLocal(_Script_CoreUObject::Object* WorldContextObject, _Script_SlateCore::Geometry& Geometry, _Script_CoreUObject::Vector2D ScreenPosition, _Script_CoreUObject::Vector2D& LocalCoordinate) {
    return;
}
void _Script_UMG::SlateBlueprintLibrary::ScreenToWidgetAbsolute(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector2D ScreenPosition, _Script_CoreUObject::Vector2D& AbsoluteCoordinate) {
    return;
}
void _Script_UMG::SlateBlueprintLibrary::ScreenToViewport(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector2D ScreenPosition, _Script_CoreUObject::Vector2D& ViewportPosition) {
    return;
}
void _Script_UMG::SlateBlueprintLibrary::LocalToViewport(_Script_CoreUObject::Object* WorldContextObject, _Script_SlateCore::Geometry& Geometry, _Script_CoreUObject::Vector2D LocalCoordinate, _Script_CoreUObject::Vector2D& PixelPosition, _Script_CoreUObject::Vector2D& ViewportPosition) {
    return;
}
_Script_CoreUObject::Vector2D _Script_UMG::SlateBlueprintLibrary::GetLocalSize(_Script_SlateCore::Geometry& Geometry) {
    return;
}
_Script_CoreUObject::Vector2D _Script_UMG::SlateBlueprintLibrary::LocalToAbsolute(_Script_SlateCore::Geometry& Geometry, _Script_CoreUObject::Vector2D LocalCoordinate) {
    return;
}
bool _Script_UMG::SlateBlueprintLibrary::IsUnderLocation(_Script_SlateCore::Geometry& Geometry, _Script_CoreUObject::Vector2D& AbsoluteCoordinate) {
    return;
}
_Script_CoreUObject::Vector2D _Script_UMG::SlateBlueprintLibrary::GetAbsoluteSize(_Script_SlateCore::Geometry& Geometry) {
    return;
}
bool _Script_UMG::SlateBlueprintLibrary::EqualEqual_SlateBrush(_Script_SlateCore::SlateBrush& A, _Script_SlateCore::SlateBrush& B) {
    return;
}
void _Script_UMG::SlateBlueprintLibrary::AbsoluteToViewport(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector2D AbsoluteDesktopCoordinate, _Script_CoreUObject::Vector2D& PixelPosition, _Script_CoreUObject::Vector2D& ViewportPosition) {
    return;
}
_Script_CoreUObject::Vector2D _Script_UMG::SlateBlueprintLibrary::AbsoluteToLocal(_Script_SlateCore::Geometry& Geometry, _Script_CoreUObject::Vector2D AbsoluteCoordinate) {
    return;
}
