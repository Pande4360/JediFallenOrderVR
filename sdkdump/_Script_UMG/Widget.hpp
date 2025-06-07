#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "..\_Script_SlateCore\Geometry.hpp"
#include "Visual.hpp"
#include "WidgetTransform.hpp"
namespace _Script_UMG {
struct PanelSlot;
}
namespace _Script_UMG {
struct WidgetNavigation;
}
namespace _Script_Engine {
struct PlayerController;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_UMG {
struct PanelWidget;
}
namespace _Script_Engine {
struct LocalPlayer;
}
namespace _Script_UMG {
#pragma pack(push, 1)
struct Widget : public Visual {
    private: char pad_28[0xd8]; public:
    _Script_UMG::PanelSlot*& get_Slot();
    void* get_bIsEnabledDelegate();
    void* get_ToolTipText();
    void* get_ToolTipTextDelegate();
    _Script_UMG::Widget*& get_ToolTipWidget();
    void* get_ToolTipWidgetDelegate();
    void* get_VisibilityDelegate();
    void* get_RenderTransform();
    void* get_RenderTransformPivot();
    bool get_bIsVariable();
    void set_bIsVariable(bool value);
    bool get_bCreatedByConstructionScript();
    void set_bCreatedByConstructionScript(bool value);
    bool get_bIsEnabled();
    void set_bIsEnabled(bool value);
    bool get_bOverride_Cursor();
    void set_bOverride_Cursor(bool value);
    bool get_bIsVolatile();
    void set_bIsVolatile(bool value);
    void* get_Cursor();
    void* get_Clipping();
    void* get_Visibility();
    float& get_RenderOpacity();
    _Script_UMG::WidgetNavigation*& get_Navigation();
    void* get_NativeBindings();
    static _Script_CoreUObject::Class* static_class();
    void SetVisibility(void* InVisibility);
    void SetUserFocus(_Script_Engine::PlayerController* PlayerController);
    void SetToolTipText(void*& InToolTipText);
    void SetToolTip(_Script_UMG::Widget* Widget);
    void SetRenderTranslation(_Script_CoreUObject::Vector2D Translation);
    void SetRenderTransformPivot(_Script_CoreUObject::Vector2D Pivot);
    void SetRenderTransform(_Script_UMG::WidgetTransform InTransform);
    void SetRenderShear(_Script_CoreUObject::Vector2D Shear);
    void SetRenderScale(_Script_CoreUObject::Vector2D Scale);
    void SetRenderOpacity(float InOpacity);
    void SetRenderAngle(float Angle);
    void SetNavigationRule(void* Direction, void* Rule, void* WidgetToFocus);
    void SetKeyboardFocus();
    void SetIsEnabled(bool bInIsEnabled);
    void SetCursor(void* InCursor);
    void SetClipping(void* InClipping);
    void SetAllNavigationRules(void* Rule, void* WidgetToFocus);
    void ResetCursor();
    void RemoveFromParent();
    bool IsVisible();
    bool IsHovered();
    void InvalidateLayoutAndVolatility();
    bool HasUserFocusedDescendants(_Script_Engine::PlayerController* PlayerController);
    bool HasUserFocus(_Script_Engine::PlayerController* PlayerController);
    bool HasMouseCaptureByUser(int32_t UserIndex, int32_t PointerIndex);
    bool HasMouseCapture();
    bool HasKeyboardFocus();
    bool HasFocusedDescendants();
    bool HasAnyUserFocus();
    void* GetVisibility();
    float GetRenderOpacity();
    _Script_UMG::PanelWidget* GetParent();
    _Script_Engine::PlayerController* GetOwningPlayer();
    _Script_Engine::LocalPlayer* GetOwningLocalPlayer();
    bool GetIsEnabled();
    _Script_CoreUObject::Vector2D GetDesiredSize();
    void* GetClipping();
    _Script_SlateCore::Geometry GetCachedGeometry();
    void ForceVolatile(bool bForce);
    void ForceLayoutPrepass();
}; // Size: 0x100
#pragma pack(pop)
}
