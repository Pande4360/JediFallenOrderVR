#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "Variant.hpp"
void* _Script_VariantManagerContent::Variant::get_DisplayText() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_VariantManagerContent::Variant::GetDisplayText() {
    return;
}
void* _Script_VariantManagerContent::Variant::get_ObjectBindings() {
    return (void*)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Script_VariantManagerContent::Variant::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/VariantManagerContent.Variant");
    return result;
}
void _Script_VariantManagerContent::Variant::SwitchOn() {
    return;
}
void _Script_VariantManagerContent::Variant::SetDisplayText(void*& NewDisplayText) {
    return;
}
int32_t _Script_VariantManagerContent::Variant::GetNumActors() {
    return;
}
_Script_Engine::Actor* _Script_VariantManagerContent::Variant::GetActor(int32_t ActorIndex) {
    return;
}
