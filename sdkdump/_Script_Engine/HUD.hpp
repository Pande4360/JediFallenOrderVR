#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Color.hpp"
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "Actor.hpp"
namespace _Script_Engine {
struct PlayerController;
}
namespace _Script_Engine {
struct MaterialInterface;
}
namespace _Script_Engine {
struct Canvas;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct Font;
}
namespace _Script_Engine {
struct Pawn;
}
namespace _Script_Engine {
struct Texture;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct HUD : public Actor {
    private: char pad_360[0xf0]; public:
    _Script_Engine::PlayerController*& get_PlayerOwner();
    bool get_bLostFocusPaused();
    void set_bLostFocusPaused(bool value);
    bool get_bShowHUD();
    void set_bShowHUD(bool value);
    bool get_bShowDebugInfo();
    void set_bShowDebugInfo(bool value);
    int32_t& get_CurrentTargetIndex();
    bool get_bShowHitBoxDebugInfo();
    void set_bShowHitBoxDebugInfo(bool value);
    bool get_bShowOverlays();
    void set_bShowOverlays(bool value);
    bool get_bEnableDebugTextShadow();
    void set_bEnableDebugTextShadow(bool value);
    void* get_PostRenderedActors();
    void* get_DebugDisplay();
    void* get_ToggledDebugCategories();
    _Script_Engine::Canvas*& get_Canvas();
    _Script_Engine::Canvas*& get_DebugCanvas();
    void* get_DebugTextList();
    void* get_ShowDebugTargetDesiredClass();
    _Script_Engine::Actor*& get_ShowDebugTargetActor();
    static _Script_CoreUObject::Class* static_class();
    void ShowHUD();
    void ShowDebugToggleSubCategory(void* Category);
    void ShowDebugForReticleTargetToggle(void* DesiredClass);
    void ShowDebug(void* DebugType);
    void RemoveDebugText(_Script_Engine::Actor* SrcActor, bool bLeaveDurationText);
    void RemoveAllDebugStrings();
    void ReceiveHitBoxRelease(void* BoxName);
    void ReceiveHitBoxEndCursorOver(void* BoxName);
    void ReceiveHitBoxClick(void* BoxName);
    void ReceiveHitBoxBeginCursorOver(void* BoxName);
    void ReceiveDrawHUD(int32_t SizeX, int32_t SizeY);
    _Script_CoreUObject::Vector Project(_Script_CoreUObject::Vector Location);
    void PreviousDebugTarget();
    void NextDebugTarget();
    void GetTextSize(void* Text, float& OutWidth, float& OutHeight, _Script_Engine::Font* Font, float Scale);
    _Script_Engine::PlayerController* GetOwningPlayerController();
    _Script_Engine::Pawn* GetOwningPawn();
    void GetActorsInSelectionRectangle(void* ClassFilter, _Script_CoreUObject::Vector2D& FirstPoint, _Script_CoreUObject::Vector2D& SecondPoint, void*& OutActors, bool bIncludeNonCollidingComponents, bool bActorMustBeFullyEnclosed);
    void DrawTextureSimple(_Script_Engine::Texture* Texture, float ScreenX, float ScreenY, float Scale, bool bScalePosition);
    void DrawTexture(_Script_Engine::Texture* Texture, float ScreenX, float ScreenY, float ScreenW, float ScreenH, float TextureU, float TextureV, float TextureUWidth, float TextureVHeight, _Script_CoreUObject::LinearColor TintColor, void* BlendMode, float Scale, bool bScalePosition, float Rotation, _Script_CoreUObject::Vector2D RotPivot);
    void DrawText(void* Text, _Script_CoreUObject::LinearColor TextColor, float ScreenX, float ScreenY, _Script_Engine::Font* Font, float Scale, bool bScalePosition);
    void DrawRect(_Script_CoreUObject::LinearColor RectColor, float ScreenX, float ScreenY, float ScreenW, float ScreenH);
    void DrawMaterialTriangle(_Script_Engine::MaterialInterface* Material, _Script_CoreUObject::Vector2D V0_Pos, _Script_CoreUObject::Vector2D V1_Pos, _Script_CoreUObject::Vector2D V2_Pos, _Script_CoreUObject::Vector2D V0_UV, _Script_CoreUObject::Vector2D V1_UV, _Script_CoreUObject::Vector2D V2_UV, _Script_CoreUObject::LinearColor V0_Color, _Script_CoreUObject::LinearColor V1_Color, _Script_CoreUObject::LinearColor V2_Color);
    void DrawMaterialSimple(_Script_Engine::MaterialInterface* Material, float ScreenX, float ScreenY, float ScreenW, float ScreenH, float Scale, bool bScalePosition);
    void DrawMaterial(_Script_Engine::MaterialInterface* Material, float ScreenX, float ScreenY, float ScreenW, float ScreenH, float MaterialU, float MaterialV, float MaterialUWidth, float MaterialVHeight, float Scale, bool bScalePosition, float Rotation, _Script_CoreUObject::Vector2D RotPivot);
    void DrawLine(float StartScreenX, float StartScreenY, float EndScreenX, float EndScreenY, _Script_CoreUObject::LinearColor LineColor, float LineThickness);
    void Deproject(float ScreenX, float ScreenY, _Script_CoreUObject::Vector& WorldPosition, _Script_CoreUObject::Vector& WorldDirection);
    void AddHitBox(_Script_CoreUObject::Vector2D Position, _Script_CoreUObject::Vector2D Size, void* InName, bool bConsumesInput, int32_t Priority);
    void AddDebugText(void* DebugText, _Script_Engine::Actor* SrcActor, float Duration, _Script_CoreUObject::Vector Offset, _Script_CoreUObject::Vector DesiredOffset, _Script_CoreUObject::Color TextColor, bool bSkipOverwriteCheck, bool bAbsoluteLocation, bool bKeepAttachedToActor, _Script_Engine::Font* InFont, float FontScale, bool bDrawShadow);
}; // Size: 0x450
#pragma pack(pop)
}
