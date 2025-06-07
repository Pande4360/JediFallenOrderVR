#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "..\_Script_Engine\HitResult.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_InputCore\Key.hpp"
namespace _Script_UMG {
struct WidgetComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_UMG {
#pragma pack(push, 1)
struct WidgetInteractionComponent : public _Script_Engine::SceneComponent {
    private: char pad_2d0[0x210]; public:
    void* get_OnHoveredWidgetChanged();
    int32_t& get_VirtualUserIndex();
    float& get_PointerIndex();
    void* get_TraceChannel();
    float& get_InteractionDistance();
    void* get_InteractionSource();
    bool get_bEnableHitTesting();
    void set_bEnableHitTesting(bool value);
    bool get_bShowDebug();
    void set_bShowDebug(bool value);
    void* get_DebugColor();
    void* get_CustomHitResult();
    void* get_LocalHitLocation();
    void* get_LastLocalHitLocation();
    _Script_UMG::WidgetComponent*& get_HoveredWidgetComponent();
    void* get_LastHitResult();
    bool get_bIsHoveredWidgetInteractable();
    void set_bIsHoveredWidgetInteractable(bool value);
    bool get_bIsHoveredWidgetFocusable();
    void set_bIsHoveredWidgetFocusable(bool value);
    bool get_bIsHoveredWidgetHitTestVisible();
    void set_bIsHoveredWidgetHitTestVisible(bool value);
    static _Script_CoreUObject::Class* static_class();
    void SetCustomHitResult(_Script_Engine::HitResult& HitResult);
    bool SendKeyChar(void* Characters, bool bRepeat);
    void ScrollWheel(float ScrollDelta);
    void ReleasePointerKey(_Script_InputCore::Key Key);
    bool ReleaseKey(_Script_InputCore::Key Key);
    void PressPointerKey(_Script_InputCore::Key Key);
    bool PressKey(_Script_InputCore::Key Key, bool bRepeat);
    bool PressAndReleaseKey(_Script_InputCore::Key Key);
    bool IsOverInteractableWidget();
    bool IsOverHitTestVisibleWidget();
    bool IsOverFocusableWidget();
    _Script_Engine::HitResult GetLastHitResult();
    _Script_UMG::WidgetComponent* GetHoveredWidgetComponent();
    _Script_CoreUObject::Vector2D Get2DHitLocation();
}; // Size: 0x4e0
#pragma pack(pop)
}
