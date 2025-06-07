#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "..\_Script_CoreUObject\Vector4.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "..\_Script_Engine\Font.hpp"
#include "..\_Script_Engine\MaterialInstanceDynamic.hpp"
#include "..\_Script_Engine\MaterialInterface.hpp"
#include "..\_Script_Engine\PlayerController.hpp"
#include "..\_Script_Engine\SlateBrushAsset.hpp"
#include "..\_Script_Engine\Texture2D.hpp"
#include "..\_Script_InputCore\Key.hpp"
#include "..\_Script_SlateCore\AnalogInputEvent.hpp"
#include "..\_Script_SlateCore\CharacterEvent.hpp"
#include "..\_Script_SlateCore\InputEvent.hpp"
#include "..\_Script_SlateCore\KeyEvent.hpp"
#include "..\_Script_SlateCore\NavigationEvent.hpp"
#include "..\_Script_SlateCore\PointerEvent.hpp"
#include "..\_Script_SlateCore\SlateBrush.hpp"
#include "DragDropOperation.hpp"
#include "EventReply.hpp"
#include "PaintContext.hpp"
#include "UserWidget.hpp"
#include "Widget.hpp"
#include "WidgetBlueprintLibrary.hpp"
_Script_CoreUObject::Class* _Script_UMG::WidgetBlueprintLibrary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.WidgetBlueprintLibrary");
    return result;
}
void _Script_UMG::WidgetBlueprintLibrary::SetWindowTitleBarCloseButtonActive(bool bActive) {
    return;
}
_Script_UMG::EventReply _Script_UMG::WidgetBlueprintLibrary::EndDragDrop(_Script_UMG::EventReply& Reply) {
    return;
}
bool _Script_UMG::WidgetBlueprintLibrary::IsDragDropping() {
    return;
}
_Script_UMG::EventReply _Script_UMG::WidgetBlueprintLibrary::UnlockMouse(_Script_UMG::EventReply& Reply) {
    return;
}
void _Script_UMG::WidgetBlueprintLibrary::SetWindowTitleBarOnCloseClickedDelegate(void* Delegate) {
    return;
}
_Script_UMG::EventReply _Script_UMG::WidgetBlueprintLibrary::Unhandled() {
    return;
}
void _Script_UMG::WidgetBlueprintLibrary::SetWindowTitleBarState(_Script_UMG::Widget* TitleBarContent, void* Mode, bool bTitleBarDragEnabled, bool bWindowButtonsVisible, bool bTitleBarVisible) {
    return;
}
_Script_SlateCore::KeyEvent _Script_UMG::WidgetBlueprintLibrary::GetKeyEventFromAnalogInputEvent(_Script_SlateCore::AnalogInputEvent& Event) {
    return;
}
_Script_UMG::EventReply _Script_UMG::WidgetBlueprintLibrary::SetUserFocus(_Script_UMG::EventReply& Reply, _Script_UMG::Widget* FocusWidget, bool bInAllUsers) {
    return;
}
_Script_SlateCore::InputEvent _Script_UMG::WidgetBlueprintLibrary::GetInputEventFromKeyEvent(_Script_SlateCore::KeyEvent& Event) {
    return;
}
_Script_UMG::EventReply _Script_UMG::WidgetBlueprintLibrary::SetMousePosition(_Script_UMG::EventReply& Reply, _Script_CoreUObject::Vector2D NewMousePosition) {
    return;
}
_Script_UMG::EventReply _Script_UMG::WidgetBlueprintLibrary::ClearUserFocus(_Script_UMG::EventReply& Reply, bool bInAllUsers) {
    return;
}
void _Script_UMG::WidgetBlueprintLibrary::SetInputMode_UIOnlyEx(_Script_Engine::PlayerController* PlayerController, _Script_UMG::Widget* InWidgetToFocus, void* InMouseLockMode) {
    return;
}
void _Script_UMG::WidgetBlueprintLibrary::SetInputMode_UIOnly(_Script_Engine::PlayerController* Target, _Script_UMG::Widget* InWidgetToFocus, bool bLockMouseToViewport) {
    return;
}
void _Script_UMG::WidgetBlueprintLibrary::SetInputMode_GameAndUIEx(_Script_Engine::PlayerController* PlayerController, _Script_UMG::Widget* InWidgetToFocus, void* InMouseLockMode, bool bHideCursorDuringCapture) {
    return;
}
void _Script_UMG::WidgetBlueprintLibrary::SetInputMode_GameOnly(_Script_Engine::PlayerController* PlayerController) {
    return;
}
void _Script_UMG::WidgetBlueprintLibrary::SetInputMode_GameAndUI(_Script_Engine::PlayerController* Target, _Script_UMG::Widget* InWidgetToFocus, bool bLockMouseToViewport, bool bHideCursorDuringCapture) {
    return;
}
_Script_UMG::EventReply _Script_UMG::WidgetBlueprintLibrary::ReleaseMouseCapture(_Script_UMG::EventReply& Reply) {
    return;
}
bool _Script_UMG::WidgetBlueprintLibrary::SetHardwareCursor(_Script_CoreUObject::Object* WorldContextObject, void* CursorShape, void* CursorName, _Script_CoreUObject::Vector2D HotSpot) {
    return;
}
void _Script_UMG::WidgetBlueprintLibrary::SetBrushResourceToTexture(_Script_SlateCore::SlateBrush& Brush, _Script_Engine::Texture2D* Texture) {
    return;
}
void _Script_UMG::WidgetBlueprintLibrary::SetFocusToGameViewport() {
    return;
}
_Script_UMG::EventReply _Script_UMG::WidgetBlueprintLibrary::CaptureJoystick(_Script_UMG::EventReply& Reply, _Script_UMG::Widget* CapturingWidget, bool bInAllJoysticks) {
    return;
}
void _Script_UMG::WidgetBlueprintLibrary::SetBrushResourceToMaterial(_Script_SlateCore::SlateBrush& Brush, _Script_Engine::MaterialInterface* Material) {
    return;
}
void _Script_UMG::WidgetBlueprintLibrary::RestorePreviousWindowTitleBarState() {
    return;
}
_Script_UMG::EventReply _Script_UMG::WidgetBlueprintLibrary::ReleaseJoystickCapture(_Script_UMG::EventReply& Reply, bool bInAllJoysticks) {
    return;
}
_Script_SlateCore::SlateBrush _Script_UMG::WidgetBlueprintLibrary::NoResourceBrush() {
    return;
}
_Script_SlateCore::SlateBrush _Script_UMG::WidgetBlueprintLibrary::MakeBrushFromTexture(_Script_Engine::Texture2D* Texture, int32_t Width, int32_t Height) {
    return;
}
_Script_SlateCore::SlateBrush _Script_UMG::WidgetBlueprintLibrary::MakeBrushFromMaterial(_Script_Engine::MaterialInterface* Material, int32_t Width, int32_t Height) {
    return;
}
_Script_SlateCore::SlateBrush _Script_UMG::WidgetBlueprintLibrary::MakeBrushFromAsset(_Script_Engine::SlateBrushAsset* BrushAsset) {
    return;
}
_Script_UMG::EventReply _Script_UMG::WidgetBlueprintLibrary::LockMouse(_Script_UMG::EventReply& Reply, _Script_UMG::Widget* CapturingWidget) {
    return;
}
_Script_Engine::MaterialInterface* _Script_UMG::WidgetBlueprintLibrary::GetBrushResourceAsMaterial(_Script_SlateCore::SlateBrush& Brush) {
    return;
}
bool _Script_UMG::WidgetBlueprintLibrary::IsUsingGamepad(_Script_Engine::PlayerController* PlayerController) {
    return;
}
_Script_Engine::MaterialInstanceDynamic* _Script_UMG::WidgetBlueprintLibrary::GetDynamicMaterial(_Script_SlateCore::SlateBrush& Brush) {
    return;
}
bool _Script_UMG::WidgetBlueprintLibrary::IsDualshockGamepad() {
    return;
}
_Script_UMG::EventReply _Script_UMG::WidgetBlueprintLibrary::Handled() {
    return;
}
_Script_SlateCore::InputEvent _Script_UMG::WidgetBlueprintLibrary::GetInputEventFromCharacterEvent(_Script_SlateCore::CharacterEvent& Event) {
    return;
}
void _Script_UMG::WidgetBlueprintLibrary::GetSafeZonePadding(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector4& SafePadding, _Script_CoreUObject::Vector2D& SafePaddingScale, _Script_CoreUObject::Vector4& SpillOverPadding) {
    return;
}
_Script_UMG::EventReply _Script_UMG::WidgetBlueprintLibrary::CaptureMouse(_Script_UMG::EventReply& Reply, _Script_UMG::Widget* CapturingWidget) {
    return;
}
_Script_SlateCore::InputEvent _Script_UMG::WidgetBlueprintLibrary::GetInputEventFromPointerEvent(_Script_SlateCore::PointerEvent& Event) {
    return;
}
void _Script_UMG::WidgetBlueprintLibrary::GetAllWidgetsOfClass(_Script_CoreUObject::Object* WorldContextObject, void*& FoundWidgets, void* WidgetClass, bool TopLevelOnly) {
    return;
}
_Script_SlateCore::InputEvent _Script_UMG::WidgetBlueprintLibrary::GetInputEventFromNavigationEvent(_Script_SlateCore::NavigationEvent& Event) {
    return;
}
_Script_UMG::DragDropOperation* _Script_UMG::WidgetBlueprintLibrary::GetDragDroppingContent() {
    return;
}
_Script_Engine::Texture2D* _Script_UMG::WidgetBlueprintLibrary::GetBrushResourceAsTexture2D(_Script_SlateCore::SlateBrush& Brush) {
    return;
}
_Script_CoreUObject::Object* _Script_UMG::WidgetBlueprintLibrary::GetBrushResource(_Script_SlateCore::SlateBrush& Brush) {
    return;
}
void _Script_UMG::WidgetBlueprintLibrary::GetAllWidgetsWithInterface(_Script_CoreUObject::Object* WorldContextObject, void* Interface, void*& FoundWidgets, bool TopLevelOnly) {
    return;
}
void _Script_UMG::WidgetBlueprintLibrary::DrawTextFormatted(_Script_UMG::PaintContext& Context, void*& Text, _Script_CoreUObject::Vector2D Position, _Script_Engine::Font* Font, int32_t FontSize, void* FontTypeFace, _Script_CoreUObject::LinearColor Tint) {
    return;
}
void _Script_UMG::WidgetBlueprintLibrary::DrawText(_Script_UMG::PaintContext& Context, void* inString, _Script_CoreUObject::Vector2D Position, _Script_CoreUObject::LinearColor Tint) {
    return;
}
void _Script_UMG::WidgetBlueprintLibrary::DrawLines(_Script_UMG::PaintContext& Context, void*& Points, _Script_CoreUObject::LinearColor Tint, bool bAntiAlias) {
    return;
}
void _Script_UMG::WidgetBlueprintLibrary::DrawLine(_Script_UMG::PaintContext& Context, _Script_CoreUObject::Vector2D PositionA, _Script_CoreUObject::Vector2D PositionB, _Script_CoreUObject::LinearColor Tint, bool bAntiAlias) {
    return;
}
void _Script_UMG::WidgetBlueprintLibrary::DrawBox(_Script_UMG::PaintContext& Context, _Script_CoreUObject::Vector2D Position, _Script_CoreUObject::Vector2D Size, _Script_Engine::SlateBrushAsset* Brush, _Script_CoreUObject::LinearColor Tint) {
    return;
}
void _Script_UMG::WidgetBlueprintLibrary::DismissAllMenus() {
    return;
}
_Script_UMG::EventReply _Script_UMG::WidgetBlueprintLibrary::DetectDragIfPressed(_Script_SlateCore::PointerEvent& PointerEvent, _Script_UMG::Widget* WidgetDetectingDrag, _Script_InputCore::Key DragKey) {
    return;
}
_Script_UMG::EventReply _Script_UMG::WidgetBlueprintLibrary::DetectDrag(_Script_UMG::EventReply& Reply, _Script_UMG::Widget* WidgetDetectingDrag, _Script_InputCore::Key DragKey) {
    return;
}
_Script_UMG::DragDropOperation* _Script_UMG::WidgetBlueprintLibrary::CreateDragDropOperation(void* OperationClass) {
    return;
}
_Script_UMG::UserWidget* _Script_UMG::WidgetBlueprintLibrary::Create(_Script_CoreUObject::Object* WorldContextObject, void* WidgetType, _Script_Engine::PlayerController* OwningPlayer) {
    return;
}
void _Script_UMG::WidgetBlueprintLibrary::CancelDragDrop() {
    return;
}
