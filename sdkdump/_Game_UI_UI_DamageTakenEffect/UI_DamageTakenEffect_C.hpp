#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_SlateCore\Geometry.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_UMG {
struct WidgetAnimation;
}
namespace _Script_UMG {
struct CanvasPanel;
}
namespace _Script_UMG {
struct Image;
}
namespace _Game_UI_UI_HUD_ROOT {
struct UI_HUD_ROOT_C;
}
namespace _Script_Engine {
struct MaterialInstanceDynamic;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_UI_UI_DamageTakenEffect {
#pragma pack(push, 1)
struct UI_DamageTakenEffect_C : public _Script_UMG::UserWidget {
    private: char pad_208[0x50]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_LowHealth();
    _Script_UMG::WidgetAnimation*& get_Hit();
    _Script_UMG::CanvasPanel*& get_CanvasPanel_0();
    _Script_UMG::Image*& get_ScreenEffectMat();
    float& get_DamageMultiplier();
    _Script_Engine::MaterialInstanceDynamic*& get_DynMat();
    int32_t& get_Loops();
    _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C*& get_HUDRoot();
    bool get_LowHealthPlaying();
    void set_LowHealthPlaying(bool value);
    bool get_IsLowHealth();
    void set_IsLowHealth(bool value);
    void* get_NewVar_0();
    bool get_IsInClashSequeunce();
    void set_IsInClashSequeunce(bool value);
    static _Script_CoreUObject::Class* static_class();
    void CheckIfLowHealthStill1(bool& In_Combat_and_Low_Health);
    void Tick0(_Script_SlateCore::Geometry MyGeometry, float InDeltaTime);
    void ShowDamage(float Blend);
    void LoopCheck();
    void Repeat();
    void UpdateEffect();
    void Construct0();
    void FakeDamageFeedback(float DamageMultiplier);
    void ExecuteUbergraph_UI_DamageTakenEffect(int32_t EntryPoint);
}; // Size: 0x258
#pragma pack(pop)
}
