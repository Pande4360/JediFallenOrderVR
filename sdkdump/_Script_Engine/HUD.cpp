#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Color.hpp"
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "Actor.hpp"
#include "Canvas.hpp"
#include "Font.hpp"
#include "HUD.hpp"
#include "MaterialInterface.hpp"
#include "Pawn.hpp"
#include "PlayerController.hpp"
#include "Texture.hpp"
void _Script_Engine::HUD::GetActorsInSelectionRectangle(void* ClassFilter, _Script_CoreUObject::Vector2D& FirstPoint, _Script_CoreUObject::Vector2D& SecondPoint, void*& OutActors, bool bIncludeNonCollidingComponents, bool bActorMustBeFullyEnclosed) {
    return;
}
int32_t& _Script_Engine::HUD::get_CurrentTargetIndex() {
    return *(int32_t*)((uintptr_t)this + 0x36c);
}
void _Script_Engine::HUD::DrawText(void* Text, _Script_CoreUObject::LinearColor TextColor, float ScreenX, float ScreenY, _Script_Engine::Font* Font, float Scale, bool bScalePosition) {
    return;
}
_Script_Engine::PlayerController*& _Script_Engine::HUD::get_PlayerOwner() {
    return *(_Script_Engine::PlayerController**)((uintptr_t)this + 0x360);
}
void _Script_Engine::HUD::set_bLostFocusPaused(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x368 + 0);
    *(uint8_t*)((uintptr_t)this + 0x368 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::HUD::get_bLostFocusPaused() {
    return (*(uint8_t*)((uintptr_t)this + 0x368 + 0)) & 1 != 0;
}
bool _Script_Engine::HUD::get_bShowHUD() {
    return (*(uint8_t*)((uintptr_t)this + 0x368 + 0)) & 2 != 0;
}
bool _Script_Engine::HUD::get_bShowDebugInfo() {
    return (*(uint8_t*)((uintptr_t)this + 0x368 + 0)) & 4 != 0;
}
_Script_Engine::PlayerController* _Script_Engine::HUD::GetOwningPlayerController() {
    return;
}
void _Script_Engine::HUD::set_bShowHUD(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x368 + 0);
    *(uint8_t*)((uintptr_t)this + 0x368 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void* _Script_Engine::HUD::get_ShowDebugTargetDesiredClass() {
    return (void*)((uintptr_t)this + 0x3d0);
}
void _Script_Engine::HUD::set_bShowDebugInfo(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x368 + 0);
    *(uint8_t*)((uintptr_t)this + 0x368 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void _Script_Engine::HUD::GetTextSize(void* Text, float& OutWidth, float& OutHeight, _Script_Engine::Font* Font, float Scale) {
    return;
}
bool _Script_Engine::HUD::get_bShowHitBoxDebugInfo() {
    return (*(uint8_t*)((uintptr_t)this + 0x370 + 0)) & 1 != 0;
}
void _Script_Engine::HUD::set_bShowHitBoxDebugInfo(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x370 + 0);
    *(uint8_t*)((uintptr_t)this + 0x370 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::HUD::get_bShowOverlays() {
    return (*(uint8_t*)((uintptr_t)this + 0x370 + 0)) & 2 != 0;
}
void _Script_Engine::HUD::set_bShowOverlays(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x370 + 0);
    *(uint8_t*)((uintptr_t)this + 0x370 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::HUD::get_bEnableDebugTextShadow() {
    return (*(uint8_t*)((uintptr_t)this + 0x370 + 0)) & 4 != 0;
}
void _Script_Engine::HUD::set_bEnableDebugTextShadow(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x370 + 0);
    *(uint8_t*)((uintptr_t)this + 0x370 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void* _Script_Engine::HUD::get_PostRenderedActors() {
    return (void*)((uintptr_t)this + 0x378);
}
void* _Script_Engine::HUD::get_DebugDisplay() {
    return (void*)((uintptr_t)this + 0x390);
}
void _Script_Engine::HUD::ReceiveHitBoxBeginCursorOver(void* BoxName) {
    return;
}
void* _Script_Engine::HUD::get_ToggledDebugCategories() {
    return (void*)((uintptr_t)this + 0x3a0);
}
void _Script_Engine::HUD::ReceiveDrawHUD(int32_t SizeX, int32_t SizeY) {
    return;
}
_Script_Engine::Canvas*& _Script_Engine::HUD::get_Canvas() {
    return *(_Script_Engine::Canvas**)((uintptr_t)this + 0x3b0);
}
void _Script_Engine::HUD::AddHitBox(_Script_CoreUObject::Vector2D Position, _Script_CoreUObject::Vector2D Size, void* InName, bool bConsumesInput, int32_t Priority) {
    return;
}
_Script_Engine::Canvas*& _Script_Engine::HUD::get_DebugCanvas() {
    return *(_Script_Engine::Canvas**)((uintptr_t)this + 0x3b8);
}
void* _Script_Engine::HUD::get_DebugTextList() {
    return (void*)((uintptr_t)this + 0x3c0);
}
_Script_Engine::Actor*& _Script_Engine::HUD::get_ShowDebugTargetActor() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x3d8);
}
void _Script_Engine::HUD::AddDebugText(void* DebugText, _Script_Engine::Actor* SrcActor, float Duration, _Script_CoreUObject::Vector Offset, _Script_CoreUObject::Vector DesiredOffset, _Script_CoreUObject::Color TextColor, bool bSkipOverwriteCheck, bool bAbsoluteLocation, bool bKeepAttachedToActor, _Script_Engine::Font* InFont, float FontScale, bool bDrawShadow) {
    return;
}
_Script_CoreUObject::Class* _Script_Engine::HUD::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.HUD");
    return result;
}
void _Script_Engine::HUD::ShowHUD() {
    return;
}
void _Script_Engine::HUD::Deproject(float ScreenX, float ScreenY, _Script_CoreUObject::Vector& WorldPosition, _Script_CoreUObject::Vector& WorldDirection) {
    return;
}
void _Script_Engine::HUD::ShowDebugToggleSubCategory(void* Category) {
    return;
}
void _Script_Engine::HUD::ShowDebugForReticleTargetToggle(void* DesiredClass) {
    return;
}
void _Script_Engine::HUD::ShowDebug(void* DebugType) {
    return;
}
void _Script_Engine::HUD::RemoveDebugText(_Script_Engine::Actor* SrcActor, bool bLeaveDurationText) {
    return;
}
void _Script_Engine::HUD::RemoveAllDebugStrings() {
    return;
}
void _Script_Engine::HUD::ReceiveHitBoxRelease(void* BoxName) {
    return;
}
void _Script_Engine::HUD::ReceiveHitBoxEndCursorOver(void* BoxName) {
    return;
}
void _Script_Engine::HUD::ReceiveHitBoxClick(void* BoxName) {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::HUD::Project(_Script_CoreUObject::Vector Location) {
    return;
}
void _Script_Engine::HUD::PreviousDebugTarget() {
    return;
}
void _Script_Engine::HUD::NextDebugTarget() {
    return;
}
_Script_Engine::Pawn* _Script_Engine::HUD::GetOwningPawn() {
    return;
}
void _Script_Engine::HUD::DrawTextureSimple(_Script_Engine::Texture* Texture, float ScreenX, float ScreenY, float Scale, bool bScalePosition) {
    return;
}
void _Script_Engine::HUD::DrawTexture(_Script_Engine::Texture* Texture, float ScreenX, float ScreenY, float ScreenW, float ScreenH, float TextureU, float TextureV, float TextureUWidth, float TextureVHeight, _Script_CoreUObject::LinearColor TintColor, void* BlendMode, float Scale, bool bScalePosition, float Rotation, _Script_CoreUObject::Vector2D RotPivot) {
    return;
}
void _Script_Engine::HUD::DrawRect(_Script_CoreUObject::LinearColor RectColor, float ScreenX, float ScreenY, float ScreenW, float ScreenH) {
    return;
}
void _Script_Engine::HUD::DrawMaterialTriangle(_Script_Engine::MaterialInterface* Material, _Script_CoreUObject::Vector2D V0_Pos, _Script_CoreUObject::Vector2D V1_Pos, _Script_CoreUObject::Vector2D V2_Pos, _Script_CoreUObject::Vector2D V0_UV, _Script_CoreUObject::Vector2D V1_UV, _Script_CoreUObject::Vector2D V2_UV, _Script_CoreUObject::LinearColor V0_Color, _Script_CoreUObject::LinearColor V1_Color, _Script_CoreUObject::LinearColor V2_Color) {
    return;
}
void _Script_Engine::HUD::DrawMaterialSimple(_Script_Engine::MaterialInterface* Material, float ScreenX, float ScreenY, float ScreenW, float ScreenH, float Scale, bool bScalePosition) {
    return;
}
void _Script_Engine::HUD::DrawMaterial(_Script_Engine::MaterialInterface* Material, float ScreenX, float ScreenY, float ScreenW, float ScreenH, float MaterialU, float MaterialV, float MaterialUWidth, float MaterialVHeight, float Scale, bool bScalePosition, float Rotation, _Script_CoreUObject::Vector2D RotPivot) {
    return;
}
void _Script_Engine::HUD::DrawLine(float StartScreenX, float StartScreenY, float EndScreenX, float EndScreenY, _Script_CoreUObject::LinearColor LineColor, float LineThickness) {
    return;
}
