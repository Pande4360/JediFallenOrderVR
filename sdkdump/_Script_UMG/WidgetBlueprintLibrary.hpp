#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "..\_Script_InputCore\Key.hpp"
#include "..\_Script_SlateCore\InputEvent.hpp"
#include "..\_Script_SlateCore\KeyEvent.hpp"
#include "..\_Script_SlateCore\SlateBrush.hpp"
#include "EventReply.hpp"
namespace _Script_Engine {
struct MaterialInterface;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_UMG {
struct Widget;
}
namespace _Script_Engine {
struct PlayerController;
}
namespace _Script_Engine {
struct Texture2D;
}
namespace _Script_Engine {
struct SlateBrushAsset;
}
namespace _Script_CoreUObject {
struct Vector4;
}
namespace _Script_SlateCore {
struct AnalogInputEvent;
}
namespace _Script_SlateCore {
struct PointerEvent;
}
namespace _Script_SlateCore {
struct NavigationEvent;
}
namespace _Script_SlateCore {
struct CharacterEvent;
}
namespace _Script_UMG {
struct PaintContext;
}
namespace _Script_Engine {
struct MaterialInstanceDynamic;
}
namespace _Script_UMG {
struct DragDropOperation;
}
namespace _Script_Engine {
struct Font;
}
namespace _Script_UMG {
struct UserWidget;
}
namespace _Script_UMG {
#pragma pack(push, 1)
struct WidgetBlueprintLibrary : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    _Script_UMG::EventReply UnlockMouse(_Script_UMG::EventReply& Reply);
    _Script_UMG::EventReply Unhandled();
    void SetWindowTitleBarState(_Script_UMG::Widget* TitleBarContent, void* Mode, bool bTitleBarDragEnabled, bool bWindowButtonsVisible, bool bTitleBarVisible);
    void SetWindowTitleBarOnCloseClickedDelegate(void* Delegate);
    void SetWindowTitleBarCloseButtonActive(bool bActive);
    _Script_UMG::EventReply SetUserFocus(_Script_UMG::EventReply& Reply, _Script_UMG::Widget* FocusWidget, bool bInAllUsers);
    _Script_UMG::EventReply SetMousePosition(_Script_UMG::EventReply& Reply, _Script_CoreUObject::Vector2D NewMousePosition);
    void SetInputMode_UIOnlyEx(_Script_Engine::PlayerController* PlayerController, _Script_UMG::Widget* InWidgetToFocus, void* InMouseLockMode);
    void SetInputMode_UIOnly(_Script_Engine::PlayerController* Target, _Script_UMG::Widget* InWidgetToFocus, bool bLockMouseToViewport);
    void SetInputMode_GameOnly(_Script_Engine::PlayerController* PlayerController);
    void SetInputMode_GameAndUIEx(_Script_Engine::PlayerController* PlayerController, _Script_UMG::Widget* InWidgetToFocus, void* InMouseLockMode, bool bHideCursorDuringCapture);
    void SetInputMode_GameAndUI(_Script_Engine::PlayerController* Target, _Script_UMG::Widget* InWidgetToFocus, bool bLockMouseToViewport, bool bHideCursorDuringCapture);
    bool SetHardwareCursor(_Script_CoreUObject::Object* WorldContextObject, void* CursorShape, void* CursorName, _Script_CoreUObject::Vector2D HotSpot);
    void SetFocusToGameViewport();
    void SetBrushResourceToTexture(_Script_SlateCore::SlateBrush& Brush, _Script_Engine::Texture2D* Texture);
    void SetBrushResourceToMaterial(_Script_SlateCore::SlateBrush& Brush, _Script_Engine::MaterialInterface* Material);
    void RestorePreviousWindowTitleBarState();
    _Script_UMG::EventReply ReleaseMouseCapture(_Script_UMG::EventReply& Reply);
    _Script_UMG::EventReply ReleaseJoystickCapture(_Script_UMG::EventReply& Reply, bool bInAllJoysticks);
    _Script_SlateCore::SlateBrush NoResourceBrush();
    _Script_SlateCore::SlateBrush MakeBrushFromTexture(_Script_Engine::Texture2D* Texture, int32_t Width, int32_t Height);
    _Script_SlateCore::SlateBrush MakeBrushFromMaterial(_Script_Engine::MaterialInterface* Material, int32_t Width, int32_t Height);
    _Script_SlateCore::SlateBrush MakeBrushFromAsset(_Script_Engine::SlateBrushAsset* BrushAsset);
    _Script_UMG::EventReply LockMouse(_Script_UMG::EventReply& Reply, _Script_UMG::Widget* CapturingWidget);
    bool IsUsingGamepad(_Script_Engine::PlayerController* PlayerController);
    bool IsDualshockGamepad();
    bool IsDragDropping();
    _Script_UMG::EventReply Handled();
    void GetSafeZonePadding(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector4& SafePadding, _Script_CoreUObject::Vector2D& SafePaddingScale, _Script_CoreUObject::Vector4& SpillOverPadding);
    _Script_SlateCore::KeyEvent GetKeyEventFromAnalogInputEvent(_Script_SlateCore::AnalogInputEvent& Event);
    _Script_SlateCore::InputEvent GetInputEventFromPointerEvent(_Script_SlateCore::PointerEvent& Event);
    _Script_SlateCore::InputEvent GetInputEventFromNavigationEvent(_Script_SlateCore::NavigationEvent& Event);
    _Script_SlateCore::InputEvent GetInputEventFromKeyEvent(_Script_SlateCore::KeyEvent& Event);
    _Script_SlateCore::InputEvent GetInputEventFromCharacterEvent(_Script_SlateCore::CharacterEvent& Event);
    _Script_Engine::MaterialInstanceDynamic* GetDynamicMaterial(_Script_SlateCore::SlateBrush& Brush);
    _Script_UMG::DragDropOperation* GetDragDroppingContent();
    _Script_Engine::Texture2D* GetBrushResourceAsTexture2D(_Script_SlateCore::SlateBrush& Brush);
    _Script_Engine::MaterialInterface* GetBrushResourceAsMaterial(_Script_SlateCore::SlateBrush& Brush);
    _Script_CoreUObject::Object* GetBrushResource(_Script_SlateCore::SlateBrush& Brush);
    void GetAllWidgetsWithInterface(_Script_CoreUObject::Object* WorldContextObject, void* Interface, void*& FoundWidgets, bool TopLevelOnly);
    void GetAllWidgetsOfClass(_Script_CoreUObject::Object* WorldContextObject, void*& FoundWidgets, void* WidgetClass, bool TopLevelOnly);
    _Script_UMG::EventReply EndDragDrop(_Script_UMG::EventReply& Reply);
    void DrawTextFormatted(_Script_UMG::PaintContext& Context, void*& Text, _Script_CoreUObject::Vector2D Position, _Script_Engine::Font* Font, int32_t FontSize, void* FontTypeFace, _Script_CoreUObject::LinearColor Tint);
    void DrawText(_Script_UMG::PaintContext& Context, void* inString, _Script_CoreUObject::Vector2D Position, _Script_CoreUObject::LinearColor Tint);
    void DrawLines(_Script_UMG::PaintContext& Context, void*& Points, _Script_CoreUObject::LinearColor Tint, bool bAntiAlias);
    void DrawLine(_Script_UMG::PaintContext& Context, _Script_CoreUObject::Vector2D PositionA, _Script_CoreUObject::Vector2D PositionB, _Script_CoreUObject::LinearColor Tint, bool bAntiAlias);
    void DrawBox(_Script_UMG::PaintContext& Context, _Script_CoreUObject::Vector2D Position, _Script_CoreUObject::Vector2D Size, _Script_Engine::SlateBrushAsset* Brush, _Script_CoreUObject::LinearColor Tint);
    void DismissAllMenus();
    _Script_UMG::EventReply DetectDragIfPressed(_Script_SlateCore::PointerEvent& PointerEvent, _Script_UMG::Widget* WidgetDetectingDrag, _Script_InputCore::Key DragKey);
    _Script_UMG::EventReply DetectDrag(_Script_UMG::EventReply& Reply, _Script_UMG::Widget* WidgetDetectingDrag, _Script_InputCore::Key DragKey);
    _Script_UMG::DragDropOperation* CreateDragDropOperation(void* OperationClass);
    _Script_UMG::UserWidget* Create(_Script_CoreUObject::Object* WorldContextObject, void* WidgetType, _Script_Engine::PlayerController* OwningPlayer);
    _Script_UMG::EventReply ClearUserFocus(_Script_UMG::EventReply& Reply, bool bInAllUsers);
    _Script_UMG::EventReply CaptureMouse(_Script_UMG::EventReply& Reply, _Script_UMG::Widget* CapturingWidget);
    _Script_UMG::EventReply CaptureJoystick(_Script_UMG::EventReply& Reply, _Script_UMG::Widget* CapturingWidget, bool bInAllJoysticks);
    void CancelDragDrop();
}; // Size: 0x28
#pragma pack(pop)
}
