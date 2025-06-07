#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "..\_Script_SlateCore\Geometry.hpp"
namespace _Script_UMG {
struct UniformGridSlot;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_UMG {
struct VerticalBoxSlot;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_UMG {
struct OverlaySlot;
}
namespace _Script_UMG {
struct Widget;
}
namespace _Script_UMG {
struct HorizontalBoxSlot;
}
namespace _Script_UMG {
struct GridSlot;
}
namespace _Script_UMG {
struct CanvasPanelSlot;
}
namespace _Script_UMG {
struct BorderSlot;
}
namespace _Script_Engine {
struct PlayerController;
}
namespace _Script_UMG {
#pragma pack(push, 1)
struct WidgetLayoutLibrary : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    _Script_UMG::VerticalBoxSlot* SlotAsVerticalBoxSlot(_Script_UMG::Widget* Widget);
    _Script_UMG::UniformGridSlot* SlotAsUniformGridSlot(_Script_UMG::Widget* Widget);
    _Script_UMG::OverlaySlot* SlotAsOverlaySlot(_Script_UMG::Widget* Widget);
    _Script_UMG::HorizontalBoxSlot* SlotAsHorizontalBoxSlot(_Script_UMG::Widget* Widget);
    _Script_UMG::GridSlot* SlotAsGridSlot(_Script_UMG::Widget* Widget);
    _Script_UMG::CanvasPanelSlot* SlotAsCanvasSlot(_Script_UMG::Widget* Widget);
    _Script_UMG::BorderSlot* SlotAsBorderSlot(_Script_UMG::Widget* Widget);
    void RemoveAllWidgets(_Script_CoreUObject::Object* WorldContextObject);
    bool ProjectWorldLocationToWidgetPosition(_Script_Engine::PlayerController* PlayerController, _Script_CoreUObject::Vector WorldLocation, _Script_CoreUObject::Vector2D& ScreenPosition);
    _Script_SlateCore::Geometry GetViewportWidgetGeometry(_Script_CoreUObject::Object* WorldContextObject);
    _Script_CoreUObject::Vector2D GetViewportSize(_Script_CoreUObject::Object* WorldContextObject);
    float GetViewportScale(_Script_CoreUObject::Object* WorldContextObject);
    _Script_SlateCore::Geometry GetPlayerScreenWidgetGeometry(_Script_Engine::PlayerController* PlayerController);
    bool GetMousePositionScaledByDPI(_Script_Engine::PlayerController* Player, float& LocationX, float& LocationY);
    _Script_CoreUObject::Vector2D GetMousePositionOnViewport(_Script_CoreUObject::Object* WorldContextObject);
    _Script_CoreUObject::Vector2D GetMousePositionOnPlatform();
}; // Size: 0x28
#pragma pack(pop)
}
