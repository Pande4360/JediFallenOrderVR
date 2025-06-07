#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_SlateCore {
struct Geometry;
}
namespace _Script_SlateCore {
struct SlateBrush;
}
namespace _Script_UMG {
#pragma pack(push, 1)
struct SlateBlueprintLibrary : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    void ScreenToWidgetLocal(_Script_CoreUObject::Object* WorldContextObject, _Script_SlateCore::Geometry& Geometry, _Script_CoreUObject::Vector2D ScreenPosition, _Script_CoreUObject::Vector2D& LocalCoordinate);
    void ScreenToWidgetAbsolute(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector2D ScreenPosition, _Script_CoreUObject::Vector2D& AbsoluteCoordinate);
    void ScreenToViewport(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector2D ScreenPosition, _Script_CoreUObject::Vector2D& ViewportPosition);
    void LocalToViewport(_Script_CoreUObject::Object* WorldContextObject, _Script_SlateCore::Geometry& Geometry, _Script_CoreUObject::Vector2D LocalCoordinate, _Script_CoreUObject::Vector2D& PixelPosition, _Script_CoreUObject::Vector2D& ViewportPosition);
    _Script_CoreUObject::Vector2D LocalToAbsolute(_Script_SlateCore::Geometry& Geometry, _Script_CoreUObject::Vector2D LocalCoordinate);
    bool IsUnderLocation(_Script_SlateCore::Geometry& Geometry, _Script_CoreUObject::Vector2D& AbsoluteCoordinate);
    _Script_CoreUObject::Vector2D GetLocalSize(_Script_SlateCore::Geometry& Geometry);
    _Script_CoreUObject::Vector2D GetAbsoluteSize(_Script_SlateCore::Geometry& Geometry);
    bool EqualEqual_SlateBrush(_Script_SlateCore::SlateBrush& A, _Script_SlateCore::SlateBrush& B);
    void AbsoluteToViewport(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector2D AbsoluteDesktopCoordinate, _Script_CoreUObject::Vector2D& PixelPosition, _Script_CoreUObject::Vector2D& ViewportPosition);
    _Script_CoreUObject::Vector2D AbsoluteToLocal(_Script_SlateCore::Geometry& Geometry, _Script_CoreUObject::Vector2D AbsoluteCoordinate);
}; // Size: 0x28
#pragma pack(pop)
}
