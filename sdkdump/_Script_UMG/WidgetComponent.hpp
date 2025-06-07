#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "..\_Script_Engine\MeshComponent.hpp"
namespace _Script_Engine {
struct LocalPlayer;
}
namespace _Script_UMG {
struct UserWidget;
}
namespace _Script_Engine {
struct BodySetup;
}
namespace _Script_Engine {
struct MaterialInterface;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct TextureRenderTarget2D;
}
namespace _Script_Engine {
struct MaterialInstanceDynamic;
}
namespace _Script_UMG {
#pragma pack(push, 1)
struct WidgetComponent : public _Script_Engine::MeshComponent {
    private: char pad_b60[0x120]; public:
    void* get_Space();
    void* get_TimingPolicy();
    void* get_WidgetClass();
    void* get_DrawSize();
    bool get_bManuallyRedraw();
    void set_bManuallyRedraw(bool value);
    bool get_bRedrawRequested();
    void set_bRedrawRequested(bool value);
    float& get_RedrawTime();
    void* get_CurrentDrawSize();
    bool get_bDrawAtDesiredSize();
    void set_bDrawAtDesiredSize(bool value);
    void* get_Pivot();
    bool get_bReceiveHardwareInput();
    void set_bReceiveHardwareInput(bool value);
    bool get_bWindowFocusable();
    void set_bWindowFocusable(bool value);
    bool get_bApplyGammaCorrection();
    void set_bApplyGammaCorrection(bool value);
    _Script_Engine::LocalPlayer*& get_OwnerPlayer();
    void* get_BackgroundColor();
    void* get_TintColorAndOpacity();
    float& get_OpacityFromTexture();
    void* get_BlendMode();
    bool get_bIsTwoSided();
    void set_bIsTwoSided(bool value);
    bool get_TickWhenOffscreen();
    void set_TickWhenOffscreen(bool value);
    _Script_UMG::UserWidget*& get_Widget();
    _Script_Engine::BodySetup*& get_BodySetup();
    _Script_Engine::MaterialInterface*& get_TranslucentMaterial();
    _Script_Engine::MaterialInterface*& get_TranslucentMaterial_OneSided();
    _Script_Engine::MaterialInterface*& get_OpaqueMaterial();
    _Script_Engine::MaterialInterface*& get_OpaqueMaterial_OneSided();
    _Script_Engine::MaterialInterface*& get_MaskedMaterial();
    _Script_Engine::MaterialInterface*& get_MaskedMaterial_OneSided();
    _Script_Engine::TextureRenderTarget2D*& get_RenderTarget();
    _Script_Engine::MaterialInstanceDynamic*& get_MaterialInstance();
    bool get_bAddedToScreen();
    void set_bAddedToScreen(bool value);
    bool get_bEditTimeUsable();
    void set_bEditTimeUsable(bool value);
    bool get_bShouldUsePooling();
    void set_bShouldUsePooling(bool value);
    bool get_bNeedToRequestWidget();
    void set_bNeedToRequestWidget(bool value);
    void* get_SharedLayerName();
    int32_t& get_LayerZOrder();
    void* get_GeometryMode();
    float& get_CylinderArcAngle();
    static _Script_CoreUObject::Class* static_class();
    void SetWidget(_Script_UMG::UserWidget* Widget);
    void SetTintColorAndOpacity(_Script_CoreUObject::LinearColor NewTintColorAndOpacity);
    void SetOwnerPlayer(_Script_Engine::LocalPlayer* LocalPlayer);
    void SetManuallyRedraw(bool bUseManualRedraw);
    void SetDrawSize(_Script_CoreUObject::Vector2D Size);
    void SetBackgroundColor(_Script_CoreUObject::LinearColor NewBackgroundColor);
    void RequestRedraw();
    bool RequestPooledResources();
    void ReleasePooledResources();
    _Script_UMG::UserWidget* GetUserWidgetObject();
    _Script_Engine::TextureRenderTarget2D* GetRenderTarget();
    _Script_Engine::LocalPlayer* GetOwnerPlayer();
    _Script_Engine::MaterialInstanceDynamic* GetMaterialInstance();
    _Script_CoreUObject::Vector2D GetDrawSize();
}; // Size: 0xc80
#pragma pack(pop)
}
