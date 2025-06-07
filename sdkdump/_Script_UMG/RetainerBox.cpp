#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\MaterialInstanceDynamic.hpp"
#include "..\_Script_Engine\MaterialInterface.hpp"
#include "ContentWidget.hpp"
#include "RetainerBox.hpp"
bool _Script_UMG::RetainerBox::get_RenderOnPhase() {
    return (*(uint8_t*)((uintptr_t)this + 0x119 + 0)) & 1 != 0;
}
bool _Script_UMG::RetainerBox::get_RenderOnInvalidation() {
    return (*(uint8_t*)((uintptr_t)this + 0x118 + 0)) & 1 != 0;
}
void _Script_UMG::RetainerBox::set_RenderOnPhase(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x119 + 0);
    *(uint8_t*)((uintptr_t)this + 0x119 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_UMG::RetainerBox::set_RenderOnInvalidation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x118 + 0);
    *(uint8_t*)((uintptr_t)this + 0x118 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_UMG::RetainerBox::get_Phase() {
    return *(int32_t*)((uintptr_t)this + 0x11c);
}
int32_t& _Script_UMG::RetainerBox::get_PhaseCount() {
    return *(int32_t*)((uintptr_t)this + 0x120);
}
_Script_Engine::MaterialInterface*& _Script_UMG::RetainerBox::get_EffectMaterial() {
    return *(_Script_Engine::MaterialInterface**)((uintptr_t)this + 0x128);
}
void* _Script_UMG::RetainerBox::get_TextureParameter() {
    return (void*)((uintptr_t)this + 0x130);
}
_Script_CoreUObject::Class* _Script_UMG::RetainerBox::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.RetainerBox");
    return result;
}
void _Script_UMG::RetainerBox::SetTextureParameter(void* TextureParameter) {
    return;
}
void _Script_UMG::RetainerBox::SetRenderingPhase(int32_t RenderPhase, int32_t TotalPhases) {
    return;
}
void _Script_UMG::RetainerBox::SetEffectMaterial(_Script_Engine::MaterialInterface* EffectMaterial) {
    return;
}
void _Script_UMG::RetainerBox::RequestRender() {
    return;
}
_Script_Engine::MaterialInstanceDynamic* _Script_UMG::RetainerBox::GetEffectMaterial() {
    return;
}
