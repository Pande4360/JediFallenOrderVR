#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\SlateBrushAsset.hpp"
#include "CircularThrobber.hpp"
#include "Widget.hpp"
int32_t& _Script_UMG::CircularThrobber::get_NumberOfPieces() {
    return *(int32_t*)((uintptr_t)this + 0x100);
}
void* _Script_UMG::CircularThrobber::get_Image() {
    return (void*)((uintptr_t)this + 0x118);
}
float& _Script_UMG::CircularThrobber::get_Period() {
    return *(float*)((uintptr_t)this + 0x104);
}
float& _Script_UMG::CircularThrobber::get_Radius() {
    return *(float*)((uintptr_t)this + 0x108);
}
_Script_Engine::SlateBrushAsset*& _Script_UMG::CircularThrobber::get_PieceImage() {
    return *(_Script_Engine::SlateBrushAsset**)((uintptr_t)this + 0x110);
}
_Script_CoreUObject::Class* _Script_UMG::CircularThrobber::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.CircularThrobber");
    return result;
}
bool _Script_UMG::CircularThrobber::get_bEnableRadius() {
    return (*(uint8_t*)((uintptr_t)this + 0x1a0 + 0)) & 1 != 0;
}
void _Script_UMG::CircularThrobber::set_bEnableRadius(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1a0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1a0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_UMG::CircularThrobber::SetRadius(float InRadius) {
    return;
}
void _Script_UMG::CircularThrobber::SetPeriod(float InPeriod) {
    return;
}
void _Script_UMG::CircularThrobber::SetNumberOfPieces(int32_t InNumberOfPieces) {
    return;
}
