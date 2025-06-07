#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "..\_Script_Slate\Anchors.hpp"
#include "..\_Script_SlateCore\AnalogInputEvent.hpp"
#include "..\_Script_SlateCore\CharacterEvent.hpp"
#include "..\_Script_SlateCore\FocusEvent.hpp"
#include "..\_Script_SlateCore\Geometry.hpp"
#include "..\_Script_SlateCore\KeyEvent.hpp"
#include "..\_Script_SlateCore\Margin.hpp"
#include "..\_Script_SlateCore\MotionEvent.hpp"
#include "..\_Script_SlateCore\PointerEvent.hpp"
#include "..\_Script_SlateCore\SlateColor.hpp"
#include "EventReply.hpp"
#include "Widget.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_UMG {
struct WidgetTree;
}
namespace _Script_Engine {
struct InputComponent;
}
namespace _Script_UMG {
struct PaintContext;
}
namespace _Script_UMG {
struct WidgetAnimation;
}
namespace _Script_Engine {
struct SoundBase;
}
namespace _Script_Engine {
struct PlayerController;
}
namespace _Script_UMG {
struct DragDropOperation;
}
namespace _Script_Engine {
struct Pawn;
}
namespace _Script_UMG {
#pragma pack(push, 1)
struct UserWidget : public Widget {
    private: char pad_100[0x108]; public:
    void* get_ColorAndOpacity();
    void* get_ColorAndOpacityDelegate();
    void* get_ForegroundColor();
    void* get_ForegroundColorDelegate();
    void* get_Padding();
    void* get_ActiveSequencePlayers();
    void* get_StoppedSequencePlayers();
    void* get_NamedSlotBindings();
    _Script_UMG::WidgetTree*& get_WidgetTree();
    int32_t& get_Priority();
    bool get_bSupportsKeyboardFocus();
    void set_bSupportsKeyboardFocus(bool value);
    bool get_bIsFocusable();
    void set_bIsFocusable(bool value);
    bool get_bStopAction();
    void set_bStopAction(bool value);
    bool get_bHasScriptImplementedTick();
    void set_bHasScriptImplementedTick(bool value);
    bool get_bHasScriptImplementedPaint();
    void set_bHasScriptImplementedPaint(bool value);
    bool get_bCookedWidgetTree();
    void set_bCookedWidgetTree(bool value);
    void* get_TickFrequency();
    _Script_Engine::InputComponent*& get_InputComponent();
    static _Script_CoreUObject::Class* static_class();
    void UnregisterInputComponent();
    void Tick(_Script_SlateCore::Geometry MyGeometry, float InDeltaTime);
    void StopListeningForInputAction(void* ActionName, void* EventType);
    void StopListeningForAllInputActions();
    void StopAnimationsAndLatentActions();
    void StopAnimation(_Script_UMG::WidgetAnimation* InAnimation);
    void StopAllAnimations();
    void SetPositionInViewport(_Script_CoreUObject::Vector2D Position, bool bRemoveDPIScale);
    void SetPlaybackSpeed(_Script_UMG::WidgetAnimation* InAnimation, float PlaybackSpeed);
    void SetPadding(_Script_SlateCore::Margin InPadding);
    void SetOwningPlayer(_Script_Engine::PlayerController* LocalPlayerController);
    void SetNumLoopsToPlay(_Script_UMG::WidgetAnimation* InAnimation, int32_t NumLoopsToPlay);
    void SetInputActionPriority(int32_t NewPriority);
    void SetInputActionBlocking(bool bShouldBlock);
    void SetForegroundColor(_Script_SlateCore::SlateColor InForegroundColor);
    void SetDesiredSizeInViewport(_Script_CoreUObject::Vector2D Size);
    void SetColorAndOpacity(_Script_CoreUObject::LinearColor InColorAndOpacity);
    void SetAnchorsInViewport(_Script_Slate::Anchors Anchors);
    void SetAlignmentInViewport(_Script_CoreUObject::Vector2D Alignment);
    void ReverseAnimation(_Script_UMG::WidgetAnimation* InAnimation);
    void RemoveFromViewport();
    void RegisterInputComponent();
    void PreConstruct(bool IsDesignTime);
    void PlaySound(_Script_Engine::SoundBase* SoundToPlay);
    void PlayAnimationTo(_Script_UMG::WidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int32_t NumLoopsToPlay, void* PlayMode, float PlaybackSpeed);
    void PlayAnimation(_Script_UMG::WidgetAnimation* InAnimation, float StartAtTime, int32_t NumLoopsToPlay, void* PlayMode, float PlaybackSpeed);
    float PauseAnimation(_Script_UMG::WidgetAnimation* InAnimation);
    _Script_UMG::EventReply OnTouchStarted(_Script_SlateCore::Geometry MyGeometry, _Script_SlateCore::PointerEvent& InTouchEvent);
    _Script_UMG::EventReply OnTouchMoved(_Script_SlateCore::Geometry MyGeometry, _Script_SlateCore::PointerEvent& InTouchEvent);
    _Script_UMG::EventReply OnTouchGesture(_Script_SlateCore::Geometry MyGeometry, _Script_SlateCore::PointerEvent& GestureEvent);
    _Script_UMG::EventReply OnTouchForceChanged(_Script_SlateCore::Geometry MyGeometry, _Script_SlateCore::PointerEvent& InTouchEvent);
    _Script_UMG::EventReply OnTouchEnded(_Script_SlateCore::Geometry MyGeometry, _Script_SlateCore::PointerEvent& InTouchEvent);
    void OnRemovedFromFocusPath(_Script_SlateCore::FocusEvent InFocusEvent);
    _Script_UMG::EventReply OnPreviewMouseButtonDown(_Script_SlateCore::Geometry MyGeometry, _Script_SlateCore::PointerEvent& MouseEvent);
    _Script_UMG::EventReply OnPreviewKeyDown(_Script_SlateCore::Geometry MyGeometry, _Script_SlateCore::KeyEvent InKeyEvent);
    void OnPooledRelease();
    void OnPooledInit();
    void OnPaint(_Script_UMG::PaintContext& Context);
    _Script_UMG::EventReply OnMouseWheel(_Script_SlateCore::Geometry MyGeometry, _Script_SlateCore::PointerEvent& MouseEvent);
    _Script_UMG::EventReply OnMouseMove(_Script_SlateCore::Geometry MyGeometry, _Script_SlateCore::PointerEvent& MouseEvent);
    void OnMouseLeave(_Script_SlateCore::PointerEvent& MouseEvent);
    void OnMouseEnter(_Script_SlateCore::Geometry MyGeometry, _Script_SlateCore::PointerEvent& MouseEvent);
    void OnMouseCaptureLost();
    _Script_UMG::EventReply OnMouseButtonUp(_Script_SlateCore::Geometry MyGeometry, _Script_SlateCore::PointerEvent& MouseEvent);
    _Script_UMG::EventReply OnMouseButtonDown(_Script_SlateCore::Geometry MyGeometry, _Script_SlateCore::PointerEvent& MouseEvent);
    _Script_UMG::EventReply OnMouseButtonDoubleClick(_Script_SlateCore::Geometry InMyGeometry, _Script_SlateCore::PointerEvent& InMouseEvent);
    _Script_UMG::EventReply OnMotionDetected(_Script_SlateCore::Geometry MyGeometry, _Script_SlateCore::MotionEvent InMotionEvent);
    _Script_UMG::EventReply OnKeyUp(_Script_SlateCore::Geometry MyGeometry, _Script_SlateCore::KeyEvent InKeyEvent);
    _Script_UMG::EventReply OnKeyDown(_Script_SlateCore::Geometry MyGeometry, _Script_SlateCore::KeyEvent InKeyEvent);
    _Script_UMG::EventReply OnKeyChar(_Script_SlateCore::Geometry MyGeometry, _Script_SlateCore::CharacterEvent InCharacterEvent);
    void OnInitialized();
    _Script_UMG::EventReply OnFocusReceived(_Script_SlateCore::Geometry MyGeometry, _Script_SlateCore::FocusEvent InFocusEvent);
    void OnFocusLost(_Script_SlateCore::FocusEvent InFocusEvent);
    bool OnDrop(_Script_SlateCore::Geometry MyGeometry, _Script_SlateCore::PointerEvent PointerEvent, _Script_UMG::DragDropOperation* Operation);
    bool OnDragOver(_Script_SlateCore::Geometry MyGeometry, _Script_SlateCore::PointerEvent PointerEvent, _Script_UMG::DragDropOperation* Operation);
    void OnDragLeave(_Script_SlateCore::PointerEvent PointerEvent, _Script_UMG::DragDropOperation* Operation);
    void OnDragEnter(_Script_SlateCore::Geometry MyGeometry, _Script_SlateCore::PointerEvent PointerEvent, _Script_UMG::DragDropOperation* Operation);
    void OnDragDetected(_Script_SlateCore::Geometry MyGeometry, _Script_SlateCore::PointerEvent& PointerEvent, _Script_UMG::DragDropOperation*& Operation);
    void OnDragCancelled(_Script_SlateCore::PointerEvent& PointerEvent, _Script_UMG::DragDropOperation* Operation);
    void OnAnimationStarted(_Script_UMG::WidgetAnimation* Animation);
    void OnAnimationFinished(_Script_UMG::WidgetAnimation* Animation);
    _Script_UMG::EventReply OnAnalogValueChanged(_Script_SlateCore::Geometry MyGeometry, _Script_SlateCore::AnalogInputEvent InAnalogInputEvent);
    void OnAddedToFocusPath(_Script_SlateCore::FocusEvent InFocusEvent);
    void ListenForInputAction(void* ActionName, void* EventType, bool bConsume, void* Callback);
    bool IsPlayingAnimation();
    bool IsListeningForInputAction(void* ActionName);
    bool IsInViewport();
    bool IsInteractable();
    bool IsAnyAnimationPlaying();
    bool IsAnimationPlayingForward(_Script_UMG::WidgetAnimation* InAnimation);
    bool IsAnimationPlaying(_Script_UMG::WidgetAnimation* InAnimation);
    _Script_Engine::Pawn* GetOwningPlayerPawn();
    bool GetIsVisible();
    float GetAnimationCurrentTime(_Script_UMG::WidgetAnimation* InAnimation);
    _Script_Slate::Anchors GetAnchorsInViewport();
    _Script_CoreUObject::Vector2D GetAlignmentInViewport();
    void Destruct();
    void Construct();
    void CancelLatentActions();
    void AddToViewport(int32_t ZOrder);
    bool AddToPlayerScreen(int32_t ZOrder);
}; // Size: 0x208
#pragma pack(pop)
}
